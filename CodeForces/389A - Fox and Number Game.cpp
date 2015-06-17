//11137830	2015-05-18 20:54:07	Hiasat98	389A - Fox and Number Game	GNU C++	Accepted	31 ms	0 KB
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n,a;
vector<int> v;

int main() {
    cin >> n;
    int m = 0;
    for (int i = 0; i < n; i++) {
        cin >> a;
        m = max(m,a);
        v.push_back(a);
    }
    for (int i = 0; i < m; i++) {
        bool f = false;
        int sum = 0;
        sort(v.begin(), v.end());
        for (int i = n - 1; i > 0; i--) {
           if(v[i] > v[i - 1]){
               v[i] = v[i] - v[i - 1];
               f = true;
           }
           sum += v[i];
        }
        sum += v[0];
        if(!f) {
            cout << sum << endl;
            break;
        }
    }

    return 0;
}
