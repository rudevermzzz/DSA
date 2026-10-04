//Given a sorted array, remove all duplicate elements in-place and return the number of unique elements.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i= 0 ; i<n ; i++){
        cin>>arr[i];
    }
    int left = 0; 
    int right = 1;
    while(right<n){
        if (arr[left]==arr[right]){
            right++;
        }
        else if(arr[left]!=arr[right]){
            left++;
        }
    }
    cout<<right+1<<endl;
    return 0;
}