//11201083	2015-05-22 15:18:34	Hiasat98	545C - Woodcutters	GNU C++	Accepted	436 ms	1600 KB
#include <vector>
#include <iostream>

using namespace std;

int n;
long long a[100001] = {};
long long b[100001] = {};

int main(){
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i] >> b[i];
    }
    long long ans = 0;
    for(int i = 0 ; i < n ; i++){
        if(i == 0 || i == n - 1)
            ans++;
        else
            if(a[i]  - b[i] > a[i - 1])
                ans++;
            else if(a[i] + b[i] < a[i + 1])
                a[i] = a[i] + b[i],ans ++;

    }
    cout << ans << endl;
}
