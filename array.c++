#include <iostream>
using namespace std;

//function for print array
void printArray(int array[],int size){
    for(int i=0;i<=size;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
//function for get max and min
int getMaxMin(int array[],int size){
    int max=array[0];
    int min=array[0];
    for(int i=0;i<size;i++){
        if (array[i]>max){
            max=array[i];
        }
        if (array[i]<min){
            min=array[i];
        }
    }
    cout<<"Max Num="<<max<<endl;
    cout<<"Min Num="<<min<<endl;
}
//function for serach anything in a array
bool search(int array[],int key,int size){
    for(int i=0;i<size;i++){
        if(array[i]==key){
            return 1;    
        }
    }
    return 0;
}
//function for making a array reverse
void rev(int array[],int size){
    int start=0;
    int end=size-1;
    for(;start<=end;start++,end--){
        swap(array[start], array[end]);
    }
}
// function for update array 
void update(int array[],int size){
    for(int i=0;i<size;i++){
        cout << array[i] <<" ";
    }
    cout<<endl;
}
int main(){
    // array inisilazation
    int n[10]={1,45,54,456,7,76,34,5,65,7};
    //array printing using self made printArray Function
    printArray(n,7);
    //used the max and min function
    getMaxMin(n,10);
    //create a new varible key and enter key value form user for find the value is avalble in array or not
    int key;
    cout<<"Enter The NUmber Which You Want to Search In array :";
    cin>>key;
    //make a new varible found in that store the serch function and using this function we find the entered vale is avalble or not in my array
    bool found = search(n,key,10);
    if(found){
        cout<<"The Number is Avalable"<<endl;
    }
    else{
        cout<<"The Number is Not Avalable"<<endl;
    }
    //we make new array and reverse it
    int m[10]={1,45,54,456,7,76,34,5,65,7};
    rev(m,10);
    printArray(m,10);

    int arr[7] = {1,6,3,5,5,6,6};

    update(arr, 7);

    return 0;
}