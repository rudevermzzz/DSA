#include<iostream>
#include<vector>
#include<unordered_map>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i = 0; i<n ; i++){
        cin>> arr[i];
    }
    unordered_map<int,int>freq;
    for(int i = 0; i<n; i++){
        freq[arr[i]]++;
    }
    int first_element_double=INT_MAX;
    for(int i = 0; i<n ; i++){
        if(freq[arr[i]]>1){
            first_element_double = arr[i];
            break;
        }
    }
    cout<<first_element_double<<endl;
    return 0;
}