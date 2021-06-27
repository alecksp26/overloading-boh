#include <iostream>
#include <string>

using namespace std;

 string  operator-(const string & a,const string & b){
	int l=b.length();
	int pos;
	for(int i=0;i<a.length()-(l-1);i++){
		if(a.substr(i,l)==b) pos=i;
	}
	string c=a.substr(0,pos)+a.substr(pos+l);
	return c;
}

int main(){
	string prova="Cavolfiore";
	string provaprova="fiore";
	string prova123=prova-provaprova;
	cout<<prova123;
}

