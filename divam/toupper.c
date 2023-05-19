#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int str_length(char str[]) {

    int count; 

    for (count = 0; str[count] != '\0'; ++count);
    

    return count; 
}
int main()
{
    char a[]="this is a world";
    int flag=1;
   
    int length = str_length(a); 
    for(int i=0;i<length;i++)
    {

if(flag==1)
{
 char x=(char)((int)a[i]-32);
 printf("%c",x);

 flag=0;

}
else
{
printf("%c",a[i]);
}
if(a[i]==' ')
{
 
    flag=1;
}

    }

}