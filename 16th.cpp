//Maximum sum of K consecutive elements
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 
int main(){
    int n; k;
    cin>>n,k;
    vector<int> arr(n);
    for (int i = 0; i<n; i++){
        cin>> arr[i];
    }
    int windowsum = 0;
    for(int i = 0; i<k;i++){
        windowsum += arr[i];
    }
    int maxsum = windowsum;
    for(int i = k; i<n; i++){
        windowsum = windowsum - arr[i-k] + arr[i];
        maxsum = max(maxsum, windowsum);
    }
    cout<< maxsum << endl;
    return 0;
}