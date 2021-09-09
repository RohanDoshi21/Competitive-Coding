#include <iostream>
using namespace std;
#define ll long long 

int main()
{
    ll t;
    cin >> t;
    while (t--){
        ll test_even = 0;
        ll test_odd = 0;
        ll n,x = 0;
        cin  >> n;
        for (int i = 0; i < n; i++){
                cin >> x;
                if (x %2 == 0)
                    test_even++;
                else test_odd++;
        }
        ll odd = n/2;
        ll even = n/2;

        if (n%2 == 1)
            odd++;
        
        cout << min(odd, test_even) + min(even, test_odd) << endl;
    }  
    return 0;
}