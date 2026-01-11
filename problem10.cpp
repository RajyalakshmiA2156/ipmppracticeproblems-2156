#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int>& arr){
  int n=arr.size();
  int i=0;
  for(i=0;i<n/2;i++){
   swap(arr[i],arr[n-i-1]);}}
int main(){
  vector <int>arr={3,2,5,6,0,7,8};
  for(int i=0;i<arr.size();i++){
    cout << arr[i]<< " ";}
    cout<<"\n";
  reverse(arr);
  for(int i=0;i<arr.size();i++){
    cout << arr[i] << " ";}} 
