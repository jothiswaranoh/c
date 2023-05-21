import java.util.*;

class js
{
    public static void main(String[] args)
    {
String str="BreakingBad";
char[] str1=str.toCharArray();
int count=0;
int m=0,n=0;

        char[] str2 = new char[str1.length];
        char[] str3 = new char[str1.length];

for(int i=0;i<str1.length;i++)
{
    if(((int)str1[i]>64)&&((int)str1[i]<90))
    {
        count++;
        
    }
    if(count==1)
    {
        str2[n]=str1[i];
        n++;
    }
    if(count==2)
    {
           str3[m]=str1[i];
        m++;
    }
}
for(char a:str3)
{
   System.out.print(a); 
}
for(char a:str2)
{
   System.out.print(a); 
}

// System.out.print(count);
    }
}