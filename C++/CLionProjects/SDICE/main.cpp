#include <iostream>
using namespace std;
typedef long long ll;
int main() {
    int t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        ll sum = 0;
        int rem = (n%4);
        sum = (n/4)*44;

        if (n>=4){
            if (rem == 0){
                sum += 16;
            }
            if (rem == 1){
                sum += 32;
            }
            if (rem == 2){
                sum += 44;
            }
            if (rem == 3){
                sum += 55;
            }
            cout << sum << endl;
        }
        else
        {
            if (rem==1)
                rem = 20;
            else if (rem == 2)
                rem = 36;
            else if (rem == 3)
                rem = 51;
            cout << rem << endl;
        }
    }
    return 0;
}
