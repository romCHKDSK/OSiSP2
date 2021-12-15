#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char **argv) {
char command[50];
printf("Command: ");
do {
    scanf("%s", command);
    pid_t pid=fork();
	if(pid==0) {
			if(command[0]!='\n'){
				execvp(command,argv);
            }
			return 0;
        }
	} while(strcmp(command,"exit"));
	return 0;
}
