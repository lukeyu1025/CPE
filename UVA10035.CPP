#include <iostream>
using namespace std;
int main(){
	string a,b;
	cin>>a>>b;
	while(!(a=="0"&&b=="0")){
		int carry=0,len,sum=0;
		if(a.length()>b.length())len=a.length();
		else len=b.length();
		for(int i=0;i<len;i++){
			int num=0;
			if((a.length()-i-1)>=0&&(a.length()-i-1)<=10)num+=a[a.length()-i-1]-48;
			if((b.length()-i-1)>=0&&(b.length()-i-1)<=10)num+=b[b.length()-i-1]-48;
			num+=carry;
			if(num>=10){
				carry=1;
				sum++;
			}
			else carry=0;
		}
		if(sum==0){
			cout<<"No carry operation."<<endl;
		}
		else if(sum==1){
			cout<<sum<<" carry operation."<<endl;
		}
		else{
			cout<<sum<<" carry operations."<<endl;
		}
		cin>>a>>b;
	}
}
