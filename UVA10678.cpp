#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int num;
	cin>>num;
	for(int i=0;i<num;i++){
		int d,l;
		cin>>d>>l;
		double a,b,ans;
		a=(double)l/2;
		b=(double)sqrt((double)pow((double)a,2)-pow((double)d/2,2));
		ans=M_PI*a*b;
		printf("%1.3f\n",ans);
	}
}
