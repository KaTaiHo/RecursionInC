#include <iostream>

using namespace std;

bool isLinear(int x, int a, int b) {
    bool z = false;
    bool y = false;
    if(x == 0) {
        return true;
    }
    if(a<=x) {
        z = isLinear(x - a, a, b);
        if(z == true) { 
            
            cout << a  ;
        }
    }  
    else if(b<=x) {
        y = isLinear(x - b, a, b);
        if(y == true) {
         cout << b ;
        }
    }
    if (z||y) {
        cout << " + ";
        return true;
    }
    return false;
}

int main(void) {
    isLinear(10, 7, 3);
}