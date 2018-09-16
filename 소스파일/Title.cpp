#include "Title.h"

void TitleSetup(){
	pTitleSurface = SDL_LoadBMP("./img/title.bmp");
	pStartSurface = SDL_LoadBMP("./img/start.bmp"); 
	pStartOvSurface = SDL_LoadBMP("./img/start_over.bmp");
	SDL_SetColorKey(pStartSurface, SDL_TRUE, SDL_MapRGB(pStartSurface->format, 255, 255, 255));
	SDL_SetColorKey(pStartOvSurface, SDL_TRUE, SDL_MapRGB(pStartOvSurface->format, 255, 255, 255));

	StartLocation.x = 320; StartLocation.y = 300;
	StartLocation.w = 143; StartLocation.h = 95;
}
void TitleUpdate(){
	int x, y;		
	bMouseOver = false;
	if (evnt.type == SDL_MOUSEMOTION) {
		x = evnt.button.x;
		y = evnt.button.y;	
		//printf("%d, %d\n", x, y);
		if (StartLocation.x <= x &&  x <= (StartLocation.x + StartLocation.w) && 
			(StartLocation.y <= y && y <= (StartLocation.y + StartLocation.h))) {
				bMouseOver = true;				
			}
		}
		
	if (evnt.type == SDL_MOUSEBUTTONUP){		
		if (evnt.button.button == SDL_BUTTON_LEFT){
			x = evnt.button.x;
			y = evnt.button.y;
			if (StartLocation.x <= x &&  x <= (StartLocation.x + StartLocation.w) &&
				(StartLocation.y <= y && y <= (StartLocation.y + StartLocation.h))) {
				bMouseOver = true;
				GSstate = Key;
			}		
		}
	}
	//if (evnt.key.keysym.sym == SDLK_RETURN) GSstate = InGame;
}
void TitleRender(){
	SDL_BlitSurface(pTitleSurface, NULL, pScreenSurface, NULL);	
	if(bMouseOver == true) SDL_BlitSurface(pStartOvSurface, NULL, pScreenSurface, &StartLocation);
	else SDL_BlitSurface(pStartSurface, NULL, pScreenSurface, &StartLocation);

}
void TitleRelease(){
	SDL_FreeSurface(pStartOvSurface);
	SDL_FreeSurface(pStartSurface);
	SDL_FreeSurface(pTitleSurface);
}
