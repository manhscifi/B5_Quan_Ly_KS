#include "Person.h"
Person::Person()
{
    _name = "";
    _age = 0;
    _ID = "";
    _numberRent = 0;
    _room = make_shared<Room>();
}

Person::Person(string name, int age, string ID, int numberRent, shared_ptr<Room> room)
{
    _name = name;
    _age = age;
    _ID = ID;
    _numberRent = numberRent;
    _room = room;
}

string Person::getName()
{
    return _name;
}

void Person::setName(string name)
{
    _name = name;
}

int Person::getAge()
{
    return _age;
}

void Person::setAge(int age)
{
    _age = age;
}

string Person::getID()
{
    return _ID;
}

void Person::setID(string ID)
{
    _ID = ID;
}

int Person::getNumberRent()
{
    return _numberRent;
}

void Person::setNumberRent(int numberRent) {
    _numberRent = numberRent;
}

shared_ptr<Room> Person::getRoom() {
    return _room;
}

void Person::setRoom(shared_ptr<Room> room) {
    _room = room;
}

void Person::printPeron()
{
    cout << "Name: " << _name << endl;
    cout << "Age: " << _age << endl;
    cout << "ID: " << _ID << endl;
    cout << "Day(s): " << _numberRent << endl;
    _room->printRoom();
}