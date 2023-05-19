#include<stdio.h>

int main()
{
    int n=6;
    int m=97;
    int z=1;
    int count;
    int flag=1;
    int ch=0;
for(int i=0;i<n;i++)
{
    for(int i=0;i<z;i++)
{
    if(flag==1)
    {
        printf("%d",z);
        flag=0;
    }
    else{
          printf("%c",(char)m);
          flag=1;
    }

}
  z=z+1;
  m=m+1;
  if(ch==1)
  {
flag=1;
ch=0;
  }
  else
  {
    flag=0;
    ch=1;
  }
printf("\n");
}

}