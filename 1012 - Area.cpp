#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout<<fixed<<setprecision(3);
    double A,B,C;
    cin >>A>>B>>C;
    double pi =3.14159;
    double rTriangle=0.5*A*C;
    double circleArea=pi*C*C;
    double trapeziumArea=0.5*(A+B)*C;
    double squareArea = B*B;
    double rectangleArea =A*B;
    
    cout<<"TRIANGULO: "<<rTriangle<<endl;
    cout<<"CIRCULO: "<<circleArea<<endl;
    cout<<"TRAPEZIO: "<<trapeziumArea<<endl;
    cout<<"QUADRADO: "<<squareArea<<endl;
    cout<<"RETANGULO: "<<rectangleArea<<endl;


    return 0;
}
