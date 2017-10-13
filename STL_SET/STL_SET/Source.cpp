#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(){

	set<int> myset;

	myset.insert(3);  // O(log(N))
	myset.insert(1);  // O(log(N))
	myset.insert(10);  // O(log(N))

	set<string> myset2;
	
	myset2.insert("Cat");  // O(log(N))
	myset2.insert("Dog");    // O(log(N))
	myset2.insert("Rabbit");   // O(log(N))

	for(set<int>::const_iterator it = myset.begin(); it != myset.end(); it++)
		cout<<*it<<' ';
	cout<<"\n";

	for(set<string>::const_iterator it = myset2.begin(); it != myset2.end(); it++)
		cout<<*it<<' ';
	cout<<"\n";

	pair<set<string>::iterator,bool> key;

	cout<<" Try to insert Cat in set \n";
	key = myset2.insert("Cat"); // ACTUALLY RETURN TWO VALUES
								//true if search is seccessful and false if it is not 
								//and returns itarators on type
	
	set<string>::iterator it = key.first;
	if(key.second == false)					
		cout<<" Not allow ! The element " << *it << " is already exected !  \n";
	else cout<<" The element " << *it << " is added seccessful ! \n";
	
	//myset2.erase(it); // O(log(N)) OR
	myset2.erase("Cat"); // O(log(N))

	for(set<string>::const_iterator it = myset2.begin(); it != myset2.end(); it++)
		cout<<*it<<' ';
	cout<<"\n";

	system("pause");
return 0;
}