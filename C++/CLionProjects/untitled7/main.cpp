#include <iostream>
#include <string>
#include <algorithm>
//#define int long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin >> s1 >> s2;
        int n=s1.length();
        int m=s2.length();
        int sum=0;
        int Min=INT_MAX;

        for(int i=0;i<n;i++)
        {
            int j=0;
            sum=0;
            for(int k=i;k<n&&j<m;k++)
            {
                if(s1[k] == s2[j])
                {
                    j++;
                }
                else
                {
                    sum++;
                }
            }
            if(j==m)
            {
                Min=min(Min,sum);
            }
        }
        if(Min==INT_MAX)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<" "<<Min<<endl;
    }
    return 0;
}