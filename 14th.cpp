//Given a sorted array and an integer k, determine whether there are two different elements whose difference is exactly k.
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int left = 0;
    int right = 1;
    while(right < n) {
        if(left == right) {
            right++;
            continue;
        }
        int diff = arr[right] - arr[left];
        if(diff < target) {
            right++;
        }
        else if(diff > target) {
            left++;
        }
        else {
            cout << "True";
            return 0;
        }
    }
    cout << "False";
    return 0;
}