#include<iostream>
using namespace std;
int main(){
	int n,flag,num;
	cout<<"Enter Number"<<endl;
	cin>>num;
	bool divided=false;
	for(int i=2; i<num;i++){
		flag =0;
		for(int j=2;j<i;j++){
			if (i%j ==0){
				flag =1;
			}
		}
		if (flag ==0){
			cout<<i<<endl;
		}
	}
}
