#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *faktorial(void *);
int total=1;

main(int argc,const char *argv[])
{
	int number,i,a,b,temp,temp2;
	int arr[10], angka[10];
	pthread_t t;
	for(i=1;i<argc;i++)
	{
		number = atoi(argv[i]);
		angka[i] = number;
		pthread_create(&t,NULL,faktorial,(void *)&number);
		pthread_join(t,NULL);
		arr[i]=total;
		total = 1;
	}

	for(a=1;a<argc;a++)
	{
		for(b=1;b<argc-1;b++)
		{
			if (arr[b]>arr[b+1])
			{
				temp = arr[b]; temp2 = angka[b];
				arr[b] = arr[b+1]; angka[b] = angka[b+1];
				arr[b+1] = temp; angka[b+1] = temp2;
			}
		}
		printf("Hasil %d! =  %d\n", angka[a], arr[a]);
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
