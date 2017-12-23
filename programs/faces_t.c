#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>
#include <string.h>

long long ts[3] = {1508946653000, 1508946652000, 1508943253000};
const char face_reid[3][37] = {"2325ef3d-6dc5-4d91-9922-0bb88f0676e1", "ff1b79c0-b963-11e7-a2b3-5254008d867", "cd42a7fb-74a8-4b04-a894-0cac2365fc0"};

const char feature[] = "qyvpPeRY+7wFpga+TJsFPHSQDz15uVW9yDstPJSRqLy7aV88J9dLPZYxezoBs6G992V3u3pYQDxBq1+8rhfyPb8GGj0ayg49oCUCuy7M8TwWPq87NCm5POT8DT2Ethw90JWJu18Ntr2LBVK9zPQ3vWQ8aLzuFwm88MEePVlRIj1kZK+8gdcgPUvuibsprve9SsaAvXSlgb1JYwc9SGQJvaxIcb3EjG+9argZvuj8Pz2hRv48NKjRPcHEdLuNagk8iIgxPSuW9z1mVxc9RLKKPbauKj1ykEY9L+zKvV1cAz3+s6y9pgDavSaQFj1IXt+8oLQ5Pa9B/b20bPC8Pyw4vVkdSzxqtWU9AyhMPtYbyb1YNjs9CZlCPTU8sz3EwZw7tjE8Pm7c6jxpbhy9fQ3lvVYwHL3E7Ke7qjCRvVhjCD20PDE9Gye2PQDF9z2j97A73rD4PB2jF73/Nm+8arCyPJI6sz062I29DbLMvOcSjT1osNG8FjQqvZm1kzzSKRm9AanJPaA0l716TxY9VX55vcvdobzBrAw9AmBhPZ6Tgb3BVtO8INomPdY2hLvM3cS8ltNPvFnn5r3B4W89IOMUu9zg/rzGbrs9klwiPELLEz0AG7m80DoJvamB4TyJ2AK9Cmz7vC/zkbx5fLA9Fw6KvTSd0T2d41c9MyK9vYStWj0DODk9FOQaPOmeM72q6IY8I8xPvU81B71jePa96EfJvZdPdD2VxgS9NHRivadJC71CCJg9mZ3lu0EJ5Ttk9Kg9amWSPRxPDz2GyBO8oELXO2ymZT2Ly6S9zMmTPB8KEr3HhhY9nzwlvXbPMj3Bu6i9dY+5vdf6wL21WRQ80Sg/PMFpSr1L2bW80fVbvZWns703Qrc7HDTnPW1CRb0Yp889v2QlvQ4wBb12yEc8HsfrvKvIiTxStHK83bSYvKGUVb3qiBS9xTF9PACYTzzs09o8/pMzPREivD1xoDm9ejQxvOnQNr0LytS8lnI1vVluFT4dzgw9tNfpO5pwqTzeDAC+otqxO0NQlzxuAJ28uZMbvH+B5L2bY6M9OlFmPf2cCrzZdPU8QLmtPd4YuL3fSIS94RZZu+LtLzzaPoO8h29sPX16eb3VzFW7dSI0vaYHGz1HR1Y9L9xWPYl+pD0djI292pyTPc8EPD0/aLK9Dyp2vHNLrb2+iDA9KlqBvbx8DjxSGmE9qFnFvST+jr1b+mu9OBlePfP18z3ctPo9pJ45PgxJ273kCMq9y+l8vZzZKj09Wgg9VBlcO2ex7bw/qv89N6y5PDDHSj1zR4g9U7WJPDwtNj7saIU9VSp5vUBUhz0zgoK8Ur5WPULjmjzKEpe9+59YPIAKdr3pmku9Fs2HPA==";

float confidence[3] = {0.9859, 0.99862, 0.99297};

const char uri[3][257] = {"http://img.nemoface.com:8501/api/file/2,4d378007b4c34", "http://img.nemoface.com:8501/api/file/3,4d3781f11b5179", "http://img.nemoface.com:8501/api/file/6,4d37839c7988fe"};

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
		srand( (unsigned)time( NULL ) );
		const int random = rand() % 3;
		const char *f1 = get_time(date);
		long long f2 = ts[random];
		long long f3 = (i/10000 + 1);
		long long f4 = i;
		const char *f5 = face_reid[random];
		const char *f6 = feature;
		float f7 = confidence[random];
		int f8 = 1;
		float f9 = confidence[random];
		int f10 = 25;
		int f11 = 1;
		int f12 = 0;
		int f13 = 0;
		int f14 = 2;
		float f15 = confidence[random];
		const char *f16 = uri[random];
		const char f17[] = "";
		const char *f18 = uri[random];
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
		int f32 = 1;
		float f33 = confidence[random];
		printf("%s|%ld|%ld|%ld|%s|%s|%f|%d|%f|%d|%d|%d|%d|%d|%f|%s|%s|%s|%d|%d|%d|%d|%d|%d|%d|%d|%ld|%s|%ld|%s|%ld|%d|%f\n", f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12, f13, f14, f15, f16, f17, f18, f19, f20, f21, f22, f23, f24, f25, f26, f27, f28, f29, f30, f31, f32, f33);
	}
	return 0;
}
