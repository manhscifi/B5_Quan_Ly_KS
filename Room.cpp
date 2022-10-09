#include "Room.h"

Room::Room()
{
	_type = "";
	_price = 0;
}

Room::Room(string type, int price)
{
	_type = type;
	_price = price;
}

void Room::setType(string type)
{
	_type = type;
}

string Room::getType()
{
	return _type;
}

void Room::set(int price)
{
	_price = price;
}

int Room::getPrice()
{
	return _price;
}

void Room::printRoom()
{
	cout << "Room type: " << _type << endl;
	cout << "Room price: " << _price << endl;
}
