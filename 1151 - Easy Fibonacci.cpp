#include <iostream>
#include <iomanip>
using namespace std;
int main (){
    int x=0,y=1,z=0;int n;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        if (i==1) cout<<x;
        else if (i==2) cout<<" "<<y;
        
    else {
        z=x+y;
        
        if (i%2)
        {
             x=z;
        }
        else {
            y=z;
        }
        cout<<" "<<z;
        if(i==n)cout<<endl;
    }
    }
            return 0;}
