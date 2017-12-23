#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>
#include <string.h>

char* get_time(char* out_time) 
{ 
 	char date[64] = { '\0' };
	time_t now = time(NULL);
 	strftime(date, sizeof(date), "%F %T+08", gmtime(&now));
 	strncpy(out_time, date, sizeof(date));
 	return out_time;
}

int main(int argc, char *argv[])
{
	int segnum = 8;
	long long tuple_num = 1000000000;
	int segid = atoi(argv[1]);
	int tuple_per_seg = tuple_num / segnum;
	long long start = tuple_per_seg * segid + 1;
	long long end = start + tuple_per_seg;
	long long i;
	char date[64];
	for (i = start; i < end; i++)
	{
		const char *f1 = get_time(date);
		int f2 = 0;
		long long f3 = (i/10000 + 1);
		long long f4 = i;
		const char f5[] ="";
		const char f6[] ="";
		int f7 = 0;
		int f8 = 0;
		int f9 = 0;
		int f10 = 0;
		int f11 = 0;
		int f12 = 0;
		int f13 = 0;
		int f14 = 0;
		int f15 = 0;
		const char f16[] = "";
		const char f17[] = "";
		const char f18[] = "face.jpg";
		int f19 = 0;
		int f20 = 0;
		int f21 = 0;
		int f22 = 0;
		int f23 = 0;
		int f24 = 0;
		int f25 = 0;
		int f26 = 1;
		long long f27 = i/500 + 1;
		const char f28[] = "#";
		long long f29 = i/20 + 1;
		const char f30[] = "#";
		long long f31 = i/20 + 1;
		int f32 = 0;
		const char f33[] = "#";
		printf("%s|%d|%ld|%ld|%s|%s|%d|%d|%d|%d|%d|%d|%d|%d|%d|%s|%s|%s|%d|%d|%d|%d|%d|%d|%d|%d|%ld|%s|%ld|%s|%ld|%d|%s\n", f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12, f13, f14, f15, f16, f17, f18, f19, f20, f21, f22, f23, f24, f25, f26, f27, f28, f29, f30, f31, f32, f33);
	}
	return 0;
}
