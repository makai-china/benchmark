#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char *argv[])
{
	int segnum = 8;
	long long tuple_num = 1000000000 / 500;
	int segid = atoi(argv[1]);
	int tuple_per_seg = tuple_num / segnum;
	long long start = tuple_per_seg * segid + 1;
	long long end = start + tuple_per_seg;
	long long i;
	for (i = start; i < end; i++)
	{
		long long f1=i;
                const char f2[]="t";
                const char f3[]="#";
                const char f4[]="#";
                long long f5=i;
                const char f6[]="#";
                const char f7[]="#";

		printf("%ld|%s|%s|%s|%ld|%s|%s\n", f1, f2, f3, f4, f5, f6, f7);
	}
	return 0;
}
