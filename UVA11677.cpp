#include <iostream>
using namespace std;
int main(){
	int H1,M1,H2,M2;
	cin>>H1>>M1>>H2>>M2;
	while(!(H1==0&&M1==0&&H2==0&&M2==0)){
		int time=0;
		if(H1>H2)H2+=24;
		if(H1==H2&&M1>M2)H2+=24;
		time+=60*(H2-H1);
		time+=M2-M1;
		cout<<time<<endl;
		cin>>H1>>M1>>H2>>M2;
	}
}
