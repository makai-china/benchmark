#!/bin/bash

main()
{
	segnum=8
	tuples=$((1000000000/20))
	seg_tuples=$((tuples/segnum))
	
	segid=$1
	start=$((seg_tuples*segid+1))
	end=$((start+seg_tuples))
	
	for((i=$start; i<$end; i++))
	do
		f1=$i
		f2="#"
		f3="#"
		f4="#"
		f5="#"
		f6="#"
		f7=$i
		f8=$((i/20+1))
		f9="#"
		f10="#"
		echo "$f1|$f2|$f3|$f4|$f5|$f6|$f7|$f8|$f9|$f10"
	done
}

main $@
