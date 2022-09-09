#include <iostream>
using namespace std;
int main(){
	int T,N,P;
	cin>>T;
	for(int i=0;i<T;i++){
		cin>>N>>P;
		int h[P];
		for(int q=0;q<P;q++){
			cin>>h[q];
		}
		int workDays=0;
		for(int q=1;q<=N;q++){
			bool flag=false;
			for(int r=0;r<P;r++){
				if(q%h[r]==0){flag=true;}
			}
			if(q%7==0){
				flag=false;
			}
			else if(q%7==6){
				flag=false;
			}
			if(flag==true){
				workDays++;
			}
		}
		cout<<workDays<<endl;
	}		
}
