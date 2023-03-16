#include<stdio.h>
int tn,pn,hn;
int traingle(n)
{
tn=n(n+1)/2;
return tn;
}
int per(n)
{
pn=n(3*n-1)/2;
return pn;
}
int hex(n)
{
hn=n(2*n-1);
return hn;
}
int main()
{
    int n=1;
    int t=100;
    int count;
    int m=1;
    while(t--)
    {
        count=traingle(n);
        if(count==per(m))
        {

        }
        n++;
    }

return 0;
}