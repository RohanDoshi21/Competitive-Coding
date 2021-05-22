#include<iostream>
#include<string>
using namespace std;

int main(){
       string num_1;
       string num_2;
      // string answer;
        cin >> num_1;
        cin >> num_2;
        for(int i =0; i < num_1.length(); i++)
        {
            if(num_1[i] == num_2[i])
            cout << "0";
            else cout << "1";
        }
    return 0;
}