#include <iostream>
using namespace std;

int sumIntiger(int n){
    if(n<=1){
        return 1;
    }
    return n+sumIntiger(n-1);
}
int main(){
    int a;
    cout<<"Enter number :";
    cin>>a;
    int y=sumIntiger(a);
    cout<<"sum of "<<a<<" is :"<<y;
}