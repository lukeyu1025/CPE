//跑不過批改
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int num,cases=0;
	while(cin>>num){
		cases++;
		int neg=0,ans[num];
		unsigned long long output=1;
		for(int i=0;i<num;i++){
			int temp;
			cin>>temp;
			if(temp<0)neg++;
			ans[i]=temp;
		}
		if(neg%2==0){
			for(int i=0;i<num;i++){
				int posi=abs(ans[i]);

				output*=(unsigned long long)posi;
			}
		}
		else{
			int start=0,end=num-1;
			unsigned long long temp1=1,temp2=1;
			while(ans[start]>0){
				start++;
			}
			while(ans[end]>0){
				end--;
			}
			for(int i=0;i<end;i++){
				int posi=abs(ans[i]);
				temp1*=(unsigned long long)posi;
			}
			for(int i=start+1;i<num;i++){
				int posi=abs(ans[i]); 
				temp2*=(unsigned long long)posi;
			}
			if(temp1>=temp2){
				output=temp1;
			}
			else{
				output=temp2;
			}
		}
		cout<<"Case #"<<cases<<": The maximum product is "<<output<<"."<<endl<<endl;
	}
}
