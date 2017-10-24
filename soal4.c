#include <stdio.h>
#include <pthread.h>

void *faktorial(void *);
int total=1;

main()
{
	int number, count;
	pthread_t t;
	printf("Masukkan angka yang akan difaktorialkan : ");
	scanf("%d", &number);

	pthread_create(&t,NULL,faktorial,(void *)&number);
	pthread_join(t,NULL);

	printf("Hasil dari faktorial adalah  %d \n", total);
}
