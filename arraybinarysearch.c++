#include <iostream>
using namespace std;

int biSe(int ar[],int size,int key){
    int s=0;
    int e=size-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(ar[mid]==key){cout<<"avalable and its index :"<<mid<<"its value is :"<<ar[mid]<<" Complted"<<endl;break;}
        if(key<ar[mid]){e=mid-1;}
        if(key>ar[mid]){s=mid+1;}
    }
    return -1;
}
int main(){
    int array[]={1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33};
    int size=sizeof(array)/sizeof(array[0]);
    int key;
    cout<<"Enter The Number :";
    cin>>key;
    biSe(array,size,key);
}