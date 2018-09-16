#include "Main.h"

void KeySetup() {
	pKeyImgSurface = SDL_LoadBMP("./img/key.bmp");
}
void KeyRender()
{
	int x=0, y=0;
	if (evnt.key.keysym.sym == SDLK_RETURN) GSstate = InGame;
	SDL_BlitSurface(pKeyImgSurface, NULL, pScreenSurface, NULL);
}
void KeyRelease() {
	SDL_FreeSurface(pKeyImgSurface);
}