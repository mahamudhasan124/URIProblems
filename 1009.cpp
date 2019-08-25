#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    string name;
    double salary,sold,percent,total;
    cin>>name>>salary>>sold;
    percent = ((15*sold)/100);
    total = salary+percent;
    cout<<fixed<<setprecision(2);
    cout<<"TOTAL = R$ "<<total<<endl;
    
}

