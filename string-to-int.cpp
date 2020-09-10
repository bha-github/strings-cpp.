#include <bits/stdc++.h>
using namespace std;
long covert_to_Int(string str){
	bool is_neg = str[0]=='-';
	long int res=0;
	for(int i = (is_neg)?1:0 ; i<str.size() ; ++i){
		res = res*10 + (str[i] - '0');
	}
	return (is_neg)? -res : res;
}

int main(){
	
	string input_str;
	cin>>input_str;
	long result = covert_to_Int ( input_str );
	cout<<result;
	return 0;
}

