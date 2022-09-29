#include <iostream>
using namespace std;
int main(){
	string str;
	int cases=1;
	while(getline(cin,str)){
		int arr[150],cnt=1,min=0;
		if(cases!=1)cout<<endl;
		for(int i=0;i<150;i++)arr[i]=0;
		for(int i=0;i<str.length();i++)arr[str[i]]++;
		while(min!=1000){
			min=1000;
			int ans;
			for(int i=0;i<150;i++){
				if(arr[i]!=0&&arr[i]<=min){
					min=arr[i];
					ans=i;
				}
			}
			if(min!=1000)cout<<ans<<" "<<arr[ans]<<endl;
			arr[ans]=0;
		}
		cases++;
	}
}
