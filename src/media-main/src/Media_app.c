#include<stdio.h>
#include<string.h>
#include "SDL2/SDL.h"

#undef main


int main(int argc, char const *argv[])
{
    SDL_Init(SDL_INIT_EVERYTHING);

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
    SDL_Quit();
    return 0;
}
