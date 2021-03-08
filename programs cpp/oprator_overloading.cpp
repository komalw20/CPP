#include <iostream>
using namespace std;

class Number{
    private:
        int x, y;
        int resultX, resultY;
    public:
    Number(int x, int y){
        this->x = x;
        this->y = y;
    }
    void operator +(Number obj){
        resultX = this->x + obj.x;
        resultY = this->y + obj.y;
    }
    void display(){
        cout<<endl<<"X = "<<x<<", Y = "<<y;
    }
    void displayResult(){
        cout<<endl<<"Addition of X = "<<resultX;
        cout<<endl<<"Addition of Y = "<<resultY;
    }
};

int main(){
    //initialize objects
    Number obj1 = Number(2,5);
    Number obj2 = Number(3,2);
    //dispaly values
    obj1.display();
    obj2.display();
    //call oprator +
    obj1 + obj2;
    //display result of X and Y
    obj1.displayResult();
    return 0 ;
}