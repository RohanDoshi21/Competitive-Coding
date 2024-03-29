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
#define rep(i,a,b) for(int i=(a);i<=(b);i++) 
inline bool check(int x) {
	return x && (!(x & (x - 1)));
}
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
void Rohan()
{
	ll n;
	cin >> n;
	ll count = 1;
	ll longest = 1;
	for (int i = 1; i < n + 1; i++) {
		if (check(i)) {
			if (count > longest ) {
				longest = count;
			}
			count = 1;
		}
		else if (i == n) {
			count++;
			if (count > longest ) {
				longest = count;
			}
		}
		else
			count++;
	}
	cout << longest;
}
