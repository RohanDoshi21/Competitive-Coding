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
void Rohan()
{
	int n;
	int s;
	cin >> n >> s;
	string s1;
	cin >> s1;
	int ones[s];
	for (int i = 0; i<s; i++){
		ones[i] = 0;
	}
	for (int i = 0; i < n - s + 1; i++){
		 string x1 = s1.substr(i, s);
		 for (int j = 0; j< s; j++){
		 	if (x1[j] == '1'){
		 		ones[j]++;
		 	}
		 }
	}
	int noOfOnes = 0;
	for(int i = 0; i < s; i++){
		if (ones[i] %2 != 0){
			noOfOnes++;
		}
	}
	cout << noOfOnes;
}
