#include<iostream>
using namespace std;

int recussion(int number, int power)
{
    if(power == 0)
        return 1;
    return recussion(number , power-1)*number; 
}


int main(){
       int number , power;
       cin >> number >> power;
       int result = recussion(number , power);
       cout << result;
	return 0;
}
