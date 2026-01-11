#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int findodd(vector<int>& arr, int size){
  unordered_map<int,int> hash;
for(int i=0;i<size;i++){
    hash[arr[i]]++;}//increments values if key present or else adds key and updates
for(auto i: hash){
    if(i.second%2!=0){
      return i.first;}}
return -1;}
int main(){
    vector<int>arr {2,4,3,1,2,4,3,3,3 }; 
    int n = arr.size();
    cout << findodd(arr, n); 
    return 0; 
}
