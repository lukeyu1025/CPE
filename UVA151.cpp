#include <iostream>
using namespace std;
int main(){
	int N;
	cin>>N;
	while(N!=0){
		bool flag=false;
		int m=1;
		while(flag==false){
			int num[N]={0},count=1,position=0,ans[N];
			num[0]=1;
			for(int i=0;i<N-1;i++){
				int temp=0;	
				while(temp<m){
					if(position+1==N){position=-1;}
					if(num[position+1]==0){temp++;}
					position++;
				}
				num[position]=1;
				ans[i]=position+1;
			}
			if(ans[N-2]==13){cout<<m<<endl;flag=true;}
			m++;
		}
		cin>>N;
	}
}
