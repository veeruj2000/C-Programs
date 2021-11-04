#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int i = 1;
	int n1= (n + 1 )/2;
	while(i <= n1 ){
		int spaces = 1;
		while (spaces <= n1 - i){
			cout<<' ';
			spaces = spaces + 1;
		}
		int stars = 1;
		int a=2i-1;
		while(stars<=a){
			cout<<'*';
			stars = stars + 2;
		}
	}
}
