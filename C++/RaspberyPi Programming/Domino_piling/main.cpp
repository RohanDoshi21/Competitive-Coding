#include<iostream>
using namespace std;

int main(){
       int rows, columns;
       cin>>rows>>columns;
       int area;
       area = rows*columns;
       int number_of_dominos;
       number_of_dominos = area/2;
       cout<<number_of_dominos;
    return 0;
}