#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
    char *array_point;
    char c1;
    int count=0, alp=0, digt=0, spcchr=0,oth=0;
    char string_array[100];    
    string str1;
    char $;
    getline(cin, str1);
    strcpy(string_array, str1.c_str());
    char c;
    while(c!=$){
    	for(array_point=string_array;*array_point!='\0';array_point++)
     {
        c1=*array_point;
        count++;
		if (isalpha(c1))
		{
		    alp++;
		}
		else if (isdigit(c1))
		{
		    digt++;
		}
		else if (isspace(c1))
        {
            spcchr++;
        }
     } 
	}
         
        cout<<alp;
        cout<<digt; 
        cout<<spcchr;       
     return 0;
}
