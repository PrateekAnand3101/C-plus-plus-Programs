// program that reads from the user four numbers separated by space
// and count how many even and odd numbers are there
// then the program should output any of the possibilities listed below
// 1. more evens  2.more odds  3.same no. of evens and odds
#include<iostream>
using namespace  std;
int main()
{
    int n1,n2,n3,n4;
    int evenCount=0;
    int oddCount=0;

    cout<<"enter 4 positive integers separated by spaces:"<<endl;
    cin>>n1>>n2>>n3>>n4;
    if (n1%2==0)
    {
        evenCount=evenCount+1;
    }
    else
     oddCount=oddCount+1;
    if (n2%2==0)
    {
        evenCount=evenCount+1;
    }
    else
     oddCount=oddCount+1;
     if (n3%2==0)
     {
         evenCount+=1;
     }
     else
      oddCount+=1;
      if (n4%2==0)
      {
        evenCount+=1;
      }
      else
       oddCount+=1;
    
    cout<<"you have "<<evenCount<<" even numbers and "<<oddCount<<" odd numbers"<<endl;
    
    if (evenCount>oddCount)
    {
        cout<<"more evens"<<endl;
    }
    else if (oddCount>evenCount)
    {
        cout<<"more odds"<<endl;
    }
    else if (evenCount=oddCount)
    {
      cout<<"same number of evens and odds"<<endl;
    }
    
     

    return 0;
}



