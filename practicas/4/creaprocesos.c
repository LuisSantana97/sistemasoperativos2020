#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <signal.h>

void signalHandler(int signum){
       int status;
        sleep(2);
         wait(&status);
         printf("mi hijo termino con status %d ", status);

}


int main(int argc, char **argv){
    signal(17, signalHandler);
    unsigned pid =  fork();
    if(pid == 0){
        sleep(5);
         printf("soy el proceso hijo\n");
       //  execve(argv[1], newargv, newargve);
        return 10;
    } else {
         printf("soy el proceso padre y mi hijo es %u\n", pid);
         while(1){
        sleep(2);
        printf("trabajando\n");
       
         }
    }

    
    printf("Hola mundo\n");
    return 0;

}