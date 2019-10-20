#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void * funct1(void * arg){
    int i,j;
    for (j=0;j<4; j++){
        for (i=0; i<10000000; i++);
        printf("Hi I'm the created thread\n");
        sleep(2);
    }
}           
int main(){                     
    pthread_t threadid;
    int i,j;
    int x=1;                                                                            

    pthread_create(&threadid, NULL, funct1, (void *)&x);
    for (j=0; j <4; j++){
        printf("Hi I'm the parent\n");
	    sleep(3);
        printf("ffsft\n");
        pthread_exit(*funct1);
    }  
    return 0;
}
