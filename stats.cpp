#include <iostream>

using namespace std;


int permutation(int, int);
int combination(int, int);
int ask(int, int);

int main(){
	
	int choice;
	int leave = 0;
	
	while(leave != 1){

	cout << "1. Permutation or 2. Combination? \n";
	cin >> choice;
	int n, r;
	
	if (choice == 1){
	ask(n, r);

	cout << permutation(n, r);	
}


	if (choice == 2){
	
	ask(n, r);
	
	cout << combination(n, r);	
		
	}
	
	cout << "\nExit?\n1. Yes 2. No\n";
	cin >> leave;
}
	
	return 0;
	
	
}
int ask(int n, int r){
	do {
	cout << "Enter n: ";
	cin >> n;
	
	cout << "Enter r: ";
	cin >> r;
	} while(n < r);
	
}

int permutation(int n, int r){

	int top = 1;
	int bot = 1;
	int total = 0;
	
	for(int i = n; i > 0; i--){
	    top = top * i;
	}	

	for (int k = n - r; k > 0; k--){
		bot = bot * k;
	}

	total = top / bot;
}

int combination(int n, int r){
	
	int top = 1;
	int bot = 1;
	int rtotal = 1;
	int total = 0;
	
	for(int i = n; i > 0; i--){
	    top = top * i;
	}	

	for (int k = n - r; k > 0; k--){
		bot = bot * k;
	}
	
	for (int j = r; j > 0; j--){
		rtotal = rtotal * j;
	}

	total = top / (bot * rtotal);
}
