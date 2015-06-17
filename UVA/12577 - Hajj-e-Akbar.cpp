#include <cstdio>
#include <cstring>

using namespace std;


int main() {
	char s[128];
	int c =0;
	while(scanf("%s",&s) && s[0] != '*'){
		c++;
		printf("Case %d: ",c);
		printf(strcmp(s,"Umrah") == 0 ? "Hajj-e-Asghar\n" : "Hajj-e-Akbar\n");
	}
	return 0;
}
