#include <iostream>
#include <math.h>
#include<iomanip>
using namespace std;
int main (){
  
    int x;
    
    int c=0;
    for (int i=0;i<5;i++){
        cin>>x;
        if (x%2==0){
            c++;
        }
        
    }
    cout<<c<<" valores pares"<<endl;
    
    return 0;


}
