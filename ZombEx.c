#include <stdio.h>
#include <unistd.h>

int main(){

	pid_t pid = fork();
	if(pid == 0) {

		printf("Terminating child process: \n");
		exit(0);

	} else { 
		
		printf("Running parent process: \n");
		while(1){
			;
		}
	}
	return 0;

}
