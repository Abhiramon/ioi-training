#include <iostream>
#include <cstdio>

using namespace std;

int p[100000],r[100000],num = 0;

int findSet(int u){
	return p[u] == u ? u : findSet(p[u]);
}
void Union(int x,int y){
	int px = findSet(x),py = findSet(y);
	if(px == py)
		return;
	if(r[px] > r[py]){
		p[py] = px;
	}else{
		p[px] = py;
		if(r[px] == r[py]) r[py]++;
	}
	num--;
}
int main(){
	int n,m,cnt = 0;
	while(scanf("%d %d",&n,&m) && n > 0 && m > 0){
		num = n;
		cnt++;
		int a, b;
		for(int i = 0; i < n;i++){
			p[i] = i;
			r[i] = 0;
		}
		for(int i = 0 ; i < m ; i++){
			scanf("%d %d",&a,&b);
			a--,b--;
			Union(a,b);
		}
		printf("Case %d: %d\n",cnt,num);
	}
	return 0;	
}
