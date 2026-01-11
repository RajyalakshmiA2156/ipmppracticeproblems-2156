#include <iostream>
#include <vector>
using namespace std;
void evenodd(vector <int>& arr){
    int f=0,l=arr.size() - 1;
    while (l>f) {
        if (arr[f] % 2 != 0) {
            if (arr[l] % 2 == 0) {
                swap(arr[f], arr[l]);
                f++;
                l--;
            } else if {
                l--;
            }
        } else {
            f++; }    }}
int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
 evenodd(arr);
    for (int x : arr)
        cout << x << " ";
    return 0;
}
