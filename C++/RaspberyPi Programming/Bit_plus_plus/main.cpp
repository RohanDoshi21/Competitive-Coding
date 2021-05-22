#include<iostream>
#include<string>
using namespace std;

int main(){
        int number_of_lines;
        cin>> number_of_lines;
        int X=0;
        const string A {"X++"};
        const string B {"--X"};
        for(int i =1; i<= number_of_lines ; i++)
        {
            
            string node;
            cin >> node;
            if(node == "X++" || node == "++X")
                X++;
            if(node == "--X" || node == "X--")
                X--;
            
        }
        cout << X;
        
    return 0;
}