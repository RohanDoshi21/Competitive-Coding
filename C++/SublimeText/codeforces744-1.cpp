#include <iostream>
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

// #ifndef ONLINE_JUDGE
// 	cout << "\nTime Elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " sec\n";
// #endif

	return 0;
}
void Rohan()
{
	string s1;
	cin >> s1;
	if (s1.length() % 2 != 0) {
		cout << "NO";
		return;
	}
	else {
		int countA = 0;
		int countB = 0;
		int countC = 0;
		for (auto i : s1)
		{
			if (i == 'A')
				countA++;
			else if (i == 'B')
				countB++;
			else
				countC++;
		}

		if (countA > countB || countC > countB) {
			cout << "NO";
			return;
		}
		countB -= countA;
		countB -= countC;
		if (countB == 0) {
			cout << "YES";
			return;
		}
		else {
			cout << "NO";
			return;
		}

	}

}
