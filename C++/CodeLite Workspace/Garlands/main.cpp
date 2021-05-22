#include<iostream>
#include<string>
using namespace std;

int main(){
       string s1;
       cin >> s1;
       int broken_red {0};
       int broken_blue {0};
       int broken_yellow {0};
       int broken_green {0};
       for(int i=0 ; i <s1.length() ; i++)
       {
           if(s1[i] == s1[i+4])
           {
               
           }
           else if (s1[i] == 'R' || s1[i+4]== 'R')
               broken_red++;
            else if (s1[i] == 'G' || s1[i+4]== 'G')
               broken_green++;
            else if (s1[i] == 'B' || s1[i+4]== 'B')
               broken_blue++;
             else if (s1[i] == 'Y' || s1[i+4]== 'Y')
               broken_yellow++;
       }
       cout << broken_red-1 << endl << broken_blue-1 << endl << broken_yellow-1 << endl << broken_green-1;
	return 0;
}
