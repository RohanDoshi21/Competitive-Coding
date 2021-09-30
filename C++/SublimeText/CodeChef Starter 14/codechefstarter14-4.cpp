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
void Rohan()
{
	int n;
	cin >> n;
	int odd = 0;
	int even = 0;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		arr[i] = x;
		if (x % 2 == 0)
			even++;
		else
			odd++;
	}
	if (odd >= 1)
		cout << 0;
	else {
		int min = INT_MAX;
		for (int i = 0; i < n; ++i)
		{
			// cout << "PRESENT" << nL;
			int min_no = 0;
			while (arr[i] % 2 == 0) {
				// cout << "PRESENT" << nL;
				// cout << arr[i];
				arr[i] /= 2;
				min_no++;
			}
			if (min > min_no)
				min = min_no;
		}
		cout << min;
	}
}
