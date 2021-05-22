#include<iostream>
#include<string>
using namespace std;

int main(){
        string s1;
        getline(cin, s1);
        if(s1.length() == 2){
            cout << 0;
        }
        else {
        int number_of_distinct_letters {0};
        char sorted_array[(s1.length()/3)-2];
      
        for(int i = 1, j=0 ; i <= s1.length()-1; i+=3, j++)
        {
           sorted_array[j] = s1[i];
           
        }
        for(int j = 0; j <= (s1.length()/3)-1; j++){
        for(int i = 0; i <= (s1.length()/3)-1-j; i++)
        {
           if((int)sorted_array[i] > (int)sorted_array[i+1])
           {
               char temp;
               temp = sorted_array[i];
               sorted_array[i] = sorted_array[i+1];
               sorted_array[i+1] = temp;
           }
        }
        }
        
       for(int i =0; i <= (s1.length()/3)-1; i++)
       {
           if(sorted_array[i] != sorted_array[i+1])
               number_of_distinct_letters++;
       }
       cout << number_of_distinct_letters;
       
        }
    return 0;
}