#pragma once

#include <string>
#include <vector>

using FString = std::string;
using int32 = int;

class Character
{
public:
	Character();
	~Character();

	std::vector<FString> classList = { "Magic Knight","Dark Knight","Summoner","Dancer" };

	FString getClassList(int32) const;
	int32 getClassListSize() const;

private:
	int32 currentHealth, maxHealth, currentLevel, expToNextLevel;
};

