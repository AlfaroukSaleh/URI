#include <iostream>
#include <iomanip>
using namespace std;
int main (){
    int n,x,y,a,b; int sum; 
    cin>>n; int array[n];
    for (int i=0;i<n;i++){
                        array[i]=0;
        cin>>x>>y; sum=0;
        if (x<=y){a=x+1;b=y;}
        else {a=y+1;b=x;}
       while (a<b){
            if (a%2) {
                array[i]+=a;}
            a++;
        }
    }
    for (int i=0;i<n;i++)
        cout<<array[i]<<endl;
    
    

    
    
    
    return 0;}
