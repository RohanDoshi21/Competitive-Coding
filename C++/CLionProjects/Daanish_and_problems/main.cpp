#include <iostream>

using namespace std;
int main() {
    int test;
    cin >> test;
    int arr[10] ;
    for (int i = 0; i < test; ++i) {


        for (int j = 0; j < 10; ++j) {
            cin >> arr[j];
        }
        int deletex;
        cin >> deletex;

        for (int k = 9; k >=0; k--) {
            if (arr[k]>deletex){
                cout << k+1 << endl;
                break;
            }
            else
                deletex -= arr[k];
        }


    }
    return 0;
}
