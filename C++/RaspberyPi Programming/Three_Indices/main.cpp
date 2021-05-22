#include<iostream>
using namespace std;

int main(){
        int test_cases;
        cin >> test_cases;
        for(int i = 1; i <= test_cases; i++)
        {   
            int length_permutation;
            cin >> length_permutation;
            int a[length_permutation];
            for (int i = 0; i < length_permutation; ++i)
                cin >> a[i];
            for (int i = 1; i < length_permutation - 1; ++i) {
		if (a[i] > a[i - 1] && a[i] > a[i + 1]) {
			cout << "YES" << endl;
			cout << i << ' ' << i + 1 << ' ' << i + 2 << endl;
            break;
        }
            }
            cout << "NO" << endl;
        }
    return 0;
}