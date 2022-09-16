//未完成
#include <iostream>
using namespace std;
int main(){
	float L,W;
	while(cin>>L>>W){
		float max=0,maxv,minv,min=100,volume;
		if(L>W){//
			float temper=W;
			W=L;
			L=temper;
		}
		for(float i=0.00001;2*i<L;i+=0.00001){
			volume=i*(L-(2*i))*(W-(2*i));
			if(volume<min){
			minv=i;
			min=volume;
			}
			if(volume>max){
				maxv=i;
				max=volume;
			}
		}
		printf("%1.3f 0.000 %1.3f\n",maxv,minv);
	}
}
