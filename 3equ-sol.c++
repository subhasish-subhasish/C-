#include <iostream>
using namespace std;
//function for solution of deter fine of three variable
float det(int a,int b,int c,int d,int e,int f,int g,int h,int i){
    float y=(a*((e*i)-(h*f))+b*((g*f)-(d*i))+c*((d*h)-(g*e)));
    return y;
}

int main(){
    int a1,b1,c1,d1,a2,b2,c2,d2,a3,b3,c3,d3;
    cout<<"Enter The Value in ax+by+cz=d in this form"<<endl;

    //Enetr the value for first equn---
    cout<<"Enter The Value of A1 :"<<endl;cin>>a1;
    cout<<"Enter The Value of B1 :"<<endl;cin>>b1;
    cout<<"Enter The Value of C1 :"<<endl;cin>>c1;
    cout<<"Enter The Value of D1 :"<<endl;cin>>d1;

    //Enetr the value for second equn---
    cout<<"Enter The Value of A2 :"<<endl;cin>>a2;
    cout<<"Enter The Value of B2 :"<<endl;cin>>b2;
    cout<<"Enter The Value of C2 :"<<endl;cin>>c2;
    cout<<"Enter The Value of D2 :"<<endl;cin>>d2;

    //Enetr the value for third equn---
    cout<<"Enter The Value of A3 :"<<endl;cin>>a3;
    cout<<"Enter The Value of B3 :"<<endl;cin>>b3;
    cout<<"Enter The Value of C3 :"<<endl;cin>>c3;
    cout<<"Enter The Value of D3 :"<<endl;cin>>d3;

    //delta
    float delta=det(a1,b1,c1,a2,b2,c2,a3,b3,c3);
    //delta1
    float delta1=det(d1,b1,c1,d2,b2,c2,d3,b3,c3);
    //delta2
    float delta2=det(a1,d1,c1,a2,d2,c2,a3,d3,c3);
    //delta3
    float delta3=det(a1,b1,d1,a2,b2,d2,a3,b3,d3);

    float x=delta1/delta;
    float y=delta2/delta;
    float z=delta3/delta;

    cout<<"the value of x :"<<x<<endl;
    cout<<"the value of y :"<<y<<endl;
    cout<<"the value of z :"<<z<<endl;
}
