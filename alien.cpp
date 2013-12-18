#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <sstream>
#include <fstream>
#include <cstddef>

using namespace std; 

struct ll_lines {
	string ll_data;
	ll_lines *next; 
};


int main(int argc, char const *argv[])
{
	ll_lines *head;
	ifstream inFile;
	string line;
	inFile.open("C:\\Users\\Zachary\\Documents\\Downloads\\scraps\\alien\\A-small-practice.in", ios::in);
	head = new ll_lines;
	if(inFile.is_open()){
		while(getline (inFile, line)){
			head->ll_data = line;
			ll_lines *tmp = new ll_lines;
			tmp->next = head;
			head = tmp;
		}
		inFile.close();
	}

	ll_lines *next = head;
	while(next != NULL){
		cout << next->ll_data << endl;
		 ll_lines * tmp = next->next;
		 delete next;
		 next = tmp;
	}

	// cout << Stuff;
	return 0;

}