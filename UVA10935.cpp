#include <iostream>
using namespace std;
int main(){
	int num;
	cin>>num;
	while(num!=0){
		int card[num],head=0;
		bool flag=true;
		for(int i=0;i<num;i++){
			card[i]=i+1;
		}
		cout<<"Discarded cards:";
		while(flag==true){
			if(head==num-1){
				cout<<endl;
				flag=false;
				cout<<"Remaining card: "<<card[head]<<endl;
			}
			else{
				cout<<" "<<card[head];
				if(head<num-2)cout<<",";
				head++;
				int temp=card[head];
				for(int i=head;i<num-1;i++){
					card[i]=card[i+1];
				}
				card[num-1]=temp;
			}
		}
		cin>>num;
	}
}
