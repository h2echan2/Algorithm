#include <iostream>

using namespace std;

int main(){

    int a, b;
    cin >> a >> b;
    int h, t, o;
    h = b/100;
    t = (b - h*100)/10;
    o = (b - h*100 - t*10);

    int ao, at, ah;
    ao = a * o;
    at = a*t;
    ah = a*h;

    int result = ao + at*10+ ah*100;

    cout << ao << endl;
    cout << at << endl;
    cout << ah << endl;
    cout << result << endl;

}