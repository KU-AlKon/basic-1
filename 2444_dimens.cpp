#include <iostream>
using namespace std;

void printStar(int i, int spaceNum){
    string str;
    for(int j = 0; j < spaceNum ; j++)
        str += " ";

    str += "*";
    for(int j = 0; j < i; j++)
        str += "**";
    
    cout << str << "\n";
}

int main(){
    int N;
    cin >> N;

    for(int i = 0; i < N; i++)
        printStar(i, N-i-1);
    
    N--;

    for (int i = 1; i < N +1; i++)
        printStar(N-i, i);
}
