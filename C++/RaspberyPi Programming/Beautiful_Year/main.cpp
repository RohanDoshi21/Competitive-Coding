#include<iostream>
using namespace std;

int main(){
    int a, b , c , d;
    int year;
    cin >> year;
       for(int i = year+1; i <= 9012; i++)
        {
            year++;
            
            a = year/1000;
            b = year/100 % 10;
            c = year/10 % 10;
            d = year%10;
            if(a!=b && a!=c && a!= d && b!=c && b!=d && c!=d)
            {
                break;
            }
            
        }
        cout << year;
    return 0;
}