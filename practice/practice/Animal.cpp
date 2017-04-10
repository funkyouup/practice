#include "Animal.h"
#include<iostream>

using namespace std;


Animal::Animal(int i)
{
	this->id = i;
}

void Animal::shout()
{
	cout << "I'am animal " << id << endl;
}

Animal::~Animal()
{
}
