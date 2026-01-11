#include <iostream>
#include <vector>

void repeatnum(int arr[],int n){
  for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
          if(arr[i]==arr[j]){
          cout << arr[i] << endl;}}}}
int main(){
  int n;
  cout << "Enter n: ";
  int arr[n];
  cin >> n;
  cout << "Enter elements\n";
for (int i = 0; i < n; i++) {
        cin >> arr[i];}
   repeatnum(arr,n);
return 0;}
