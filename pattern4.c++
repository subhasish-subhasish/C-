#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter Number :";
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<" ";
        }
        for(int k=0;k<=n-2*i-1;k++){
            cout<<"#";
        }
        cout<<endl;
    }

    
}
    
