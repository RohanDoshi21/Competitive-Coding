#include<iostream>
using namespace std;

int main(){
      int price_of_showel;
      cin >> price_of_showel;
      int change;
      cin >> change;
      int min_purchase {0};
      int total_cost;
      total_cost = price_of_showel;
      //cout << total_cost;
      while (total_cost%10 !=0)
      {  
         if((total_cost-change)%10 == 0)
         break;
          min_purchase++;
          total_cost += price_of_showel;
         // cout << total_cost << endl;
         //cout <<total_cost<< endl;
         
      }
     // while ((total_cost%10) != 0 );
  //
      cout << min_purchase+1;
     //
	return 0;
}
