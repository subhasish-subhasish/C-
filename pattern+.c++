#include <iostream>
using namespace std;

int main(){
    for(int i=0;i<=4;i++){
        if((i==0||i==1||i==3||i==4)){
            for(int j=0;j<=3;j++){
                cout<<" ";
            }
            cout<<"*";
            for(int j=0;j<=3;j++){
                cout<<" ";
            }
            cout<<endl;
            }
            if(i==2){
                for(int i=0;i<=4;i++){
                cout<<"* ";
                }
            cout<<endl;
            }
    }
}