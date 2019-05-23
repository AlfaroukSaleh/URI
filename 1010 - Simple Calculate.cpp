#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout<<fixed<<setprecision (2);
 int p1code,p1units;
 double p1price;
  int p2code,p2units;
  double p2price;
  
  cin>>p1code>>p1units>>p1price;
  cin>>p2code>>p2units>>p2price;
  
  cout<<"VALOR A PAGAR: R$ "<<(p1units*p1price)+(p2units*p2price)<<endl;


    return 0;
}
