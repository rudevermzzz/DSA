#include<iostream>
#include<vector>
#include<unordered_map>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin>> arr[i];
    }
    unordered_map<int,int> freq;
    for(int i = 0; i<n; i++){
        freq[arr[i]]++;
    }
    int maxFreq = 0;
    for (int i = 0; i<n; i++){
        if(freq>maxFreq){
            maxFreq = freq;
        }
    }
    cout<<freq<<endl;
}