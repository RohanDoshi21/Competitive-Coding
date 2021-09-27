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

vi PrimeFactors(int number){
	vi primeFactors;
	while(number%2==0){
		primeFactors.pb(2);
		number /=2;
	}

	for (int i = 3; i <= sqrt(number); i+=2)
	{
		while(number % i ==0){
			primeFactors.pb(i);
			number /= i;
		}
	}

	if(number>2)
		primeFactors.pb(number);

	return primeFactors;
}

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
	int number, number2;
	cin >> number >> number2;
	vi primeFactors;
	primeFactors = PrimeFactors(number);
	bool flag = true;
	for(auto i : primeFactors){
		// cout <<number2 << " " << i << endl;
		if (number2 %i != 0){
			flag = false;
		}
		// cout << i << " ";
	}

	if(flag) cout << "YES";
	else cout << "NO";

}
