#include<iostream>
#include<algorithm>
using namespace std;

int main(){
       int people_number;
       cin >> people_number;
       int money[people_number];
       for(int i =0 ; i < people_number; i++)
       {    
           int money_1;
           cin >> money_1;
           money[i] = money_1;
       }
       sort( money , money + sizeof(money)/sizeof(money[0]));
       int max = money[people_number-1];
       int gifts{0};
       for(int i =0 ;i<people_number; i++)
       {
           gifts += max-money[i];
       }
       cout << gifts;
	return 0;
}
