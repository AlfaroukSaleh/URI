#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout<<fixed<<setprecision(1);
double A,B,C;
cin>>A>>B>>C;
double sum = ((A*2)+(B*3)+(C*5));

cout<<"MEDIA = "<<sum/(2+3+5)<<endl;

    return 0;
}
