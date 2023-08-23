
// Write a C++ program to count the number of duplicate characters in a given string.

#include<iostream>
#include<algorithm>
using namespace std;
int test(string text){
	int count=0;
	sort(text.begin(),text.end()); // It used to sort the string in ascending order;
	for(int i=0;i<text.size();i++){
		if(text[i]==text[i+1]){
			count=count+1;
		}
		
	}
	return count;
}
int main(){
	string text="Good 
	boy saurav.";
	cout<<"Number of duplicate chracter: ";
	cout<<test(text)<<endl;
}

