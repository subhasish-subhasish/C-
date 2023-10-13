#include <iostream>
using namespace std;

void arrayIntersection(int array1[],int array2[],int size1,int size2){
    for(int i=0;i<=size1;i++){
        for(int j=0;j<=size2;j++){
            if(array1[i]==array2[j]){
                cout<<array1[i]<<" ";
                break;
            }
        }
    }
}
int main(){
    int a1[10]={1,4,6,6,5,7,5,7,6,7};
    int sizea1=sizeof(a1)/sizeof(a1[0]);
    int a2[5]={1,6,6,5,7};
    int sizea2=sizeof(a2)/sizeof(a2[0]);
    arrayIntersection(a1,a2,sizea1,sizea2);
}
