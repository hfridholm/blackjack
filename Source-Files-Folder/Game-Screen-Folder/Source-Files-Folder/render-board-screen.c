
#include "../Header-Files-Folder/screen-include-file.h"

bool render_game_board(Screen screen)
{
	TTF_Font* textFont = TTF_OpenFont("../Source-Files-Folder/Game-Screen-Folder/8bitOperatorPlus8-Bold.ttf", 24);

	if(textFont == NULL)
	{
		printf("textFont == NULL\n");
	}

	SDL_Color textColor = {255, 255, 255};

	SDL_Surface* surfaceMessage = TTF_RenderText_Solid(textFont, "Money: 500", textColor); 

	SDL_Texture* message = SDL_CreateTextureFromSurface(screen.renderer, surfaceMessage);

	SDL_Rect messageRect;
	messageRect.x = 600;
	messageRect.y = 740;
	messageRect.w = 120;
	messageRect.h = 20;

	SDL_RenderCopy(screen.renderer, message, NULL, &messageRect);

	SDL_FreeSurface(surfaceMessage);
	SDL_DestroyTexture(message);

	return true;
}