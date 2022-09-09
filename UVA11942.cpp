#include <iostream>
using namespace std;
int main(){
	int num,arr[10];
	cout<<"Lumberjacks:"<<endl;
	cin>>num;
	for(int i=0;i<num;i++){
		bool flag=true;
		for(int q=0;q<10;q++){
			cin>>arr[q];
		}
		if(arr[0]>arr[1]){//big to small
			for(int q=0;q<9;q++){
			if(arr[q]<arr[q+1])flag=false;
			}
		}
		else{//small to big
			for(int q=0;q<9;q++){
				if(arr[q]>arr[q+1])flag=false;
			}
		}
		if(flag==true){
			cout<<"Ordered"<<endl;
		}
		else cout<<"Unordered"<<endl;
	}
}
