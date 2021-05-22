#include<iostream>
#include<algorithm>
using namespace std;

int main(){
      int color[4];
      int number_of_pairs;
      for(int i = 0; i<= 3; i++)
      {
          cin >> color[i];
      }
    sort(color, color+4);
    for(int i = 0; i <3; i++)
    {
        if(color[i] == color[i+1])
        {
            number_of_pairs++;
            }
    }
    cout << number_of_pairs;
    return 0;
}