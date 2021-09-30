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

bool checkArr(int arr[], int n, int k) {
	int count = 0;
	for (int i = 0; i < n; ++i)
	{
		if (arr[i] == i + 1) {
			count++;
		}
	}
	if (k == count) {
		for (int i = 0; i < n; ++i)
		{
			cout << arr[i] << " ";
		}
		return true;
	}
	return false;
}

bool check(int n, int k) {
	int arr[n];
	for (int i = 0; i < n; i++) {
		arr[i] = i + 1;
	}
	do {
		if (checkArr(arr, n, k)) {
			return true;
		}
	} while (next_permutation(arr, arr + n));
	return false;
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
	if (!check(n, k))
		cout << "-1";
}