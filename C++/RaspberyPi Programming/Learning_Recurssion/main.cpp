#include<iostream>
using namespace std;
void funt(int n){
    if(n > 0)
    {
        funt(n-1);
        cout << n << endl;
    }
}
int main(){
        int x =100000;
        funt(x);
    return 0;
}