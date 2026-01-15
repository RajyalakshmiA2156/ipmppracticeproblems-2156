#include <iostream>
#include <vector>
using namespace std;
void alternate(vector<int>& arr) {
    int n=arr.size();
    int i=0, j=n-1;
    while (i<j){//separating pos and neg
      while(i<j && arr[i]>=0){
        i++;}
      while(i<j && arr[j]<0){
      j--;}
      if(i<j){
        swap(arr[i],arr[j]);}}
    int pos=0;
    int neg=i;
    while (pos<neg && neg<n) {
        swap(arr[pos],arr[neg]);
        pos=pos+2;
        neg++;
    }
}
int main() {
    vector<int> arr;
  cout << "enter elements\n";
  for(int i=0;i<arr.size();i++){
    cin >> arr[i];}
    rearrange(arr);
    for (int x : arr)
        cout << x << " ";

    return 0;
}
