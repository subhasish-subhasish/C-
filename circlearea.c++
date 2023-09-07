#include <iostream>
#include <cmath>
using namespace std;

// Function decleration
int area(int radi);
// Function Defination
int area(int radi){
    int pi=3.14;
    int area1=pi*pow(radi,2);
    return area1;
}

int main(){
    // Taking Radius using User
    int r;
    cout<<"Enter Radius :";
    cin>>r;
    // Function call
    int result=area(r);
    cout<<"Circle Area :"<<result<<endl;
}