#include<stdio.h>
#include<string.h>
#include "Media_main.h"
#include "win_media_video.h"




int main(int argc, char const *argv[])
{
    printf("START \n");
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
            else if(!strcmp(argv[2],"SDL")){

                int res = win_media_window_show(0);
                if(res < 0){
                    return 0;
                }
            }
            else{
                printf("cherry-pick \n");
            }
        }
    }
    return 0;
}
