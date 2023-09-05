#include <iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter Your Number :";
    cin>>number;
    if (number>=90){
        cout<<"You Got AA"<<endl;
        }
    else if (number>=80){
        cout<<"You Got A"<<endl;
    }
    else if (number>=60){
        cout<<"You Got B"<<endl;
    }
    else if (number>=50){
        cout<<"You Got C"<<endl;
    }
    else{
        cout<<"You need to improve"<<endl;
    }
    return 0;
}