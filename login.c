#include<stdio.h>
#include<string.h>
int main()
{

char ab[100]="user",bb[100]="password",js[50],password[50];





    printf("user:");
    gets(js);
    printf("password:");
    gets(password);

    if((strcmp(ab,js)==0)&&(strcmp(password,bb)==0))
    {
    printf("login succful");
    }
    return 0;
}
