#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
	int speed=0,time=0,temp=0,d;
	float distance=0.0;
	string str;
	bool first=true;
	while(getline(cin,str)){
		int len=str.length();
		if(str[0]==' '){
			for(int i=0;i<str.length();i++){
				str[i]=str[i+1];
			}
			len--;
		}
		time=0;
		time+=((int)str[0]-48)*36000;
		time+=((int)str[1]-48)*3600;
		time+=((int)str[3]-48)*600;
		time+=((int)str[4]-48)*60;
		time+=((int)str[6]-48)*10;
		time+=((int)str[7]-48);
		if(str.length()==8){
			d=time-temp;
			temp=time;
			float temper=speed*d;
			temper/=3600;
			distance+=temper;
			for(int i=0;i<=7;i++)cout<<str[i];
			printf(" %1.2f km\n",distance);
		}
		else{
			d=time-temp;
			temp=time;
			float temper=speed*d;
			temper/=3600;
			distance+=temper;
			speed=0;
			for(int i=len-1;i>=9;i--){
				speed+=(int)((int)str[i]-48)*pow(10,len-i-1)*1.00000001;
			}
		}
	}
}
