#include <iostream>
using namespace std;

class person{
    char name[40];
    int age;
    public:
        void getdata(void);
        void display(void);
};
void person ::getdata(void){
    cout<<"Enter Name :";
    cin>>name;
    cout<<"Enter Your Age :";
    cin>>age;
}
void person::display(void){
    cout<<"\nName: "<<name;
    cout<<"\nAge: "<<age;
}
int main(){
    person p1;
    person p2;
    p1.getdata();
    p2.getdata();
    p1.display();
    p2.display();

    return 0;
}