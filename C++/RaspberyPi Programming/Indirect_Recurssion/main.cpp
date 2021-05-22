#include<iostream>
using namespace std;
void fun_2(int);
void fun_1(int n){
    if(n>0)
    {
        cout << n << endl;
        fun_2(n-1);
        //cout << n << endl;
    }
    
}
void fun_2(int n){
    if(n > 1)
    {
        cout << n << endl;
        fun_1(n/2);
        //cout << n << endl;
    }
}
int main(){
        int a =20;
        fun_1(a);
    return 0;
}