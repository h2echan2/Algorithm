#include <iostream>
#include <list>
using namespace std;


int main (){
    string input;
    string cmd;
    list<char> result;
    list<char>::iterator iter;
    int input_count;
    char insert_char;

    cin >> input;
    cin >> input_count;

    for(int i=0;i<input.size();i++){
        result.push_back(input[i]);
    }

    iter = result.end();

    for(int i=0; i < input_count; i++){

        cin >> cmd;

        if(cmd == "L"){
            if(iter != result.begin())
                iter--;
        }
        else if(cmd == "D"){
            if(iter != result.end())
                iter++;
        }
        else if(cmd == "B"){
            if(iter != result.begin()){
                iter--;
                result.erase(iter);
            }
        }
        else if(cmd == "P"){
            cin >> insert_char;
            result.insert(iter, insert_char);
        }
    }

    for(iter = result.begin();iter!= result.end();iter++)
        cout << *iter;

    return 0;

}