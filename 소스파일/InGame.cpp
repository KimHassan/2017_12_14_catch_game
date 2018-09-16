#include "InGame.h"
void put(SDL_Rect *obj, int x, int y, int w, int h)
{
	obj->x = x;
	obj->y = y;
	obj->w = w;
	obj->h = h;
}

void InGameSetup() {
	pBGImgSurface = SDL_LoadBMP("./img/bg2.bmp");//배경
	pRectSurface = SDL_LoadBMP("./img/collision.bmp");//충돌테스트 영억
	pPImgSurface = SDL_LoadBMP("./img/player.bmp");//하트
	pPImgSurface2 = SDL_LoadBMP("./img/player2.bmp");
	pPImgSurface3 = SDL_LoadBMP("./img/player3.bmp");
	pPImgSurface22 = SDL_LoadBMP("./img/player22.bmp");
	pPImgSurface33 = SDL_LoadBMP("./img/player33.bmp");
	//ObjSurface1 = SDL_LoadBMP("./img/obj1.bmp");
	//ObjSurface2 = SDL_LoadBMP("./img/obj2.bmp");
	//ObjSurface3 = SDL_LoadBMP("./img/obj3.bmp");
	//ObjSurface4 = SDL_LoadBMP("./img/obj4.bmp");
	//Obj1 = SDL_LoadBMP("./img/block1.bmp");
	//Obj2 = SDL_LoadBMP("./img/block2.bmp");
	//Obj3 = SDL_LoadBMP("./img/block3.bmp");
	//Obj4 = SDL_LoadBMP("./img/block4.bmp");
	//Obj5 = SDL_LoadBMP("./img/block5.bmp");
	//Obj6 = SDL_LoadBMP("./img/block6.bmp");
	//Obj7 = SDL_LoadBMP("./img/block7.bmp");
	//Obj8 = SDL_LoadBMP("./img/block8.bmp");
	//Obj9 = SDL_LoadBMP("./img/block9.bmp");
	//Obj10 = SDL_LoadBMP("./img/block10.bmp");
	//Obj11 = SDL_LoadBMP("./img/block11.bmp");
	//Obj12 = SDL_LoadBMP("./img/block12.bmp");
	//Obj13 = SDL_LoadBMP("./img/block13.bmp");
	//Obj14 = SDL_LoadBMP("./img/block14.bmp");
	//Obj15 = SDL_LoadBMP("./img/block15.bmp");
	//Obj16 = SDL_LoadBMP("./img/block16.bmp");
	//Obj17 = SDL_LoadBMP("./img/block17.bmp");
	SDL_SetColorKey(pPImgSurface, SDL_TRUE, SDL_MapRGB(pPImgSurface->format, 255, 255, 255));
	PlLocation.x = 250; PlLocation.y = 540; PlLocation.w = 30; PlLocation.h = 30;//플레이어 위치
	PILocation2.x = 600;	PILocation2.y = 500;	PILocation2.w = 30;	PILocation2.h = 30;
	put(&PILocation3, 650, 530, 30, 30);
	//put(&obj1, 0, 60, 60, 500);
	put(&obj1, 0, 0, 60, 600);
	put(&obj2, 0, 0, 800, 60);
	put(&obj3, 740, 0, 60, 600);
	put(&obj4, 60, 560, 680, 40);
	put(&obj1c, 0, 0, 60, 600);
	put(&block1, 107, 102, 57, 122);
	put(&block2, 212, 100, 264, 40);
	put(&block3, 530, 100, 160, 40);
	put(&block4, 215, 181, 158, 42);
	put(&block5, 423, 179, 161, 40);
	put(&block6, 631, 178, 59, 119);
	put(&block7, 214, 258, 52, 80);
	put(&block8, 322, 260, 50, 115);
	put(&block9, 426, 262, 53, 114);
	put(&block10, 531, 334, 55, 123);
	put(&block11, 213, 373, 58, 141);
	put(&block12, 321, 413, 156, 42);
	put(&block13, 58, 490, 127, 71);
	put(&block14, 321, 492, 259, 68);
	put(&block15, 633, 335, 70, 183);
	put(&block16, 107, 257, 58, 197);
	put(&block17, 527, 258, 57, 45);
	put(&EndPlace, 583, 525, 158, 31);
}
void InGameUpdate() {
	bool chk = false,
		chk2 = false,
		chk3 = false,
		chkp1 = false,
		chk4 = false,
		chk5 = false,
		chk6 = false,
		chk7 = false,
		chk8 = false,
		chk9 = false,
		chk10 = false,
		chk11 = false,
		chk12 = false,
		chk13 = false,
		chk14 = false,
		chk15 = false,
		chk16 = false,
		chk17 = false,
		chk18 = false,
		chk19 = false,
		chk20 = false,
		chk21 = false;
	bool Tchk = false,
	Tchk2 = false,
	Tchk3 = false,
	Tchkp1 = false,
	Tchk4 = false,
	Tchk5 = false,
	Tchk6 = false,
	Tchk7 = false,
	Tchk8 = false,
	Tchk9 = false,
	Tchk10 = false,
	Tchk11 = false,
	Tchk12 = false,
	Tchk13 = false,
	Tchk14 = false,
	Tchk15 = false,
	Tchk16 = false,
	Tchk17 = false,
	Tchk18 = false,
	Tchk19 = false,
	Tchk20 = false,
	Tchk21 = false;
	bool Rchk = false,
	Rchk2 = false,
	Rchk3 = false,
	Rchkp1 = false,
	Rchk4 = false,
	Rchk5 = false,
	Rchk6 = false,
	Rchk7 = false,
	Rchk8 = false,
	Rchk9 = false,
	Rchk10 = false,
	Rchk11 = false,
	Rchk12 = false,
	Rchk13 = false,
	Rchk14 = false,
	Rchk15 = false,
	Rchk16 = false,
	Rchk17 = false,
	Rchk18 = false,
	Rchk19 = false,
	Rchk20 = false,
	Rchk21 = false;
	bool chkp2 = false;
	bool end = false;
	SDL_Rect Location = { 600, 500,  200, 200 };

	//충돌 테스트
	end = CollisionCheck(PlLocation, EndPlace);
	chkp1 = CollisionCheck(PlLocation, PILocation2);
	chkp2 = CollisionCheck(PlLocation, PILocation3);
	chk = CollisionCheck(PlLocation, obj1);
	chk2 = CollisionCheck(PlLocation, obj2);
	chk3 = CollisionCheck(PlLocation, obj3);
	chk4 = CollisionCheck(PlLocation, obj4);
	chk5 = CollisionCheck(PlLocation, block1);
	chk6 = CollisionCheck(PlLocation, block2);
	chk7 = CollisionCheck(PlLocation, block3);
	chk8 = CollisionCheck(PlLocation, block4);
	chk9 = CollisionCheck(PlLocation, block5);
	chk10 = CollisionCheck(PlLocation, block6);
	chk11 = CollisionCheck(PlLocation, block7);
	chk12 = CollisionCheck(PlLocation, block8);
	chk13 = CollisionCheck(PlLocation, block9);
	chk14 = CollisionCheck(PlLocation, block10);
	chk15 = CollisionCheck(PlLocation, block11);
	chk16 = CollisionCheck(PlLocation, block12);
	chk17 = CollisionCheck(PlLocation, block13);
	chk18 = CollisionCheck(PlLocation, block14);
	chk19 = CollisionCheck(PlLocation, block15);
	chk20 = CollisionCheck(PlLocation, block16);
	chk21 = CollisionCheck(PlLocation, block17);
	Tchk = CollisionCheck(PILocation2, obj1);
	Tchk2 = CollisionCheck(PILocation2, obj2);
	Tchk3 = CollisionCheck(PILocation2, obj3);
	Tchk4 = CollisionCheck(PILocation2, obj4);
	Tchk5 = CollisionCheck(PILocation2, block1);
	Tchk6 = CollisionCheck(PILocation2, block2);
	Tchk7 = CollisionCheck(PILocation2, block3);
	Tchk8 = CollisionCheck(PILocation2, block4);
	Tchk9 = CollisionCheck(PILocation2, block5);
	Tchk10 = CollisionCheck(PILocation2, block6);
	Tchk11 = CollisionCheck(PILocation2, block7);
	Tchk12 = CollisionCheck(PILocation2, block8);
	Tchk13 = CollisionCheck(PILocation2, block9);
	Tchk14 = CollisionCheck(PILocation2, block10);
	Tchk15 = CollisionCheck(PILocation2, block11);
	Tchk16 = CollisionCheck(PILocation2, block12);
	Tchk17 = CollisionCheck(PILocation2, block13);
	Tchk18 = CollisionCheck(PILocation2, block14);
	Tchk19 = CollisionCheck(PILocation2, block15);
	Tchk20 = CollisionCheck(PILocation2, block16);
	Tchk21 = CollisionCheck(PILocation2, block17);
	Rchk = CollisionCheck(PILocation3, obj1);
	Rchk2 = CollisionCheck(PILocation3, obj2);
	Rchk3 = CollisionCheck(PILocation3, obj3);
	Rchk4 = CollisionCheck(PILocation3, obj4);
	Rchk5 = CollisionCheck(PILocation3, block1);
	Rchk6 = CollisionCheck(PILocation3, block2);
	Rchk7 = CollisionCheck(PILocation3, block3);
	Rchk8 = CollisionCheck(PILocation3, block4);
	Rchk9 = CollisionCheck(PILocation3, block5);
	Rchk10 = CollisionCheck(PILocation3, block6);
	Rchk11 = CollisionCheck(PILocation3, block7);
	Rchk12 = CollisionCheck(PILocation3, block8);
	Rchk13 = CollisionCheck(PILocation3, block9);
	Rchk14 = CollisionCheck(PILocation3, block10);
	Rchk15 = CollisionCheck(PILocation3, block11);
	Rchk16 = CollisionCheck(PILocation3, block12);
	Rchk17 = CollisionCheck(PILocation3, block13);
	Rchk18 = CollisionCheck(PILocation3, block14);
	Rchk19 = CollisionCheck(PILocation3, block15);
	Rchk20 = CollisionCheck(PILocation3, block16);
	Rchk21 = CollisionCheck(PILocation3, block17);
	if (end)
	{
		GSstate = Ending;
	}
	if (chkp1)
	{
		GSstate = GameOver;

	}
	if (chkp2)
	{
		crush(&PlLocation, &PILocation3);
	}
	if (chk)
	{
		crush(&PlLocation, &obj1);
	}
	if (chk2)
	{
		crush(&PlLocation, &obj2);
	}
	if (chk3)
	{
		crush(&PlLocation, &obj3);
	}
	if (chk4)
	{
		crush(&PlLocation, &obj4);
	}
	else if (chk5)
	{
		crush(&PlLocation, &block1);
	}
	else if (chk6)
	{
		crush(&PlLocation, &block2);
	}
	else if (chk7)
	{
		crush(&PlLocation, &block3);
	}
	else if (chk8)
	{
		crush(&PlLocation, &block4);
	}
	else if (chk9)
	{
		crush(&PlLocation, &block5);
	}
	else if (chk10)
	{
		crush(&PlLocation, &block6);
	}
	else if (chk11)
	{
		crush(&PlLocation, &block7);
	}
	else if (chk12)
	{
		crush(&PlLocation, &block8);
	}
	else if (chk13)
	{
		crush(&PlLocation, &block9);
	}
	else if (chk14)
	{
		crush(&PlLocation, &block10);
	}
	else if (chk15)
	{
		crush(&PlLocation, &block11);
	}
	else if (chk16)
	{
		crush(&PlLocation, &block12);
	}
	else if (chk17)
	{
		crush(&PlLocation, &block13);
	}
	else if (chk18)
	{
		crush(&PlLocation, &block14);
	}
	else if (chk19)
	{
		crush(&PlLocation, &block15);
	}
	else if (chk20)
	{
		crush(&PlLocation, &block16);
	}
	else if (chk21)
	{
		crush(&PlLocation, &block17);
	}
	//2p
	if (Tchk)
	{
		crush(&PILocation2, &obj1);
	}
	if (Tchk2)
	{
		crush(&PILocation2, &obj2);
	}
	if (Tchk3)
	{
		crush(&PILocation2, &obj3);
	}
	if (Tchk4)
	{
		crush(&PILocation2, &obj4);
	}
	if (Tchk5)
	{
		crush(&PILocation2, &block1);
	}
	else if (Tchk6)
	{
		crush(&PILocation2, &block2);
	}
	else if (Tchk7)
	{
		crush(&PILocation2, &block3);
	}
	else if (Tchk8)
	{
		crush(&PILocation2, &block4);
	}
	else if (Tchk9)
	{
		crush(&PILocation2, &block5);
	}
	else if (Tchk10)
	{
		crush(&PILocation2, &block6);
	}
	else if (Tchk11)
	{
		crush(&PILocation2, &block7);
	}
	else if (Tchk12)
	{
		crush(&PILocation2, &block8);
	}
	else if (Tchk13)
	{
		crush(&PILocation2, &block9);
	}
	else if (Tchk14)
	{
		crush(&PILocation2, &block10);
	}
	else if (Tchk15)
	{
		crush(&PILocation2, &block11);
	}
	else if (Tchk16)
	{
		crush(&PILocation2, &block12);
	}
	else if (Tchk17)
	{
		crush(&PILocation2, &block13);
	}
	else if (Tchk18)
	{
		crush(&PILocation2, &block14);
	}
	else if (Tchk19)
	{
		crush(&PILocation2, &block15);
	}
	else if (Tchk20)
	{
		crush(&PILocation2, &block16);
	}
	else if (Tchk21)
	{
		crush(&PILocation2, &block17);
	}
//3p
	if (Rchk)
	{
		crush(&PILocation3, &obj1);
	}
	if (Rchk2)
	{
		crush(&PILocation3, &obj2);
	}
	if (Rchk3)
	{
		crush(&PILocation3, &obj3);
	}
	if (Rchk4)
	{
		crush(&PILocation3, &obj4);
	}
	if (Rchk5)
	{
		crush(&PILocation3, &block1);
	}
	else if (Rchk6)
	{
		crush(&PILocation3, &block2);
	}
	else if (Rchk7)
	{
		crush(&PILocation3, &block3);
	}
	else if (Rchk8)
	{
		crush(&PILocation3, &block4);
	}
	else if (Rchk9)
	{
		crush(&PILocation3, &block5);
	}
	else if (Rchk10)
	{
		crush(&PILocation3, &block6);
	}
	else if (Rchk11)
	{
		crush(&PILocation3, &block7);
	}
	else if (Rchk12)
	{
		crush(&PILocation3, &block8);
	}
	else if (Rchk13)
	{
		crush(&PILocation3, &block9);
	}
	else if (Rchk14)
	{
		crush(&PILocation3, &block10);
	}
	else if (Rchk15)
	{
		crush(&PILocation3, &block11);
	}
	else if (Rchk16)
	{
		crush(&PILocation3, &block12);
	}
	else if (Rchk17)
	{
		crush(&PILocation3, &block13);
	}
	else if (Rchk18)
	{
		crush(&PILocation3, &block14);
	}
	else if (Rchk19)
	{
		crush(&PILocation3, &block15);
	}
	else if (Rchk20)
	{
		crush(&PILocation3, &block16);
	}
	else if (Rchk21)
	{
		crush(&PILocation3, &block17);
	}
	SDL_BlitSurface(pCollOk, NULL, pScreenSurface, &Location);


	chk = false;
	chk2 = false;
	chk3 = false;
		SDL_BlitSurface(pPImgSurface33, NULL, pScreenSurface, &PILocation3);
		SDL_BlitSurface(pPImgSurface22, NULL, pScreenSurface, &PILocation2);
	if (GetAsyncKeyState(0x57) & 0x8000)
		PlLocation.y -= 1;
	if (GetAsyncKeyState(0x53) & 0x8000)
		PlLocation.y += 1;
	if (GetAsyncKeyState(0x41) & 0x8000)
		PlLocation.x -= 1;
	if (GetAsyncKeyState(0x44) & 0x8000)
		PlLocation.x += 1;
	if (GetAsyncKeyState(VK_UP) & 0x8000)
	{
		PILocation2.y-= 1;
		SDL_BlitSurface(pPImgSurface2, NULL, pScreenSurface, &PILocation2);
	}
	if (GetAsyncKeyState(VK_DOWN) & 0x8000)
	{
		PILocation2.y += 1;
		SDL_BlitSurface(pPImgSurface2, NULL, pScreenSurface, &PILocation2);
	}
	if (GetAsyncKeyState(VK_LEFT) & 0x8000)
	{
		PILocation2.x -= 1;
		SDL_BlitSurface(pPImgSurface22, NULL, pScreenSurface, &PILocation2);
	}
	if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
	{
		PILocation2.x += 1;
		SDL_BlitSurface(pPImgSurface2, NULL, pScreenSurface, &PILocation2);
	}
		if (GetAsyncKeyState(VK_NUMPAD8) & 0x8000)
	{
		PILocation3.y -= 1;
		SDL_BlitSurface(pPImgSurface3, NULL, pScreenSurface, &PILocation3);
	}
	if (GetAsyncKeyState(VK_NUMPAD5) & 0x8000)
	{
		PILocation3.y += 1;
		SDL_BlitSurface(pPImgSurface3, NULL, pScreenSurface, &PILocation3);
	}
	if (GetAsyncKeyState(VK_NUMPAD4) & 0x8000)
	{
		PILocation3.x -= 1;
		SDL_BlitSurface(pPImgSurface33, NULL, pScreenSurface, &PILocation3);
	}
	if (GetAsyncKeyState(VK_NUMPAD6) & 0x8000)
	{
		PILocation3.x += 1;
		SDL_BlitSurface(pPImgSurface3, NULL, pScreenSurface, &PILocation3);
	}
		//switch (evnt.key.keysym.sym) //키보드값 확인
	//{
	//case SDLK_ESCAPE:
	//	GSstate = Ending; break;
	//case SDLK_RIGHT:
	//	PlLocation.x += 5;	break;
	//case SDLK_LEFT:
	//	PlLocation.x -= 5; break;
	//case SDLK_DOWN:
	//	PlLocation.y += 5;	break;
	//case SDLK_UP:
	//	PlLocation.y -= 5; break;	
	//case SDLK_d:
	//	PILocation2.x += 8;	break;
	//case SDLK_a:
	//	PILocation2.x -= 8; break;
	//case SDLK_s:
	//	PILocation2.y += 8;	break;
	//case SDLK_w:
	//	PILocation2.y -= 8; break;
	//case SDLK_l:
	//	obj3.x += 10;	break;
	//case SDLK_j:
	//	obj3.x -= 10; break;
	//case SDLK_k:
	//	obj3.y += 10;	break;
	//case SDLK_i:
	//	obj3.y -= 10; break;
	//}
	evnt.key.keysym.sym = 0;

}
void InGameRender() {
	SDL_BlitSurface(pBGImgSurface, NULL, pScreenSurface, NULL);	//배경
	SDL_BlitSurface(ObjSurface1, &obj1c, pScreenSurface, &obj1);
	SDL_BlitSurface(ObjSurface2, &obj2, pScreenSurface, &obj2);
	//SDL_BlitSurface(ObjSurface3, NULL, pScreenSurface, &obj3);

	//SDL_BlitSurface(pPImgSurface2, NULL, pScreenSurface, &PILocation2);//플레이어	
	SDL_BlitSurface(pPImgSurface, NULL, pScreenSurface, &PlLocation);//플레이어
//	SDL_BlitSurface(pPImgSurface3, NULL, pScreenSurface, &PILocation3);
}
void InGameRelease() {
	SDL_FreeSurface(pPImgSurface);
	SDL_FreeSurface(pCollOk);
	SDL_FreeSurface(pRectSurface);
	SDL_FreeSurface(pBGImgSurface);
}

void crush(SDL_Rect *PlLocation, SDL_Rect *obj1)
{
	if (PlLocation->y < obj1->y)//윗면 // clear
	{
		if (PlLocation->y + PlLocation->h > obj1->y && PlLocation->x + PlLocation->w > obj1->x && PlLocation->x < obj1->w + obj1->x)
			PlLocation->y -= 3;
	}
	else if (PlLocation->y > obj1->y + obj1->h - 10)//아랫면//clear
	{
		if (PlLocation->y < obj1->y + obj1->h && PlLocation->x<obj1->x + obj1->w && PlLocation->x + PlLocation->w>obj1->x)
			PlLocation->y += 4;
	}
	else if (PlLocation->x < obj1->x)//왼쪽면// clear
	{
		if (obj1->x < PlLocation->x + PlLocation->w && obj1->y + 5 < PlLocation->y + PlLocation->h && obj1->y + obj1->h - 5 > PlLocation->y)
			PlLocation->x -= 3;
	}
	else if (PlLocation->x < obj1->x + obj1->w - 3)//오른면
	{
		if (obj1->x + obj1->w >= PlLocation->x && obj1->y + 5 < PlLocation->y + PlLocation->h && obj1->y + obj1->h - 5 > PlLocation->y)
			PlLocation->x += 4;
	}
	/* {
	if (PlLocation.y < obj1.y)
	{
	if (PlLocation.y + PlLocation.h > obj1.y && PlLocation.x + PlLocation.w > obj1.x && PlLocation.x < obj1.w + obj1.x)
	PlLocation.y -= 1;
	}
	else if (PlLocation.y > obj1.y + obj1.h - 10)
	{
	if (PlLocation.y < obj1.y + obj1.h && PlLocation.x<obj1.x + obj1.w && PlLocation.x + PlLocation.w>obj1.x)
	PlLocation.y += 1;
	}
	else if (PlLocation.x < obj1.x)
	{
	if (obj1.x < PlLocation.x + PlLocation.w && obj1.y + 5<PlLocation.y + PlLocation.h && obj1.y + obj1.h - 5>PlLocation.y)
	PlLocation.x -= 1;
	}
	else if (PlLocation.x < obj1.x + obj1.w - 3)
	{
	if (obj1.x + obj1.w >= PlLocation.x && obj1.y + 5<PlLocation.y + PlLocation.h && obj1.y + obj1.h - 5>PlLocation.y)
	PlLocation.x += 1;
	}
	}
	*/
	//if (PlLocation.y < obj2.y)//위면 충돌
	//{
	//	if (PlLocation.y + PlLocation.h > obj2.y && PlLocation.x + PlLocation.w > obj2.x && PlLocation.x < obj2.w + obj2.x)
	//		PlLocation.y -= 1;
	//}
	//else if (PlLocation.y > obj2.y + obj2.h - 10)//아랫면 충돌
	//{
	//	if (PlLocation.y < obj2.y + obj2.h && PlLocation.x<obj2.x + obj2.w && PlLocation.x + PlLocation.w>obj2.x)
	//		PlLocation.y += 1;
	//}
	//else if (PlLocation.x < obj2.x) //왼쪽면 충돌
	//{
	//	if (obj2.x < PlLocation.x + PlLocation.w && obj2.y + 5<PlLocation.y + PlLocation.h && obj2.y + obj2.h - 5>PlLocation.y)
	//		PlLocation.x -= 1;
	//}
	//else if (PlLocation.x < obj2.x + obj2.w - 3) //오른쪽면 충돌
	//{
	//	if (obj2.x + obj2.w >= PlLocation.x && obj2.y + 5<PlLocation.y + PlLocation.h && obj2.y + obj2.h - 5>PlLocation.y)
	//		PlLocation.x += 1;
	//}
}
