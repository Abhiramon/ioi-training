//10977291	2015-05-02 21:35:27	Hiasat98	3A - Shortest path of the king	GNU C++	Accepted	60 ms	2000 KB

#include <iostream>
#include <sstream>
#include <string>
#include <cmath> 

using namespace std;

double Distance(double dX0, double dY0, double dX1, double dY1)
{
    return sqrt((dX1 - dX0)*(dX1 - dX0) + (dY1 - dY0)*(dY1 - dY0));
}

int charToInt(char t){
   string r = "";
   r += t;
  int value;
  istringstream buffer(r);
  buffer >> value;
  return value;
}


int main(){
  string one_str , two_str;
   cin >> one_str;
   cin >> two_str;
   
   int x , y, x1,y1;
   for(int i = 0 ; i < 2 ; i++){
   	   if(i == 0){
   	   	   x = ( (int) one_str.at(i)) - 96;
   	   	   x1 =  ( (int) two_str.at(i)) - 96;
   	   }else if(i == 1){
   	   	   y = charToInt(one_str.at(i));
   	   	   y1 = charToInt(two_str.at(i));
   	   }
   }
   int x_dist = sqrt(pow(x - x1,2));
   int y_dist = sqrt(pow(y - y1,2));
   
   int distance = 0;
   if(x_dist >= y_dist){
   	  distance = x_dist;
   }else{
   	 distance = y_dist;
   }
   cout << distance << endl;
   for(int i = 0 ; i < distance ; i++){
   	   string step = "";
   	   if(x != x1){
   	   	  if(x > x1){
   	   	  	 step = "L";
   	   	  	 x -= 1;
   	   	  }else{
   	   	  	 step = "R";
   	   	  	 x +=1;
   	   	  }
   	   }
   	   if(y != y1){
   	   	 if(y > y1){
   	   	 	step += "D";
   	   	 	y -=1;
   	   	 }else{
   	   	 	step += "U";
   	   	 	y += 1;
   	   	 }
   	   }
   	   cout << step << endl;
   }
    
}
