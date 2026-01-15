#include <iostream>
#include <vector>
using namespace std;
void maxmin(vector<int>& arr){
    int n=arr.size();
        int min=arr[0];
        int max=arr[0];
        for(int i=1;i<n;i++)
    {if(arr[i]<min){
        min=arr[i];}
    if(arr[i]>max){
        max=arr[i];}
   
}
    cout<< "max"<< max;
    cout<<"min"<<min;
}
int main(){
   
    int n;
    cout<<"enter elements how many elements:";
    cin>> n;
     vector<int> v(n);
    cout <<"enter elements";
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    maxmin(v);
    
}
