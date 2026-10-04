#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int left = 0;
    int right = n-1;
    int target = 10;
    while(left<right){
        int sum = arr[left]+arr[right];{
            if (sum==target){
                cout<<"True";
                return 0;
            }     
            else if(sum<target){
                left++;
            }          
            else{
                right--;
            }
        }
    }
    cout<<"false";
    return 0;
}