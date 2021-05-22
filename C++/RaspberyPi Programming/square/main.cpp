#include<iostream>
using namespace std;
bool is_square(int number) {
   for (int i = 1; i * i <= number; i++) {
      if ((number % i == 0) && (number / i == i)) {
         return true;
      }
   }
   return false;
}

int main(){
        int test_cases;
        cin >> test_cases;
        for(int i =1; i <= test_cases; i++)
        {
            int width_1;
            int height_1;
            cin >> width_1 >> height_1;
            int width_2;
            int height_2;
            cin >> width_2 >> height_2;
            long area {0};
            area = width_1*height_1 + width_2*height_2;
            if(is_square(area))
            {
                cout << "Yes" << endl;
            }
            else cout << "No" << endl;
        }
    return 0;
}