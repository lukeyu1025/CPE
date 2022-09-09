#include <iostream>
using namespace std;
int main(){
	int num;
	cin>>num;
	for(int i=0;i<num;i++){
		int x,y,dif,temp=1,step=0;
		cin>>x>>y;
		dif=y-x;
		while(dif>=temp*2){
			dif-=temp*2;
			temp++;
			step+=2;
		}
		if(dif!=0){
			if(temp==dif){
				step++;
			}
			else if(temp>dif){
				step++;
			}
			else if(temp<dif){
				step+=2;
			}
		}
		cout<<step<<endl;
	}
}
