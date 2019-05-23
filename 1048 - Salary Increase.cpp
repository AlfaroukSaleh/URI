#include <iostream>
#include <math.h>
#include<iomanip>
using namespace std;
int main (){
   
    cout<<fixed<<setprecision(2);
    double salary; int percent; double raise;
    cin >>salary;
    
    if (salary >=0 && salary <=400)
    {
        percent=15;
        raise=(salary*((double)percent/100));
        salary+=raise;
    }
    else if (salary >400 && salary <=800)
    {
        percent=12;
        raise=(salary*((double)percent/100));
        salary+=raise;
    }
    else if (salary >800 && salary <=1200)
    {
        percent=10;
        raise=(salary*((double)percent/100));
        salary+=raise;
    }
    else if (salary >1200 && salary <=2000)
    {
        percent=7;
        raise=(salary*((double)percent/100));
        salary+=raise;
    }
    else if (salary >2000 )
    {
        percent=4;
        raise=(salary*((double)percent/100));
        salary+=raise;
    }
    
    cout <<"Novo salario: "<<salary<<endl;
    cout<<"Reajuste ganho: "<<raise<<endl;
    cout<<"Em percentual: "<<percent<<" %"<<endl;
    
    return 0;


}
