#include <stdio.h>
#include<string.h>
void i1(char m[])
{
    printf("enter first string:\n");
    scanf("%s",m);
}

void i2(char n[])
{
    printf("enter second string:\n");
    scanf("%s",n);
}

void con(char x1[], char x2[])
{

    strcat(x1,x2);
}

void op(char s[])
{
    printf("\n Concatenated sting is = %s",s);
}

int main()
{
    char s1[100],s2[100];
    i1(s1);
    i2(s2);
    con(s1,s2);
    op(s1);
    return 0;
}
