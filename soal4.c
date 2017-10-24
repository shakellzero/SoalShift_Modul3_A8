#include <stdio.h>
#include <pthread.h>

void *faktorial(void *);
int total=1;

main()
{
	int number;
	pthread_t t;
	printf("Masukkan angka yang akan difaktorialkan : ");
	scanf("%d", &number);

	pthread_create(&t,NULL,faktorial,(void *)&number);
	pthread_join(t,NULL);

	printf("Hasil dari faktorial adalah  %d \n", total);
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
