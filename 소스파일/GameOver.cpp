#include "Main.h"

void GameOverSetup() {
	pOverImgSurface = SDL_LoadBMP("./img/gameover.bmp");
}
void GameOverRender()
{
	SDL_BlitSurface(pOverImgSurface, NULL, pScreenSurface, NULL);
}
void GameOverRelease() {
	SDL_FreeSurface(pOverImgSurface);
}