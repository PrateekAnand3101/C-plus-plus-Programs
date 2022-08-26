// program that reads grades of students in a class and prints their average
#include<iostream>
using namespace  std;
int main()
{
    double average;
    int numOfStudents;
    int count,curr,sum;
    cout<<"please enter the number of students in the class"<<endl;
    cin>>numOfStudents;
    cout<<"enter the student's grades(separated by spaces):"<<endl;
    
    sum=0;
    for (count= 1; count<=numOfStudents; count++)
    {
        cin>>curr;
        sum+=curr;

    }
    
     average= (double)sum/(double)numOfStudents;
     cout<<"the average is:"<<average;
     return 0;
} 
