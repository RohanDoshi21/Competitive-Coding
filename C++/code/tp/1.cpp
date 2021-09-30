#include <iostream>
using namespace std;
int abs (int n)
{
    return ( (n>0) ? n : ( n * (-1)));
}
 
//DDA Function for line generation
void DDA(int X0, int Y0, int X1, int Y1)
{
    // calculate dx & dy
    int dx = X1 - X0;
    int dy = Y1 - Y0;
 
    // calculate steps required for generating pixels
    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);
 
    // calculate increment in x & y for each steps
    float Xinc = dx / (float) steps;
    float Yinc = dy / (float) steps;
 
    // Put pixel for each step
    float X = X0;
    float Y = Y0;
    for (int i = 0; i <= steps; i++)
    {
        cout << int(X) << " " << int(Y) << endl; // put pixel at (X,Y)
        X += Xinc;            // increment in x at each step
        Y += Yinc;           // increment in y at each step
        // delay(100);          // for visualization of line-
                             // generation step by step
    }
}
void circleBres(int xc, int yc, int r)
{
    int x = 0, y = r;
    int d = 3 - 2 * r;
    // drawCircle(xc, yc, x, y);
    cout << x << " " << y << endl;
    while (y >= x)
    {
        // for each pixel we will
        // draw all eight pixels
         
        x++;
 
        // check for decision parameter
        // and correspondingly
        // update d, x, y
        if (d > 0)
        {
            y--;
            d = d + 4 * (x - y) + 10;
        }
        else
            d = d + 4 * x + 6;
        cout << x << " " << y << endl;
        // drawCircle(xc, yc, x, y);
        // delay(50);
    }
}
int main() {
    // circleBres(0,0,8);
    DDA(9,7,2,3);
    return 0;
}