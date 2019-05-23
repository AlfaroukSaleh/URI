#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout<<fixed<<setprecision(2);
int n;
int h;
double price;
cin >>n>>h>>price;
double salary=h*price;

cout<<"NUMBER = "<<n<<endl;
cout<<"SALARY = U$ "<<salary<<endl;

    return 0;
}
