#include <iostream>
#include <typeinfo>
using namespace std;
 int  main(){
    int x=5;
    float y=6.78;

    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
    cout<<"<--- type cast value --->"<<endl;
    cout<<"x = "<<float(x)<<endl;
    cout<<"y = "<<int(y)<<endl;
 }