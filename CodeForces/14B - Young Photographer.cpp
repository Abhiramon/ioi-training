//11620778 	2015-06-17 17:19:31 	Hiasat98 	14B - Young Photographer 	GNU C++ 	Accepted 	60 ms 	0 KB 
#include <iostream>
#include <cmath>
using namespace std;

const int N = 100;
int A[N],B[N];

int main(){
    int n , x;
    cin >> n >> x;
    for(int i = 0 ; i < n ; i++){
        int a , b;
        cin >> a >> b;
        A[i] = min(a,b);
        B[i] = max(a,b);
    }
    int mn = 1e9;
    for(int i = 0 ; i <= 1000 ; i++){
        int cnt = 0;
        for(int j = 0 ; j < n; j++){
            if(i >= A[j] && i <= B[j]){
                cnt++;
            }
        }
        if(cnt == n && abs(i-x) < mn){
            mn = abs(i-x);
        }
    }
    cout << (mn == 1e9 ? -1 : mn)<< endl;
    return 0;
}
