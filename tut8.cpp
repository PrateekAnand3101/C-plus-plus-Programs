//program to compute the absolute value

#include<iostream>
using namespace std;
int main()

{
    int userInput,absValue;
    cout<<"please enter an integer:"<<endl;
    cin>>userInput;
    // if(userInput<0)
    // userInput = userInput*(-1);
    // cout<<userInput<<endl;

    // if (userInput<0)
        // userInput*=(-1);
        // cout<<userInput<<endl;
   
    if (userInput<0)
    {
        absValue = userInput*(-1);

    }
    cout<<"|"<<userInput<<"|"<<"="<<absValue;
    return 0;
}