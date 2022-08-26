// break statements in C++

#include <iostream>
using namespace std;

int main(){
    for (int i = 0; i < 5; i++)
    {
        /* code */


        // cout<<i<<endl;(prints till 3)

        if (i==3)
        {
            /* code */
            break;
        }
        cout<<i<<endl;
        // prints till 2
    }
    
    return 0;
}