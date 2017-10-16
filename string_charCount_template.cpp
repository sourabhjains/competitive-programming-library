/*
 * This template is useful for counting frequency of each char in a string
 */
#include<bits/stdc++.h>
#define fori(i,n) for(int i=0;i<n;i++)
#define fors(i,init,n,step) for(int i=init;i<n;i+=step)

using namespace std;

typedef int nd;

int main(){
	char* s = new char[1000];
	int* count_char = new int[26];
	cin>>s;
	for(int i=0;s[i]!='\0';i++)
		count_char[s[i]-'a']++;	
	//fori(i,26)cout<<count_char[i]<<" ";//uncomment to see count of each chars
	
	return 0;
}
