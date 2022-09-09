#include<iostream>
using namespace std;
int main(){
	int cases;
	cin>>cases;
	for(int i=1;i<=cases;i++){
		long long x1,x2,y1,y2,step=0;
		cin>>y1>>x1>>y2>>x2;
		while(x1!=0){
			x1--;
			y1++;
			step++;
		}
		while(x2!=0){
			x2--;
			y2++;
			step--;
		}
		for(int i=y1;i<y2;i++){
			step+=i+2;
		}
		cout<<"Case "<<i<<": "<<step<<endl;
	}
}
