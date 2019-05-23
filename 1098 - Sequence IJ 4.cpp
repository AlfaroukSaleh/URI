#include <iostream>
#include <iomanip>
using namespace std;
int main (){
int x;

for (double i=0;i<=2;i+=0.2){
    x=1;
        for (int j=1;j<=3;j++)
        {
            cout<<"I="<<i<<" "<<"J="<<i+x<<endl;
            ++x;
        }
    
    }

    
    
    
    return 0;}
