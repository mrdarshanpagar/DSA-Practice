
#include <iostream>
using namespace std;

const int N = 1e5+10;
long long int prefixSum[N];

int main()
{
    int n = 8;
    int nums[n] = {1,2,3,4,5,6,7,8};
    
    prefixSum[0] = nums[0];
    for (int i = 1; i < n; i++) {
         prefixSum[i] = prefixSum[i-1] + nums[i];
    }
    
    int t = 4;
    
    while(t--){
        int l,r;
        cin>>l>>r;
        
        if(l == 0){
            cout<<prefixSum[r]<<endl;
        }else{
            cout<<prefixSum[r] - prefixSum[l-1];
        }
    }
    
    
    return 0;
}

