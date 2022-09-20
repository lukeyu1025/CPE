#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double n;
	while(cin>>n){
		double triangle,square,cross,dot,line;
		triangle=n*n*sqrt(3)/4;
		square=n*n;
		cross=square-triangle-n*n*M_PI/6;
		dot=square-n*n*M_PI/4-2*cross;
		line=square-4*cross-4*dot;
		cross*=4;
		dot*=4;
		printf("%.3f %.3f %.3f\n",line,dot,cross);
	}
}
