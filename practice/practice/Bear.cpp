#include "Bear.h"
#include <iostream>

using namespace std;

Bear::Bear(int id, int age):Animal(id){
	this->age = age;
}

void Bear::shout()
{
	cout << "I'am a bear " << id << " " << age << endl;
}

Bear::~Bear()
{
}
