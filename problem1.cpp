#include <iostream>
#include <vector>
using namespace std;
void arrunion(vector<int>& arr1, vector<int>& arr2, int n1, int n2) {
    for (int i = 0; i < n1; i++) {
        bool found = false;
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                found = true;
                break;}}
      if (!found) {
            arr2.push_back(arr1[i]);}}}
void arrintersection(vector<int>& arr1, vector<int>& arr2, int n1, int n2) {
    cout << "Intersection: ";
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break; }}}
    cout << endl;}

int main() {
    int n1, n2;
    cout << "Enter number of elements for array1: ";
    cin >> n1;
    cout << "Enter number of elements for array2: ";
    cin >> n2;
    vector<int> arr1(n1);
    vector<int> arr2(n2);
    cout << "Enter elements for array1:\n";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];}
    cout << "Enter elements for array2:\n";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];}
    arrunion(arr1, arr2, n1, n2);
    cout << "Union: ";
    for (int x : arr2)
        cout << x << " ";
    cout << endl;
    arrintersection(arr1, arr2, n1, n2);
    return 0;
}
