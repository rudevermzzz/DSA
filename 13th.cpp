//Given a string, determine whether it reads the same forward and backward.
#include<iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    int left = 0;
    int right = s.length() - 1;
    while(left < right) {
        if(s[left] != s[right]) {
            cout << "false";
            return 0;
        }
        left++;
        right--;
    }
    cout << "true";
    return 0;
}
