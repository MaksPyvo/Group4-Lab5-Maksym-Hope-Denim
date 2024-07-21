// lab5 -- OOP -- group4-Maksym-Hope-Denim
#include <iostream>
#include "GameCharacter.h"
#include "FunctionsForTest.h"

//Conclusions for requirement six: The use of copy constructor depends on use
//of reference variables in functions from requirement 6. 
//That is because reference variables are alias to already existing object
//and do not require any constructor to be called during creation.
//1) foo1 creates an object of GameCharacter class, it requires copy constructor
//to pass the COPY of variable as the parameter which requires use of copy constructor.
//Also Copy constructor is required to copy object returned by foo1 to object in main.
//2)foo2 requires copy constructor to copy object returned by foo2 to object in main,
//but does not require copy constructor to pass the copy of object as parameter.
//as parameter because parameter is reference.
//3)foo3 does not require copy constructor because in has reference as parameter
//and returns reference to the main.
//foo4 does not require copy constructor to copy object returned by foo2 to object in main (returns reference),
//but requires copy constructor to pass the copy of object as parameter.
//foo 5 does not require copy constructor to copy object returned by foo2 to object in main (returns reference),
//and does not require copy constructor to pass the copy of object as parameter. But require default constructor
//to create an object of GameCharacter class inside the function.

int main()
{
	GameCharacter p1;// Using default contractor for creating object p1
	GameCharacter p2 = p1;// using copy constructor for creating object 02
	p1 = p2;// Using assignment operator overloading to replace the data of an existing object p1 with data of object p2 
	//Copy constructor invoked for 2 times for foo1
	foo1(p1);
	// Copy constructor invoked for 0 times for foo2
	foo2(p1);
	//Copy constructor invoked for 1 time for foo3
	foo3(p1);
	//Copy constructor invoked for 1 time for foo4
	foo4(p1);
	// Copy constructor invoked for 0 times for foo5
	foo5(p1);
}

