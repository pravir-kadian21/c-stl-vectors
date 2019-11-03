#include <iostream>
#include<vector>
using namespace std;
int main() {
    vector<int>v1={1,2,3,4};
    vector<int>v2;
    v2.swap(v1);
    for(int i=0;i<v2.size();i++){
        cout << v2[i] << " ";
    }
    cout << endl;
    for(int i=0;i<v1.size();i++){
        cout <<v1[i] << " ";
    }
}
