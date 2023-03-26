#include <iostream>
using namespace std;

int main(){
    int input;
    cin >> input;

    int newNum = 0;
    int cycleNum = 0;
    
    // 초기 조건
    newNum = (input%10)*10 + (input/10+input%10)%10;
    cycleNum++;

    while(newNum != input){
        newNum = (newNum%10)*10 + (newNum/10+newNum%10)%10;
        cycleNum++;
    }
    
    cout << cycleNum;

}
