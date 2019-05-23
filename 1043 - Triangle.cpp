#include <iostream>
#include <math.h>
#include<iomanip>
using namespace std;
int main (){
    
    cout<<fixed<<setprecision(1);
    double a,b,c;
    cin >>a>>b>>c;
    
    if ((a+b)>c && (a+c)>b && (b+c)>a)
        cout <<"Perimetro = "<<(a+b+c)<<endl;
    else 
        cout<<"Area = "<<(c*(a+b)/2)<<endl;
        
    return 0;


}
