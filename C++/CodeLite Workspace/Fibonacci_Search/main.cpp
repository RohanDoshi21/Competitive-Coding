#include<iostream>
using namespace std;

int Fibonacci_Generator(int a, int b)
{   
    if (a+b < 30)
    {
    int c = a + b;
    cout << c << endl; 
    Fibonacci_Generator(b , c);
    }
}
int main(){
      int a = 0;
      int b = 1;
      cout << a << endl << b << endl;
      Fibonacci_Generator(a ,b);
	return 0;
}
