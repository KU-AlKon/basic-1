// PPAP : https://www.acmicpc.net/problem/16120
/*
input string이 PPAP라면, 최소 단위인 P로 만들 수 있어야 한다.
*/


#include <iostream>
#include <stack>
using namespace std;

int main(){
    // string str = "PPAP";
    
    // string input;
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    // cin >> input;

    // int startIndex = input.find(str);

    // while(startIndex != -1){
    //     input.replace(startIndex, 4, "P");
    //     startIndex = input.find(str);
    // }

    // if (input.compare("P") == 0)
    //     cout << "PPAP";
    // else
    //     cout << "NP";

    int pNum = 0; // 삭제되지 않은 P 개수
    char input[1000001];
    cin >> input;
    int i = 0;
    while(input[i] != '\0'){
        if (input[i] == 'A'){
            i++;
            if(input[i] == 'P'){
                if(pNum >=2){
                    pNum--;
                    i++;
                    continue;
                }
            }
            // 규칙을 준수하지 않는 경우 NP 처리를 하기 위함.
            pNum = -1;
            break;
        }
        else
            pNum++;
        
        i++;
    }
    if(pNum == 1)
        cout << "PPAP";

    else
        cout << "NP";

    return 0;
}