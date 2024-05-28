#include<stdio.h>
char fun();//function declaration
void main(){
    char ch;
    ch+fun();
    printf("ch=%c",ch);

}
char fun() //function definition
{
char c;
printf("enter a character");
scanf("%c",&c);
return 0;
    
   
   
}


    

