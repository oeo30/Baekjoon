#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isError(string s) {
	if(s.find('_') == string::npos) return isupper(s[0]);
	else {
		if(s[0] == '_' || s[s.size()-1] == '_') return true;
		for(char c : s) if(isupper(c)) return true; //forloop only controls immediately next statement, same as if 
		return s.find("__") != string::npos; //if __ exists then error
	}
}

string cpp2java(string s) {
	string ret = "";
	for(int i=0; i<s.size(); i++) {
		if(s[i] != '_') ret.push_back(s[i]);
		else ret.push_back(toupper(s[++i]));
	}
	return ret;
}

string java2cpp(string s) {
	string ret = "";
	for(int i=0; i<s.size(); i++) {
		if(!isupper(s[i])) ret.push_back(s[i]);
		else{
			ret.push_back('_');
			ret.push_back(tolower(s[i]));
		}
	}
	return ret;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string s; cin >> s;
	if(isError(s)) {
		cout << "Error!";
		return 0;
	}

	bool flag = s.find("_") != string::npos;
	
	if(flag) cout << cpp2java(s);
	else cout << java2cpp(s);

    return 0;
}