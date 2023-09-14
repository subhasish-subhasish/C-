#include <iostream>
int main(){
    int n,i=2;
    std::cout<<"Enter The Number Whivh you Want to check that is prime or not :";
    std::cin>>n;
    while(i<n){ 
        if(n%i==0){
            std::cout<<"Not Prime";
        }
        else{
            std::cout<<"Prime";
        }
        i=i+1;
    }
}