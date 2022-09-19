//未完成:TLE
#include <iostream>
#include <string>
using namespace std;
int main(){
	long  p,q;
	cin>>p>>q;
	while(!(p==-1&&q==-1)){
		long total=0;
		for(long i=p;i<=q;i++){
			string str=to_string(i);
			long posi=1;
			long num=(long)str[str.length()-posi]-48;
			while(num==0){
				posi++;
				num=(long)str[str.length()-posi]-48;
			}
			total+=num;
		}
		cout<<total<<endl;
		cin>>p>>q;
	}
}
