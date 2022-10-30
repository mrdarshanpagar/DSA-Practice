#include <iostream>
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> powerSet(vector<int> v, int i){

	if(i < 0) return {{}};

    vector<vector<int>> partialAns = powerSet(v, i-1);
	vector<vector<int>> ans;

    for(auto x: partialAns){
	    ans.push_back(x);
    }       

    for(auto x: partialAns){
	    x.push_back(v[i]);
        ans.push_back(x);
    }

    return ans;
}

int main() {
    vector<vector<int>> ans = powerSet({1,2,3}, 2);
    
    for(auto x: ans){
	    for(auto i : x){
		    cout<<i<<" ";
	    }
	cout<<"\n";
    }

    return 0;
}
