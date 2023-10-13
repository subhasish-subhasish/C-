#include <iostream>
using namespace std;

class binary{
    private:
        string s;
        void chk_bin(void);
        //void ones_compliment(void);
    public:
        void read(void);
        void ones_compliment(void);
        void display(void);
        void display2(void);
};
void binary::read(void){
    cout << "Enter a binary number :";
    cin >> s;
}
void binary::chk_bin(void){
    for (int i = 0; i < s.length(); i++){
        if (s.at(i) != '0' && s.at(i) != '1'){
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}
void binary::ones_compliment(void){
    chk_bin();
    for (int i = 0; i < s.length(); i++){
        if (s.at(i) == '0'){
            s.at(i) = '1';
        }
       else{
            s.at(i) = '0';
        }
    }
}
void binary::display(void){
    cout<<"Displaying your binary number"<<endl;
    for (int i = 0; i < s.length(); i++){
        cout << s.at(i);
    }
    cout<<endl;
}
void binary::display2(void){
    cout<<"Displaying your binary number's 2's compliment"<<endl;
    for (int i = 0; i < s.length(); i++){
        cout << s.at(i);
    }
    cout<<endl;
}
int main(){
    binary b;
    b.read();
    b.display();
    b.ones_compliment();
    b.display2();
    return 0;
}