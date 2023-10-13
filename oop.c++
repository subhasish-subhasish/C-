#include <iostream>
using namespace std;

class Employee{
    char name[30];
    int age;
    private:
        int a,b,c;
    public:
        int d,e;
        void setData(int a1,int b1,int c1); //declration
        void getData(){
            cout<<"The Value of a is :"<<a<<endl;
            cout<<"The Value of b is :"<<b<<endl;
            cout<<"The Value of c is :"<<c<<endl;
            cout<<"The Value of d is :"<<d<<endl;
            cout<<"The Value of e is :"<<e<<endl;     
        }
};
void Employee :: setData(int a1,int b1,int c1){
    a1=a;
    b1=b;
    c1=c;
}
int main(){
    Employee subhasish;
    //subhsish.a=65 this private data
    subhasish.d=5;
    subhasish.e=4;
    subhasish.setData(1,2,3);
    subhasish.getData();
    return 0; 

}