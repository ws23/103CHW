#include <string>
#include <vector>
#include <iostream>
using namespace std; 

int strToInt(string str){
	int i, len, sum; 
	vector<int> vec; 
	vector<int>::iterator it; 
	len = str.size(); 
	for(i=0;i<len;i++){
		if(str[i]>='0'&&str[i]<='9')
			vec.push_back(str[i]-'0'); 
		else
			break;
	}
	len = vec.size(); 
	sum = 0; 
	for(i=1, it=vec.end()-1; it!=vec.begin(); i*=10, it--)
		sum += (*it)*i; 
	sum += (*it)*i; 
	return sum; 
}

int main(){
	string s;
	int sum = 0;  
	while(cin >> s){
		if(cin.eof())
			break;
		sum += strToInt(s); 	
		cout << " + " << s << " = " << sum << endl; 
	}
	return 0; 	
}
