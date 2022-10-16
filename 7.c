#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

extern char** environ;

int main(int argc, char** argv){
   if(argc == 1){
        printf("Print -a for menu\n");
        return 0;
    }
    char* opts = "ab:";
    char* name;
    int opt;
    while( (opt = getopt(argc, argv, opts)) != -1 ){
        switch (opt){
            case 'a':{
                printf("-a Menu\n");
    		 printf("-b Print name of environment variable you want to delete\n");
            }
            case 'b':{
                name = optarg;
                char* value = getenv(name);
                printf("Value of %s = %s\n",name,value);
                unsetenv(name);
                value = getenv(name);
                if(!value){
                    printf("Deleted value of %s = %s\n",name,value);      
                    break;
                }
                break;
            }
        }
    }
    return 0;
}
