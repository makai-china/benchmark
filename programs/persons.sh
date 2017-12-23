#!/bin/bash

main()
{
	segnum=8
	tuples=$((1000000000/500))
	seg_tuples=$((tuples/segnum))
	
	segid=$1
	start=$((seg_tuples*segid+1))
	end=$((start+seg_tuples))
	
	for((i=$start; i<$end; i++))
	do
		f1=$i
		f2="t"
		f3="#"
		f4="#"
		f5=$i
		f6="#"
		f7="#"
		echo "$f1|$f2|$f3|$f4|$f5|$f6|$f7"
	done
}

main $@
