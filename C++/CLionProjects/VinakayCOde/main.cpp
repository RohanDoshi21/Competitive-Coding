// Last Update Done at 1:58 on 25/09/2021
// Remaining Work
// 1. Exchange Data of student
// 2. Use of Parametirzed Constructor
// 3. Use of Copy Constructor

#include <iostream>
#include <string>
#include <sstream>
#include <ctime>
using namespace std;

int number;
const int max_year = 9999;
const int min_year = 1800;

bool isLeap(int year)
{
    // Return true if year is a multiple of 4 and not multiple of 100 OR year is multiple of 400.
    return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
}
bool isValidDate(int d, int m, int y)
{

    // If year, month and day are not in given range
    if (y > max_year || y < min_year)
        return false;
    if (m < 1 || m > 12)
        return false;
    if (d < 1 || d > 31)
        return false;

    // Handle February month with leap year
    if (m == 2)
    {

        if (isLeap(y))
            return (d <= 29);
        else
            return (d <= 28);
    }

    // Months of April, June, Sept and Nov must have number of days less than or equal to 30.
    if (m == 4 || m == 6 || m == 9 || m == 11)
        return (d <= 30);
    return true;
}
class Details
{

private:
    static int count;

public:
    int College_Id;
    string Name;
    int Roll_No;
    string Class;
    string Division;
    string DOB;
    string Blood_Group;
    string Contact_Address;
    long long int Telephone_No;
    string License_No;
    int flag = 0;

    Details() // Default Constructor
    {
        College_Id = 0;
        Name = "Name";
        Roll_No = 0;
        Class = "Class";
        Division = "Division";
        DOB = "Date of Birth";
        Blood_Group = "Blood Group";
        Contact_Address = "Contact Address";
        Telephone_No = 0;
        License_No = "License Number";
    }

    Details(int id, string n, int rn, string c, string d, string dob, string bg, string ca, long long int tn, string ln) // Parametrized Constructor
    {
        this->College_Id = id;
        this->Name = n;
        this->Roll_No = rn;
        this->Class = c;
        this->Division = d;
        this->DOB = dob;
        this->Blood_Group = bg;
        this->Contact_Address = ca;
        this->Telephone_No = tn;
        this->License_No = ln;
    }

    Details(Details &obj) // Copy Constructor
    {
        College_Id = obj.College_Id;
        Name = obj.Name;
        Roll_No = obj.Roll_No;
        Class = obj.Class;
        Division = obj.Division;
        DOB = obj.DOB;
        Blood_Group = obj.Blood_Group;
        Contact_Address = obj.Contact_Address;
        Telephone_No = obj.Telephone_No;
        License_No = obj.License_No;
    }

    inline void input_College_Id()
    { // Inline Fuction
        cout << "\nEnter College Id (Only Integer) : ";
        while (!(cin >> College_Id))
        {
            cout << "Enter a valid input" << endl;
            cout << "\nEnter College Id (Only Integer) : ";
            cin.clear();
            cin.ignore(1000000000, '\n');
        }
    }

    void input_Name()
    {
        while (true)
        {
            int flag1 = 0;
            cout << "\nEnter Name : ";
            cin.ignore();
            getline(cin, Name);
            for (int i = 0; i < Name.length() - 1; i++)
            {
                if ((Name == "") || (Name[0] == ' ' && Name[1] == ' ') || (Name[i] == ' ' && Name[i + 1] == ' '))
                {
                    cout << "Enter a valid Name" << endl;
                    flag1 = 1;
                    break;
                }
            }
            if (flag1 == 1)
            {
                continue;
            }
            else
            {
                break;
            }
        }
    }

    void input_Roll_No()
    {
        while (true)
        {
            cout << "\nEnter Roll Number (from 1 to 99999): ";
            while (!(cin >> Roll_No))
            {
                cout << "Enter a valid input" << endl;
                cout << "\nEnter Roll Number (from 1 to 99999): ";
                cin.clear();
                cin.ignore(1000000000, '\n');
            }
            if (Roll_No <= 0 or Roll_No > 99999)
            {
                cout << "Enter a valid input." << endl;
            }
            else
            {
                break;
            }
        }
    }

    void input_Class()
    {
        while (true)
        {
            int flag = 0;
            cout << "\nEnter your Class : ";
            cin.ignore();
            getline(cin, Class);
            for (int i = 0; i < Class.length() - 1; i++)
            {
                if ((Class == "") || (Class[0] == ' ') || (Class[i] == ' ' && Class[i + 1] == ' '))
                {
                    cout << "Enter a valid Class : " << endl;
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
            {

                continue;
            }
            else
            {
                break;
            }
        }
    }

    inline void input_Division() // Inline Function
    {
        cout << "\nEnter your Division : ";
        cin >> this->Division;
    }

    void input_DOB()
    {
        string str1, str2, str3, str4 = "/", temp;
        stringstream DOBtemp1, DOBtemp2, DOBtemp3;
        int current_day, current_month, current_year, day, month, year, flag = 0;
        time_t tt;
        struct tm *ti;
        time(&tt);
        ti = localtime(&tt);
        current_day = ti->tm_mday;
        current_month = (ti->tm_mon) + 1;
        current_year = (ti->tm_year) + 1900;
        while (true)
        {
            cout << "\nDate of Birth (DD MM YYYY) : ";
            while (!(cin >> day >> month >> year))
            {
                cout << "Enter a valid Date of Birth" << endl;
                cout << "\nDate of Birth (DD MM YYYY) : ";
                cin.clear();
                cin.ignore(1000000000, '\n');
            }
            if (!(isValidDate(day, month, year)))
            {
                cout << "Enter a valid Date of Birth" << endl;
                continue;
            }
            else
            {
                if (current_year > year)
                {
                    flag = 1;
                }
                else if (current_year == year)
                {
                    if (current_month > month)
                    {
                        flag = 1;
                    }
                    else if (current_month == month)
                    {
                        if (current_day >= day)
                        {
                            flag = 1;
                        }
                        else
                        {
                            flag = 0;
                        }
                    }
                }
                else
                {
                    flag = 0;
                }

                if (flag == 1)
                {
                    DOBtemp1 << day;
                    DOBtemp1 >> str1;
                    DOBtemp2 << month;
                    DOBtemp2 >> str2;
                    DOBtemp3 << year;
                    DOBtemp3 >> str3;
                    DOB = "";
                    DOB.append(str1);
                    DOB.append(str4);
                    DOB.append(str2);
                    DOB.append(str4);
                    DOB.append(str3);
                    break;
                }
                else
                {
                    cout << "You cannot be Born in future" << endl;
                    continue;
                }
            }
        }
    }

    void input_Blood_Group()
    {
        string groups[8] = {"A+", "A-", "B+", "B-", "O+", "O-", "AB+", "AB-"};
        int flag = 0;
        while (true)
        {
            cout << "\nEnter Blood Group : ";
            cin >> Blood_Group;
            for (int i = 0; i < 8; i++)
            {
                if (Blood_Group == groups[i])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                cout << "Enter a valid Blood Group" << endl;
            }
            else
            {
                break;
            }
        }
    }

    inline void input_Contact_Address() // Inline Function
    {
        cout << "\nEnter Contact Address : ";
        cin.ignore();
        getline(cin, Contact_Address);
    }

    void input_Telephone_No()
    {
        while (true)
        {
            cout << "\nEnter 10 Digit Telephone Number (from 1000000000 to 9999999999) : ";
            while (!(cin >> Telephone_No))
            {
                cout << "Enter a valid input" << endl;
                cout << "\nEnter 10 Digit Telephone Number (from 1000000000 to 9999999999) : ";
                cin.clear();
                cin.ignore(1000000000, '\n');
            }
            if (Telephone_No < 1000000000 || Telephone_No > 9999999999)
            {
                cout << "Only Enter 10 Digits." << endl;
            }
            else
            {
                break;
            }
        }
    }

    void input_License_No()
    {
        string str1, str2, str3 = "-";
        stringstream Licensetemp;
        char initial[2];
        unsigned long long int final;
        cout << "\nEnter License Number" << endl;

        cout << "2 Alphabetic State Code : ";
        for (int i = 0; i < 2; i++)
        {
            cin >> initial[i];
            str1 += initial[i];
        }
        while (true)
        {
            cout << "Last 13 Digit License Number (from 1000000000000 to 9999999999999) : ";
            while (!(cin >> final))
            {
                cout << "Enter a valid input" << endl;
                cout << "Last 13 Digit License Number (from 1000000000000 to 9999999999999) : ";
                cin.clear();
                cin.ignore(1000000000, '\n');
            }
            if (final < 1000000000000 || final > 9999999999999)
            {
                cout << "Only Enter 13 Digits." << endl;
            }
            else
            {
                break;
            }
        }
        Licensetemp << final;
        Licensetemp >> str2;
        License_No = "";
        License_No.append(str1);
        License_No.append(str3);
        License_No.append(str2);
    }

    friend istream &operator>>(istream &input, Details &obj1)
    // Here we used friend keyword to access istream form iostream header file
    // operator overloading of >> also a parameterized Constructor having two parameters istream named as input and object obj1
    {
        cout << "\nYour College Id is : " << obj1.College_Id << endl;
        obj1.input_Name();
        obj1.input_Roll_No();
        obj1.input_Class();
        obj1.input_Division();
        obj1.input_DOB();
        obj1.input_Blood_Group();
        obj1.input_Contact_Address();
        obj1.input_Telephone_No();
        obj1.input_License_No();
        obj1.flag = 1;
        count += 1;
    }

    friend ostream &operator<<(ostream &output, Details &obj2)
    // Here we used friend keyword to access ostream form iostream header file
    // Operator overloading of >> also a parameterized Constructor having two parameters ostream named as input and object obj2
    {
        cout << "\nCollege Id : " << obj2.College_Id << endl;
        cout << "Name : " << obj2.Name << endl;
        cout << "Roll No. : " << obj2.Roll_No << endl;
        cout << "Class : " << obj2.Class << endl;
        cout << "Division : " << obj2.Division << endl;
        cout << "Date of Birth : " << obj2.DOB << endl;
        cout << "Blood Group : " << obj2.Blood_Group << endl;
        cout << "Contact Address : " << obj2.Contact_Address << endl;
        cout << "Telephone No. : " << obj2.Telephone_No << endl;
        cout << "License No. : " << obj2.License_No << endl;
    }

    static void getCount(void)
    {
        cout << "\nNumber of Students Profile in Data Base is : " << count << endl;
    }

    ~Details()
    {
        delete &count;
        delete &College_Id;
        delete &Name;
        delete &Roll_No;
        delete &Class;
        delete &Division;
        delete &DOB;
        delete &Blood_Group;
        delete &Contact_Address;
        delete &Telephone_No;
        delete &License_No;
        delete &flag;
    }
};

int Details::count;

void Exchange(Details &obj1, Details &obj2)
{
    Details temp1(obj1);
//    Details temp2(obj2.College_Id, obj2.Name, obj2.Roll_No, obj2.Class, obj2.Division, obj2.DOB, obj2.Blood_Group, obj2.Contact_Address, obj2.Telephone_No, obj2.License_No);

    obj1.Name = obj2.Name;
    obj1.Roll_No = obj2.Roll_No;
    obj1.Class = obj2.Class;
    obj1.Division = obj2.Division;
    obj1.DOB = obj2.DOB;
    obj1.Blood_Group = obj2.Blood_Group;
    obj1.Contact_Address = obj2.Contact_Address;
    obj1.Telephone_No = obj2.Telephone_No;
    obj1.License_No = obj2.License_No;

    obj2.Name = temp1.Name;
    obj2.Roll_No = temp1.Roll_No;
    obj2.Class = temp1.Class;
    obj2.Division = temp1.Division;
    obj2.DOB = temp1.DOB;
    obj2.Blood_Group = temp1.Blood_Group;
    obj2.Contact_Address = temp1.Contact_Address;
    obj2.Telephone_No = temp1.Telephone_No;
    obj2.License_No = temp1.License_No;

}

int main()
{
    int total_students;
    int choice;
    while (true)
    {
        cout << "\nEnter number of students in College : ";
        while (!(cin >> total_students))
        {
            cout << "Enter a valid input" << endl;
            cout << "\nEnter number of students in College : ";
            cin.clear();
            cin.ignore(1000000000, '\n');
        }
        if (total_students > 0)
            break;
        else
            cout << "\nEnter total Students greater than 0" << endl;
    }
    Details students[total_students];
    int number = 0;

    while (true)
    {
        cout << "\nMAIN MENU" << endl;
        cout << "1. Create. " << endl;
        cout << "2. Read. " << endl;
        cout << "3. Update. " << endl;
        cout << "4. Exchange. " << endl;
        cout << "5. Delete. " << endl;
        cout << "-1. Exit. " << endl;

        cout << "\nEnter choice from above menu : ";
        while (!(cin >> choice))
        {
            cout << "Enter a valid input" << endl;
            cout << "\nEnter choice from above menu : ";
            cin.clear();
            cin.ignore(1000000000, '\n');
        }

        if (choice == 1)
        { // Create
            if (number < total_students)
            {
                students[number].College_Id = number + 1;
                cin >> students[number];
                number++;
            }
            else
            {
                cout << "\nOnly " << total_students << " of students data can be Created" << endl;
            }
        }

        else if (choice == 2)
        { // Read
            if (number == 0)
            {
                cout << "\nStudents data not yet Created." << endl;
            }
            else
            {
                int access_id;
                while (true)
                {
                    bool id_present = false, stop_id = false;
                    cout << "\nEnter College Id of student of access Data : ";
                    while (!(cin >> access_id))
                    {
                        cout << "Enter a valid input" << endl;
                        cout << "\nEnter College Id of student of access Data : ";
                        cin.clear();
                        cin.ignore(1000000000, '\n');
                    }
                    for (int i = 0; i < number; i++)
                    {
                        if (students[i].College_Id == access_id)
                        {
                            if (students[i].flag == 1)
                            {
                                cout << students[i];
                                id_present = true;
                                break;
                            }
                            else if (students[i].flag == -1)
                            {
                                cout << "\nThis student left the college" << endl;
                                id_present = true;
                                break;
                            }
                        }
                    }
                    if (!id_present)
                        cout << "\nStudent with College Id " << access_id << " is not Present in college" << endl;

                    while (true)
                    {
                        cout << "\nPress" << endl;
                        cout << "1. If you want to Read Data of other Student. " << endl;
                        cout << "2. If No. " << endl;
                        cout << "\nEnter choice : ";
                        while (!(cin >> choice))
                        {
                            cout << "Enter a valid input" << endl;
                            cout << "\nEnter choice : ";
                            cin.clear();
                            cin.ignore(1000000000, '\n');
                        }
                        if (choice == 1)
                        {
                            stop_id = true;
                            break;
                        }
                        else if (choice == 2)
                        {
                            stop_id = false;
                            break;
                        }
                        else
                            cout << "Enter a valid input.";
                    }

                    if (stop_id)
                        continue;
                    else
                        break;
                }
            }
        }

        else if (choice == 3)
        { // Update
            int access_id;
            while (true)
            {
                bool id_present = false, stop_id = false;
                cout << "\nEnter a College Id to Access Student Data : ";
                while (!(cin >> access_id))
                {
                    cout << "Enter a valid input" << endl;
                    cout << "\nEnter a College Id to Access Student Data : ";
                    cin.clear();
                    cin.ignore(1000000000, '\n');
                }

                for (int i = 0; i < number; i++)
                {
                    if (students[i].College_Id == access_id)
                    {
                        if (students[i].flag == 1)
                        {
                            while (true)
                            {
                                cout << "\nMenu of Data" << endl;
                                cout << "1. Name. " << endl;
                                cout << "2. Roll Number. " << endl;
                                cout << "3. Class. " << endl;
                                cout << "4. Division. " << endl;
                                cout << "5. Date of Birth. " << endl;
                                cout << "6. Blood Group. " << endl;
                                cout << "7. Contact Address. " << endl;
                                cout << "8. Telephone Number. " << endl;
                                cout << "9. License Number. " << endl;
                                cout << "-1. Exit. " << endl;
                                cout << "\nEnter choice from above menu to Update the value : ";
                                while (!(cin >> choice))
                                {
                                    cout << "Enter a valid input" << endl;
                                    cout << "\nEnter choice from above menu : ";
                                    cin.clear();
                                    cin.ignore(1000000000, '\n');
                                }
                                if (choice>=0 && choice<=9)
                                {
                                    Details *ptr = new Details(); // Default Constructor
                                    ptr = &students[i];

                                    if (choice == 1)
                                    {
                                        ptr->input_Name();
                                        continue;
                                    }
                                    else if (choice == 2)
                                    {
                                        ptr->input_Roll_No();
                                        continue;
                                    }
                                    else if (choice == 3)
                                    {
                                        ptr->input_Class();
                                        continue;
                                    }
                                    else if (choice == 4)
                                    {
                                        ptr->input_Division();
                                        continue;
                                    }
                                    else if (choice == 5)
                                    {
                                        ptr->input_DOB();
                                        continue;
                                    }
                                    else if (choice == 6)
                                    {
                                        ptr->input_Blood_Group();
                                        continue;
                                    }
                                    else if (choice == 7)
                                    {
                                        ptr->input_Contact_Address();
                                        continue;
                                    }
                                    else if (choice == 8)
                                    {
                                        ptr->input_Telephone_No();
                                        continue;
                                    }
                                    else if (choice == 9)
                                    {
                                        ptr->input_License_No();
                                        continue;
                                    }
                                    delete ptr;
                                }

                                else if (choice == -1)
                                {
                                    break;
                                }

                                else
                                    cout << "Enter a valid input." << endl;
                            }
                            id_present = true;
                        }

                        else if (students[i].flag == -1)
                        {
                            cout << "\nThis Student left the college.So, Data is Deleted" << endl;
                            id_present = true;
                        }
                    }
                }

                if (!(id_present))
                    cout << "\nStudent with College Id " << access_id << " is not Present in college" << endl;

                while (true)
                {
                    cout << "\nPress" << endl;
                    cout << "1. If you want to Update Data of other Student. " << endl;
                    cout << "2. If No. " << endl;
                    cout << "\nEnter choice : ";
                    while (!(cin >> choice))
                    {
                        cout << "Enter a valid input" << endl;
                        cout << "\nEnter choice : ";
                        cin.clear();
                        cin.ignore(1000000000, '\n');
                    }
                    if (choice == 1)
                    {
                        stop_id = true;
                        break;
                    }
                    else if (choice == 2)
                    {
                        stop_id = false;
                        break;
                    }
                    else
                        cout << "Enter a valid input.";
                }

                if (stop_id)
                    continue;
                else
                    break;
            }
        }


        else if (choice == 4)
        { // Exchange
            while (true)
            {
                int access_id1, access_id2, flag1 = 0, flag2 = 0, flag3, index1, index2;
                bool stop_id = false;
                while (true)
                {
                    bool id_present = false;
                    cout << "\nEnter a College Id to Access First Student Data : ";
                    while (!(cin >> access_id1))
                    {
                        cout << "Enter a valid input" << endl;
                        cout << "\nEnter a College Id to Access First Student Data : ";
                        cin.clear();
                        cin.ignore(1000000000, '\n');
                    }

                    for (int i = 0; i < number; i++)
                    {
                        if (students[i].College_Id == access_id1)
                        {
                            if (students[i].flag == 1)
                            {
                                flag1 = 1;
                                index1 = i;
                                id_present = true;
                                break;
                            }

                            else if (students[i].flag == -1)
                            {
                                cout << "\nThis Student having " << access_id1 << "has already left the college.So, Data is Deleted" << endl;
                                id_present = true;
                                break;
                            }
                        }
                    }

                    if (!(id_present))
                    {
                        cout << "\nStudent with College Id " << access_id1 << " is not Present in college" << endl;
                        continue;
                    }
                    else
                        break;
                }

                while (true)
                {
                    bool id_present = false, stop_id = false;
                    cout << "\nEnter a College Id to Access Second Student Data : ";
                    while (!(cin >> access_id2))
                    {
                        cout << "Enter a valid input" << endl;
                        cout << "\nEnter a College Id to Access Second Student Data : ";
                        cin.clear();
                        cin.ignore(1000000000, '\n');
                    }

                    for (int j = 0; j < number; j++)
                    {
                        if (students[j].College_Id == access_id2)
                        {
                            if (students[j].flag == 1)
                            {
                                flag2 = 1;
                                index2 = j;
                                id_present = true;
                                break;
                            }

                            else if (students[j].flag == -1)
                            {
                                cout << "\nThis Student having " << access_id2 << "has already left the college.So, Data is Deleted" << endl;
                                id_present = true;
                                break;
                            }
                        }
                    }

                    if (!(id_present))
                    {
                        cout << "\nStudent with College Id " << access_id2 << " is not Present in college" << endl;
                        continue;
                    }
                    else
                        break;
                }

                while (true)
                {
                    if (flag1 == 1 && flag2 == 1)
                    {
                        Exchange(students[index1], students[index2]);
                        break;
                    }
                    else
                    {
                        cout << "Exchange is not Possible.Because it Requires two Students Data.";
                        break;
                    }
                }

                while (true)
                {
                    cout << "\nPress" << endl;
                    cout << "1. If you want to Exchange Data of other two Student. " << endl;
                    cout << "2. If No. " << endl;
                    cout << "\nEnter choice : ";
                    while (!(cin >> choice))
                    {
                        cout << "Enter a valid input" << endl;
                        cout << "\nEnter choice : ";
                        cin.clear();
                        cin.ignore(1000000000, '\n');
                    }
                    if (choice == 1)
                        stop_id = true;
                    else if (choice == 2)
                    {
                        stop_id = false;
                        break;
                    }
                    else
                        cout << "Enter a valid input.";
                }

                if (stop_id)
                    continue;
                else
                    break;
            }
        }

        else if (choice == 5)
        { // Delete
            int access_id;
            while (true)
            {
                bool id_present = false, stop_id = false;
                cout << "\nEnter a College Id to Access Student Data : ";
                while (!(cin >> access_id))
                {
                    cout << "Enter a valid input" << endl;
                    cout << "\nEnter a College Id to Access Student Data : ";
                    cin.clear();
                    cin.ignore(1000000000, '\n');
                }

                for (int i = 0; i < number; i++)
                {
                    if (students[i].College_Id == access_id)
                    {
                        if (students[i].flag == 1)
                        {
                            students[i].flag = -1;
                            cout << "\nData of student having College Id " << access_id << " has been Deleted." << endl;
                            id_present = true;
                            // number--;
                        }

                        else if (students[i].flag == -1)
                        {
                            cout << "\nThis Student having " << access_id << "has already left the college.So, Data is Deleted" << endl;
                            id_present = true;
                        }
                    }
                }

                if (!(id_present))
                    cout << "\nStudent with College Id " << access_id << " is not Present in college" << endl;

                while (true)
                {
                    cout << "\nPress" << endl;
                    cout << "1. If you want to Delete Data of other Student. " << endl;
                    cout << "2. If No. " << endl;
                    cout << "\nEnter choice : ";
                    while (!(cin >> choice))
                    {
                        cout << "Enter a valid input" << endl;
                        cout << "\nEnter choice : ";
                        cin.clear();
                        cin.ignore(1000000000, '\n');
                    }
                    if (choice == 1)
                        stop_id = true;
                    else if (choice == 2)
                    {
                        stop_id = false;
                        break;
                    }
                    else
                        cout << "Enter a valid input.";
                }

                if (stop_id)
                    continue;
                else
                    break;
            }
        }

        else if (choice == -1)
        {
            cout << "Thank You" << endl;
            break;
        }

        else
        {
            cout << "Enter a valid input form the menu" << endl;
        }

        Details::getCount();

    }
    return 0;
}