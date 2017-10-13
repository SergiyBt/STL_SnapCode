#include <iostream>
#include <unordered_set>
#include <string>
#include <vector>

using namespace std;

int main(){

	unordered_set<string> myset;
	unordered_set<string>::const_iterator cit;
	
	myset.insert("hen");       // O(1)
	myset.insert("sheep");		// O(1)
	myset.insert("chicken");		// O(1)

	vector<string> vec(3);

	vec.push_back("pig");  // O(1)
	vec.push_back("rabbit");  // O(1)
	vec.push_back("dove");   // O(1)
	 
	myset.insert(vec.begin(),vec.end());

	cit = myset.find("hen");  // O(1)

	if(cit != myset.end())
		cout<<" The element " << *cit << " is found ! \n";
	else cout<<" The element is not found ! \n";


	for(unordered_set<string>::const_iterator it = myset.begin(); it != myset.end(); it++)
		cout<<*it<<' ';
	cout<<"\n";
	
	
	system("pause");
return 0;
}