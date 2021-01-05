#include<iostream>
using namespace std;



//Write the function printO() here
void printO(long long int row, long long int col){

	if(row < 1 or col < 1){
		cout << "Invalid input";
		return;
	}

	for(int i = 0 ; i < row; ++i){
		for(int j = 0 ; j < col; ++j){
			cout << 'O';
		}cout << endl;
	}

	return;
}


int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
