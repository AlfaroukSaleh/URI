#include <iostream>
#include <iomanip>
using namespace std;
int main (){
int x=0;

for (int i=1;i<=9;i+=2){
    x=i+6;
        for (int j=0;j<3;j++)
        {
            cout<<"I="<<i<<" "<<"J="<<x<<endl;
            --x;
        }
    
    }

    
    
    
    return 0;}
