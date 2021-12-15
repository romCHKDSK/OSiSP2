#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <time.h>

void DO(char name[10]){
    int N,Pid,Tm,Ts;
	time_t T = time(NULL);
	struct tm tm = *localtime(&T);
	for(int i =1;i<=3;i++) {
        do {
			FILE* f=fopen("text.txt","r");
			fscanf(f,"%d %d %d %d",&N,&Pid,&Tm,&Ts);
			fclose(f);
		} while(N!=i);
    printf("%s: %d %d %d %d %d %d\n",name, N,getpid(),Tm,Ts,tm.tm_min,tm.tm_sec );
    }
}
