#include <iostream>
using namespace std;
int main(){
	long long s,d;
	while(cin>>s>>d){
		long long day=0;
		while(day<d){
			day+=s;
			s++;
		}
		s--;
		cout<<s<<endl;
	}
}
