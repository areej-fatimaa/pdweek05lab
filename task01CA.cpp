#include<iostream>
using namespace std;
int sum();
int num1=10;
int num2=20;
main()
{
int x=num1;
num1=100;
x=20;
num2=sum();
cout<<num2<<"  "<<num2;
}
int sum()
{
    num2=40;
    return num2+num2;
}