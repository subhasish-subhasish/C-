#include <iostream>
using namespace std;

int main(){
    for(int i=0;i<4;i++){
        if(i%2==0){
            for(int j=0;j<4;j++){
                cout<<"*";
                cout<<" ";
            }
            cout<<endl;
        }
        if(i%2!=0){
            for(int j=0;j<4;j++){
                cout<<" ";
                cout<<"*";
            } 
            cout<<endl; 
        }
    }
}