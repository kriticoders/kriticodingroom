// program to find sum of two numbers//
#include <stdio.h>
int sum(int x, int y); // function declration

int main()
{
    int a, b, s;
    printf("enter the values of a and b number is :");
    scanf("%d %d", &a, &b);
    s = sum(a, b); // function call
    printf("sum of %d and %d is %d\n", a, b, s);
}
int sum(int x, int y)
{
    // function definition
    int s;
    s = x + y;
    return s;
}
