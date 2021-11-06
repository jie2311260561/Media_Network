#include<stdio.h>
#include<string.h>


int main(int argc, char const *argv[])
{
    if(argc == 1 || argc == 2){
        printf("Please input para \n");
        printf("input [-x] [value] \n");
        return 0;
    }
    else{
        if(argc == 3){
            if(!strcmp(argv[2],"input")){
                printf("server \n");
            }
            else{
                printf("cherry-pick \n");
            }
        }
    }
    return 0;
}
