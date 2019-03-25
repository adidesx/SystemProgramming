#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{
	printf("Current Process ID : %d\n", getpid());
	printf("Parent Process ID : %d\n", getppid());
	printf("Group  Process ID : %d\n", getpgrp());


	return 0;
}
