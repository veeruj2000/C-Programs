#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter Numbers"<< endl;
	cin>> n;
	int i=1;
	while(i<=n){
		int j=1;
		char startChar = 'A'+n-i;
		while(j<=i){
			char ch = startChar+j-1;			
			cout<<ch;
			j++;
		}
		cout<<endl;
		i++;
	}
}
