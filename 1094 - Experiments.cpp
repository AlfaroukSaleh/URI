#include <iostream>
#include <iomanip>
using namespace std;
int main (){
    cout<<fixed<<setprecision(2);
    int n,x=0,total=0; int frogs=0,rabbits=0,rats=0;
    char ch;
    cin>>n;
    for (int i=1;i<=n;i++){
        cin>>x>>ch;
        switch (ch) 
        {
            case 'C':{rabbits+=x; break;}
            case 'R':{rats+=x; break;}
            case 'S':{frogs+=x; break;}

        }
        total+=x;
        
        }
    
cout<<"Total: "<<total<<" "<<"cobaias"<<endl;
cout<<"Total de coelhos: "<<rabbits<<endl;
cout<<"Total de ratos: "<<rats<<endl;
cout<<"Total de sapos: "<<frogs<<endl;
cout<<"Percentual de coelhos: "<<(((double)rabbits/total)*100)<<" %"<<endl;
cout<<"Percentual de ratos: "<<(((double)rats/total)*100)<<" %"<<endl;
cout<<"Percentual de sapos: "<<(((double)frogs/total)*100)<<" %"<<endl;


            return 0;}
