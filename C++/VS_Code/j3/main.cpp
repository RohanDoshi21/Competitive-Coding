#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        bool arr[n];
        for (int i = 0; i < n; i++){
            arr[i] = true;
        }
        if ( n != 1){
        for ( int i = 1; i < n; i++){
            for (int j =i; i < n; j+=i){
                if ( arr[j]  == true ){
                    arr[j] = false; 
                }
                else
                    arr[j] = true;
            }
        }
        int count = 0;
        for (int i =0; i< n; i++){
            if (arr[i] == true)
                count++;
        }
        cout << count << endl;
    }
    else{
        cout << n << endl;
    }
    }

    return 0;
}