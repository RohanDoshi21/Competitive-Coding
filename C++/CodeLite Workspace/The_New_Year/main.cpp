#include<iostream>
#include<algorithm>
using namespace std;

int main(){
      int  a[3];
      
      for (int i=0 ; i<3 ; i++)
      {
          cin >> a[i];
      }
      sort(a , a+sizeof(a)/sizeof(a[0]));
      int distance;
      distance = (a[1] - a[0]) + (a[2] - a[1]);
      cout << distance;
	return 0;
}
