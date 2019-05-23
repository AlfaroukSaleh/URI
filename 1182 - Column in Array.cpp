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
int x;
cout<<fixed<<setprecision(1);
cin>>x;

cin>>op;
double sum=0;
double avg=0;
for (int i=0;i<12;i++){
    for (int j=0;j<12;j++){
        cin>>array[i][j];
    }
}
    for (int j=0;j<12;j++){
        if (op=='S'){
            sum+=array[j][x];
            if (j==11){cout<<sum<<endl;}
        }
        else if (op=='M'){
            sum+=array[j][x];
            if (j==11){avg=sum/12;
            cout<<avg<<endl;
            }

        }


    }






    return 0;
}
