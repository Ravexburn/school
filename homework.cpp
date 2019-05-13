//Aaron Garber George Tsaava CS12
#include<iostream>
#include<fstream>
using namespace std;
//Function prototypes.
bool validId(fstream*, int);
void voted(int, int, int);

int main(){
	//All variables used in program.
	int voterID, choice = 0, pick, adminID = 5013, total = 0, vID;
	
	fstream myfile;
	//Clears the files from previous session.
	myfile.open("voted.txt", std::fstream::out | std::fstream::trunc);
	myfile.close();
	myfile.open("paper.txt", std::fstream::out | std::fstream::trunc);
	myfile.close();
	//Loops program.
	while (choice != 5 && voterID != adminID){
	
	cout << "Welcome to the 2019 Elections! Please enter your voter ID to continue.\n";
	cin >> voterID;
	//Checks if it is a valid voter ID.
	myfile.open("voterID.txt");
	if (!validId(&myfile, voterID)) return 0;
	myfile.close();
	//Asks admin for his choices.
	if(voterID == adminID){
		while(choice != 5){
		cout << "Welcome Admin! What would you like to do? \n";
		cout << "1. Print tallys. \n";
		cout << "2. Print list of valid voter IDs. \n";
		cout << "3. Print list of voters who have voted. \n";
		cout << "4. Print paper trail. \n";
		cout << "5. End voting. \n";	
		cin >> choice;
	
	//Prints the info the admin asks for.
	if (choice == 1){
		myfile.open("tally.txt");
		while(myfile >> total){
			cout << total << " total votes\n";
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
		while(myfile >> voterID >> pick){
		cout << voterID << " has voted for choice #" << pick << "\n";
		}
		myfile.close();
	}else if(choice == 5){
		cout << "Ending voting!\n";
	}
}
}
	//Asks what the voter would like to do.
	if(choice != 5){
	cout << "Welcome voter " << voterID << " what would you like to do?\n";
	cout << "1. Vote Democrat.\n";
	cout << "2. Vote Republican.\n";
	cout << "3. Vote Independent.\n";
	cout << "4. Exit.\n";
	cin >> choice;	
	pick = choice;
	//Votes for the person the voter wanted or exits to next voter.
	if (choice == 1 && voterID != adminID){
		voted(voterID, pick, ++total);
		cout << total << "\n";
	}else if(choice == 2 && voterID != adminID){
		voted(voterID, pick, ++total);
		cout << total << "\n";
	}else if(choice == 3 && voterID != adminID){
		voted(voterID, pick, ++total);
	}else if(choice == 4 && voterID != adminID){
		cout << "Have a nice day!\n";
	}
}
}
return 0;
}

//Function for checking if valid voter.
bool validId(fstream* myfile, int voterID){
	int vId;
	while (*myfile >> vId){
		if(voterID == vId){
			cout << "Valid ID found! \n";
			return true;
		}
	}
	cout << "Could not find valid ID. \n";
	return false;
}

//Function for recording all data in election.
void voted(int voterID, int pick, int total){
		fstream myfile;
		myfile.open("voted.txt", ios::app);
		myfile << voterID << "\n";
		myfile.close();
		myfile.open("paper.txt", ios::app);
		myfile << voterID <<  " " << pick << "\n";
		myfile.close();
		myfile.open("tally.txt");
		myfile << total;
		myfile.close();
		cout << "Thank you " << voterID << " for voting!\n";
}
