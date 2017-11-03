#!/bin/bash

source ./configure.sh

current_dir=`pwd`
timestamp=`date '+%Y%m%d-%_H%M%S'`

query_dir=$current_dir/query
result_dir=$current_dir/result
mkdir -p $result_dir

tmpfile=$result_dir/tmp.txt
resultfile=$result_dir/$timestamp".result"
reportfile=$result_dir/$timestamp".report"

clean()
{
    rm -f  $tmpfile
}

create_db()
{
    echo "create database $database......"
    dropdb $database || true
    createdb $database
}

create_table()
{
    echo "create tables......";
    psql -d $database -f $query_dir/create.sql -o $tmpfile
}

create_extern()
{
    echo "create extern tables......";
    psql -d $database -f $query_dir/create_extern.sql -o $tmpfile
}

load_table()
{
    echo "load data to tables......";
    start_load=`date +%s.%N`
    psql -d $database -f $query_dir/load_table.sql
    end_load=`date +%s.%N`
    elapsed_load=$(echo "$end_load - $start_load" | bc)
    printf "load tables elapsed time: $elapsed_load\n\n" >> $reportfile
}

drop_db()
{
    echo "drop database $database......"
    dropdb $database
}

exec_sql()
{
    psql -d $database -f $query_dir/$1 -o $tmpfile
    cat $tmpfile >> $resultfile
}

exec_sqls()
{
    for sql in ${query_list[@]}
    do
        echo "exec $sql......"
	    echo "$sql" >> $resultfile
        printf "$sql\t" >> $reportfile
        #cold
        start_cold=`date +%s.%N`
        exec_sql $sql
        end_cold=`date +%s.%N`
        elapsed_cold=$(echo "$end_cold - $start_cold" | bc)
        echo "elapsed time: $elapsed_cold"
	    if [ "$testhot" == "true" ]; then
		    printf "$elapsed_cold\t" >> $reportfile
	    else
		    printf "$elapsed_cold\n" >> $reportfile
        fi

	    #hot
	    if [ "$testhot" == "true" ]; then
        	start_hot=`date +%s.%N`
        	exec_sql $sql
        	end_hot=`date +%s.%N`
        	elapsed_hot=$(echo "$end_hot - $start_hot" | bc)
		    echo "elapsed time: $elapsed_hot"
        	printf "$elapsed_hot\n" >> $reportfile
	    fi
    done
}

main()
{
    if [ "$dataloaded" == "false" ]; then
    	create_db
    	create_table
    	create_extern
    	load_table
    fi

    exec_sqls

    if [ "$dataloaded" == "false" ]; then
	    drop_db 
    fi

    clean
}

main
