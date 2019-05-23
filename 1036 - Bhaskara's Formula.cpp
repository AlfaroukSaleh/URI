#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main (){
    float a,b,c;
    cin >>a>>b>>c;
    float x,y;
    cout<<fixed<<setprecision(5);
    
    if (a==0 || ((b*b)- (4*a*c))<0 )
        cout <<"Impossivel calcular"<<endl;
    else {
    x= ((-b)+ sqrt ((b*b)- (4*a*c)))/(2*a);
    y= ((-b)- sqrt ((b*b)- (4*a*c)))/(2*a);
    cout <<"R1 = "<<x<<endl;
    cout <<"R2 = "<<y<<endl;
    }
    
    
    
    return 0;


}
