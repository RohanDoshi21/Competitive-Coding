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
ll findAns(ll arr[], int n) {
	ll ans = 0;
	ans += arr[1] / 2 - arr[0] + arr[n - 2] / 2 - arr[n - 1];
	for (ll i = 1; i < n - 1; i++) {
		ans += (arr[i - 1] + arr[i + 1]) / 2 - arr[i];
	}
	return ans;
}
void Rohan()
{
	ll n;
	cin >> n;
	ll arr[n];
	for (ll i = 0; i < n; i++) {
		cin >> arr[i];
	}
	ll result = 0;

	sort(arr, a + n);

	do {
		result += abs(findAns(arr, n));
	} while (next_permutation(arr, arr + n));

	result /= n;

	cout << result;
}
