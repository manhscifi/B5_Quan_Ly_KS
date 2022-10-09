#pragma once
#include<iostream>
using namespace std;

class Room
{
protected:
	string _type;
	int _price;
public:
	Room();

	Room(string, int);

	void setType(string);

	string getType();

	void set(int);

	int getPrice();

	void printRoom();
};

