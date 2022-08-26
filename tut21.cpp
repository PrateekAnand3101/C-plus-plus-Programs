// arrays in C++
#include <iostream>
using namespace std;

int main(){
    int marks[4]={23,35,46,67};
   /* marks[1]=455;  //you can change the value of an array
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;*/

    // using 'for' loop
    // for (int i = 0; i < 4; i++)
    // {
        /* code */
        // cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
    // } 
    
    // using 'while' loop
    // int i=0;
    // while (i<4)
    // {
    //     /* code */
    //     cout<<marks[i]<<endl;
    //     i++;
    // }
    
    // using 'do-while' loop
    // int i=0;
    // do
    // {
    //     /* code */
    //     cout<<marks[i]<<endl;
    //     i++;
    // } while (i<4);
    
    int*p=marks;
    cout<<"the value of marks[0] is "<<*p<<endl;            
    cout<<"the value of marks[1] is "<<*(p+1)<<endl;
    cout<<"the value of marks[2] is "<<*(p+2)<<endl;  
    cout<<"the value of marks[3] is "<<*(p+3)<<endl; 
    return 0;
}