#include <iostream>
using namespace std;
int main(){
	int  num;
	cin>>num;
	for(int i=0;i<num;i++){
		int len,ant;
		cin>>len>>ant;
		int antposi[ant],midmin=0,midmax=1000000,min,head=1000000,tail=0,max;
		for(int i=0;i<ant;i++){
			cin>>antposi[i];
			if(antposi[i]<head)head=antposi[i];
			if(antposi[i]>tail)tail=antposi[i];
			if(antposi[i]<=len/2&&antposi[i]>midmin)midmin=antposi[i];
			if(antposi[i]>len/2&&antposi[i]<midmax)midmax=antposi[i];
		}
		if(midmin>len-midmax)min=midmin;
		else min=len-midmax;
		if(len-head>tail)max=len-head;
		else max=tail;
		cout<<min<<" "<<max<<endl;
	}
}
