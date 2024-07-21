#include <iostream>
#include <string>
#include"GameCharacter.h"
// lab5 -- OOP -- group4-Maksym-Hope-Denim -- GameCharacter class implementation
using namespace std;

GameCharacter::GameCharacter() {//Default constructor
	cout << "The default constructor is called" << endl;
	this->name = "miner";
	this->tools[0] = "pickaxe";
	this->tools[1] = "shovel";
	this->tools[2] = "bow";
}
GameCharacter::GameCharacter(string name, string tool1 , string tool2, string tool3) {//Parametarized constructor
	cout << "The parametarized constructor is called" << endl;
	this->name = name;
	this->tools[0] = tool1;
	this->tools[1] = tool2;
	this->tools[2] = tool3;
}
GameCharacter::GameCharacter(GameCharacter& character) {//Copy constructor
	cout << "The copy constructor is called" << endl;
	this->name = character.name;
	this->tools[0] = character.tools[0];
	this->tools[1] = character.tools[1];
	this->tools[2] = character.tools[2];
}
GameCharacter&  GameCharacter:: operator=(GameCharacter& character) {//Overloaded assignment operator
	cout << "The assignment operator is called" << endl;
	if (this != &character) {
		this->name = character.name;
		this->tools[0] = character.tools[0];
		this->tools[1] = character.tools[1];
		this->tools[2] = character.tools[2];
	}
	return *this;
}
GameCharacter::~GameCharacter() {//Class destructor
	delete[] tools;
}
