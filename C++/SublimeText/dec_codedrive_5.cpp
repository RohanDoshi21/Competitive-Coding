#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
#define nL "\n"
#define pb push_back
#define mk make_pair
#define vi vector<int>
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9

void Rohan();
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t = 1;
	cin >> t;
	while (t--) {
		Rohan();
		cout << "\n";
	}

#ifndef ONLINE_JUDGE
	cout << "\nTime Elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " sec\n";
#endif

	return 0;
}

int countDivisors(int n)
{
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            // If divisors are equal,
            // count only one
            if (n / i == i)
                cnt++;
 
            else // Otherwise count both
                cnt = cnt + 2;
        }
    }
    return cnt;
}

void Rohan()
{
	ll n;
	map <int, int> m1;
	cin >> n;
	for (ll i = 2; i <= n; i++ ) {
		if (n%i == 0){
			ll m = n/i;
			m1.insert(mk<int, int>(m, countDivisors(m)));
			// cout << m << " " << countDivisors(m) << endl;
		}
	}
	
	int max = INT_MIN;
	int max_ele;
	for (auto i : m1){
		if (i.second > max){
			max_ele = i.first;
		}
	}
	// cout << max_ele;
	cout << n/max_ele;
}
