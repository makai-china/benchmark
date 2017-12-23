#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>

const char feature[] = "tyj7PLBOXjyOi5W9MdJ/PfUiQj1TThC9dHwRPKykor3pOhc8nRwwPb0qZzz8bw2+zkKpPZuGfjwnA3K9yXAEPrw5uTxKb3Q7y4mlPQmlvb2nahy9kDtGPRt3Ez2DgXY9ufKsPMxqgbyrr3q8tUOdvTC/Pr3ylGE9M87GO5/qLz1w87i9Mom3vVLpGj0jxeG9oBUMvQz917zQVrO9+e6EvY6gDL11yZW9wjTbvVLbSrzdJYY9JwKnPACvhD0EoQe9125kPWsbwT3S8wk9URVZvMpYYT2qwDY+W/cAvrt2QD0G3Ee9kYqpvSAc7rx3cmE9N9APOsnZ7ryJxKW93iCnvCKClL049xC8a3+iPb7UVL1M/iU8i5b+O4XkTD3LjLc71AYLPuhgoz13A/E93IypvXbJijznwkA9E9SluwUEijwkhcK7bo7APF/b/jzaJ1y7SX0JPUwtTb2Zusq8IMLxvNf+87kmsoE8wNLDvaKKxTx8RDq69BU7vTYagj3Exbu9ZHSCPVQWLL06j5o8+s45vcd5Tzy3c888Yyo1PBzIkTy9sKS9VpLKPQa5Q714E1M97tsxPU6ZRr6h6eE9I4ahvBeQx71dlZ09MPYeOnYZubwiFFS98k+/PENIKL3lyyu9nyVvvdr9szzitJM9WerpvagS/rxjCzs9LWWkvd6y1jxQ/z69t2loPUXOg72zIEW9FZ+6vE/BvjwyzAM9ZfoQvPOqlr0kLYI9HNArPQsZiLy+WoG8Ln84O8VAIT6zU5y9rhtJvZwEzj1Y6Ke93+asPX1HIj2K0yM9+xpXPSpxqz3kjrM8ztI2vSrZib18hIk9vjPivdQdgD0drQS9hw4hPWgEUL1TSzs9D6lUvR3pory+Rxe98WXzPOEG0720kYi9bV+YPFDqFT3Ql0Y8zaOrvcegFr2L4Jy8krKEvcOc7T1P1VS9XWCJPUHDhb1m4r49TN88vYvACD4vGug9BwK4u2kB8jyjeDc8XsBLPZgTnL2FWYc7XymhvMS8L76iMDS9iJ/vvJTJSj33QSy8Z0ybOkxRoD2k/ZK911fCOwJz7D0k/Ja9tfaCu7MpHz11eH29VU3yPBtK4T0S/Py8u+bjvDxiID0FnRA9CPchPYViLL3LLqE8bWRsve6lCzrlVAU8Zb0LPvXyOjyRzZi9jaLVvMhw9j0qcYS8dGBrvcM1OT2ZTui9icQmvRXLLjxkTak9pL5YvQAI+Dz5lU89mvDrvdsFhj1mbLK8PmFtvJF1IL2WcsK9t2m+vdTcprtXv0Y97wvKPddHzT0ARBI879WDPWC/abyyB/a7GqJKvSUrB74amyC9dDfXuYPGfTtDkZA79KDlPBHYYDze3nw9dT4fvA==";

long long addtime[3] = {1507727902000, 1507727903000, 1507727904000};

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
		srand( (unsigned)time( NULL ) );
		const int random = rand() % 3;
		long long f1=i;
                const char f2[]="t";
                const char *f3=feature;
                const char f4[]="#";
                long long f5=i;
                const long long f6=addtime[random];
                const int f7=0;

		printf("%ld|%s|%s|%s|%ld|%ld|%d\n", f1, f2, f3, f4, f5, f6, f7);
	}
	return 0;
}
