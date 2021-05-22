#include<iostream>
#include<string>
using namespace std;

int main(){
      string New_Year_Men;
      string Christmas_Men;
      string Jumbles_word;
      cin >> New_Year_Men >> Christmas_Men >> Jumbles_word;
    //  cout << New_Year_Men.length() << endl << Christmas_Men.length() << endl << Jumbles_word.length();
      if(New_Year_Men.length() + Christmas_Men.length() != Jumbles_word.length())
      {     
          //cout << "TEST";
          cout << "NO";
      }
      else{
         
        New_Year_Men += Christmas_Men;
      //  cout << New_Year_Men.length();
         
        for(int i = 0; i < New_Year_Men.length(); i++)
          {
              for( int j=0; j< New_Year_Men.length()-i; j++)
              {
                  if((int)New_Year_Men[j] > (int)New_Year_Men[j+1])
                  {
                      char temp;
                      temp = New_Year_Men[j];
                      New_Year_Men[j] = New_Year_Men[j+1];
                      New_Year_Men[j+1] = temp;
                  }
              }
          }
          
        //  cout << New_Year_Men;
          
          for(int i = 0; i < New_Year_Men.length(); i++)
          {
              for( int j=0; j< New_Year_Men.length()-i; j++)
              {
                  if((int)Jumbles_word[j] > (int)Jumbles_word[j+1])
                  {
                      char temp;
                      temp = Jumbles_word[j];
                      Jumbles_word[j] = Jumbles_word[j+1];
                      Jumbles_word[j+1] = temp;
                  }
              }
          }
          
         // cout << Jumbles_word;
          
          if( Jumbles_word == New_Year_Men)
          {
              cout << "YES";
          }
          else
            cout << "NO";
        
      }
    return 0;
}