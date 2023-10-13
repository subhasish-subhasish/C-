#include <iostream>
using namespace std;

long fact(int n){
    if(n<=1){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int a;
    cout<<"Enter The Number for which you want to calculate factorial :";cin>>a;
    long y=fact(a);
    cout<<"Factorial value of "<<a<<" is :"<<y;
}