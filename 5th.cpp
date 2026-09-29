#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i= 0; i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    double avg = 0;
    for(int i = 0; i<n; i++){
        sum += arr[i];
    }
    avg  = (double)sum/n;
    int count =0;
    for(int i = 0; i<n; i++){
        if(arr[i]>avg){
            count++;
        }
    }
    cout<<count<<endl;  
}