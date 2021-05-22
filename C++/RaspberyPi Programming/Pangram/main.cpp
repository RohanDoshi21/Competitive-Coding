#include<iostream>
#include<string>
using namespace std;

int main(){
        int string_length;
        cin >> string_length;
        string sentence;
        cin >> sentence;
        for(int i = 0; i < sentence.length(); i++){
        sentence[i] = toupper(sentence[i]);
        }
        for(int i=0 ; i < sentence.length(); i++)
          {  for(int j=0; j < sentence.length()-i; j++)
            {
                if ((int)sentence[j] > (int)sentence[j+1])
                {
                    char temp;
                    temp = sentence[j];
                    sentence[j] = sentence[j+1];
                    sentence[j+1] = temp;
                }
            }
        
        }
        int count_1 {0};
        for(int i =0; i< sentence.length(); i++)
        {
                if(sentence[i] != sentence[i+1])
                {
                    count_1++;
                }
        }
      //  cout << count_1;
        if(count_1 == 26)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";   
        }
    return 0;
}