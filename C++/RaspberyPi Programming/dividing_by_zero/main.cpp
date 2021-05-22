#include<iostream>
using namespace std;

float divide_the_numbers(int x ,int y){
    if (y ==0)
        throw 0;
    return static_cast<float>(x)/y;
}

int main(){
       int a , b, result = 0;
       cin >> a >> b;
     
      try{
          result = divide_the_numbers(a,b);
          cout<<result;
      }
       catch (int)
       {
           cout << "Error: Cannot divide by zero"<<endl;
       }
       
       cout << "Program ends here"<<endl;
    return 0;
}