#include<iostream>
#include<string>
using namespace std;

float calculate_average(int x , int y){
    if (y ==0 )
        throw 0;
    if (y < 0 || x < 0){
        throw string{"Non negative numbers not allowed "};
    }
        return static_cast<float>(x)/y;
}

int main(){
       int dist;
       int fuel;
       float kpl;
       
       cin>>dist>>fuel;
       
       try {
           kpl = calculate_average(dist , fuel);
           cout << kpl;
       }
       catch(int &exception){
           cout << "Cannot calculate with Zero litres"<<endl;
       }
       catch(string &exception){
            cerr<<exception<<endl;
        }
    return 0;
}