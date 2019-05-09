//Aaron Garber CS 12

#include<iostream>

using namespace std;

int main(){
int grade[101];
int high = 0 , low = 1000, avg, num, total = 0, temp;
cout << "How many grades?\n";
cin >> num;
for (int i = 1; i <= num; i++){
cout << "What is grade " << i << "? \n";
cin >> grade[i];
if (grade[i] < low){
low = grade[i];
} 
if (grade[i] > high){
high = grade[i];
}
cout << "Lowest grade so far: " << low << "\n";
cout << "Highest grade so far: " << high << "\n";
total = total + grade[i];
}
cout << "The unsorted list is of grades: ";
for (int j = 1; j <= num; j++){
cout << grade[j] << " ";
}
cout << "\n";
cout << "The sorted list is of grades: ";
for (int j = 1; j <= num; j++){
	for (int k = 1; k <= num; k++){
		if (grade[k] > grade[k + 1]){
			temp = grade[k];
			grade[k] = grade[k + 1];
			grade[k + 1] = temp;
		}	
	}
	cout << grade[j] << " ";
}
cout << "\n";
cout << "The average of the grades is: ";
avg = total / num;
cout << avg << "\n";
cout << "The highest grade was: " << high << "\n";
cout << "The lowest grade was: " << low << "\n";
return 0;
}

