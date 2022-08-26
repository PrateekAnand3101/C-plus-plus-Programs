// program that reads positive integers from 1 to n
// and prints numbers from 1 to n
#include <iostream>
using namespace std;
int main()
{
    int n;
    int counter;
    cout<<"enter a poaitive integer"<<endl;
    cin>>n;
    // using 'for' loop
    /*for (counter = 1; counter<= n; counter++)
    {
        cout<<counter<<endl;
    }*/
    
    // using 'while' loop
    counter=1;
    while (counter<=n)
    {
        cout<<counter<<endl;
        counter++;
    }
    
    {
        /* code */
    }
    
    return 0;
}