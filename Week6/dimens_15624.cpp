#include <iostream>
using namespace std;
int fibo(int n){
    if(n == 0 || n==1 || n == 2){ //초기조건
        return 1;
    }
    else{
        return (fibo(n-1) + fibo(n-2));
    }
}
int main(){
    int n;
    cin >> n;
    // cout << fibo(n)%1000000007;
    long long n_2 = 1;
    long long n_1 = 1;
    for(int i = 2; i<n; i++){
        int temp = n_1;
        n_1 += n_2;
        n_1 %= 1000000007;
        n_2 = temp;
        n_2 %= 1000000007;
    }

    cout << n_1 % 1000000007;
}

