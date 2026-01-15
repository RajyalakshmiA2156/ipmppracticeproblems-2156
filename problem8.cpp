#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
void count(vector<int>& arr){
    int n=arr.size();
    unordered_map<int,int> hash;
    vector<int> unique;
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    for(auto i: hash){
        if(i.second==1){
          unique.push_back(i.first);   }
    }
     sort(unique.begin(), unique.end());
    for (int x : unique) {
        cout << x << " ";
    }
}

int main() {
    cout<< "enter no of elements\n";
    int n;
    cin>>n;
    vector<int> arr(n);
    cout<< "enter elements\n";
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }
    count(arr);
    return 0;
}
