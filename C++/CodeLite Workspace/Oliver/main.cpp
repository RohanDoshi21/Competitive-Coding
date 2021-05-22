#include<iostream>
using namespace std;

int cal(int no, int j, int count, int sum){
    
    //cout << no << j << count << sum;
    for(int i =0; i<j; i++)
    {
        sum += j;
        count++;
        if(count == no)
        {
            return sum;
        }
            
    }
    cal(no, j+1, count, sum);
}

int main(){
      int test_cases;
      cin >> test_cases;
      for(int i =0; i < test_cases; i++)
      {
          int no_days;
          cin >> no_days;
         
          cout << cal(no_days, 1, 0 ,0) << endl;
      }
	return 0;
}
