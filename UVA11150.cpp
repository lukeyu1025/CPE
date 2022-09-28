#include <iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		int temp=n,left;
		int sum[100]={0};
		for(int i=0;i<100;i++)sum[i]=0;
		while(n>=3){
			n-=3;
			sum[0]+=3;
			n+=1;
		}
		sum[0]+=n;
		left=n;
		if(left!=0){
			for(int i=1;i<=left;i++){
				n=temp+i;
				while(n>=3){
					n-=3;
					sum[i]+=3;
					n+=1;
				}
				sum[i]+=n;
				sum[i]-=i;
				if(n<i)sum[i]=0;
			}	
		}
		int max=0;
		for(int i=0;i<=left;i++){
			if(sum[i]>max)max=sum[i];
		}
		cout<<max<<endl;
	}
}
