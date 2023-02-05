#include <iostream>
#include <queue>


using namespace std;
int main(){

    queue<int> q;
    int cmd_count;
    int push_num;
    string cmd;

    cin >> cmd_count;

    for(int i=0;i<cmd_count;i++){
        cin >> cmd;

        if(cmd == "push"){
            cin >> push_num;
            q.push(push_num);
        }
        else if(cmd == "pop"){
            if(q.size()>0){
                cout << q.front() << "\n";
                q.pop();
            }
            else
                cout << "-1" << "\n";
        }
        else if(cmd == "size"){
            cout << q.size()<< "\n";
        }
        else if(cmd == "empty"){
            cout << q.empty()<< "\n";
        }
        else if (cmd == "front"){
            if(!q.empty()){
                cout << q.front() << "\n";
            }
            else
                cout << -1 << "\n";
        }
        else if(cmd == "back"){
            if(!q.empty()){
                cout << q.back() << "\n";
            }
            else
                cout << -1<< "\n";
        }
    }
    return 0;
}
