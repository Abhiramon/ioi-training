//11135751	2015-05-18 16:55:03	Hiasat98	501A - Contest	GNU C++	Accepted	31 ms	100 K
#include <iostream>

using namespace std;

int a , b , c , d , p1 , p2;

int score(int score,int t){
    return max((3 * score) / 10 , score - (score / 250) * t);
}
int main(){
    cin >> a >> b >> c >> d;
    p1 = score(a,c);
    p2 = score(b,d);
    if(p2 == p1)
        cout << "Tie" << endl;
    else
        cout << (p1 > p2 ? "Misha" : "Vasya") << endl;
}
