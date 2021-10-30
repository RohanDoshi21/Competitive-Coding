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
	// cin >> t;
	while (t--) {
		Rohan();
		cout << "\n";
	}

#ifndef ONLINE_JUDGE
    cout<<"\nTime Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec\n";
#endif

	return 0;
}
void Rohan()
{
	ll n;
	ll k;
	cin >> n >> k;

	ll ans = -1;

	ll r = k-1;
	ll l =0;
	while(l<=r){
		ll m = (l+r)/2;

		ll sum = m*(2*k-m-1)/2;
		if(n-1<=sum){
			ans = m;
			r = m - 1;
		}
		else
			l = m + 1;
	}
	cout << ans;
}
