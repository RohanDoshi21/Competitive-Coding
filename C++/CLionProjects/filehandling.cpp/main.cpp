#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file;
    file.open("mydata.txt", ios::in);
    if (!file)
    {
        cout << "Error opening the file" << endl;
        return 1;
    }
    for (size_t i = 0; i < 1; i++)
    {
        cout << "Enter Name" << endl;
        string name;
        cin >> name;
        file << name << " ";
        cout << "Enter Age" << endl;
        int age;
        cin >> age;
        file << age << '\n';
    }
    file.close();
    ifstream file1;
    file1.open("mydata.txt",ios::out);
    while (!file1.eof())
    {
        string name;
        int age;
        file1 >> name >> age;
        cout << name << " " << age << endl;
    }
    file1.close();
    return 0;
}