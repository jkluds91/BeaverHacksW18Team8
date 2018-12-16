#include "menu.hpp"
#include "game.hpp"

/************************************************************************************************
Function: void displayHomeScreen()
Description: Displays home screen.
************************************************************************************************/

void Menu::displayHomescreen()
{
	std::cout << "Welcome to MASH!" << std::endl;
	std::cout << "MASH is a game that predicts your future." << std::endl;
	std::cout << std::endl;
}

/************************************************************************************************
Function: void displayInstructions()
Description: Displays instructions on console.
************************************************************************************************/

void Menu::displayInstructions()
{
	std::cout << "Instructions:" << std::endl;
	std::cout << "MASH stands for Mansion, Apartment, Shack, House." << std::endl;
	std::cout << "In MASH, you will be given a number of categories, including housing." << std::endl;
	std::cout << "You will fill each category with four choices of that type." << std::endl;
	std::cout << "Once the categories have been filled, a random number" << std::endl;
	std::cout << "will be selected for you and used to predict your future!" << std::endl;
	std::cout << std::endl;
}

/************************************************************************************************
Function: void playGame()
Description: Runs game objects.
************************************************************************************************/
void Menu::playGame()
{
	Game game;

	//Gets choices under each category from user
	game.getChoices();

	//Output contents of array (for testing)
	game.printChoices();

	//Run game
	game.runGame();

	//Display fortune
	game.displayFortune();
}