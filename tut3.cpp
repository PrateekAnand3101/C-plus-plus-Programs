//program to find the number of days travelled in the format of full weeks and additional days

#include<iostream>
using namespace std;

int main()

{
    int daysTravelled,fullWeeks,remainingDays;
    cout<<"please enter the number of days travelled"<<endl;
    cin>>daysTravelled;
    fullWeeks = daysTravelled/7;
    remainingDays = daysTravelled%7;

    cout<<daysTravelled<<" days are "<<fullWeeks<<" weeks and "<<remainingDays<<" days"<<endl;
    return 0;
}