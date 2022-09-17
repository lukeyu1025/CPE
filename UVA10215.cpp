#include <iostream>
using namespace std;
int main(){
	double L,W;
	while(cin>>L>>W){
		double max=0,maxv,minv,min=100,volume;
		if(L>W){//
			double temper=W;
			W=L;
			L=temper;
		}
		for(double i=0.00001;2*i<=L;i+=0.00001){
			volume=i*(L-(2*i))*(W-(2*i));
			if(volume>max){
				maxv=i;
				max=volume;
			}
		}
		minv=L/2;
		printf("%1.3f 0.000 %1.3f\n",maxv,minv);
	}
}
