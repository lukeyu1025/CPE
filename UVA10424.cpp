#include <iostream>
using namespace std;
int main(){
	string str1,str2;
	while(cin>>str1>>str2){//a=97 A=65 z=122 Z=90
		int num1=0,num2=0;
		for(int i=0;i<str1.length();i++){
			if(str1[i]>=97&&str1[i]<=122){
				num1+=(int)str1[i]-96;
			}
			else if(str1[i]>=65&&str1[i]<=90){
				num1+=(int)str1[i]-64;
			}
		}
		for(int i=0;i<str2.length();i++){
			if(str2[i]>=97&&str2[i]<=122){
				num2+=(int)str2[i]-96;
			}
			else if(str2[i]>=65&&str2[i]<=90){
				num2+=(int)str2[i]-64;
			}
		}
		while(num1>=10){
			int temp=num1,total=0;
			while(temp!=0){
				total+=temp%10;
				temp/=10;
			}
			num1=total;
		}
		while(num2>=10){
			int temp=num2,total=0;
			while(temp!=0){
				total+=temp%10;
				temp/=10;
			}
			num2=total;
		}
		if(num1>num2){
			int temp=num1;
			num1=num2;
			num2=temp;
		}
		float percent=100*(float)num1/(float)num2;
		printf("%1.2f ",percent);
		cout<<"%"<<endl;
	}
}
