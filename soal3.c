#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<string.h>

int lohan=1, hp_lohan=100;
int kepiting=1, hp_kepiting=100;
pthread_t tid[2];

void* game(void *arg){}

int main()
{
	int i,x;
	for(i=0;i<3;i++)
	{
		x=pthread_create(&(tid[i],NULL,&game,NULL);
	}
	pthread_join(tid[0],NULL);
	pthread_join(tid[1],NULL);
	pthread_join(tid[2],NULL);
	return 0;
}
