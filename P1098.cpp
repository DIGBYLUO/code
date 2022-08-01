#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	int p1,p2,p3;
	string s;
	cin>>p1>>p2>>p3>>s;
	for(register int i=1;i<s.length()-1;i++){                                          
		if(s[i]=='-'&&((islower(s[i-1])&&islower(s[i+1])&&s[i-1]<s[i+1])||(isdigit(s[i-1])&&isdigit(s[i+1])&&s[i-1]<s[i+1]))){
			if(p1==1){
				s.erase(i,1);
				string spare="";
				for(register int k=s[i-1]+1;k<=s[i]-1;k++){
					char ch=k;
					for(register int j=1;j<=p2;j++) spare.push_back(ch);
				}
				if(p3==2) reverse(spare.begin(),spare.end());
				s.insert(i,spare);
			}
			else if(p1==2){
				s.erase(i,1);
				string spare="";
				for(register int k=s[i-1]+1;k<=s[i]-1;k++){
					char ch=k;
					ch=toupper(ch);
					for(register int j=1;j<=p2;j++) spare.push_back(ch);
				}
				if(p3==2) reverse(spare.begin(),spare.end());
				s.insert(i,spare);
			}
			else if(p1==3){
				s.erase(i,1);
				string spare="";
				for(register int k=s[i-1]+1;k<=s[i]-1;k++)
					for(register int j=1;j<=p2;j++) spare.push_back('*');
				if(p3==2) reverse(spare.begin(),spare.end());
				s.insert(i,spare);
			}
		}
	}
	cout<<s<<endl;
	return 0;
}