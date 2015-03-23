#include <iostream>
#include <string>
using namespace std; 

int main(){
	string str;
	char c;
	int n, len, i, j;   
	
	while(cin>>str){

		len = str.size(); 
		for(n=1;n<=9;n++)
			if(len<=n*n)
				break;	
		
		str.insert(str.end(), n*n-len, 0); 
		
		for(i=0;i<n;i++){
			if(i!=0)
				cout << " "; 
			for(j=0;j<n;j++){
				c = str.c_str()[j*n+i];
				if(c!=0) 
					cout << c; 
			}	
		}
		cout << endl; 
	}
	return 0; 	
}
