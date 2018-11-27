#include <iostream>
using namespace std;



int main(){
	int i=0,m=0;
	string b;
	cin>>b;
	
	while (i<b.size()){
		if (b[i]>='a' and b[i]<='z') b[i]='A';
		else b[i]='B';
		++i;
		}
	while (m<b.size()){
		if (b[m]=='A'){
			if (b[m+1]=='A'){
				if (b[m+2]=='A'){
					if (b[m+3]=='A'){
						if (b[m+4]=='A') cout<<"a";
						else cout<<"b";
					}
					else {
						if (b[m+4]=='A') cout<<"c";
						else cout<<"d";
					}
				}
				else {
					if (b[m+3]=='A'){
						if (b[m+4]=='A') cout<<"e";
						else cout<<"f";
					}
					else {
						if (b[m+4]=='A') cout<<"g";
						else cout<<"h";
					}
				}
			
			}
			else {
				if (b[m+2]=='A'){
					if (b[m+3]=='A'){
						if (b[m+4]=='A') cout<<"i";
						else cout<<"k";
					}
					else {
						if (b[m+4]=='A') cout<<"l";
						else cout<<"m";
					}
				}
				else {
					if (b[m+3]=='A'){
						if (b[m+4]=='A') cout<<"n";
						else cout<<"o";
					}
					else {
						if (b[m+4]=='A') cout<<"p";
						else cout<<"q";
					}
				}
			}
			
			
		}
		else {
			if (b[m+1]=='A'){
				if (b[m+2]=='A'){
					if (b[m+3]=='A'){
						if (b[m+4]=='A') cout<<"r";
						else cout<<"s";
					}
					else {
						if (b[m+4]=='A') cout<<"t";
						else cout<<"v";
					}
				}
				else {
					if (b[m+3]=='A'){
						if (b[m+4]=='A') cout<<"w";
						else cout<<"x";
					}
					else {
						if (b[m+4]=='A') cout<<"y";
						else cout<<"z";
					}
				}
			
			}
		}
		m=m+5;
	
	}
}
