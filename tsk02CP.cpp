#include<iostream>
using namespace std;
double volume_of_pyramid(float length,float width,float height);
float length;
float width;
float height;
string unit;
float volumeofpyramid;
main()
{
float result;
cout<<"enter length";
cin>>length;
cout<<"enter height";
cin>>height;
cout<<"enter width";
cin>>width;
cout<<"enter unit";
cin>>unit;
result=volume_of_pyramid(length,width,height);
cout<<result<<" cubic  "<<unit;
}
double volume_of_pyramid(float length,float width,float height)
{
    float width1,height1,length1;
    if(unit=="centimeter")
    {
        length1=length*100;
        width1=width*100;
        height1=height*100;
        volumeofpyramid=(length1*width1*height1)/3.0;
        return volumeofpyramid;
    }
    
    if(unit=="kilometer")
    { 
        length1=length/1000;
        width1=width/1000;
        height1=height/1000;
        volumeofpyramid=(length1/width1/height1)/3.0;
        return volumeofpyramid;
    }
    if(unit=="milimeter")
    { 
        length1=length*10;
        width1=width*10;
        height1=height*10;
        volumeofpyramid=(length1*width1*height1)/3.0;
        return volumeofpyramid;

    }
           
}