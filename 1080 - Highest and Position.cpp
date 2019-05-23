#include <iostream>
using namespace std;
int main (){
    int x; int max=0;int pos;

    for (int i=1;i<=100;i++){
        cin>>x;
        if (max<x) 
        {max=x; 
        pos=i;}
        
       
        }
    cout<<max<<endl<<pos<<endl;
return 0;}

