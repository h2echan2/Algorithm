#include <iostream>

using namespace std;

int n, m;
int map[50][50];
int visited[50][50] = {0,};

int dx[] = {1,0,-1,0};
int dy[] = {0, 1, 0, -1};

int ans = 0;

bool bound (int r, int c){
    if(r<0 || r>n || c<0 || c>m){
        return false;
    }
    else return true;
}

//    1. 현재 위치를 청소한다.
//    2. 현재 위치에서 현재 방향을 기준으로 왼쪽방향부터 차례대로 탐색을 진행한다.
//    a.왼쪽 방향에 아직 청소하지 않은 공간이 존재한다면, 그 방향으로 회전한 다음 한 칸을 전진하고 1번부터 진행한다.
//    b.왼쪽 방향에 청소할 공간이 없다면, 그 방향으로 회전하고 2번으로 돌아간다.
//    c.네 방향 모두 청소가 이미 되어있거나 벽인 경우에는, 바라보는 방향을 유지한 채로 한 칸 후진을 하고 2번으로 돌아간다.
//    d.네 방향 모두 청소가 이미 되어있거나 벽이면서, 뒤쪽 방향이 벽이라 후진도 할 수 없는 경우에는 작동을 멈춘다.
void dfs(int r, int c, int dir){
    visited[r][c] = 1;

    for(int i=0;i<4;i++){
        dir = (dir+3) % 4;
        int new_x = r + dx[dir];
        int new_y = c + dy[dir];
        if(bound(new_x, new_y)){
            if(map[new_x][new_y] == 0 && visited[new_x][new_y]==0){
                ans++;
                dfs(new_x, new_y, dir);
                return;
            }
        }
    }

    int new_dir = (dir+2) % 4;
    r = r + dx[new_dir];
    c = c + dy[new_dir];
    if(bound(r,c)){
        if(map[r][c] ==0){
            ans++;
            dfs(r,c,dir);
        }
        else{

            return;
        }
    }


}



int main(){
    cin >> n >> m;

    int r, c, dir;
    cin >> r >> c >>dir;

    for(int i=0;i<n;i++){
        for(int j=0; j<m;j++){
            cin >> map[i][j];
        }
    }
    cout << "dfs start\n";
    ans++;
    dfs(r, c, dir);
    cout << ans;
}