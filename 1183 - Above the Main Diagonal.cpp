#include <iostream>
#include <iomanip>
#include <math.h>
#include <time.h>
#include <cstring>
#include<ctype.h>
using namespace std;
int main (){
    double array[12][12];

char op;
int x=0;
cout<<fixed<<setprecision(1);

cin>>op;
double sum=0;
double avg=0;
for (int i=0;i<12;i++){
    for (int j=0;j<12;j++){
        cin>>array[i][j];
    }
}

for (int i=0;i<12;i++){
    for (int j=0;j<12;j++){
        if (j>i){
            sum+=array[i][j];
            x++;

        }
        }
    }


         if (op=='S'){cout<<sum<<endl;}
else if (op=='M'){cout<<sum/x<<endl;}








    return 0;
}
