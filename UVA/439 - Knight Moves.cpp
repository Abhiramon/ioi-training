#include <iostream>
#include <queue>

using namespace std;

int A[8]= {-2,-1,1,2,2,1,-1,-2};
int B[8]= {1,2,2,1,-1,-2,-2,-1};

int bfs(int x , int y , int x1,int y1){
	queue< pair<int,int> > q;	
	int d[10][10] = {};
	q.push(make_pair(x,y));
	d[x][y] = 0;
	while(!q.empty()){
		int xx = q.front().first,yy = q.front().second;
		q.pop();
		if(xx == x1 && yy == y1){
			return d[xx][yy];
		}
		for(int i = 0 ; i < 8 ; i++){
			int newX = xx + A[i],newY = yy + B[i];
			if(newX > 0 && newX <= 8 && newY > 0 && newY <= 8){
				d[newX][newY] = d[xx][yy] + 1;
				q.push(make_pair(newX,newY));
			}
		}
	}
	return -1;
}
int main() {
	string s , e;
	while(cin >> s >>  e){
		int x = s.at(0) - 'a' + 1;
		int y = s.at(1) - '0';
		int x1 = e.at(0) - 'a' + 1;
		int y1 = e.at(1) - '0';
		int moves = 0;
		if(x != x1 || y != y1){
			moves = bfs(x,y,x1,y1);
		}
		cout << "To get from " << s << " to " << e << " takes "<< moves << " knight moves." << endl;
	}
	return 0;
}
