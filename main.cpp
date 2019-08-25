#include <iostream>
#include<iomanip>

using namespace std;

int main()
{

    float a,b,avg;
    cin>>a>>b;
    avg = ((a*3.5)+(7.5*b))/(3.5+7.5);

    cout<<fixed<<setprecision(5);
    cout<<"MEDIA = "<<avg<<endl;
}
