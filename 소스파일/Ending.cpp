#include "Ending.h"

void EndingSetup() {
	pEndImgSurface = SDL_LoadBMP("./img/ending.bmp");
}
void EndingUpdate() {

}
void EndingRender(){
	SDL_BlitSurface(pEndImgSurface, NULL, pScreenSurface, NULL);
}
void EndingRelease() {
	SDL_FreeSurface(pEndImgSurface);
}