#include<iostream>
#include<string>
using namespace std;

int main(){
        string string_s1;
        cin>>string_s1;
        int num_1 =0,num_2=0,num_3=0;
        for(int i = 0; i <= string_s1.length()-1 ; i++ )
        {
            if(string_s1[i]=='1')
                num_1++;
            if(string_s1[i]=='2')
                num_2++;
            if(string_s1[i]=='3')
                num_3++;
        }
       
        for(int i =0 ; i < num_1; i++)
        {
            cout<<"1";
            if((num_2 == 0 && num_3 == 0) && i == num_1-1)
                return 0;
            else 
                cout << "+";
        }
        for(int i =0; i < num_2; i++)
        {
            cout<<"2";
            if(i == num_2 - 1 && num_3 ==0)
                return 0;
            else 
                cout <<"+";
        }
        for(int i=0 ; i< num_3; i++)
        {
            cout<<3;
            if(i == num_3-1)
                return 0;
            else 
                cout << "+";
        }
        
    return 0;
}