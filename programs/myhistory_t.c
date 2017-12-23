#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>

const char times[3][200] = {"1508845017880", "1508844975019", "1508844975020"};

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
		srand( (unsigned)time( NULL ) );
		const int random = rand() % 3;
		long long f1=i;
		const char f2[]="#";
                const char f3[]="#";
                const char f4[]="#";
                const char f5[]="#";
                const int f6=1;
		long long f7=i;
		long long f8=i/20+1;
		const char f9[]="#";
                const char *f10=times[random];
		printf("%ld|%s|%s|%s|%s|%d|%ld|%ld|%s|%s\n", f1, f2, f3, f4, f5, f6, f7, f8, f9, f10);
	}
	return 0;
}
