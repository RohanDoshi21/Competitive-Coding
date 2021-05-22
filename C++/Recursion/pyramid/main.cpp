#include <iostream>
using namespace std;
void pyramid(int n){
    static int p = n;
    if(n>0){
        pyramid(n-1);
    
        for (size_t i = 0; i < p-n; i++)
        {
            cout << " ";
        }
        for (size_t i = 0; i < 2*n-1; i++)
        {
            cout << "*";
        }
        cout << endl;
        
    }
}
int main() {
    int n;
    cin >> n;
    pyramid(n);
    return 0;
}