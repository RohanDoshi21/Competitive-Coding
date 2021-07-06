#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string si;
    cin >> si;
    int path = 0;
    int count = 0;
    for (int i = 0; i < n; i++){
        if (si[i] == 'U'){
            path++;
        }
        else{
            path--;
        }
        if (path == 0){
            count ++;
        }
    }
    cout << count;
    return 0;
}