#include <iostream>
#include <iomanip>
using namespace std;
int main (){
int x,y;int a,b; int sum;
cin>>x>>y;
while (x>0 && y>0){
    sum=0;
    if (x<=y){a=x; b=y;}
    else {a=y; b=x;}
    if (a==b) {sum=a+b;
    cout<<a<<" "<<b<<" "<<"Sum="<<sum<<endl; cin>>x>>y; continue;
    }
    else{
    while(a<=b){
        sum+=a;
        cout<<a<<" ";
        a++;
    }
    cout<<"Sum="<<sum<<endl;
    cin>>x>>y;
    }}



    
    
    
    return 0;}
