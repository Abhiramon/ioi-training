#include <iostream>
#include <cstdio>

using namespace std;

int p[30000],r[30000],c[30000],ans = 0;

int findSet(int u){
	return p[u] == u ? u: findSet(p[u]); 	
}
void Union(int x , int y){
	int px = findSet(x),py = findSet(y);
	if(px == py)
		return;
	if(r[px] > r[py]){
		p[py] = px;
		c[px] += c[py];
		ans = max(c[px],ans);
	}else{
		p[px] = py;
		c[py] += c[px];
		ans = max(c[py],ans);
		if(r[px] == r[py])r[py]++;
	}
}

int main() {
	int t,n,m;
	scanf("%d",&t);
	while(t--){
		ans = 1;
		scanf("%d %d",&n,&m);
		for(int i = 0 ; i < n ; i++){
			p[i] = i;
			r[i] = 0;
			c[i] = 1;
		}
		
		for(int i = 0 ; i < m ; i++){
			int a , b;
			scanf("%d %d",&a,&b);
			Union(a,b);
		}
		printf("%d\n",ans);
	}
	return 0;
}
