// 백설 공주와 일곱 난쟁이 : https://www.acmicpc.net/problem/3040
// 가짜 난쟁이의 번호 합을 이용. (답이 유일한 경우에만 가능.)

#include <iostream>
using namespace std;

int main(){
    int n[9]; // 난쟁이 번호
    int sum = 0;
    for (int i = 0; i<9; i++){ // 난쟁이 번호 입력 받기, 배열 합 구함.
        cin >> n[i];
        sum += n[i];
    }
    
    sum -= 100; // 가짜 난쟁이 2명의 번호 합
    for (int i = 0; i<9; i++){
        for (int j = i+1; j<9; j++){
            if (n[i] + n[j] == sum){ // 가짜 난쟁이 2명의 번호 합과 같으면, 해당 index에 -1 값으로 표시.
                n[i] = -1;
                n[j] = -1;
            }
        }
    }
    
    for (int i = 0; i<9; i++){
        if (n[i] != -1) // -1 값을 가진 난쟁이를 제외하고 출력.
            cout << n[i] << "\n";
    }

}
