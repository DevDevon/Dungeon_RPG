#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "Character.h"

using FString = std::string;
using int32 = int;

enum class EClasses {
	Invalid_Status,
	Magic_Knight,
	Dark_Knight,
	Summoner,
	Dancer,
	MK_info,
	DK_info,
	S_info,
	D_info
};


class Game
{
public:
	//only public method is main game method called from int main()

	Game();
	~Game();

	EClasses EClassInfo;

	void MainGame();

private:
	//all logic for main program in private
	Character mCharacter;
	void createCharacter();
	EClasses pickClassValidity(FString) const;

	void classPrint() const;

	// create methods for each story chapter
	void introChapter();
};

