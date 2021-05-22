#include <stdio.h>
int main()
{
    int a,i,c=0,b,j,n,l,q;
    scanf("%d",&a);
    for(i=0;i<a;i++);
    {
        scanf("%d",&b);
        for(j=0;j<b;j++)
        {
            scanf("%d %d %d",&l,&n,&q);
            if(n%2==0)
                c=n/2;
            else
            {
                if(l==q)
                    c=n/2;
                else
                    c=(n/2)+1;
            }
            printf("\n%d",c);
            c=0;
        }
    }

    return 0;
}