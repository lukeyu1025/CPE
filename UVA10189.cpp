#include <iostream>
using namespace std;
int main(){
	int cases=1,n,m;
	cin>>n>>m;
	while(!(n==0&&m==0)){
		int arr[n][m];
		if(cases!=1)cout<<endl;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				arr[i][j]=0;
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				char temp;
				cin>>temp;
				if(temp=='*'){
					arr[i][j]=-100;
					if(j-1>=0)arr[i][j-1]++;
					if(j+1<m)arr[i][j+1]++;
					if(i+1<n)arr[i+1][j]++;
					if(i+1<n&&j+1<m)arr[i+1][j+1]++;
					if(i+1<n&&j-1>=0)arr[i+1][j-1]++;
					if(i-1>=0&&j-1>=0)arr[i-1][j-1]++;
					if(i-1>=0)arr[i-1][j]++;
					if(i-1>=0&&j+1<m)arr[i-1][j+1]++;
				}
			}
		}
		cout<<"Field #"<<cases<<":"<<endl;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(arr[i][j]<0)cout<<'*';
				else cout<<arr[i][j];
			}
			cout<<endl;
		}
		cases++;
		cin>>n>>m;
	}
}
