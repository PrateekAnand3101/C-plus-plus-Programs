// continue statements in C++

#include <iostream>
using namespace std;

int main(){
    
    for (int i = 0; i < 6; i++)
    {
        /* code */

        if (i==3)
        {
            /* code */
            continue;
        }
        
        cout<<i<<endl;
    }
    
    return 0;
}