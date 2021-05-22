#include<iostream>
using namespace std;

int main(){
       string source;
       string checker;
       cin >> source >> checker;
       for(int i = 0; i < source.length()/2 ; i++)
       {
           char temp;
           temp = source[i];
           source[i] = source[(source.length()-1)-i];
           source[(source.length()-1)-i] = temp;
       }
       
       if(source == checker)
       {
           cout << "YES";
       }
       else 
           cout << "NO";
    return 0;
}