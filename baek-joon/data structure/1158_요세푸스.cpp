#include <iostream>
#include <queue>

using namespace std;
int main(){
    int N, K;

    int tmp;
    cin >> N >> K;

    queue<int> q;
    for(int i=1 ;i<N+1;i++){
        q.push(i);
    }
    cout << "<";
    int count = N;
    while(count > 1){
        for(int i=1;i<K;i++){
            tmp = q.front();
            q.pop();
            q.push(tmp);
        }
        cout << q.front() <<", ";
        q.pop();
        count--;
    }
    cout << q.front() << ">";

    return 0;

}