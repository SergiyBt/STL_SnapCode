#include <iostream>
#include <algorithm>
#include <deque>
#include <string>
#include <fstream>

using namespace std;


int main(){

	string filename;
	string choise;		

	deque<int> d1,d2;
	deque<int>::const_iterator cit,cit2;
	
	cout<<" Enter data or read from the file ? (enter/read)> ";
	cin>>choise;
	cout<<" \n";

	if(choise.compare("Enter") == 0 || choise.compare("enter") == 0){
		
		int value;
		string choise = "yes";
		int i = 1;		
		
		cout<<" Entering queue1> \n";
		while(choise.compare("yes") == 0 || choise.compare("Yes") == 0){
			
			cout<<"  Enter value of "<< i <<" elem> ";
			cin>>value;
			d1.push_back(value);	
			cout<<" Continue ?(yes/no)> ";
			cin>>choise;
			i++;
		}
		cout<<" End entering queue1> \n\n";
		
		choise = "yes";
		i = 1;

		cout<<" Entering queue2> \n";
		while(choise.compare("yes") == 0 || choise.compare("Yes") == 0){
			
			cout<<"  Enter value of "<< i <<" elem> ";
			cin>>value;
			d2.push_back(value);	
			cout<<" Continue ?(yes/no)> ";
			cin>>choise;
			i++;
		}
		cout<<"End entering queue1> \n\n";

	}

	else if(choise.compare("Read") == 0 || choise.compare("read") == 0){

		string filename;
		cout<<" Enter filename to read d1 (NNN.EEE)> ";
		cin>>filename;

		ifstream infile(filename);

		if(!infile.is_open()){
			cout<<" File is not opened> \n";
		} else cout<<" File is opened> \n";

		istream_iterator<int> file_iter(infile);
		istream_iterator<int> end_of_file;

		copy(file_iter,end_of_file,back_inserter(d1));

		string filename2;
		cout<<" Enter filename to read d2 (NNN.EEE)> ";
		cin>>filename2;

		ifstream infile2(filename2); 

		if(!infile.is_open()){
			cout<<" File is not opened> \n";
		} else cout<<" File is opened> \n";

		istream_iterator<int> file_iter2(infile2);
		istream_iterator<int> end_of_file2;

		copy(file_iter2,end_of_file2,back_inserter(d2));	

	} else 
		cout<<" Wrong choise !> \n";

	cout<<"\n  d1: \n";
	for(int a : d1)
		cout<<a<<" ";
	cout<<"\n\n";

	cout<<"  d2: \n";
	for(cit = d2.begin(); cit!=d2.end(); )
		cout<<*cit++<<" ";
	cout<<"\n\n";

	int key;
	string str;
	cit = d1.begin();
	cit2 = d2.begin();
	
	cout<<" Enter search value> "; cin>>key;	
	cout<<" Enter d1 or d2> ? "; cin>>str; 
		
	if(str.compare("d1") == 0)
		cit = find(d1.begin(),d1.end(),key);
	if (str.compare("d2") == 0)
		cit2 = find(d2.begin(),d2.end(),key);
	else cout<<" Choise is wrong ! \n";

	if(cit == d1.end() || cit2 == d2.end())
		cout<<" Not found ! \n";
	else {
	
		if(cit == d1.begin())
			cout<<" Found "<<*cit2<<" in position "<<(cit2 - d2.begin())<<"\n";
		else 
			cout<<" Found "<<*cit<<" in position "<<(cit - d1.begin())<<"\n";
	}      

	system("pause");

return 0;
}