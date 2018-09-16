#ifndef _MAIN_H_
#define _MAIN_H_

#include <SDL.h>
#include <SDL_main.h>
#include <stdio.h>

#include "Title.h"
#include "InGame.h"
#include "Ending.h"
#include "GameOver.h"
#include "Key.h"
#pragma comment(lib, "sdl2.lib")
#pragma comment(lib, "sdl2main.lib")

#define WINSIZE_X 800
#define WINSIZE_Y 600

typedef enum State{

	Title,
	Key,
	InGame,
	Ending,
	GameOver

}GameState;

extern GameState GSstate;

extern SDL_Window *pWnd;
extern SDL_Surface *pScreenSurface;
extern SDL_Surface *pTitleSurface, *pEndImgSurface,*pOverImgSurface,*pKeyImgSurface;
extern SDL_Surface *pBGImgSurface, *pBG2ImgSurface;
extern SDL_Surface *pPImgSurface,*pPImgSurface2, *pPImgSurface3, *pPImgSurface22, *pPImgSurface33, *pRectSurface, *pCollOk, *ObjSurface1, *ObjSurface2, *ObjSurface3,*ObjSurface4;
extern SDL_Surface *Obj1, *Obj2, *Obj3, *Obj4, *Obj5, *Obj6, *Obj7, *Obj8, *Obj9, *Obj10, *Obj11, *Obj12, *Obj13, *Obj14, *Obj15, *Obj16, *Obj17;
extern SDL_Surface *pStartSurface, *pStartOvSurface;
extern bool bGameRun;
extern bool bMouseOver;
extern SDL_Event evnt;
extern SDL_Rect PlayerRect;
extern SDL_Rect PlLocation, StartLocation,PILocation2,PILocation3;
extern SDL_Rect CollisionChk,obj1,obj2,obj3,obj1c,obj4;
extern SDL_Rect block1, block2, block3, block4, block5, block6, block7, block8, block9, block10, block11, block12, block13, block14, block15, block16, block17,EndPlace;
void Setup();
void Release();

bool CollisionCheck(SDL_Rect, SDL_Rect);

#endif _MAIN_H_