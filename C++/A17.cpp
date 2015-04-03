#include <iostream>
#include <string>
#include <vector>
#define NPOS -1
using namespace std; 


vector<string> splitStr(string str){
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
	string alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"; 
	for(it=v.begin(); it!=v.end(); it++){
		if((*it).size()==4){
			int pos = (*it).find_first_not_of(alpha); 
			if(pos==NPOS){
				if((*it)[0]>='A' && (*it)[0]<='Z')
					(*it).replace(0, 4, "Love"); 
				else if((*it)[0]>='a' && (*it)[0]<='z')
					(*it).replace(0, 4, "love"); 
			}				
		}
		else{
			int start = 0, pos = 0; 
			do{
				pos = (*it).find_first_not_of(alpha, start);
				if(pos-start==4){
					if((*it)[start]>='A' && (*it)[start]<='Z')
						(*it).replace(start, 4, "Love"); 
					else
						(*it).replace(start, 4, "love"); 	
				}
				start = pos+1; 
			}while(pos!=NPOS); 
		}
	}
	return v; 
}

void displayResult(vector<string> v){
	vector<string>::iterator it; 
	for(it=v.begin(); it!=v.end(); it++)
		cout << *it << " "; 	
	cout << endl; 
}

int main(){
	string str; 
	vector<string> vec; 
	while(getline(cin, str)){
		if(cin.eof())
			break; 
		cout << str << endl; 
		displayResult(process(splitStr(str))); 
	}

	return 0; 	
}
