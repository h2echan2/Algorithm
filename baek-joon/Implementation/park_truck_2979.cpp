#include <iostream>

//상근이는 트럭을 총 세 대 가지고 있다. 오늘은 트럭을 주차하는데 비용이 얼마나 필요한지 알아보려고 한다.
//
//상근이가 이용하는 주차장은 주차하는 트럭의 수에 따라서 주차 요금을 할인해 준다.
//
//트럭을 한 대 주차할 때는 1분에 한 대당 A원을 내야 한다. 두 대를 주차할 때는 1분에 한 대당 B원, 세 대를
// 주차할 때는 1분에 한 대당 C원을 내야 한다.
//
//A, B, C가 주어지고, 상근이의 트럭이 주차장에 주차된 시간이 주어졌을 때, 주차 요금으로 얼마를 내야 하는지
// 구하는 프로그램을 작성하시오.

using namespace std;
int main(){
    int a, b, c;
    int s1, s2, s3;
    int l1, l2, l3;

    cin >> a >> b>> c;
    cin >> s1 >>l1;
    cin >> s2 >> l2;
    cin >> s3 >> l3;

    int result =0;

    //입력받은 시간중에서 1대, 2대, 3대인시간 계산해내야함
    //idea time interval 1~100
    int car_cnt[100] = {0,};

    for(int i=s1;i<l1;i++){
        car_cnt[i]++;
    }
    for(int i=s2;i<l2;i++){
        car_cnt[i]++;
    }
    for(int i=s3;i<l3;i++){
        car_cnt[i]++;
    }

    for(int i=0;i<100;i++){
        if(car_cnt[i] == 1){
            result += 1*a;
        }
        else if(car_cnt[i] == 2){
            result += 2*b;
        }
        else if(car_cnt[i] == 3) {
            result += 3*c;
        }
    }

    cout << result;

}