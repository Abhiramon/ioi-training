#include <cstdio>
#include <cstring>
#include <cctype>

using namespace std;
 
int p[10000],r[10000],t,a,b,s,u,n;
char q;

void make(int u){
	p[u] = u;
	r[u] = 0;
}
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
}

int main ()
{
    scanf ("%d", &t);
    int cnt = 0;
    while ( t-- ) {
    	cnt++;
		u = 0;
		s = 0;
        for ( int i = 0; i <10000; i++ ) make(i);

        scanf ("%d", &n);
        getchar ();

        while ( (q = getchar ()) && isalpha (q) ) {
 
            scanf ("%d %d", &a, &b); getchar ();
 
            int tx = findSet(a);
            int ty = findSet(b);
 
            if ( q == 'c' ) {
                Union(a,b);
            } else {
                if ( tx == ty ) s++;
                else u++;
            }
        }
 
        if ( cnt != 1 ) printf ("\n"); 
        printf ("%d,%d\n", s, u);
 
    }
 
    return 0;
 
}
