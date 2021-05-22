#include<iostream>
using namespace std;

int main(){
       long long int function_1 = 0;
       long long int n;
        cin >> n;
        for(int i=1; i <= n; i++)
        {
            function_1 = function_1 + (((-1)^i)*i);
        }
        cout << function_1;
    return 0;
}