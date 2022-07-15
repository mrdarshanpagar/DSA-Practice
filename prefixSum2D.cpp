
#include <iostream>
using namespace std;

const int N = 1e3+10;
long long int prefixSum[N][N];

int main()
{
    int n ;
    cin>>n;
    
    int arr[n+1][n+1];
    for (int i = 1; i <=n; i++) {
         for (int j = 1; j < =n; j++) {
             cin>>arr[i][j];
             prefixSum[i][j] = arr[i-1][j] + arr[i][j-1] - arr[i-1][j-1];
         }
    }
    
    int t = 4;
    
    while(t--){
        int a,b,c,d;
        long long int sum = 0;
        cin>>a>>b>>c>>d;
        
        sum = prefixSum[c][d] - prefixSum[a-1][d] - prefixSum[c][b-1] + prefixSum[a-1][b-1];
        
        cout<<sum<<endl;
        
    }
    
    
    return 0;
}

