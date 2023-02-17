# include<stdio.h>
#define pi 3.14
int area(int r)
{
    float area;
    area = pi*r*r ;
    printf("\narea of the circle is  =%f\n",area);
    return 0;
}
int circum(int r)
{
    float cum;
    cum=2*pi*r;
     printf("\ncircumference of the circle  is =%f\n",cum);
}
    int main()
    {
        int r,d;
        char ch;
        printf("enter the value:");
        scanf("%d",&r);
       printf("Is the given value is radius or not (Y/N)");
        
        scanf("%s",&ch);
               
       if((ch=='Y')||(ch=='y'))
       {
        area(r);
        circum(r);    
            
       }
       else
    {
       d=r/2;
         area(d);
        circum(d);
    }
        
      
        

        return 0;
    } 
