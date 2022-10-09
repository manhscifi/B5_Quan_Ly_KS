#pragma once
#include"RoomTypeA.h"
#include"RoomTypeB.h"
#include"RoomTypeC.h"
#include"Person.h"
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

class Hotel
{
private:
	vector<shared_ptr<Person>> personsList;
    
public:
    Hotel();

    void addPerson(shared_ptr<Person>&);

    void deletePerson(string);

    int calculatePrice(string);

    void printHotel();
};

