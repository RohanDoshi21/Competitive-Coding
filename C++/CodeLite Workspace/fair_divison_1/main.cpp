#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int test;
    cin >> test;
    for(int j =0; j< test; j++)
    {
    int numb;
       cin >> numb;
       int a[numb];
       for (int i =0 ; i < numb; i++)
       {
           cin >> a[i];
       }
       int addition {0};
           for( int i=0; i< numb; i++)
           {
               addition += a[i];
           }
          // sort(a , a + sizeof(a)/ sizeof(a[0]));
       int sum {0};
       int i {0};
       while (sum < addition/2)
       {
           sum += a[i];
           i++;
       }
       int sum_2 {0};
       while (i < numb)
       {
           sum_2 += a[i];
           i++;
       }
       if (sum == sum_2)
       {
           cout << "YES" << endl;
       }
       else {
           cout <<"NO" << endl;
       }
    }
    
	return 0;
}
