#include <bits/stdc++.h>
using namespace std;

int q,t,d,a;

int main()
{
    cin >> t;
    while(t --)
    {
        cin >> q >> d;
        while(q --)
        {
            cin >> a;
            if(a >= 10 *d)
            {
                cout << "YES" << endl;
                continue;
            }

            int w = 1;
            for(int i = 1; i < 10; i ++)
            {
                int s  = a - i * d;
                if( s < 0)
                    break;
                else if(s%10 == 0)
                {
                    w = 0;
                    cout << "YES" << endl;
                    break;
                }
            }
            if(w)
                cout << "NO" << endl;
        }
    }
    return 0;
}
