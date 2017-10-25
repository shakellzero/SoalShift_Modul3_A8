#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<string.h>

int lohan=1, hp_lohan=100;
int kepiting=1, hp_kepiting=100;
pthread_t tid[2];

void* game(void *);

int main()
{
	int i,x;
	for(i=0;i<3;i++)
	{
		x=pthread_create(&(tid[i],NULL,&kolam,NULL);
	}
	pthread_join(tid[0],NULL);
	pthread_join(tid[1],NULL);
	pthread_join(tid[2],NULL);
	return 0;
}

void * kolam(void *arg)
{
	int menu;
	pthread_t id=pthread_self();
	if(pthread_equal(id,tid[0]))
	{
		while(hp_lohan>0 && hp_lohan<=100)
		{
			printf("HP lohan = %d\n", hp_lohan);
			fflush(stdout);
			hp_holan=hp_lohan-15;
			sleep(1);
		}
		printf("Lohan mati!\n");
		lohan=0;
		exit(0);
	}

	else if(pthread_equal(id,tid[1]))
	{
		while(hp_kepiting>0 && hp_kepiting<=100)
		{
			printf("HP kepiting = %d\n",hp_kepiting);
			fflush(stdout);
			hp_kepiting=hp_kepiting-10;
			sleep(2);
		}
		printf("Kepiting mati!\n");
		kepiting=0;
		exit(0);

    	}

	if(pthread_equal(id,tid[2]))
    	{

 		while((hp_lohan>0 && hp_lohan<=100 || hp_kepiting>0 && hp_kepiting<=100)
		{
			printf("1.Beri makan lohan\n");
			printf("2.Beri makan kepiting\n");
			scanf("%d",&pilihan);
			if(pilihan==1) hp_lohan=hp_lohan+10;
			else if(pilihan==2) hp_kepiting=hp_kepiting+10;

		}
		 exit(0);

    	}
}
