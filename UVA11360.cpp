#include <iostream>
using namespace std;
int main(){
	int cases,size,num,time,a,b;
	string input,operate;
	cin>>cases;
	for(int i=1;i<=cases;i++){
	cin>>size;
	int arr[size][size];
	cout<<"Case #"<<i<<endl;
	for(int q=0;q<size;q++){
		cin>>input;
		for(int p=0;p<size;p++){
			arr[q][p]=input[p]-48;
		}
	}
	cin>>time;
	for(int q=1;q<=time;q++){
		cin>>operate;
		if(operate=="row"){
			cin>>a>>b;
			for(int p=0;p<size;p++){
				swap(arr[a-1][p],arr[b-1][p]);
			}
		}
		if(operate=="col"){
			cin>>a>>b;
				for(int p=0;p<size;p++){
				swap(arr[p][a-1],arr[p][b-1]);
			}
		}
		if(operate=="inc"){
			for(int p=0;p<size;p++){
				for(int r=0;r<size;r++){
					arr[p][r]++;
					if(arr[p][r]==10)arr[p][r]=0;
				}
			}
		}
		if(operate=="dec"){
			for(int p=0;p<size;p++){
				for(int r=0;r<size;r++){
					arr[p][r]--;
					if(arr[p][r]==-1)arr[p][r]=9;
				}
			}
		}
		if(operate=="transpose"){
			for(int p=0;p<size;p++){
				for(int r=0;r<size;r++){
					if(p!=r){
						if(p<r){
							swap(arr[p][r],arr[r][p]);
						} 
					}
				}
			}
		}
	}
	for(int q=0;q<size;q++){
		for(int p=0;p<size;p++){
			cout<<arr[q][p];
		}
		cout<<endl;
	}
	cout<<endl;
	}
}
