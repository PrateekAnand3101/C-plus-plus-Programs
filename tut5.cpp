//program that reads from the user a single character and prints its ascii value

#include<iostream>
using namespace std;

int main()
{
    int asciiValue;
    char inputChar;
    cout<<"please enter a character:"<<endl;
    cin>>inputChar;
    asciiValue = inputChar;
    cout<<"the ascii value of "<<inputChar<<" is "<<asciiValue;
    
    return 0;

}