#include<iostream>
using namespace std;
float taxcalculator(char type, float price);
char type;
float price;
main()
{
float result;
cout<<"enter type";
cin>>type;
cout<<"enter price";
cin>>price;
result=taxcalculator(type,price);
cout<<"the final price on a vehical of type "<<type<<"  after adding tax is "<<result;
}
float taxcalculator(char type, float price)
{
    float taxamount;
    float taxrate;
    float finalprice;
    if(type=='M')
    {
        taxrate=6;
        taxamount=price*taxrate/100;
       finalprice=price+taxamount;
       return finalprice;
    }
    if(type='E')
    {
        taxrate=8;
        taxamount=price*taxrate/100;
       finalprice=price+taxamount;
       return finalprice;
    }
    if(type='S')
    {
        taxrate=10;
        taxamount=price*taxrate/100;
       finalprice=price+taxamount;
       return finalprice;
    }
    if(type='V')
    {
        taxrate=12;
        taxamount=price*taxrate/100;
       finalprice=price+taxamount;
       return finalprice;
    }
    if(type='T')
    {
    taxrate=15;
    taxamount=price*taxrate/100;
       finalprice=price+taxamount;
       return finalprice;
    }
     return 0;
}