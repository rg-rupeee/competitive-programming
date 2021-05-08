#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
char square[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
int count(char);
char checkwin()
{
	if (square[0]==square[1] && square[1]==square[2] && square[0]!=' ') {
		return square[0];
	} 
	if (square[3]==square[4] && square[4]==square[5] && square[3]!=' ') {
		return square[3];
	}
	if (square[6]==square[7] && square[7]==square[8] && square[6]!=' ') {
		return square[6];
	}
	if (square[0]==square[4] && square[4]==square[8] && square[0]!=' ') {
		return square[0];
	}
	if (square[2]==square[4] && square[4]==square[6] && square[2]!=' ') {
		return square[2];
	}
	if (square[0]==square[3] && square[3]==square[6] && square[0]!=' ') {
		return square[0];
	}
	if (square[2]==square[5] && square[5]==square[8] && square[2]!=' ') {
		return square[2];
	}
	if (count('X') + count('O') < 9) {
		return 'C';
	}
	else {
		return 'D';
	}
}

void computerChoice() {
	int choice;
	srand(time(0));
	do{
		choice=rand()%10;
	}while(square[choice]!=' ');
	square[choice]='O';
}
int count(char symbol) {
	int total=0;
	for(int i=0;i<9;i++) {
		if(square[i]==symbol) {
			total+=1;
		}
	}
	return total;
}
void playerChoice() {
	while (true) {
	int ch;
	cout<<"Enter your choice : ";
	cin>>ch;
	ch--;
	if (ch<0 || ch>8) {
		cout<<"Invalid Position! Please select position between 1-9."<<endl;
	} else if (square[ch]!=' ') {
		cout<<"Please choose an empty position."<<endl;
	} else {
		square[ch]='X';
		break;
	}
}
}
void resetBoard() {
	for (int i=0;i<9;i++) {
		square[i]=' ';
	}
}
void display()
{
		cout<<"\n\t\t\t\t  "<<square[0]<<"  "<<"|  "<<square[1]<<"  "<<"|  "<<square[2]<<"  "<<endl;
		cout<<"\t\t\t\t  "<<"  "<<" |  "<<"  "<<" |  "<<"  "<<endl;
		cout<<"\t\t\t\t------------------"<<endl;
		cout<<"\t\t\t\t  "<<square[3]<<"  "<<"|  "<<square[4]<<"  "<<"|  "<<square[5]<<"  "<<endl;
		cout<<"\t\t\t\t  "<<"  "<<" |  "<<"  "<<" |  "<<"  "<<endl;
		cout<<"\t\t\t\t------------------"<<endl;
		cout<<"\t\t\t\t  "<<square[6]<<"  "<<"|  "<<square[7]<<"  "<<"|  "<<square[8]<<"  "<<endl;
		cout<<"\t\t\t\t  "<<"  "<<" |  "<<"  "<<" |  "<<"  "<<endl;
		cout<<"-----------------------------------------------------------------------------"<<endl;		
}
int main()
{
	int x;
	    cout<<"\t\t\t------------------------------------------"<<endl;
		cout<<"\t\t\t\t\tTIC TAC TOE"<<endl;
		cout<<"\t\t\t------------------------------------------"<<endl;
		cout<<"\n\t\t\t\tWELCOME TO THE GAME"<<endl<<endl;
		display();
	    cout<<"\nYou are Player X and Computer is Player O."<<endl;
	    cout<<"You have to choose the position where you want to mark your symbol.";
	    cout<<"Computer will mark it's position."<<endl;
		cout<<"\nLet's start the game."<<endl;
		cout<<"Enter the number of matches  you want to play : "<<endl;
	    cin>>x;
		for (int i=1;i<=x;i++) {
		cout<<"\nMatch no. "<<i<<" : "<<endl;
    while(true)
	{
	
		if(count('X')==count('O')) {
			playerChoice();
			display();
		}
	else {
		computerChoice();
		display();
	}
		char result =checkwin();	
		
		if (result == 'X' )
		{	cout<<"\nCongratulations! You are the Winner.";
			break;
		}
		else if (result == 'O' )
		{	cout<<"\n Computer has Won the Game.";
			break;
		} 
		else if (result =='D') {
			cout<<" \n Sorry, The game is a draw.";	
		}
	}
	resetBoard();
}
    return 0;
}