#pragma once
#include"Room.h"
#include<string>
#include<iostream>
#include<memory>
using namespace std;

class Person
{
   string _name;
   int _age;
   string _ID;
   int _numberRent;
   shared_ptr<Room> _room;

public:
    Person();

    Person(string, int, string, int , shared_ptr<Room>);

    string getName();

    void setName(string);

    int getAge();

    void setAge(int);

    string getID();

    void setID(string);

    int getNumberRent();

    void setNumberRent(int);

    shared_ptr<Room> getRoom();

    void setRoom(shared_ptr<Room>);

    void printPeron();
};

