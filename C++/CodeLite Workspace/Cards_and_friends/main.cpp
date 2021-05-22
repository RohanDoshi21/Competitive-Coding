#include<iostream>
using namespace std;

int main(){
       int test_cases;
       cin >> test_cases;
       for (int i =1; i<= test_cases ; i++)
       {
           int width_1;
           int height_1;
           cin >> width_1;
           cin >> height_1;
           int friends_no;
           cin >> friends_no;
           int sheets {1};
           if (friends_no > sheets)
           {
               if(width_1 %2 ==0)
               {
                   while ((width_1 %2) == 0)
                   {
                   width_1 /=2;
                   sheets *= 2;
                   
                   }
               }
               if (height_1 %2 ==0)
               {
                   while (height_1 %2 == 0)
                   {
                   height_1 /=2;
                   sheets *= 2;
                   
               }
           }
           }
           if (sheets >= friends_no)
           {
               cout << "YES" << endl;
           }
           else{
               cout << "NO" << endl;
           }
       }
	return 0;
}
