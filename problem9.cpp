
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
void count(vector<int>& arr){
    int n=arr.size();
    unordered_map<int,int> hash;
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    for(auto i: hash){
        if(i.second%2==1){
            cout<<i.first<<" ";   }
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
