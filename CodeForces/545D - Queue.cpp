//11175865	2015-05-20 12:49:10	Hiasat98	545D - Queue	GNU C++	Accepted	249 ms	400 KB
#include <iostream>
#include <algorithm>

using namespace std;

int arr[100001] ={};
int main() {
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    sort(arr,arr + n);
    int sum = 0,happy = 0;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] >= sum){
            happy++;
            sum += arr[i];
        }
    }
    cout << happy << endl;
    return 0;
}
