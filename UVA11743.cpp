#include <iostream>
using namespace std;
int main(){
	 int num;
	 cin>>num;
	 for(int i=1;i<=num;i++){
	 string temp;
	 int sum=0;
	 	for(int i=0;i<4;i++){
	 		cin>>temp;
	 		sum+=(temp[0]-48)*2/10+(temp[0]-48)*2%10+(temp[1]-48)+(temp[2]-48)*2/10+(temp[2]-48)*2%10+(temp[3]-48);
	 	}
	 	if(sum%10==0){
	 		cout<<"Valid"<<endl;
	 	}
	 	else{
	 		cout<<"Invalid"<<endl;
	 	}
	 }
}
