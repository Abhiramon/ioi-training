//11137664	2015-05-18 20:32:39	Hiasat98	300A - Array	GNU C++	Accepted	30 ms	0 KB
#include <iostream>
#include <vector>
using namespace std;

int n,a;

int main(){
    cin >> n;
    vector<int> first;
    vector<int> second;
    vector<int> third;
    for(int i = 0;  i < n ; i++){
        cin >> a;
        if(a > 0)
            second.push_back(a);
        if(a < 0)
            first.push_back(a);
        if(a == 0)
            third.push_back(a);
    }
    if(second.size() == 0){
        second.push_back(first.back());
        first.pop_back();
        second.push_back(first.back());
        first.pop_back();
    }
    if(first.size() % 2 == 0)
        third.push_back(first.back()),first.pop_back();

    cout << first.size() << " ";
    for(int i = 0 ; i < first.size();i++){
        cout << first[i] << " ";
    }
    cout << endl;

    cout << second.size() << " ";
    for(int i = 0 ; i < second.size();i++){
        cout << second[i] << " ";
    }
    cout << endl;

    cout << third.size() << " ";
    for(int i = 0 ; i < third.size();i++){
        cout << third[i] << " ";
    }
    cout << endl;
    return 0;
}
