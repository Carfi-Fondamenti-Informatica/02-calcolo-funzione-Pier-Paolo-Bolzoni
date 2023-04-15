#include <iostream>
using namespace std;


 int main() {

    float a, b, x,y, z1, z2, z3;

    cin >> a >> b >> x >> y;

    if (x < 0 && y > 0){
        z1 = a * x - b * y;
        cout << z1 << endl;

    } else if (x >= 0 && y <= 0){
        z2 = a * x * x + b * y;
    cout << z2 << endl;
    }
    else{
        z3 = a*x - b*y*y;
        cout << z3 <<endl;
    }
    return 0;
}
