#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;    // �ŧi�@�Ӹ� int �� vector
                        // �{�b vec �O�Ū�
    vec.push_back(10);
    vec.push_back(20);  // �g�L�T�� push_back
    vec.push_back(30);  // vec �O [10, 20, 30]

    int length = vec.size();        // length = 3
    for(int i=0 ; i<length ; i++){
        cout << vec[i] << endl;     // ��X 10, 20, 30
    }

    vec.pop_back();     // ���� 30

    for(int i=0 ; i<vec.size() ; i++){  // vec.size() = 3
        cout << vec[i] << endl;         // ��X 10, 20
    }
}
