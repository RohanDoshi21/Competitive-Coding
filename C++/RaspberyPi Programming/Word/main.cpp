#include<iostream>
#include<string>
using namespace std;

int main(){
       string word;
       cin >> word;
       int uppercase_1 {0};
       int lowercase {0} ;
       for(int i = 0; i < word.length(); i++)
       {
           if(isupper(word[i]))
           {
               uppercase_1++;
           }
           else 
               lowercase++;
       }
       if(uppercase_1 > lowercase)
       {
           for(int i = 0 ; i < word.length(); i++)
           {
               word[i]=toupper(word[i]);
           }
           
       }
       else
          {
              for(int i = 0 ; i < word.length(); i++)
           {
               word[i]=tolower(word[i]);
           }
          }
          
        cout << word;
    return 0;
}