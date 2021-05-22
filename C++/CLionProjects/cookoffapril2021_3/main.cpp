
#include <bits/stdc++.h>
using namespace std;

int countDistinct(int arr[], int n)
{

    unordered_set<int> s;


    int res = 0;
    for (int i = 0; i < n; i++) {
        if (s.find(arr[i]) == s.end()) {
            s.insert(arr[i]);
            res++;
        }
    }

    return res;
}

int main() {
    int t;
    cin >>t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        int distinct = countDistinct(arr, n);
        //cout <<"dis " << distinct << endl;
        distinct > n - x ? cout << n - x << endl : cout << distinct << endl;
    }
    return 0;
}
