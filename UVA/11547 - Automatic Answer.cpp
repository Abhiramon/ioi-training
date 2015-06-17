#include <cstdio>
#include <sstream>

using namespace std;
int main(){
   int t,n;
   scanf("%d",&t);
   while(t--){
	    scanf("%d", &n);
        n *= 567;
        n /= 9;
        n += 7492;
        n *= 235;
        n /= 47;
        n -= 498;
   		stringstream buff;
   		buff << n;
   		string tmp = buff.str();
        printf("%c\n",tmp.at(tmp.length() - 2));
   }
   
   return 0;
}
