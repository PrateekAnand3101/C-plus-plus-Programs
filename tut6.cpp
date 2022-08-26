//program that prints from the user a lowercase letter and provides its corresponding uppercase letter

#include<iostream>
using namespace std;

int main()

{
    char ch1,ch2;
    cout<<"please enter a lowecase letter:"<<endl;
    cin>>ch1;
    ch2 = ch1-32;
    cout<<"the correspondin uppercase letter is:"<<ch2;
    return 0;
}