#include<iostream>
using namespace std;

int main(){
       int test_cases;
       cin >> test_cases;
       long int a , b;
       
       int count {0};
       for(int i =0; i<test_cases ; i++){
           cin >> a >> b;
       if(b>a) {
           while (b>a)
       
           {
           a = a+10;
           count++;
       }
       }
       else {
           while (a>b)
       
           {
           b+=10;
           count++;
       }
       }
       if(a==b)
       {
           cout << count << endl;
       }
       else
           cout << count++ << endl;
       }
	return 0;
}
