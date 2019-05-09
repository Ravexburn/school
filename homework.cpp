//Aaron Garber
#include<iostream>
#include<fstream>
using namespace std;

bool validId(fstream, int);
void voted(int, int, int);

int main(){
	
	int voterID, choice = 0, adminID = 5013, total = 0, vID;
	
	fstream myfile;
	
	while (choice != 5 && voterID != adminID){
	
	cout << "Welcome to the 2019 Elections! Please enter your voter ID to continue.\n";
	cin >> voterID;
	while(false){	
	bool validId(voterID);
}
	if(voterID == adminID){
		while(choice != 5){
		cout << "Welcome Admin! What would you like to do? \n";
		cout << "1. Print tallys. \n";
		cout << "2. Print list of valid voter IDs. \n";
		cout << "3. Print list of voters who have voted. \n";
		cout << "4. Print paper trail. \n";
		cout << "5. End voting. \n";	
		cin >> choice;
	
	
	if (choice == 1){
		myfile.open("tally.txt");
		while(myfile >> total){
			cout << total << "\n";
		}
		myfile.close();
	}else if(choice == 2){
		myfile.open("voterID.txt");
			while(myfile >> voterID){
		cout << voterID << "\n";
	}
		myfile.close();
	}else if(choice == 3){
		myfile.open("voted.txt");
		while(myfile >> voterID){
			cout << voterID << "\n";
		}
		myfile.close();
	}else if(choice == 4){
		myfile.open("paper.txt");
		while(myfile >> voterID){
		cout << voterID << " has voted for choice #" << "\n";
		}
		myfile.close();
	}else if(choice == 5){
		cout << "Ending voting!\n";
	}
}
}
	if(choice != 5){
	cout << "Welcome voter " << voterID << " what would you like to do?\n";
	cout << "1. Vote Democrat.\n";
	cout << "2. Vote Republican.\n";
	cout << "3. Vote Independent.\n";
	cout << "4. Exit.\n";
	cin >> choice;	

	if (choice == 1 && voterID != adminID){
		voted(voterID, choice, total++);
	}else if(choice == 2 && voterID != adminID){
		voted(voterID, choice, total++);
	}else if(choice == 3 && voterID != adminID){
		voted(voterID, choice, total++);
	}else if(choice == 4 && voterID != adminID){
		cout << "Have a nice day!\n";
	}
}
}
return 0;
}

bool validID(fstream myfile, int voterID){
	int vId;
	while (myfile >> vId){
		if(voterID == vId){
			cout << "Valid ID found! \n";
			return true;
		}
	}
	cout << "Could not find valid ID. \n";
	return false;
}

void voted(int voterID, int choice, int total){
		fstream myfile;
		myfile.open("voted.txt", ios::app);
		myfile << voterID << "\n";
		myfile.close();
		myfile.open("paper.txt", ios::app);
		myfile << voterID << " has voted for choice #" << choice << "\n";
		myfile.close();
		myfile.open("tally.txt");
		myfile << total << "total votes\n";
		myfile.close();
		cout << "Thank you " << voterID << " for voting!\n";
}
