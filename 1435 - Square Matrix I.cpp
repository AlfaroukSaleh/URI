#include <iostream>
#include <iomanip>
#include <math.h>
#include <time.h>
#include <cstring>
#include<ctype.h>
using namespace std;
int main () {
    int x;
    cin>>x;  int z; int n;

    while (x!=0){
                int arr[105][105]={0};

        for (int i=0;i<x;i++){
            for (int j=0;j<x;j++){
                z=0;n=x;
                while (z<=50){
               // if (i==0 || i==(x-1)|| j==0||j==(x-1)){
                 //   arr[i][j]=1;
                //}

                 if (i==z||i==(n-1)-z||j==z||j==(n-1)-z){
                    if (arr[i][j]==0)
                    arr[i][j]=z+1;
                }


                                    z++;
                }

            }}

        for (int i=0;i<x;i++){
            for (int j=0;j<x;j++){
                if (j!=(x-1))  printf ("%3d ",arr[i][j]);
                else
                printf ("%3d",arr[i][j]);
            }
            
            cout<<endl;
            if (i==x-1)cout<<endl;
    }

        cin>>x;

        }return 0;
    }
