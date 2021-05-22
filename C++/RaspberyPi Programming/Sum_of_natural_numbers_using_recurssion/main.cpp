#include<iostream>
using namespace std;
void Sum_of_natural_nos(int n)
{
    static int x {0};
    if(n > 0){
        x = x+n;
        Sum_of_natural_nos(n-1);
    }
    else
    cout << x;
}
int main(){
        int nth_number;
        cin >> nth_number;
        Sum_of_natural_nos(nth_number);
        
    return 0;
}