#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool mygreater(int x, int y) //���令���c�ոլ�
{
    return x>y;
}
int main()
{
    int a[7] = { 8, 1, 3, 2, 5, 1, 4};
    vector<int> v(a,a+7);
    vector<int>::iterator it ;
    sort(v.begin(), v.end()) ; //�Ѥp�ƨ�j
    for ( it = v.begin(); it != v.end() ; it++)
        cout << *it <<" ";
    cout << endl;
    // output : 1 1 2 3 4 5 8
    sort(v.begin(), v.end(), mygreater); //mygreater �Ѥj�ƨ�p
    for ( it = v.begin( ); it != v.end() ; it++)
        cout << *it <<" ";
    cout << endl;
    // output : 8 5 4 3 2 1 1
    return 0;
}
