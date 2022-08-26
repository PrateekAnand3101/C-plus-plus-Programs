// program to determine parity(even or odd)

#include<iostream>
using namespace std;
int main()

{
    int userInput;
    cout<<"enter a positive integer"<<endl;
    cin>>userInput;
    // using two-way if
    /*if (userInput%2==0)
    {
        cout<<userInput<<" is an even number"<<endl;
    }
    else
    cout<<userInput<<" is an odd number"<<endl;*/

    // using one-way if
    if (userInput%2==0)
    {
        cout<<userInput<<" is an even number"<<endl;
    }
    if (userInput%2==1)
    {
        cout<<userInput<<" is an odd number"<<endl;
    }
    
    
    return 0;
}   