#include <iostream>
using namespace std;

int main(){
    for(int n=0;n<=2;n++){
        for(int i=0;i<5;i++){cout<<"#";}
        cout<<endl;
        if(n==(0)){
            for(int j=0;j<2;j++){cout<<"#"<<endl;}
        }
        if(n==1){
            for(int m=0;m<2;m++){
                for(int k=0;k<=3;k++){cout<<" ";}
                for(int j=0;j<1;j++){cout<<"#"<<endl;}
            }
        }
    }
}