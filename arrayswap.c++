#include <iostream>
using namespace std;

void printArray(int array[],int size){
    for(int i=0;i<=size;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
int arraySwap(int arr[],int size){
    int s=0;
    int e=size-1;
    while(s<=e){
        int temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        s++;
        e--;
        }
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9};
    printArray(arr,10);
}