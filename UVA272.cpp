#include <iostream>
using namespace std;
int main(){
	string str;
	bool flag=true;
	while(getline(cin,str)){
		for(int i=0;i<str.length();i++){
			if(str[i]=='"'){
				if(flag==true){
					cout<<"``";
					flag=false;
				}
				else{
					cout<<"''";
					flag=true;
				}
			}
			else{
				cout<<str[i];
			}
		}
		cout<<endl;
	}
}
