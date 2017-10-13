#include <iostream>
#include <map>

using namespace std;

int main(){

	map<char,int> mymap;
	map<char,int>::iterator it,it2;
	
	mymap.insert(pair<char,int>('a',34));
	mymap.insert(make_pair('c',54));
	mymap.insert(make_pair('b',-4));

	for(map<char,int>::const_iterator it = mymap.begin(); it != mymap.end(); it++)
		cout<<it->first<<' '<<it->second<<"\n";
	cout<<"\n";
	
	it = mymap.find('z');
	
	if(it != mymap.end())
		cout<<" The element "<< it->second <<" is found ! \n";
	else cout<<" The element is not found ! \n";

	system("pause");
return 0;
}