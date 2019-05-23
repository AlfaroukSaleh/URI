#include <iostream>
#include <math.h>
#include<iomanip>
using namespace std;
int main (){
  
    int x;
    
    int cEven=0,cOdd=0,cPos=0,cNeg=0;
    for (int i=0;i<5;i++){
        cin>>x;
        if (x%2==0)
         cEven++;
        else cOdd++;
        
        if (x>0) cPos++;
        else if (x<0) cNeg++;
        
    }
    cout<<cEven<<" valor(es) par(es)"<<endl;
    cout<<cOdd<<" valor(es) impar(es)"<<endl;
    cout<<cPos<<" valor(es) positivo(s)"<<endl;
    cout<<cNeg<<" valor(es) negativo(s)"<<endl;
    
    return 0;


}
