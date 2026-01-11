#include <iostream>
#include <vector>
using namespace std;
int main(){
    int j=0;
    vector<int> arr={2,3,5,0,4,0,7,0,7,0};
    vector<int> temp;
     for (int i=0;i<arr.size();i++){
         if(arr[i]!=0){
             temp.push_back(arr[i]);
             j++;
         }}
          while (temp.size() < arr.size()) {
        temp.push_back(0);
    }
     
   for (int i=0;i<arr.size();i++){
       cout << temp[i]<< " ";}
}
