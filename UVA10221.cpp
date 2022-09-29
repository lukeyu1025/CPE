#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double s,a;
	string str;
	while(cin>>s>>a>>str){
		if(str=="min"){
			a/=60;
		}
		s+=6440;
		double arc,chord;
		arc=2*s*M_PI*a/360;
		chord=s*sin(a*M_PI/180/2)*2;
		printf("%.6f %.6f\n",arc,chord);
	}
}
