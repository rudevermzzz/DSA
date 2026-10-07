#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int left = 0;
    int sum = 0;
    int maxSum = 0;
    for (int right = 0; right < n; right++) {
        sum += arr[right];
        while (sum > k) {
            sum -= arr[left];
            left++;
        }
        maxSum = max(maxSum, sum);
    }
    cout << maxSum << endl;
    return 0;
}