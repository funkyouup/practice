#include<iostream>
#include "Animal.h"
#include "Bear.h"
#include <vector>
#include <list>
#include <map>
using namespace std;

int main()
{
	int n;
	/*	
	Animal *a = new Bear(3, 3);
	a->shout();
	cout << sizeof(a) << endl;
	
	vector<int> ivec;
	cout << ivec.size() << endl;
	cout << ivec.capacity() << endl;
	
	ivec.push_back(1);
	cout << ivec.size() << endl;
	cout << ivec.capacity() << endl;
	cout << ivec.front() << endl;

	ivec.push_back(1);
	cout << ivec.capacity() << endl;
	ivec.push_back(1);
	cout << ivec.capacity() << endl;
	ivec.push_back(1);
	cout << ivec.capacity() << endl;
	ivec.push_back(1);
	cout << ivec.capacity() << endl;
	ivec.push_back(1);
	cout << ivec.capacity() << endl;
	ivec.push_back(1);
	cout << ivec.capacity() << endl;

	vector<int>(ivec).swap(ivec);
	cout << ivec.capacity() << endl;
	ivec.clear();

	vector<int> b;
	b.push_back(2);
	b.push_back(3);
	ivec.assign(b.begin(), b.end());
	//ivec.assign(4, 8);
	for (int i = 0; i < ivec.size(); i++)
	{
		cout << ivec.at(i) << " ";
	}


	ivec.~vector<int>();*/

	/*vector<int*> a;
	int *b = new int[3];
	b[0] = 0;
	b[1] = 1;
	b[2] = 2;
	a.push_back(b);
	//cout << a.front() << endl;
	//cout << a.begin() << " " << a.end() << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << a[0] << endl;
	}*/
	/*
	list<int> a;
	list<int>::iterator t;

	a.insert(a.begin(), 1);
	a.insert(a.begin(), 2, 3);
	a.insert(a.end(), 1, 4);

	for (t = a.begin(); t != a.end(); t++)
	{
		cout << *t << endl;
	}*/
	map<int, string> a;
	a.insert(pair<int,string>(1, "hello"));
	a[2] = "world";
	a.insert(map<int, string>::value_type(3, "!"));
	map<int, string>::iterator t;
	for (t = a.begin(); t != a.end(); t++)
	{
		cout << t->first<< endl;
	}
	cin >> n;
}