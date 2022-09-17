#include <iostream>
#include <string>
using namespace std;
int main(){
	int num;
	int arr[10];
	string s1,s2;
	cin>>num>>s1>>s2;
	for(int i=0;i<10;i++){
		arr[i]=i+1;
	}
	bool flag=false;
	while(num!=0){
		if(s2=="on"){
			if(arr[num-1]==0){
				cout<<"Stan is dishonest"<<endl;
			}
			else{
				cout<<"Stan may be honest"<<endl;
			}
			flag=false;
			for(int i=0;i<10;i++){
				arr[i]=i+1;
			}
		}
		if(s2=="high"){
			for(int i=9;i>=num-1;i--){
				arr[i]=0;
			}
		}
		if(s2=="low"){
			for(int i=0;i<num;i++){
				arr[i]=0;
			}
		}
		cin>>num>>s1>>s2;
	}
return 0;
}
