#include <iostream>
using namespace std;
int main(){
	int J,R;
	cin>>J>>R;
	while(!(J==0&&R==0)){
	int arr[J]={0};
	int ans=0;
	for(int i=0;i<R;i++){
		for(int q=0;q<J;q++){
			int temp;
			cin>>temp;
			arr[q]+=temp;
			if(arr[q]>=arr[ans]){ans=q;}
		}
	}
	cout<<ans+1<<endl;
	cin>>J>>R;	
	}
}
