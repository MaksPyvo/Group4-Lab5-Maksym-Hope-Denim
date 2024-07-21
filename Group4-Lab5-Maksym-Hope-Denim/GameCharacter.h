#pragma once
// lab5 -- OOP -- group4-Maksym-Hope-Denim -- GameCharacter class interface
#include<string>
#include<iostream>
using namespace std;
class GameCharacter {
	string name;
	string* tools=new string[3];
public:
	GameCharacter();//Default constructor
    GameCharacter(string name, string tool1, string tool2, string tool3);//Parametarized conatructor
	GameCharacter(GameCharacter& character);//Copy constructor
	GameCharacter& operator=(GameCharacter& character);//Assignment operator overloadig
	~GameCharacter();// Class destructor
};