#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int> s;

    s.push(10);     //  | 30 |
    s.push(20);     //  | 20 |   �|�T�ӽL�l
    s.push(30);     //  |_10_|   10 �b�̤U��

    for(int i=0 ; i<s.size() ; i++){    // s.size() = 3
        cout << s.top() << endl;
        s.pop();
    }                                   // ��X 30, 20, 10
}
