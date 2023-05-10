#include <stdio.h>
#include <string.h>

char new[100];
int check(int x,int y,int z)
{
    int ball=0;
    if((x==1)&&(y==1))
        {
        ball=z;
        }
        else
        {
           
            if(x==1){
            ball=y;
         }   
         else
         {
            ball=z;
         }
        }
    return ball;
}
int main()
{
    int arr[8]={1,1,1,0,1,1,1};
    int b;
    int i=0;

    if((arr[i]==1)&&(arr[i+1]==1)&&(arr[i+2]==1))
    {
    
    }
    else
    {
b=check(arr[i],arr[i+1],arr[i+2]);
    }
    if((arr[i+3]==1)&&(arr[i+4]==1)&&(arr[i+5]==1))
    {

    }
    else
    {
b=check(arr[i+3],arr[i+4],arr[i+5]);
    }
        if((arr[i+6]==1)&&(arr[i+7]==1)&&(arr[i+8]==1))
    {

    }
    else
    {
b=check(arr[i+6],arr[i+7],arr[i+8]);
    }

printf("%d",b);

    return 0;

}