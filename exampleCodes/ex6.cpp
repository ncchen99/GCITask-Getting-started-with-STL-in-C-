#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<int> q;       // �@�ӪŪ� queue
    for(int i=0 ; i<5 ; i++){
        q.push(i * 10);
    }                   // [0, 10, 20, 30, 40]

    while(q.size() != 0){
        cout << q.front() << endl;
        q.pop();
    }                   // �̧ǿ�X 0 10 20 30 40
}
