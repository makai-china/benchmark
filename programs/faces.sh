#!/bin/bash

main()
{
	segnum=8
	tuples=10000000
	seg_tuples=$((tuples/segnum))
	
	segid=$1
	start=$((seg_tuples*segid))
	end=$((start+seg_tuples))
	
	for((i=$start; i<$end; i++))
	do
		f1=`/usr/bin/date '+%Y-%m-%d %H:%M:%S.%N+08'`
		f2=0
		f3=$((i/10000+1))
		f4=$i
		f5=""
		f6=""
		f7=0
		f8=0
		f9=0
		f10=0
		f11=0
		f12=0
		f13=0
		f14=0
		f15=0
		f16=""
		f17=""
		f18="face.jpg"
		f19=0
		f20=0
		f21=0
		f22=0
		f23=0
		f24=0
		f25=0
		f26=1
		f27=$((i/500+1))
		f28="#"
		f29=$((i/20+1))
		f30="#"
		f31=$((i/20+1))
		f32=0
		f33="#"
		echo "$f1|$f2|$f3|$f4|$f5|$f6|$f7|$f8|$f9|$f10|$f11|$f12|$f13|$f14|$f15|$f16|$f17|$f18|$f19|$f20|$f21|$f22|$f23|$f24|$f25|$f26|$f27|$f28|$f29|$f30|$f31|$f32|$f33"
	done
}

main $@
