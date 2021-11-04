#include<iostream>
using namespace std;

void print_1_to_n(int n){
	int i=1;
	while(i<=n){
		cout<<i<<endl;
		i++;
	}
}

int main(){
	print_1_to_n(10);
}
