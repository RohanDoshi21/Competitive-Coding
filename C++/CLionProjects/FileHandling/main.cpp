#include <iostream>
#include <fstream>
using namespace std;

void write (int noOfLines)
{
    fstream fs;
    cout << "In write Function\nNow Enter the lines!" << endl;
    fs.open(R"(C:\Users\rohan\Documents\GitHub\Competitive-Coding\C++\CLionProjects\FileHandling\Assignment7.txt)", ios::in);
    if (!fs)
    {
        cout << "Error opening the file" << endl;
        exit(1);
    }
    string line;
    for (int i = 0; i < noOfLines; i++)
    {
        cin.ignore();
        getline(cin, line);
        fs << line << endl;
    }
    fs.close();
}

void read()
{
    fstream fs;
    fs.open(R"(C:\Users\rohan\Documents\GitHub\Competitive-Coding\C++\CLionProjects\FileHandling\Assignment7.txt)", ios::out);
    string line;
    while (!fs.eof())
    {
        getline(fs, line);
        cout << line << endl;
    }
    fs.close();
}

int main()
{
    cout << "Enter number of lines to be written in a file ";
    int noOfLines = 0;
    cin >> noOfLines;
    write(noOfLines);
    read();
    return 0;
}