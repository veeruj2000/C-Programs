#include<iostream>
using namespace std;
int factorial(int n){
	int ans=1;
	int i=1;
	while(i<=n){
		ans=ans*i;
		i++;
	}
	return ans;
}

int main(){
	int n,r;
	cout<<"Enter Value of n: ";
	cin>>n;
	cout<<"Enter Value of r: ";
	cin>>r;
	int fact_n= factorial(n);
	int fact_r= factorial(r);
	int fact_n_r= factorial(n-r);
	int ans=fact_n/(fact_r * fact_n_r);
	cout<<"The value of nCr is: "<<ans<<endl;
}
