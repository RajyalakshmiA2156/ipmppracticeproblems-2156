#include <iostream>
#include <vector>
using namespace std;
int num(vector<int>& arr){
  int n=arr.size()+1;//one missing so totally len+1 terms
for (int i=1;i<=n;++){
bool found=false;
     for(int j=0;j<n-1;j++){
     if(arr[j]==i){
    found=true;
    break;}}// go to next number to check}}
    if(!found){return i;}}
    return -1;
}
int main(){
 int n;
 cout << "Enter number of elements: ";
 cin >> n;
vector<int> arr(n);  
cout << "Enter elements: ";
for (int i = 0; i < n; i++) {
        cin >> arr[i];}

 cout << num(arr) << endl;
    return 0;
}
