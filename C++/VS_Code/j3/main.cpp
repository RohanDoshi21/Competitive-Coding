#include <iostream>
using namespace std;
/* this main is a nice thing in all the great things that are present in all the software that are present in all the test cases that are
useful is an object 

*/
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