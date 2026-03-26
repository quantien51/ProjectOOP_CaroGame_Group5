#include "menu.h"

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void menuScreen()
{
	string menuOptions[] = {"Start Game", "Exit"};
	int numOptions = 2;
	int currentSelection = 0;
	bool menuActive = true;

	while (menuActive)
	{
		system("cls");
		cout << "===> CARO GAME MENU <==" << endl;
		//Draw the menu
		for (int i = 0; i < numOptions; i++)
		{
			if (i == currentSelection)
			{
				cout << " --> " << menuOptions[i] << " <-- " << endl;
			}else
			{
				cout << " " << menuOptions[i] << endl;
			}
		}
	}
}
