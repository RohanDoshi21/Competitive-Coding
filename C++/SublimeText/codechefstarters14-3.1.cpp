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
bool checkNO(vector<int>& arr, int k) {
	int count = 0;
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] == i + 1) count++;
	}
	return (count == k);
}
void findAns(int n, int k, vi &ans) {
	ans.push_back(n);
	for (int i = k + 1; i < n; i++) ans.push_back(i);
	if (checkNO(ans, k)) {
		for (auto i : ans) cout << i << " ";
		return;
	}
	else {
		cout << -1;
		return;
	}
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
	int n, k;
	cin >> n >> k;
	int temp = k;
	vi ans;
	for (int i = 1; i <= k; i++) {
		ans.push_back(i);
	}
	if (k == n - 1) {
		cout << -1;
		return;
	}
	else if (k == n) {
		for (auto i : ans) cout << i << " ";
		return;
	}
	findAns(n , k, ans);
}
