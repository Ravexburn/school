#include<iostream>
#include<cstring>
using namespace std;

int playagain(){
	cout << "Play again? \n" << "1. Yes \n" << "2. No \n";
	cin >> choice;
		if (choice == 1){	
			goto start;	
		} else if (choice == 2){	
			return 0;	
		}
}

int main(){
	
	string name;
	int player, gamestart, gold, health, choice;
	
	start:
	 cout << "What's your name? \n";
	 cin >> name;
	 cout << "Welcome " << name << "!\n";
	 cout << "Please choose a class!\n" << "1. Rouge \n" << "2. Ranger \n" << "3. Mage \n";
	 cin >> player;
	 
	 if (player == 1){
	 	cout << "You are now a Rouge. \n";
	 }else if (player == 2 ){
	 	cout << "You are now a Ranger. \n";
	 }else if (player == 3){
	 	cout << "You are now a Mage. \n";
	 }
	
	cout << "You see a bear! What would you like to do? \n" << "1. Attack \n" << "2. Hide \n" << "3. Run \n"; 
	
	cin >> choice;
	
	if (choice == 1){
		cout << "You attack the bear! Bad choice. You have died a burtal death! \n" << "Game over!\n";
		playagain();
	}else if (choice == 2){
		cout << "You decide to hide from the bear! Bear walks by you and you escape unharmed!\n";
	}else if (choice == 3){
		cout << "You decide to run from the bear! Bad choice. The bear chases you and catches up to you. You have died!\n";
		cout << "Play again? \n" << "1. Yes \n" << "2. No \n";
		cin >> choice;
		if (choice == 1){
			goto start;
		} else if (choice == 2){
			return 0;
		}
	}
	 choice = 0;
	 cout << "You arrive in town!\n" << "What would you like to do? \n" << "1. Rest for the night. \n" << "2. Continue on your adventure. \n" << "3. Quit the game. \n";
	 cin >> choice;
	 if (choice == 1){
	 	cout << "You decide to rest for the night. You wake up the next morning feeling refreshed for the adventure!";
	 }else if (choice == 2){
	 	cout << "You continue on your adventure without resting. Shortly after leaving the town, a group of bandits ambush you and kill you! You have died\n";
	 	cout << "Play again? \n" << "1. Yes \n" << "2. No \n";
		cin >> choice;
		if (choice == 1){
			goto start;
		} else if (choice == 2){
			return 0;
		}
	 } else if (choice == 3){
	 	cout << "Thanks for playing! \n";
	 	return 0;
	 }
	return 0;
}
