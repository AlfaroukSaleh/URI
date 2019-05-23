#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout<<fixed<<setprecision(3);
double R;
cin>>R;
double pi= 3.14159;
double volume= (4.0/3)*pi*R*R*R;

cout<<"VOLUME = "<<volume<<endl;

    return 0;
}
