#include<iostream>
using namespace std;

int main(){
       long int x, y, n;
       int test_cases;
       cin >> test_cases;
       for(int j=0; j <test_cases; j++)
       {
       cin >> x >> y >> n;
       for(int i = n; i>=0; i--)
       {
           if(i%x==0)
           {
               cout << i-x+y << endl;
               break;
           }
       }
       
       }
	return 0;
}
