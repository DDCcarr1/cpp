#include <iostream>
using namespace std;

class Life{
    public:
        Life(){
            cout << "A new life has been created!" << endl;
        }
};

class Tree : public Life{
    public:
        Tree(){
            cout << "A new tree has been created!" << endl;
        }
};

class Oak : public Tree{
    public:
        Oak(){
            cout << "A new oak tree has been created!" << endl;
        }
};

int main(){
    Oak oak1;

    return 66;
}