#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;
bool isLogin(){
    string username, password, un, pw;
    cout << "Enter Username: ";
    cin >> username;
    cout << "Enter Password: ";
    cin >> password;

    ifstream read("data\\" + username + ".txt");
    getline(read, un);
    getline(read, pw);
    if (un == username && pw == password){
        return true;
    }
    else
    {
        return false;
    }
}
int main(){
    int choice;
    cout << "Enter Operation you want to perform" << endl << "1: LOGIN"<< endl << "2: REGISTER" << endl <<"Your Choice: ";
    cin >> choice;
    switch (choice) {
        case 1:
        {
            if (isLogin()){
                cout << "Successful Login" << endl;
                //system("PAUSE");
                return 0;
            }
            else
            {
                //system("CLS");
                cout << "Invalid Login Credentials" << endl;
                main();
            }
            break;
        }
        case 2:{
            string username, password;
            cout << "Register Username: ";
            cin >> username;
            cout << "Register Password: ";
            cin >> password;
            ofstream file;
            file.open("data\\" + username + ".txt");
            file << username << endl << password;
            file.close();
           // system("CLS");
            cout << "Successfully Registered" << endl;
            main();
            break;
        }

    }

}