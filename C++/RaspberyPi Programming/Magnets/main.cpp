#include<iostream>
#include<string>
using namespace std;

int main(){
        int number_of_magnets;
        cin >> number_of_magnets;
        string magnet[number_of_magnets];
        int paired_magnets {0};
        for(int i = 0 ; i < number_of_magnets; i++)
        {
            cin >> magnet[i];
        }
        for(int i = 0; i < number_of_magnets; i++)
        {
            if(magnet[i] != magnet[i+1])
            {
                paired_magnets++;
            }
        }
        cout << paired_magnets;
    return 0;
}