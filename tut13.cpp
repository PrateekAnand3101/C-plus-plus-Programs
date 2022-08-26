// program that inputs grades and classifies pass and fail accordingly
#include<iostream>
using namespace std;
int main()
{
    int grade1,grade2;
    cout<<"please enter the grades separated by a space:"<<endl;
    cin>>grade1>>grade2;

    if (grade1<60 && grade2<60)
    {
        cout<<"student failed :("<<endl;
    }
    else if (grade1>=95 && grade2>=95)
    {
        cout<<"student graduated with honours! :)"<<endl;
    }
    else
    cout<<"student graduated"<<endl;
    

    return 0;
}
