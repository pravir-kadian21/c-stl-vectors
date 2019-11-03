#include <iostream>
#include<vector>
using namespace std;
int main() {
    vector <int>v;
    if(v.empty()){
        cout << "vector is empty" << endl;
    }
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    for(int i=0;i<v.size();i++){
        cout << v[i]  << " ";
    }
    cout << endl;
    if(!v.empty()){
        cout << "vector is not empty" << endl;
    }
}
