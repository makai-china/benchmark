#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char *argv[])
{
	int segnum = 8;
	long long tuple_num = 1000000000 / 20;
	int segid = atoi(argv[1]);
	int tuple_per_seg = tuple_num / segnum;
	long long start = tuple_per_seg * segid + 1;
	long long end = start + tuple_per_seg;
	long long i;
	for (i = start; i < end; i++)
	{
		long long f1=i;
		const char f2[]="#";
                const char f3[]="#";
                const char f4[]="#";
                const char f5[]="#";
                const char f6[]="#";
		long long f7=i;
		long long f8=i/20+1;
		const char f9[]="#";
                const char f10[]="#";
		printf("%ld|%s|%s|%s|%s|%s|%ld|%ld|%s|%s\n", f1, f2, f3, f4, f5, f6, f7, f8, f9, f10);
	}
	return 0;
}
