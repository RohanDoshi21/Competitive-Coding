/* this is a program to find out result of 
   1+1/2+1/3+1/4+1/N */

#include<iostream>
using namespace std;

void calculate_result(float last_number){
    float result =0;
    if(last_number < 0)
        throw 0;
    for(float i = 1 ; i <=last_number; i++)
    {
        result += 1/i;
    }
    
    cout << "The result is "<< result <<endl;
    
}


int main(){
       
        float last_number;
        cout<<"Enter the last number ";
        try{
            cin >> last_number;
            calculate_result(last_number);
        }
        catch(int &ex){
            cerr << "Cannot be negative"<<endl;
        }
        
    return 0;
}