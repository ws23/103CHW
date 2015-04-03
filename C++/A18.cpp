#include <iostream>
#include <string>
#include <vector>
#define NPOS -1
using namespace std; 

vector<string> split(string str){
	int i, len, pos;
	len = str.size();
	vector<string> result;
	for(i=0;i<len;i++){
		pos = str.find(" ", i);
		if(pos==NPOS){
			string tmp = str.substr(i, len-i);
			result.push_back(tmp);
			break;
		}
		if(pos < len){
			string tmp = str.substr(i, pos-i);
			result.push_back(tmp);
			i = pos;
		}
	}
	return result;
}

vector<string> process(vector<string> v){
	vector<string>::iterator it; 

	for(it=v.begin(); it!=v.end(); it++){
		string sub, str = *it; 
		if(str.find_first_of("aeiou", 0)==0)
			str.append("way");  
		else{
			sub = str.substr(0, 1); 
			str.erase(0, 1); 
			str.append(sub); 
			str.append("ay"); 
		}
		*it = str; 
	}	

	return v; 
}


void display(vector<string> v){
	vector<string>::iterator it; 
	
	for(it=v.begin(); it!=v.end(); it++)
		cout << *it << " "; 	
	cout << endl; 
}

int main(){
	string str, sub; 

	while(getline(cin, str)){
		if(cin.eof())	
			break;
		display(process(split(str))); 
	}
	return 0; 	
}
