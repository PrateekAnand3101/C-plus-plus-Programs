// program that reads from the user a simple mathematical expression(operators allowed +,-,*,/)
// and prints it's value

#include<iostream>
using namespace std;
int main()

{
    double arg1,arg2;
    char op;
    double res;
cout<<"Please enter an expression in the form of arg1 op arg2:"<<endl;
cin>>arg1>>op>>arg2;

switch(op)
{
    case '+':
    res=arg1+arg2;
    cout<<"the sum is:"<<res<<endl;
    break;

    case '-':
    res=arg1-arg2;
    cout<<"the difference is:"<<res<<endl;
    break;

    case '*':
    res=arg1*arg2;
    cout<<"the product is:"<<res<<endl;
    break;

    case '/':
    res=arg1/arg2;
    cout<<"the quotient is:"<<res<<endl;
    break;

    
}
    return 0;
}