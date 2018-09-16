#ifndef _INGAME_H_
#define _INGAME_H_

#include "Main.h"
#include <Windows.h>
#include <conio.h>

void InGameSetup();
void InGameUpdate();
void InGameRender();
void InGameRelease();
void crush(SDL_Rect *PlLocation, SDL_Rect *obj1);
void put(SDL_Rect *obj, int x, int y, int w, int h);


#endif _INGAME_H_