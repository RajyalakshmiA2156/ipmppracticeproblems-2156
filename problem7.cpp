#include <iostream>
#include <vector>
using namespace std;
int findnum(vector<int>& arr) {
    int n = arr.size();
    int cand1=-1,cand2=-1;
    int count1=0, count2=0;
    for (int x:arr) {
        if(x==cand1)
            count1++;
        else if(x==cand2)
            count2++;
        else if(count1==0) {
            cand1=x;
            count1=1;
        }
        else if(count2 == 0) {
            cand2=x;
            count2=1;
        }
        else{
            count1--;
            count2--;
        }}

    count1 = 0;count2 = 0;
    for (int x : arr) {
        if (x==cand1) count1++;
        else if (x==cand2) count2++;}
  if (count1>n/3) return cand1;
    if (count2>n/3) return cand2;
    return -1;}
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = findnum(arr);
    cout << result;
    return 0;
}

