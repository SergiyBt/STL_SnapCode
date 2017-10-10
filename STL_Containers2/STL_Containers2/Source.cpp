#include <iostream>
#include <vector>
#include <array>
#include <list>
#include <algorithm>

using namespace std;

int main(){

	list<int> lis,lis2,lis3;	
	list<int>::const_iterator cit;
	list<int>::iterator it;

	vector<int> vec(6); 
	vector<int>::const_iterator vcit;
	
	lis.push_back(2);
	lis.push_back(5);
	lis.push_back(-3);

	lis2.push_back(8);
	lis2.push_back(4);
	lis2.push_back(-3);

	for(int i=0; i<5; i++)
		lis3.push_back(i*i);

	lis.sort();	// has linear time O(N) 
	lis2.sort(); // not fast

	merge(lis.begin(),lis.end(),lis2.begin(),lis2.end(),vec.begin());
	
	cout<<" list1: ";
	for(cit = lis.begin(); cit!=lis.end(); cit++)
		cout<<*cit<<' ';
	cout<<"\n";

	cout<<" list2: ";
	for(cit = lis2.begin(); cit!=lis2.end(); cit++)
		cout<<*cit<<' ';
	cout<<"\n";

	cout<<" sorted list1: ";
	for(cit = lis.begin(); cit!=lis.end(); cit++)
		cout<<*cit<<' ';
	cout<<"\n";

	cout<<" merged list1 and list2 in vector : ";
	for(vcit = vec.begin(); vcit!=vec.end(); vcit++)
		cout<<*vcit<<' ';
	cout<<"\n";
	
	it = lis2.begin();
	advance(it,3); // in the end
	lis2.insert(it,12); // very fast O(1)

	cout<<" After inserting new element 12 in list2: ";
	for(cit = lis2.begin(); cit!=lis2.end(); cit++)
		cout<<*cit<<' ';
	cout<<"\n";

	it = lis2.begin();
	advance(it,2);  // 3 element
	lis2.erase(it); // very fast O(1)

	cout<<" After erasing element 8 in list2: ";
	for(cit = lis2.begin(); cit!=lis2.end(); cit++)
		cout<<*cit<<' ';
	cout<<"\n";

	replace(lis2.begin(),lis2.end(),12,45);

	cout<<" After replacing element 12 in list2: ";
	for(cit = lis2.begin(); cit!=lis2.end(); cit++)
		cout<<*cit<<' ';
	cout<<"\n";

	copy_n(lis2.begin(),3,lis.begin());

	cout<<" After coping 3 elements from list2 to list1: ";
	for(cit = lis.begin(); cit!=lis.end(); cit++)
		cout<<*cit<<' ';
	cout<<"\n";

	// it = lis.begin();
	// advance(it,3);
	// lis.splice(it,lis2); // very fast and effective O(1)

	it = lis3.begin();
	advance(it,3);
	lis.splice(lis.begin(),lis3,it,lis3.end()); // fast

	cout<<" After splicing list1: ";
	for(cit = lis.begin(); cit!=lis.end(); cit++)
		cout<<*cit<<' ';
	cout<<"\n";

	cout<<" After splicing list3: ";
	for(cit = lis3.begin(); cit!=lis3.end(); cit++)
		cout<<*cit<<' ';
	cout<<"\n";

	system("pause");
	return 0;
}