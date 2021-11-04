#include<iostream>
using namespace std;
int main(){
	int x, c, count=0;
	cin>>x;
	for (int i=1;i<=x+count;i++){
		c= (3*i)+2;
		if (c%4==0){
			count++;
			continue;
		}
		cout<<c<<" ";
	}
}
