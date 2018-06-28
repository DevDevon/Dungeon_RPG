#include "Character.h"

Character::Character() {}

Character::~Character() {}

FString Character::getClassList(int32 i) const { return classList[i]; }
int32 Character::getClassListSize() const {	return classList.size(); }

void Character::setClass(int32 i) {
	mClass = classList[i];

	return;
}
