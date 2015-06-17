//11136509	2015-05-18 18:17:25	Hiasat98	152A - Marks	GNU C++	Accepted	30 ms	0 KB
#include <iostream>
#include <sstream>

using namespace std;

int n , m;

int main(){
    cin >> n >> m;
    int arr[101][101] = {};
    for(int i = 0 ; i < n ; i++){
        string r;
        cin >> r;
        for(int x = 0 ; x < m;x++){
            int a = r.at(x) - '0';
            arr[i][x] = a;
        }
    }
    int total = 0;
    int dd = 0;
    int students[101] = {};
    for(int x = 0 ; x < m;x++){
        dd = 0;
        for(int i = 0 ; i < n ; i++){
            dd= max(arr[i][x],dd);
        }
        for(int i = 0 ; i < n ; i++){
            if(arr[i][x] == dd){
                students[i]++;
            }
        }
    }
    for(int i = 0 ; i < n ; i++){
        if(students[i] > 0){
            total++;
        }
    }
    cout << total << endl;
}
