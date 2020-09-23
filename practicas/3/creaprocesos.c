#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int main(int argc, char **argv){

    unsigned pid =  fork();
    if(pid == 0){

        char *newargv [] = {NULL};
        char *newargve[] = {NULL};
        newargv [0] = argv[1];  
         printf("soy el proceso hijo\n");
         execve(argv[1], newargv, newargve);
        return 10;
    } else {
        int status;
        printf("soy el proceso padre y mi hijo es %u\n", pid);
        wait(&status);
        printf("terminando despues del hijo y estatus %d\n", status);
    }

    
    printf("Hola mundo\n");
    return 0;

}