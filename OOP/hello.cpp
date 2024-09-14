#include <iostream>
using namespace std;

class Complex
{
   int a,b;//private data member

public:

Complex(void);
void printNumber()
{
    cout<<"your number is" <<a<<"+"<<b<<"i"<<endl;
}
};

Complex ::Complex(void)
{
    a= 10;
    b =0;
    
}

int main()
{
    Complex c1,c2,c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    return 0;
    //test
}