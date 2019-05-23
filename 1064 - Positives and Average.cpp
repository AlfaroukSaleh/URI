#include <iostream>
#include <math.h>
#include<iomanip>
using namespace std;
int main (){
  
    cout<<fixed<<setprecision(1);
    double x;
    double sum=0;
    int c=0;
    double average;
    for (int i=0;i<6;i++){
        cin>>x;
        if (x>0){
            sum+=x;
            c++;
        }
        
    }
    average=sum/c;
    cout<<c<<" valores positivos"<<endl;
    cout<<average<<endl;
    
    return 0;


}
