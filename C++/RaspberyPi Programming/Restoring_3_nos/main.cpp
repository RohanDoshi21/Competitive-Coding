#include<iostream>
using namespace std;

int main(){
       int a[4];
       cin >> a[0] >> a[1] >> a[2] >> a[3];
       for(int i = 0; i<4; i++)
       {
           for(int j =0; j<4-i; j++)
           {
               if(a[i] > a[i+1])
               {
                   int temp;
                   temp = a[i];
                   a[i] = a[i+1];
                   a[i+1] = temp;
               }
           }
       }
       cout << a[3] -a[0] <<endl << a[3] -a[1] << endl << a[3] - a[2] ;
    return 0;
}