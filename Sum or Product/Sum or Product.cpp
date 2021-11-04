#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int n,sum=0,product=1;
    cin>>n;
    int c;
    cin>>c;
    if (c==1){
        for(int i=1;i<=n;i++){
            sum=sum+i;
            
        } cout<<sum;
    } 
    else if (c==2){
    	for(int j=1;j<=n;j++){
    		product=product*j;
    		
		} cout<< product;
	}
	else{
		cout<<"-1"<<endl;
	}
	
}
