#include<stdio.h>
#include<unistd.h>

int main()
{
	printf("Main Start\n");
	int f = fork();
	if(f == 0) {
		printf("Child : %d\n", getpid());
	} else {
		printf("Parent : %d\n", getpid());
	}
	printf("Main End\n");
	return 0;	
}

