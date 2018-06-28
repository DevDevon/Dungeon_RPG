#include "Game.h"

Game::Game() {}

Game::~Game() {}

// game starts here
void Game::MainGame() {

	// story done in different methods by chapter
	
	introChapter(); // intro
	createCharacter(); // class creation
	
	// chapter 1
	// chapter 2
	// etc

	return;
}

// sets character information in character class
void Game::createCharacter() {
	FString pickClass = " ";

	std::cout << "\nWhat do you reach for? Your character's past and class is determined here.";
	std::cout << "\nType the name of the class you choose from the below list or a class followed";
	std::cout << "\nby \"info\" to learn more (example: \"Dancer info\")";

	classPrint();

	std::cout << "\nType your choice: ";

	while (!getClassValidity(pickClass)) { //TODO seperate checking validity and setting class
		std::cout << "\nHuh? I think you meant to type one of the following classes or one of the classes with \"info\" afterwards";
		classPrint();
		std::cout << "\nType your choice: ";
	}



	return;
}

bool Game::getClassValidity(FString pickClass) const {

	std::getline(std::cin, pickClass);

	FString lowerList = "", lowerClass = "";
	int32 x = 0;

	for (auto i : pickClass) {
		lowerClass += tolower(i);
	}

	for (auto i : mCharacter.classList) {
		for (auto n : i) {
			lowerList += tolower(n);
		}
		if (lowerClass == lowerList) { //if they are the same then set class in character and return true
			//mCharacter.setClass(x);
			return true;
		}
		x++;
	}

	return false;
}

void Game::classPrint() const {
	std::cout << "\n\n";
	std::cout <<
		"******************\n"
		"*   Magic Knight *\n" <<
		"*    Dark Knight *\n" <<
		"*       Summoner *\n" <<
		"*         Dancer *\n" <<
		"******************\n";

	return;
}

void Game::introChapter() {

	std::cout << "A quiet *snap* followed by the near silent and involuntary \"Shit!\" gave away their location.";
	std::cout << "\nThey had been trying to sneak up on you, camp fire still glowing faintly, when you were awakened";
	std::cout << "\nby the nearly inaudible sound of a blade being slowly unsheathed. You are an experienced adventurer,";
	std::cout << "\nthough, and this wasn't your first novice bandit in the dark of night. You slowly reach for your weapon…\n";

	return;
}
