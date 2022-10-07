#include <iostream>
#include <cmath>
//批改沒過，錯在兩個大樹
//4964654623232355454546554546546545464564564565465465454654600655460
//-005444554f546554654A5445656466
using namespace std;
int main(){
	string str;
	while(getline(cin,str)){//65 97
		for(int i=2;i<=63;i++){
			if(i==63){
				cout<<"such number is impossible!"<<endl;
				break;
			}
			int max=0;
			long temp=0;
			for(int j=str.length()-1;j>=0;j--){
				if(str[j]=='+'||str[j]=='-')continue;
				else if(str[j]<65){
					if(max<str[j]-48)max=str[j]-48;
					temp+=(long)((str[j]-48)*pow(i,str.length()-j-1)*1.00000001);
				}
				else if(str[j]<97){
					if(max<str[j]-55)max=str[j]-55;
					temp+=(long)((str[j]-55)*pow(i,str.length()-j-1)*1.00000001);
				}
				else{
					if(max<str[j]-61)max=str[j]-61;
				 	temp+=(long)((str[j]-61)*pow(i,str.length()-j-1)*1.00000001);
				}
			}
			if(i>=max){
				if(temp%(i-1)==0){
					cout<<i<<endl;
					break;
				}
			}
		}
	}
}
