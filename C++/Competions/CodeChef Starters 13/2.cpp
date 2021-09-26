#include <iostream>
#include <algorithm>
using namespace std;

unsigned main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int p, a, b, c, x, y;
        cin >> p >> a >> b >> c >> x >> y;
        // minimization function here
        /*
            x = fulgadi number
            xb = cost to light 1 annar
            yc = cost to light chakra
            b = cost of annar
            c = cost of chakra
            a = cost of fulgadi
            total cost of 1 annar = a*x + b;
            total cost of 1 chakra = a*y + c;
            total money we have = p
            total annars/chakras = p/a*c*y; OR p/a*b*y; 
        */

        long long int amount = min((a * x + b), (a * y + c));
        long long int totalNumber = p / amount;

        cout << totalNumber << endl;
    }
    return 0;
}