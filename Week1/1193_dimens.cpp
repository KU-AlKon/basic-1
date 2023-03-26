#include <iostream>
using namespace std;

int main(){
    int input;
    cin >> input;

    int i = 1;
    for(; input>i; i++)
        input -= i;

    if(i%2 == 0) //짝수면 내려감.
        cout << input << "/" << i+1-input;

    else // 홀수면 올라감.
        cout << i+1-input << "/" << input;
}
