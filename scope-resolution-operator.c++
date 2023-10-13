#include <iostream>
using namespace std;

int m=10; // m value is declared in global
int main(){
    int m=20; // m value is declared in local main
    {
        int j=m;
        int m=30;// m value is declared in local inner block
        int k=m;
        cout<<"we are in inner block"<<endl;
        cout<<"m = "<<m<<endl;
        cout<<"j = "<<j<<endl;
        cout<<"k = "<<k<<endl;
        cout<<" ::m= "<<::m<<endl;
    }
    cout<<"we are in outer block"<<endl;
    cout<<"m = "<<m<<endl;
    cout<<" ::m= "<<::m<<endl;

    return 0;
}