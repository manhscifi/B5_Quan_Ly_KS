#include "Hotel.h"

Hotel::Hotel() {}

void Hotel::addPerson(shared_ptr<Person>& person)
{
    personsList.push_back(person);
}

void Hotel::deletePerson(string id)
{
    int flag = 0;
    for (auto i = personsList.begin(); i != personsList.end(); i++)
    {
        string _id = (*i)->getID();
        if (id == _id)
        {
            personsList.erase(i);
            cout << id << " deleted." << id << endl;
            flag++;
            break;
        }
    }
    if (!flag)
    {
        cout << "Not found " << id << endl;
    }
}

int Hotel::calculatePrice(string id)
{
    int flag = 0;
    for (auto i = personsList.begin(); i != personsList.end(); i++)
    {
        string _id = (*i)->getID();
        if (id == _id)
        {
            int price = (*i)->getRoom()->getPrice();
            int days = (*i)->getNumberRent();
            return price * days;
            flag++;
            break;
        }
    }
    if (!flag)
    {
        return 0;
    }
}

void Hotel::printHotel()
{
    system("cls");
    for (auto i = personsList.begin(); i != personsList.end(); i++)
    {
        (*i)->printPeron();
        cout << "\n";
    }
}