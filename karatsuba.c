#include <stdio.h>
#include <math.h>


int getlength(int num)
{
    int count = 0;
    while (num != 0)
    {
        num = num / 10;
        count++;
    }
    return count;
}
// x0,x1,y0,y1 variable banao int type ka
int karatsuba(int num1, int num2)
{

    if (num1 < 10 || num2 < 10)
    {
        return num1 * num2;
    }
    int sizex = getlength(num1);
    int sizey = getlength(num2);
    int n = (sizex > sizey) ? sizex : sizey;

    // aage likho
    int x0, x1, y0, y1;
    int m = n / 2;
    x0 = num1 % (int)pow(10, m);
    x1 = num1 / (int)pow(10, m);
    y0 = num2 % (int)pow(10, m);
    y1 = num2 / (int)pow(10, m);

    int p1, p2, p3;
    p1 = karatsuba(x1, y1);
    p2 = karatsuba(x0, y0); 
    p3 = karatsuba((x0 + x1), (y0 + y1));

    return (p1 * (int)pow(10, 2 * m) + (p3 - p2 - p1) * (int)pow(10, m) + p2);
    //code sahi h
}

int main()
{
    int x, y; //run kro
    printf("Enter two numbers:");
    scanf("%d%d",&x,&y);
    int result=karatsuba(x,y);
    printf("result= %d",result); 
}