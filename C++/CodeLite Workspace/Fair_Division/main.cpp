#include<iostream>
using namespace std;

int main(){
       int test_cases;
       cin >> test_cases;
       for (int i=1; i <= test_cases; i++)
       {    
            int no_of_1s {0};
            int no_of_2s {0};
           int candies_total;
           cin >> candies_total;
           int candies[candies_total];
           for (int i = 0; i< candies_total; i++)
           {
               cin >> candies[i];
               if(candies[i] == 1)
               {
                   no_of_1s++;
               }
               else{
                   no_of_2s++;
               }
               
           }
           int addition {0};
           for( int i=0; i< candies_total; i++)
           {
               addition += candies[i];
           }
           if(addition %2 != 0)
           {
               cout << "NO" << endl;
           }
           else if(no_of_1s == no_of_2s && candies_total %2 ==0)
                {
                    cout << "YES" << endl;
                }
            else if(no_of_2s +1 == no_of_1s -1 && candies_total %2 !=0 )
            {
                cout << "YES" << endl;
            }
            else if ( no_of_1s %2==0 && no_of_2s %2 ==0 && candies_total %2 == 0)
            {
                cout << "YES" << endl;
            }
            else 
            {
                cout << "NO" << endl;
            }
           
       }
	return 0;
}
