#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char **argv)
{
  int i;

  if(argc < 2){
    printf(2, "no termines conmigo\n");
    exit();
  }

    for(i=1; i<argc; i++)
     if(strcmp(argv[i], "1") == 0){
        printf(2,"no me mates");
    }  else{
    kill(atoi(argv[i]));
    exit();
}
  
}
