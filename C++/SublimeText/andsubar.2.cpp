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
int find( int ans) {
	int x = 1;
	while (x * 2 <= ans) {
		x *= 2;
	}
	return x;
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
	int n;
	cin >> n;
	int res = find(n);
	int resB = n - res + 1;
	if (n == 1){
		cout << n;
		return;
	}
	if (n == res)
		cout << res / 2;
	else
		resB > res / 2 ? cout << resB : cout << res / 2;
}
