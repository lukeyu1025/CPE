#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n,cases=1;
	cin>>n;
	for(int i=0;i<n;i++){
		string str1,str2;
		cin>>str1>>str2;
		cout<<"Pair #"<<cases<<": ";
		cases++;
		int num1=0,num2=0;
		for(int j=str1.length()-1;j>=0;j--){
			if(str1[j]=='1'){
				num1+=(int)pow(2,str1.length()-j-1);
			}
		}
		for(int j=str2.length()-1;j>=0;j--){
			if(str2[j]=='1'){
				num2+=(int)pow(2,str2.length()-j-1);
			}
		}
		int max;
		if(num1>num2)max=num2;
		else max=num1;
		bool flag=false;
		for(int i=2;i<=max;i++){
			if(num1%i==0&&num2%i==0)flag=true;
		}
		if(flag)cout<<"All you need is love!"<<endl;
		else cout<<"Love is not all you need!"<<endl;
	}
}
