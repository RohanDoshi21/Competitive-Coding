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

const int MAX = 26;

string printRandomString(int n)
{
	char alphabet[MAX] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
	                       'h', 'i', 'j', 'k', 'l', 'm', 'n',
	                       'o', 'p', 'q', 'r', 's', 't', 'u',
	                       'v', 'w', 'x', 'y', 'z'
	                     };

	string res = "";
	for (int i = 0; i < n; i++)
	{
		if (i > n / 2) {
			char x = alphabet[rand() % MAX];
			while (x == res[n - i - 1]) {
				x = alphabet[rand() % MAX];
			}
			res = res + x;
		}
		else {
			res = res + alphabet[rand() % MAX];
		}
	}

	return res;
}

void Rohan()
{
	int n;
	cin >> n;
	cout << printRandomString(n);
}
