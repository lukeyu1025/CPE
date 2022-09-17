#include <iostream>
using namespace std;
int main(){
	int N,R;
	while(cin>>N>>R){
		if(1<=R<=N<=10000){
			int Rback;
			int Ngo[N];
			bool flag=true;//ture all good,false bad
			for(int i=0;i<N;i++){
				Ngo[i]=i+1;
			}
			for(int i=0;i<R;i++){
				cin>>Rback;
				Ngo[Rback-1]=0;
			}
			for(int i=0;i<N;i++){
				if(Ngo[i]!=0){
					flag=false;
					cout<<Ngo[i]<<" ";
				}
			}
			if(flag){
				cout<<"*";
			}
		}
		cout<<endl;
	}
}
