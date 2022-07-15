
#include <iostream>
using namespace std;

const int N = 1e6+5;
int n = 4;
long long int m = 7;
long long int trees[N] = {20,15,10,17};

bool isWoodSufficient(int height){
    long long int wood = 0;
    for (int i = 0; i < n; i++) {
        if( trees[i] >= height){
            wood += (trees[i] - height);
        }
    }
    
    return wood >= m;
}

int main()
{
    // cin>>n>>m;
    // for (int i = 0; i < n; i++) {
    //     cin>>trees[i];
    // }
    
    long long int low = 0, high = 1e6, mid;
    
    while( low <= high){
        
        mid = low + (high-low)/2;
        
        if(isWoodSufficient(mid)){
            low = mid;
        }else{
            high = mid - 1;
        }
    }
    
    cout<<low<<endl;

    return 0;
}
