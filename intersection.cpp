#include<iostream>
#include<vector>
using namespace std;

int main(){

    //  intersection of two sorted arrays

    vector<int> v1= {1,1,1,2,2,3,3,3};
    vector<int> v2 = {3,3,3,4};
    
    vector<int> ans;
    int left = 0, right = 0;

    while(left < v1.size() && right < v2.size()){

        // skip duplicate

        while(left>0 && left<v1.size() && v1[left] == v1[left-1]){
            left++;
        }

        while(right>0 && right<v2.size() && v2[right] == v2[right-1]){
            right++;
        }

        // one array exhausted
        if(left >= v1.size()){
            break;
        }

        if(right >= v2.size()){
          break;
        }

        // comparison

        if(v1[left] < v2[right]){
            left++;
        }
        else if(v1[left] > v2[right]){
            right++;
        }
        else{
            ans.push_back(v1[left]);
            left++;
            right++;
        }
    }

    for(int i : ans){
        cout<<i<<" ";
    }

    
    return 0;
}

