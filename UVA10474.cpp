#include <iostream>
using namespace std;
int main(){
	int n,q,cases=1;
	cin>>n>>q;
	while(!(n==0&&q==0)){
		cout<<"CASE# "<<cases<<":"<<endl;
		cases++;
		int num[n];
		for(int i=0;i<n;i++){
			cin>>num[i];
		}
		for(int i=0;i<n-1;i++){
			for(int j=i;j<n;j++){
				if(num[i]>num[j]){
					int temp=num[i];
					num[i]=num[j];
					num[j]=temp;
				}
			}
		}
		int ques;
		for(int i=0;i<q;i++){
			cin>>ques;
			bool flag=false;
			int find=0,ans=0;
			while(find<n){
				if(num[find]==ques&&flag==false){
					flag=true;
					ans=find;
				}
				find++;
			}
			if(flag==true)cout<<ques<<" found at "<<ans+1<<endl;
			else cout<<ques<<" not found"<<endl;
		}
		cin>>n>>q;
	}
}
