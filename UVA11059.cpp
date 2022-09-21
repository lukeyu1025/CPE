#include <iostream>
using namespace std;
int main(){
    int n,cases=1;
    while(cin>>n){
        int arr[n],neg=0,product=1;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            if(temp<0){
                neg++;
            }
            arr[i]=temp;
        }
        if(neg==n){
            product=0;
        }
        else if(neg%2==0){
            for(int i=0;i<n;i++){
                product*=arr[i];
            }
        }
        else {
            for(int i=0;i<n;i++){
                if(arr[i]>0){
                    product*=arr[i];
                }
            }
        }
        cout<<"Case #"<<cases<<": The maximum product is "<<product<<"."<<endl;
    }
    
}
