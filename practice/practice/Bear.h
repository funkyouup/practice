#pragma once
#include "Animal.h"
class Bear :
	virtual public Animal
{
private :
	int id, age;
public:
	void shout();
	Bear(int id, int age);
	~Bear();
};

