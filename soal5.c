#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

pthread_t tid[50];
int urutan;

void *carikata(void *arg){
	char **inputan = (char**)arg;	
	FILE *novel;
	novel = fopen("Novel.txt","r");
	char x;
	int i=0;
	int count=0;
	while (( x= fgetc(novel)) != EOF){
		if(x==inputan[urutan][i]) i++;
		else if(i==strlen(inputan[urutan])) { count++; i=0;}		
		else i=0;
	}
	printf("%s : %d\n",inputan[urutan],count);	
}

int main(int argc,char *argv[]){
	for(urutan=1;urutan<argc;urutan++){
	pthread_create(&tid[urutan],NULL,carikata,(void*)argv);
	pthread_join(tid[urutan],NULL);
	}
return 0;
}
