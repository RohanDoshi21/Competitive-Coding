#include <iostream>
int permutation1(int permutaion, int even_integer){
    int sum{0};
    if (permutaion %2 == 0) {
        while (even_integer > 0) {
            sum += permutaion;
            permutaion -= 2;
            even_integer--;
        }
    }
        else{
            permutaion--;

            while (even_integer > 0){
                sum += permutaion;
                permutaion -=2;
                even_integer--;
        }
    }
    return sum;
}
using namespace std;
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
       // int sum{0};
        int permutation;
        int even_integer;
        cin >> permutation;
        cin >> even_integer;
        cout << permutation1(permutation, even_integer) << endl;
    }
    return 0;
}
