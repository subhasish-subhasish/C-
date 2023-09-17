#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number :";
    cin>>n;
    int ans=0;
    for(int i=0;n!=0;i++){
        int digit=n%10;
        if(digit==n){
            ans=ans+pow(2,i);
        }
        n=n/10;
    }
    cout<<ans;
    return 0;
}