#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int wall,high=0,low=0;
		cin>>wall;
		int height[wall];
		for(int j=0;j<wall;j++){
			cin>>height[j];
		}
		for(int j=0;j<wall-1;j++){
			if(height[j]>height[j+1])low++;
			if(height[j]<height[j+1])high++;
		}
		cout<<"Case "<<i+1<<": "<<high<<" "<<low<<endl;
	}
}
