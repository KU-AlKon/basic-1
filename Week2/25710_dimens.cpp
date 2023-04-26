// 점수 계산 : https://www.acmicpc.net/problem/25710

#include <iostream>
using namespace std;

int numSum(int n, int max){
    int sum=0;
    while(n != 0){
        sum += n%10;
        n/=10;
    }

    //크기 비교
    if (sum >= max)
        return sum;
    else
        return max;
}

int main(){
    // 0인 숫자는 0을 제외한 값으로 생각. 
    // 중복 삭제. -> O(1000^3)으로 줄어든다.
    // 카운트 배열. 1000칸. 0인지 확인.

    int max = 0;
    int N;
    cin >> N;
    

    bool isExist[1000];
    for (int i = 0; i< 1000; i++) 
        isExist[i] = false;

    int a[N];
    int lastIndex = 0;
    for (int i = 0; i<N; i++){ // 배열 초기화 N * 1000
        int input;
        cin >> input;

        if (isExist[input-1]) // 이미 존재하면 두 값을 곱한 것만 확인하고, 넘어감.
            max= numSum(input*input, max);
        else{
            a[lastIndex] = input;
            lastIndex++;
            isExist[input-1] = true;
            for (int j = 0; j<lastIndex-1; j++){
                max = numSum(input*a[j], max);
            }
        }
    }
    cout << max;
}
