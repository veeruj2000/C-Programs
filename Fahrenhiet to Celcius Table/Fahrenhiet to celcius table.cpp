#include<iostream>
using namespace std;
void printTable(int start, int end, int step){
	for(int i=start;i<=end;i=i+step){
		int ans = 5 * (i-32) / 9;
		cout<< i << "\t" << ans <<endl;
	}
}

int main(){
	int s,e,w;
	cin>>s>>e>>w;
	printTable(s,e,w);
}
