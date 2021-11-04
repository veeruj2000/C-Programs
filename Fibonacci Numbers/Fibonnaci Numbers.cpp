#include <iostream>  
using namespace std;  
int main() {  
  int n1=1,n2=1,n3,i,number;    
 cout<<"Enter the number of elements: ";    
 cin>>number; 
 if(number==1){
 	cout<<"1";
 }  
 else if(number==2){
 	cout<<"1";
 }
 else{
 	for(i=3;i<=number;++i) //loop starts from 2 because 0 and 1 are already printed    
 {    
  n3=n1+n2;    
      
  n1=n2;    
  n2=n3;
  if(i == number){
  	cout<<n3;
  }    
 } 	
 }
   return 0;  
   }
