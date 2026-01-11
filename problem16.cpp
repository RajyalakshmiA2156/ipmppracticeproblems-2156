#include <iostream>
using namespace std;
void sort(int arr[],int n){
  int c0=0;int c1=0;int c2=0;
for(int i=0;i<n;i++){
if(arr[i]==0){
c0+=1;}
if(arr[i]==1){
c1+=1;}
if(arr[i]==2){
c2+=1;}}
  int ind=0;
for(int i=0;i<c0;i++){
arr[ind++]=0;}
for(int i=0;i<c1;i++){
arr[ind++]=1;}
for(int i=0;i<c2;i++){
arr[ind++]=2;}}
int main(){
  int arr[]={2,1,2,0,0,0,1,2,1,1,2};
  sort(arr,11);
 for(int i=0;i<11;i++){
cout << arr[i] << " ";}}
