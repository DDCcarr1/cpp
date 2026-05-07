#include <iostream>
using namespace std;

class Rectangle{
    protected:
        Rectangle(){  /* Nothing */  }
    public:
        int length;
        int width;
        Rectangle(int l, int w){
            length = l;
            width = w;
            cout << "A new rectangle has been created with side lengths " << length << " and " << width << " units." << endl;
        }
};

class Rhombus{
    protected:
        Rhombus(){  /* Nothing */  }
    public:
        int side;
        Rhombus(int s){
            side = s;
            cout << "A new rhombus has been created with side length " << side << " units." << endl;
        }
};

class Square: public Rectangle, public Rhombus{
    public:
        Square(int s) : Rectangle(), Rhombus(){
            length = width = side = s;
            cout << "A new square has been created with side length " << side << " units." << endl;
        }
};

int main() {
    Rectangle rectangle(4, 6);
    Rhombus rhombus(2);
    Square square1(5);

    return 0;
}