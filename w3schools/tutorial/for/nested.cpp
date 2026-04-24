#include <iostream>
using namespace std;

int main(){
    for (int i = 0; i <= 3; i++){//outer
        cout << "Outer: " << i << endl;

        for (int ii = 0; ii <= 2; ii++){//inner
            cout << "\t" << "Inner: " << ii << endl;
        }//inner
    }//outer

    return 0;
}