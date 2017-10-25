#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *faktorial(void *);
int total=1;

main(int argc,const char *argv[])
{
	int number,i;
	pthread_t t;
	for(i=1;i<argc;i++){
	number = atoi(argv[i]);

	pthread_create(&t,NULL,faktorial,(void *)&number);
	pthread_join(t,NULL);

	printf("%d\n", total);
	total = 1;
	}
}

void *faktorial(void *no)
{
    int *nomor,count;
    nomor=(int*)no;

    for(count=1;count<=*nomor;count=count+1)
    {
        total = total*count;
    }
    pthread_exit(NULL);
}
