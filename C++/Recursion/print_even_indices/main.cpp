#include <iostream>
#include <vector>
using namespace std;
void print_even_digits(int vecc[],int n){
        if(n>1){
            if((n-1)%2==0)
            cout << vecc[n-1] << " ";
            print_even_digits(vecc,n-1);
        }
}
int main() {
    int n;
    cin >> n;
    int vect[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> vect[i];
    }
    print_even_digits(vect,n);
    cout << vect[0];
    return 0;
}