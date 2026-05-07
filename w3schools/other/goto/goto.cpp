#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;

    if (num > 10){
        goto l1;
    } else {
        goto l2;
    }

    l1:
        cout << num << " is greater than 10" << endl;

    l2:
        cout << num << " is less than or equal to 10" << endl;

    return 0;
}