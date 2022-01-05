/*
 * @Description: main入口
 * @Version: 2.0
 * @Autor: Bedrock
 * @Date: 2021-11-25 20:50:54
 * @LastEditors: Bedrock
 * @LastEditTime: 2022-01-05 18:17:52
 */
#include<stdio.h>
#include<string.h>
#include "Media_main.h"
#include "my_rtsp.h"

#ifdef _COMPILE_WINDOWS_TEST_
#include "win_media_video.h"
#endif

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
#ifdef _COMPILE_WINDOWS_TEST_
            else if(!strcmp(argv[2],"SDL")){
                int res = win_media_window_show(0);
                if(res < 0){
                    return 0;
                }
            }
#endif
            else if (!(strcmp(argv[2],"rtsp")))
            {
                
                return 0;
            }
            
            else{
                printf("cherry-pick \n");
            }
        }
    }
    return 0;
}
