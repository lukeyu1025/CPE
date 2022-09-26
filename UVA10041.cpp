#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int cnt;
		cin>>cnt;
		int posi[cnt];
		for(int q=0;q<cnt;q++){
			cin>>posi[q];
		}
		for(int q=0;q<cnt-1;q++){
			for(int k=q+1;k<cnt;k++){
				if(posi[q]>posi[k]){
					int temp=posi[q];
					posi[q]=posi[k];
					posi[k]=temp;
				}
			}
		}
		int dis=30000000;
		for(int q=posi[0];q<=posi[cnt-1];q++){
			int temp=0;
			for(int i=0;i<cnt;i++){
				temp+=abs(q-posi[i]);
			}
			if(dis>temp)dis=temp;
		}
		cout<<dis<<endl;
	}
}
