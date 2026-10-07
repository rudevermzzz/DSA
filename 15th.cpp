#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int current = 1;
    int longest = 1;
    for(int i = 0; i < n - 1; i++) {
        if(arr[i + 1] == arr[i] + 1) {
            current++;
        }
        else {
            current = 1;
        }
        longest = max(longest, current);
    }
    cout << longest << endl;
    return 0;
}