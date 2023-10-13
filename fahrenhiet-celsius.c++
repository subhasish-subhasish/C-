#include <iostream>
using namespace std;
//Now the formola from faranhite to celcius is--- F = (C × 9/5) + 32

int main(){
    int n;
    cout<<"Enter What You want to do"<<endl;
    cout<<"Enetr 1 if you want to chage from Faranhite - Celcious"<<endl;
    cout<<"Enetr 2 if you want to chage from Celcious - Faranhite"<<endl;
    cout<<"Enter selection :";
    cin>>n;

    int temp;
    cout<<"Enter Temperature :";
    cin>>temp;
    if(n==1){
        int celci;
        celci=(temp-32)*5/9;
        cout<<temp<<"F = "<<celci<<"C"<<endl;
    }
    if(n==2){
        int far;
        far=((temp*9/5))+32;
        cout<<temp<<"C = "<<far<<"F"<<endl;
    }
}