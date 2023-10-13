#include <iostream>
using namespace std;

class reactangle{
    private:
        double length;
        double width;
    public:
        void setDimensions(double l,double w);
        float calculateArea();
        float calculatePerimeter();
        float displayRectangleDetails();
};
void reactangle::setDimensions(double l,double w){
    length=l;width=w;
}
float reactangle::calculateArea(){
    float area=length*width;
    cout<<"Area of Reactangle :"<<area<<endl;
}
float reactangle::calculatePerimeter(){
    float peri=2*(length+width);
    cout<<"Perimeter of Reactangle :"<<peri<<endl;
}
int main(){
    reactangle myreactangle;
    float l,w;
    cout<<"Enter length of reactangle :";
    cin>>l;
    cout<<"Enter width of reactangle :";
    cin>>w;
    myreactangle.setDimensions(l,w);
    myreactangle.calculateArea();
    myreactangle.calculatePerimeter();

    return 0;
}