#include <vector>
#include <iostream>
#include <algorithm>

#define endl "\n"

using namespace std;

int main(){

    int count;
    int tmp;
    cin >> count;
    vector<int> vec;

    for(int i = 0;i<count;i++){
        cin >> tmp;
        vec.push_back(tmp);
    }
    sort(vec.begin(), vec.end());

    for (int i=0;i<vec.size();i++)
        cout << vec[i] << endl;

}