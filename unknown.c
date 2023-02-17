#include<stdio.h>
int main()
{

    int t;
    scanf("%d",&t);

    while(t--){
int a,b,c,d,flag=-1,js;
    scanf("%d %d %d",&a,&b,&c);
  for (int i=a;i>0;i--)
  {
    d=i*b;
    
if(d>b)
    {
    if(d==c)
    {
     flag=1;
     js=1;
    
}
else
{
   
  flag=-1;
}
    }
    else
    {
       flag=-1 ;
    }
  }
  if(js==1)
  {
printf("YES");
  }
  else{
    printf("NO");

  }

     }
    return 0;
}