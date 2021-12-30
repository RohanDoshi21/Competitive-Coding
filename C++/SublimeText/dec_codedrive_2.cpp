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

string s2 = "code";
string s3 = "chef";

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

void Rohan()
{
	int n;
	cin >> n;
	string s1;
	cin >> s1;
	std::size_t found = s1.find(s2);
	std::size_t found2 = s1.find(s3);
  	if (found!=std::string::npos)
  	{
  		if (found2!=std::string::npos){
  			if (found < found2){
  				cout << "AC";
  				return;
  			}
  		}
  	}
  	cout << "WA";
}
