#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--){
        int no;
        cin >> no;
        int arr[no];
        int same = 0;
        cin >> arr[0];
        same = arr[0];
        int unique = 0;
        bool count = false;
        for (int i = 1; i < no; ++i) {
            cin >> arr[i];
            if (arr[i] != arr[i-1] && arr[i] != same){
                unique = i+1;
            }
            if (i==2 ){
                if (arr[1] == arr[2] && arr[0]!=arr[2])
                    count = true;
            }
        }
        !count ? cout << unique << endl : cout << 1 << endl;
    }
    return 0;
}
