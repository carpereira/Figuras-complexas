#include <SDL2/SDL.h>

int main(int argc, char* args[])
{
/*INICIALIZAÇÃO*/
SDL_Init(SDL_INIT_EVERYTHING);
SDL_Window* win = SDL_CreateWindow("Linhas pontos e retangulos!",
                      SDL_WINDOWPOS_UNDEFINED,
                      SDL_WINDOWPOS_UNDEFINED,
                      400, 400, SDL_WINDOW_SHOWN
                      );
SDL_Renderer* ren = SDL_CreateRenderer(win, -1,0);

/*EXECUÇÃO*/
SDL_SetRenderDrawColor(ren, 0xFF,0xFF,0xFF,0x00);
SDL_RenderClear(ren);
/*retangulo*/  
SDL_SetRenderDrawColor(ren, 0x00,0x00,0xFF,0x00);
SDL_Rect r = {40,20, 10,10};
SDL_RenderFillRect(ren, &r);
SDL_SetRenderDrawColor(ren, 0x00,0xFF,0x00,0x00);
SDL_Rect s = {0,0, 40,20};
SDL_RenderFillRect(ren, &s);
SDL_SetRenderDrawColor(ren, 0xFF,0x00,0xFF,0x00);
SDL_Rect x = {200,300, 60,40};
SDL_RenderFillRect(ren, &x);
SDL_SetRenderDrawColor(ren, 0xFF,0x00,0x00,0x00);
SDL_Rect w = {150,250, 40,70};
SDL_RenderFillRect(ren, &w);
SDL_SetRenderDrawColor(ren, 0xFF,0x00,0xFF,0x00);
SDL_Rect u = {0,350, 40,40};
SDL_RenderFillRect(ren, &u);
SDL_SetRenderDrawColor(ren, 0xFF,0x00,0x00,0x00);
SDL_Rect t = {350,350, 40,40};
SDL_RenderFillRect(ren, &t);
SDL_SetRenderDrawColor(ren, 0x00,0xFF,0xFF,0x00);
SDL_Rect f = {350,50, 40,60};
SDL_RenderFillRect(ren, &f);
SDL_SetRenderDrawColor(ren, 0xFF,0xFF,0x00,0x00);
SDL_Rect g = {300,150, 40,40};
SDL_RenderFillRect(ren, &g);
SDL_SetRenderDrawColor(ren, 0x00,0xFF,0xFF,0x00);
SDL_Rect i = {200,0, 50,70};
SDL_RenderFillRect(ren, &i);
SDL_SetRenderDrawColor(ren, 0xFF,0xFF,0x00,0x00);
