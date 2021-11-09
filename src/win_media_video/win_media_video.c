//
// Created by 23112 on 2021/11/8.
//

#include "win_media_video.h"
#include "SDL2/SDL.h"
#include "stdio.h"
/*
 * Time: 2021-11-8 19:41
 * Author: Bedrock
 * Function: windows系统中窗口显示入口
 */
int win_media_window_show(int evnet){

    SDL_Window *  gWindow = NULL;
    SDL_Surface * gScreenSurface = NULL;
    SDL_Surface * gHello_word = NULL;

    if(SDL_Init(SDL_INIT_VIDEO) < 0){
        printf("Init error %s\n",SDL_GetError());
        return -1;
    }

    gWindow = SDL_CreateWindow("SHOW BMP",
                               SDL_WINDOWPOS_UNDEFINED,
                               SDL_WINDOWPOS_UNDEFINED,
                               SCREEN_WIDTH,
                               SCREEN_HEIGHT,
                               SDL_WINDOW_SHOWN
                               );
    if(gWindow == NULL){
        printf("Windows creat error %s \n",SDL_GetError());
        return -1;
    }

    gScreenSurface = SDL_GetWindowSurface(gWindow);

    gHello_word = SDL_LoadBMP("E:\\program\\media_-network\\src\\win_media_video\\test.bmp");
    if (gHello_word == NULL){
        printf("Load BMP error %s \n",SDL_GetError());
        return -1;
    }
    SDL_BlitSurface(gHello_word,NULL,gScreenSurface,NULL);
    SDL_UpdateWindowSurface(gWindow);
    SDL_Delay(2000);

    SDL_FreeSurface(gHello_word);
    gHello_word = NULL;
    SDL_DestroyWindow(gWindow);
    gWindow = NULL;

    SDL_Quit();

    return 1;

}