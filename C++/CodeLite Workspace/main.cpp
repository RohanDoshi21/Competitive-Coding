#include<iostream>
using namespace std;

int main(){
      int number_of_events;
      cin >> number_of_events;
      int  total_crimes {0};
      int number_of_officers {0};
      
      for(int i=1 ; i<= number_of_events; i++)
      {     
          int test;
          cin >> test;
          if(test > 0)
          {
              number_of_officers += test;
          }
          else if ( number_of_officers == 0) {
              total_crimes++;
          }
          else if (number_of_officers>0)
          {
              number_of_officers--;
          }
      }
      cout << total_crimes;
	return 0;
}
