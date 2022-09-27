#include <iostream>
using namespace std;
int main(){
    int n,cases=1;
    cin>>n;
    while(n!=0){
        cout<<"Case "<<cases<<":";
        cases++;
        int arr[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }
        int head=0,tail=n-1;
		 while(head<=tail){
            int sum=0;
            if(head!=tail){
           	for(int i=head;i<=tail;i++){
           		sum+=arr[head][i];
           		sum+=arr[tail][i];
           	}
           	for(int i=head+1;i<=tail-1;i++){
           		sum+=arr[i][head];
           		sum+=arr[i][tail];
           	}
            }
            else{
            	sum=arr[head][head];
            }
            head++;
        tail--;
            cout<<" "<<sum;
        }
        cout<<endl;
        cin>>n;
    }
}
