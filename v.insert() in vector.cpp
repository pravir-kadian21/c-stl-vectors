#include <iostream>
#include<vector>
using namespace std;
int main() {
    vector <int>v = {2,3,4};
    v.insert(v.begin(),1);
    v.insert(v.end(),5);
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
}
