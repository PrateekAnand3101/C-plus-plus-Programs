// program that reads from the user time in 24-hour format and then prints it in 12-hour format
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int hour24,minute24;
    int hour12,minute12;
    string period;
    char temp;
    cout<<"please enter the time in 24-hour format"<<endl;
    cin>>hour24>>temp>>minute24;

    minute12=minute24;
   
   if (hour24<12 && hour24>0)
   {
       period="am";
       hour12=hour24;
       cout<<hour24<<":"<<minute24<<" is "<<hour12<<":"<<minute12<<period;
   }
   else if (hour24==0){
       period="am";
       hour12=12;
       cout<<hour24<<":"<<minute24<<" is "<<hour12<<":"<<minute12<<period;
   }
   else if (hour24==12)
   {
       period="pm";
       hour12=12;
       cout<<hour24<<":"<<minute24<<" is "<<hour12<<":"<<minute12<<period;
   }
   else if (hour24>12)
   {
       period="pm";
       hour12=hour24-12;
       cout<<hour24<<":"<<minute24<<" is "<<hour12<<":"<<minute12<<period;
   }
   return 0;
}
   
   
   
