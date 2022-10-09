#include "doLogic.h"

void doLogic::run()
{
    shared_ptr<Hotel> hotel = make_shared<Hotel>();
    shared_ptr<Person> person;
    shared_ptr<Room> room;
    string name; int age; string ID; int days;
    while (true) {
        cout << "Hotel Management\n";
        cout << "Enter 1: Insert new person\n";
        cout << "Enter 2: Detele person by ID\n";
        cout << "Enter 3: Calculator payment by ID\n";
        cout << "Enter 4: Show information\n";
        cout << "Enter 5: To exit\n";
        int op;
        cin >> op;
        switch (op)
        {
        case Insert:
            system("cls");
            cout << "\tInsert new person:\n";
            cout << "Enter Name: "; cin.ignore();
            getline(cin, name);
            cout << "Enter Age: "; cin >> age;
            cout << "Enter ID: "; cin.ignore(); getline(cin, ID);
            cout << "Enter Day(s): ";  cin >> days;

            char type;
            cout << "Enter room type A or B or C: "; cin >> type;

            switch (tolower(type))
            {
            case TypeA:
                room = make_shared<RoomTypeA>();
                break;
            case TypeB:
                room = make_shared<RoomTypeB>();
                break;
            case TypeC:
                room = make_shared<RoomTypeC>();
                break;
            default:
                cout << "Invalid.\n";
                break;
            }
            person = make_shared<Person>(name, age, ID, days, room);
            hotel->addPerson(person);
            cout << "Added\n\n";

            break;

        case Detele:
        {
            system("cls");
            cout << "\tDetele person by ID:\n";
            cout << "Enter ID: "; cin.ignore(); getline(cin, ID);
            hotel->deletePerson(ID);
            cout << "\n";
            break;
        }
        case Calculator:
        {
            system("cls");
            cout << "\tCalculator payment by ID:\n";
            cout << "Enter ID: "; cin.ignore(); getline(cin, ID);
            cout << "Payment: " << hotel->calculatePrice(ID) << endl;
            cout << "\n";
            break;
        }
        case Display:
        {
            cout << "\tShow information\n";
            hotel->printHotel();
            break;
        }
        case Exit:
        {
            exit(0);
            break;
        }
        default:
            cout << "Invalid\n";
        }
    }
}
