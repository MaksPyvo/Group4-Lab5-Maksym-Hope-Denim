#pragma once
#include "GameCharacter.h"
// lab5 -- OOP -- group4-Maksym-Hope-Denim -- Functions for testing (requirement 6) class interface
//Copy constructor invoked for 2 times for foo1
GameCharacter foo1(GameCharacter p);
// Copy constructor invoked for 0 times for foo2
GameCharacter& foo2(GameCharacter& p);
//Copy constructor invoked for 1 time for foo3
GameCharacter foo3(GameCharacter& p);
//Copy constructor invoked for 1 time for foo4
GameCharacter& foo4(GameCharacter p);
// Copy constructor invoked for 0 times for foo5
GameCharacter& foo5(const GameCharacter& p);