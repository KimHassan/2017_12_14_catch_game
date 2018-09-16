#include "Main.h"

GameState GSstate;

SDL_Window *pWnd;
SDL_Surface *pScreenSurface;
SDL_Surface *pTitleSurface, *pEndImgSurface, *pOverImgSurface, *pKeyImgSurface;
SDL_Surface *pBGImgSurface;
SDL_Surface *pPImgSurface, *pPImgSurface2, *pPImgSurface3, *pPImgSurface22, *pPImgSurface33, *pRectSurface, *pCollOk, *ObjSurface1, *ObjSurface2, *ObjSurface3,*ObjSurface4;
SDL_Surface *Obj1, *Obj2, *Obj3, *Obj4, *Obj5, *Obj6, *Obj7, *Obj8, *Obj9, *Obj10, *Obj11, *Obj12, *Obj13, *Obj14, *Obj15, *Obj16, *Obj17;
SDL_Surface *pStartSurface, *pStartOvSurface;
bool bGameRun = true;
bool bMouseOver = false;
SDL_Event evnt;
SDL_Rect PlayerRect, BgRect;
SDL_Rect PlLocation, StartLocation,PILocation2,PILocation3;
SDL_Rect CollisionChk,obj1,obj2,obj3,obj1c,obj4;
SDL_Rect block1, block2, block3, block4, block5, block6, block7, block8, block9, block10, block11, block12, block13, block14, block15, block16, block17,EndPlace;
int main(int argc, char* argv[])
{
	Setup();	

	while (bGameRun) //GameLoop 
	{
		SDL_PollEvent(&evnt);

		if (evnt.type == SDL_QUIT)	bGameRun = false;		

		switch (GSstate) {

		case Title:
			TitleRender();
			TitleUpdate();
			break;

		case Key:
			KeyRender();
			break;

		case InGame:
			InGameRender();
			InGameUpdate();
			break;

		case Ending:
			EndingRender();
			break;

		case GameOver:
			GameOverRender();
			break;

		}

		SDL_UpdateWindowSurface(pWnd);
		//SDL_Delay(3);
	}

	Release();
	return 0;
}


void Setup() {
	SDL_Init(SDL_INIT_EVERYTHING);

	pWnd = SDL_CreateWindow("SDL Project", 100, 100, WINSIZE_X, WINSIZE_Y, 0);
	pScreenSurface = SDL_GetWindowSurface(pWnd);

	GSstate = Title;
	bGameRun = true;

	TitleSetup();
	InGameSetup();
	EndingSetup();
	GameOverSetup();
	KeySetup();
}

bool CollisionCheck(SDL_Rect a, SDL_Rect b) {
	int leftA, leftB;
	int rightA, rightB;
	int topA, topB;
	int bottomA, bottomB;

	leftA = a.x;	rightA = a.x + a.w;
	topA = a.y;  	bottomA = a.y + a.h;

	leftB = b.x;	rightB = b.x + b.w;
	topB = b.y; 	bottomB = b.y + b.h;


	if (bottomA <= topB)		return false;
	if (topA >= bottomB)		return false;
	if (rightA <= leftB)		return false;
	if (leftA >= rightB)		return false;

	return true;
}

void Release() {

	TitleRelease();
	InGameRelease();
	EndingRelease();
	GameOverRelease();
	KeyRelease();
	SDL_FreeSurface(pScreenSurface);
	SDL_DestroyWindow(pWnd); //윈도우 종료
	SDL_Quit(); //SDL 종료

}