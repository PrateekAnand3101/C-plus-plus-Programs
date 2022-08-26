//program to print from the user the area of the circle by giving the input radius

#include<iostream>
#include<cmath>
using namespace std;
//const double PI=3.14
int main()

{
    double radius,area;
    cout<<"please enter the radius:"<<endl;
    cin>>radius;
    
    area = M_PI*(radius*radius);

    cout<<"the area of the circle is:"<<area<<endl;

    return 0;
}
//if we include #include<cmath> no need of declaring pi as a constant
//in cmath, PI is written as M_PI

