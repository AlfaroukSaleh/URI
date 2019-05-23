#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout<<fixed<<setprecision(5);
    double A,B;
    cin >>A>>B;
    double sum =(A*3.5)+(B*7.5);
   
    
    
    cout<<"MEDIA = "<<sum/(7.5+3.5)<<endl;


    return 0;
}
