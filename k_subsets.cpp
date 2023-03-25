#include<bits/stdc++.h>
using namespace std;

void solve(int i, int k, vector<int> &arr, vector<vector<int>> &ans, int count){

    if(i >= arr.size()){
        if(count == k){
            for(int j=0; j<ans.size(); j++){
                cout<<"----------------"<<"\n";
                for(int k=0; k<ans[j].size(); k++){
                    cout<<ans[j][k]<<" ";
                }
                cout<<"\n";
            }
        }
        return;
    }

    for(int j=0; j<ans.size(); j++){
        if(ans[j].size() > 0){
            ans[j].push_back(arr[i]);
            solve(i+1, k, arr, ans, count);
            ans[j].pop_back();
        }
        else{
            ans[j].push_back(arr[i]);
            solve(i+1, k, arr, ans, count+1);
            ans[j].pop_back();
            break;
        }

    }
    return;
}

int main(){

    vector<int> v = {1,2,3,4};
    int k = 3;

    vector<vector<int>> ans(k, vector<int>());
    solve(0, k, v, ans, 0);
    

    // for(vector<int> &set: ans){
    //             for(int &i: set){
    //                 cout<<i<<" ";
    //             }
    //             cout<<"\n";
    //     }

    return 0;
}