#include<iostream>
using namespace std;
main()
{
    int hour;
    int days;
    int worker;
    int hournotwork;
    int hourforwork;
    int totalhour;
    int hourleft;
    int hourneeded;
    cout<<"enter hours";
    cin>>hour;
    cout<<"enter days";
    cin>>days;
    cout<<"enter workers";
    cin>>worker;
   hournotwork=days*10*0.1;
   totalhour=days*10-hournotwork;
   hourforwork=totalhour*worker;

    if(hour<hourforwork)
    {
        hourleft=hourforwork-hour;
        cout<<"yes! "<<hourleft<<"hours left"; 
    }
    if(hour>hourforwork)
    {
        hourneeded=hour-hourforwork;
        cout<<"not enough time!"<<hourneeded<<"hour needed";
    }


}