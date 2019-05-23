#include <iostream>
#include <math.h>
#include<iomanip>
using namespace std;
int main (){
  
    double x; int c=0;
    for (int i=1;i<=6;i++){
        cin>>x;
        if (x>0)
            c++;
    }
    cout <<c<<" valores positivos"<<endl;
    return 0;


}
