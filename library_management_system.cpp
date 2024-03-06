#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

class Library{
	//properties or data members
	public:
	int id;
	char b_name[100];
	char author[100];
	char student[100];
	int price;
	int pages;
};

int main(){
	Library lib[20]; //object creation
	int input = 0; //for input
	int count = 0;
	while(input!=3){
		cout<<"Enter 1 for taking input details like price, id, b_name, author, pages, student"<<endl;
		cout<<"Enter 2 to display the details"<<endl;
		cout<<"Enter 3 to quit"<<endl;
		cin>>input;
		
		switch(input){
			case 1:
				start:
				cout<<"Enter Book id"<<endl;
				cin>>lib[count].id; 
				cout<<"Enter Book name"<<endl;
				cin>>lib[count].b_name; 
				cout<<"Enter author name"<<endl;
				cin>>lib[count].author;
				cout<<"Enter Student name"<<endl;
				cin>>lib[count].student; 
				cout<<"Enter Book price"<<endl;
				cin>>lib[count].price; 
				cout<<"Enter Book pages"<<endl;
				cin>>lib[count].pages;
				count++;
				break; 
			
			case 2:
				for(int i=0; i<count; i++){
					cout<<"Book id: "<<lib[i].id<<endl;
					cout<<"Book name: "<<lib[i].b_name<<endl;
					cout<<"Author name: "<<lib[i].author<<endl;
					cout<<"Student name: "<<lib[i].student<<endl;
					cout<<"Book price: "<<lib[i].price<<endl;
					cout<<"Book pages: "<<lib[i].pages<<endl;
				}
			break;
			
			case 3: 
			    exit(0);
			    break;
			    
			    default:
			    	cout<<"You have entered wrong value , try again"<<endl;
			    	goto start;
		}
	}
	return 0;
}
