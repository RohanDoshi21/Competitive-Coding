#include<iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--) {
        //int N;
        double sq;
        int count;
        int arr[2000];
        int j = 0;
            for (int i = 0; i < 1000000; ++i) {
                while (j < 2000)
                sq = sqrt(i); //finding the square root of N
                if (sq == (int) sq) //checking if sq is integer
                {
                    arr[j] = i;
                    j++;
                    break;
                }
            }
        }
            int x;
            cin >> x;
            if (x == 0){
                continue;
            }
            else if (x == -1){
                exit(-1);
            }
            else
            {
                break;
            }

        }
    }
    return 0;
}