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
    cout<<"\nTime Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec\n";
#endif

	return 0;
}

bool isVovel(char i){
	if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u'){
		return true;
	}
	else
		return false;
}

void Rohan()
{
	int n;
	cin >> n;
	string s1;
	string s2;
	cin >> s1;
	cin >> s2;

	int noVovel = 0;
	for (int i = 0; i < n; ++i)
	{
		if (s1[i] == '?' && isVovel(s2[i])){
			noVovel++;
		}
	}
}
