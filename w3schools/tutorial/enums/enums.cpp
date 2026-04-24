#include <iostream>
using namespace std;

int main() {
    enum Color{
        RED,
        ORANGE,
        YELLOW,
        GREEN,
        BLUE,
        PURPLE
    };

    enum Color favoriteColor = BLUE;

    if (favoriteColor == BLUE){
        cout << "Good choice!" << endl;
    } else {
        cout << "Ew. Terrible choice. Should have chosen blue." << endl;
    }
    

    return 0;
}