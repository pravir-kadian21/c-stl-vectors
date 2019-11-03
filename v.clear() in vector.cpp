#include <iostream>
#include<vector>
using namespace std;
int main() {
    vector<int>v;
    v.reserve(1000);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    v.clear();
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
}
