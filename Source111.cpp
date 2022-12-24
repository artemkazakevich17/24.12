#include "settings.h"
#include "founctions.h"
#include "Header.h"
using namespace sf;

int main()
{
	// Объект, который, собственно, является главным окном приложения
	RenderWindow window(
		VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT),
		WINDOW_TITLE
	);
	Bat bat;
	batInit(bat);
	while (window.isOpen())
	{
		checkEvents(window);
		updateGame();
		checkCollisions();
		drawGame(window);
	}
	
	return 0;
}