#include<iostream>
#include<string>
#include<algorithm>
using namespace std;



int main(){
       string s1;
       cin >> s1;
       int broken_red {0};
       int broken_blue {0};
       int broken_yellow {0};
       int broken_green {0};
       sort(s1.begin() , s1.end());
     //  cout << s1;
       for(int i= 0 ; i<s1.length(); i++)
       {
           if (s1[i] == 'R' )
               broken_red++;
            else if (s1[i] == 'G' )
               broken_green++;
            else if (s1[i] == 'B' )
               broken_blue++;
             else if (s1[i] == 'Y')
               broken_yellow++;
       }
       
       cout << broken_red << endl << broken_blue << endl << broken_yellow << endl << broken_green;
       
	return 0;
    
}
