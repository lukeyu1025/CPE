#include <iostream>
using namespace std;
int main(){
	long long v1,d1,v2,d2,t1,t2,avgUp,avgDown,lesser,larger;
	int cases=1;
	cin>>v1>>d1>>v2>>d2;
	while(!(v1==0&&v2==0&&d1==0&&d2==0)){
		cout<<"Case #"<<cases<<": ";
		t1=d1*v2;
		t2=d2*v1;//t1 and t2 is only a relative time, not accurate time!!
		avgUp=t1+t2;
		avgDown=2;
		if(v1>=v2){
			lesser=v2;
			larger=v1;
		}
		else {
			lesser=v1;
			larger=v2;
		}
		int temp=2;
		while(v1>1){
			while(v1%temp==0){
				v1/=temp;
				if(avgUp%temp==0)avgUp/=temp;
				else avgDown*=temp;
			}
			temp+=1;
		}
		temp=2;
		while(v2>1){
			while(v2%temp==0){
				v2/=temp;
				if(avgUp%temp==0)avgUp/=temp;
				else avgDown*=temp;
			}
			temp+=1;
		}
		if(avgUp%2==0){avgUp/=2;avgDown/=2;}
		if(t1<t2){cout<<"You owe me a beer!"<<endl;}
		else cout<<"No beer for the captain."<<endl;
		cout<<"Avg. arrival time: ";
		if(avgDown==1){
			cout<<avgUp<<endl;
		}
		else cout<<avgUp<<"/"<<avgDown<<endl;
		cases++;
		cin>>v1>>d1>>v2>>d2;
	}
}
