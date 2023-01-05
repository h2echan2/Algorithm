#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    pair<int, char> p;

//    scanf("%d %c", &p.first, &p.second);
//    printf("%d %c\n", p.first, p.second);
    cin >> p.first >> p.second;
    cout << p.first << p.second << endl;

    p.first = 1;
    p.second = 'a';

//    printf("%d %c\n", p.first, p.second);
    cout << p.first << p.second << endl;
    p=make_pair(3, 'b');

//    printf("%d %c\n", p.first, p.second);
    cout << p.first << p.second << endl;
}