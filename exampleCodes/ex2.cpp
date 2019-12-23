#include<vector>
#include<iostream>
using namespace std;

int main() {
    vector<int> v(3); //�ŧi�@�Ӯe�q��3��vector
    v[0]=2; //v[0]�O��1�Ӥ���
    v[1]=7;
    v[2]=9;
    v.insert(v.begin(),8);//�b�̫e�����J�s�����C
    v.insert(v.begin()+2,1);//�b���N�����ĤG�Ӥ����e���J�s����
    v.insert(v.end(),3);//�b�V�q�����l�[�s�����C

    v.insert(v.end(),4,1);//�b�������J4��1

    int a[] = {1,2,3,4};
    v.insert(v.end(),a[1],a[3]);//�b�������Ja[1]��a[3]�A�]�N�O2��4

    vector<int>::iterator it; //�ϥ�iterator�s��
    for(it=v.begin(); it!=v.end(); it++) {
        cout<<*it<<" ";
    }
    cout<<endl;

    v.erase(v.begin()+2); //�R����3�Ӥ���
    for(auto e : v)
        cout<<e<<" ";
    cout<<endl;

    v.erase(v.begin()+5,v.begin()+9); //�R���϶�5~8

    for(auto e : v)
        cout<<e<<" ";
    cout<<endl;
}
/*output :
    8 2 1 7 9 3 1 1 1 1 4 4
    8 2 7 9 3 1 1 1 1 4 4
    8 2 7 9 3 4 4*/


