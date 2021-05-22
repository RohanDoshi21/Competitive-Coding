#include<iostream>
using namespace std;

int main(){
       int problem_nos , time_required;
       cin >> problem_nos >> time_required ;
       int time_available = 240- time_required ;
      // int count_problems {0};
       int i {0};
       while(time_available >= 5*(i+1))
       {   
            i++;
           time_available -= 5*i;
           
        //   cout << time_available << "    " << i << endl << endl << endl; 
       }
       if(problem_nos >= i){
           cout << i;
       }
       else
           cout << problem_nos;
       
    return 0;
}