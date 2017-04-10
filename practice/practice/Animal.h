#pragma once
class Animal
{
private :
	int id;
public:
	Animal(int i);
	virtual void shout();
	virtual ~Animal();
};

