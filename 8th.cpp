#include<iostream>
#include<unordered_map>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    unordered_map<int,int> freq;
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    int first = INT_MAX;
    for(int i = 0; i<n; i++){
        if (freq[arr[i]] == 1){
        first = arr[i];
        break;
        }
    }
    cout<<first<<endl;
    return 0;

}