#include<iostream>
using namespace std;
double e(int power, int n)
{
    static double p=1, f=1;
    double r;
    if(n==0)
        return 1;
    else {
        r = e(power , n-1);
        p *= power;
        f *=n;
        return r + p/f;
    }
}
int main(){
      double result = e(4, 511);
      cout << result;
	return 0;
}
