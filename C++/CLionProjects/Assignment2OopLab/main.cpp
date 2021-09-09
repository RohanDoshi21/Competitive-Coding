// !Author: Rohan Doshi
// ?Problem statement Group A - 1

/*
Develop a program in C++ to create a database of student’s
information system containing the following information:
Name, Roll number, Class, Division, Date of Birth, Blood group,
Contact address, Telephone number, Driving license no. and other.
Construct the database with suitable member functions.
Make use of constructor, default constructor, copy constructor, destructor,
static member functions, friend class, this pointer, inline code and dynamic memory
allocation operators-new and delete as well as exception handling.
*/

#include <iostream>
using namespace std;

class StudentDatabase
        {
    unsigned int *RollNo, *Division;
    unsigned long *TelephoneNo, *DLNo;
    string *Name, *Class, *BloodGroup, *ContactAddress, *Birthday;
    static int noOfObjects;

        public:
            StudentDatabase() // default constructor
            {
                RollNo = new unsigned int;
                Division = new unsigned int;
                TelephoneNo = new unsigned long;
                DLNo = new unsigned long;
                Name = new string;
                Class = new string;
                BloodGroup = new string;
                ContactAddress = new string;
                Birthday = new string;
                noOfObjects++;
            }

            void create() // Create operation database
            {
                string temp;
                cout << "Enter your Name: ";
                cin >> temp;
                *Name = temp;
                cout << "Enter Roll no: ";
                cin >> *RollNo;
                cout << "Enter your division: ";
                cin >> *Division;
                cout << "Enter your Telephone number: ";
                cin >> *TelephoneNo;
                cout << "Enter your Driving licence number: ";
                cin >> *DLNo;
                cout << "Enter your Class: ";
                cin >> temp;
                *Class = temp;
                cout << "Enter your blood group: ";
                cin >> temp;
                *BloodGroup = temp;
                cout << "Enter your Contact address: ";
                cin >> temp;
                *ContactAddress = temp;
                cout << "Enter your birthday: ";
                cin >> temp;
                *Birthday = temp;
            }

            void read(); // read operation database

            void update(); // update operation database

            void deleteDB(); // delete operation database

            StudentDatabase(StudentDatabase &obj) //Copy Constructor
            {
                this->RollNo = new unsigned int;
                *RollNo = *obj.RollNo;
                this->Division = new unsigned int;
                *Division = *obj.Division;
                this->TelephoneNo = new unsigned long;
                *TelephoneNo = *obj.TelephoneNo;
                this->DLNo = new unsigned long;
                *DLNo = *obj.DLNo;
                this->Name = new string;
                *Name = *obj.Name;
                this->Class = new string;
                *Class = *obj.Class;
                this->BloodGroup = new string;
                *BloodGroup = *obj.BloodGroup;
                this->ContactAddress = new string;
                *ContactAddress = *obj.ContactAddress;
                this->Birthday = new string;
                 * Birthday = *obj.Birthday;
                noOfObjects++;
            }

            ~StudentDatabase() //destructor
            {
                delete RollNo, Division, TelephoneNo, DLNo, Name, Class, BloodGroup, ContactAddress, Birthday;
                noOfObjects--;
            }

            static int ObjectCount()
            {
                return noOfObjects;
            }
        };

void StudentDatabase::read()
{
    cout << "Name is " << *Name << endl;
    cout << "Roll no is " << *RollNo << endl;
    cout << "Division is " << *Division << endl;
    cout << "Telephone no is " << *TelephoneNo << endl;
    cout << "DLNo is " << *DLNo << endl;
    cout << "Class is " << *Class << endl;
    cout << "Blood group is " << *BloodGroup << endl;
    cout << "Contact address is " << *ContactAddress << endl;
    cout << "Birthday is " << *Birthday << endl;
}


int StudentDatabase::noOfObjects = 0;

void StudentDatabase::update() {
    string temp;
    cout << "Update Name (previous name:" << *this->Name << ") for default press space" <<endl;
    cin >> temp;
    *Name = temp;
}

void StudentDatabase::deleteDB() {
    cout << "Data for this user is now empty" << endl;
//    this->~StudentDatabase();
}

int main()
{
    StudentDatabase s1;
    s1.create();
    s1.read();
    s1.update();
    s1.read();
    cout << "No of objects present at this time " << StudentDatabase::ObjectCount() << endl;
    s1.deleteDB();
    StudentDatabase s2 = s1;
    s1.read();
    s1.deleteDB();
    cout << "No of objects present at this time " << StudentDatabase::ObjectCount() << endl;
    return 0;
}