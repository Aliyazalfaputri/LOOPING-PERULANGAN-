#include<iostream>
using namespace std;
int main(){
	char ulangi='y';
	int counter=0;
	
	while(ulangi =='y'){
		cout<<"Apakah kamu sedang kuliah?\n";
		cout<<"Jawab(y/t): ";
		cin>>ulangi;
		
		counter++;
	}
	cout<<"\n\n--------\n";
	cout<<"Anda Kurang Beruntung!"<<endl;
	cout<<"Kamu berusaha sebanyak "<<counter<<" kali.\n";;
	return 0;
}
