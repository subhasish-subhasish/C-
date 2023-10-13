#include <iostream>
#include <cmath>
using namespace std;

int investment(int p,int r,int n){
    float v=p*(pow((1+(r/100)),n));
    cout<<"Total value of money with principal and interest :"<<v<<endl;
}
int main(){
    int p1,r1,n1;
    cout<<"Enter principal amount :";
    cin>>p1;
    cout<<"Enter interest percentage :";
    cin>>r1;
    cout<<"Enter no of year :";
    cin>>n1;
    investment(p1,r1,n1);
}
