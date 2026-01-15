#include <iostream>
#include <vector>
using namespace std;
void repmiss(vector<int>& arr) {
    int n = arr.size();
    int xr = 0;
    for (int x : arr)
        xr ^= x;
    for (int i = 1; i <= n; i++)
        xr ^= i;
    int bit = xr & (-xr);
    int x = 0, y = 0;
    for (int num : arr) {
        if (num & bit)
            x ^= num;
        else
            y ^= num;}
    for (int i = 1; i <= n; i++) {
        if (i & bit)
            x ^= i;
        else
            y ^= i; }
    for (int num : arr) {
        if (num == x) {
            cout << x << " " << y;
            return;
        }}
    cout << y << " " << x;}
int main() {
    vector<int> arr = {3, 1, 2, 5, 3};
    printRepeatAndMissing(arr);
    return 0;
}
