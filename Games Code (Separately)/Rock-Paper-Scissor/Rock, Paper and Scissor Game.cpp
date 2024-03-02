//Rock, Paper and Scissor Game 


#include <iostream>          //header file for
#include <conio.h>           //header file for 
#include <stdlib.h>          //header file for
#include <ctime>             //header file for
using namespace std;

int main()
{
	system("CLS");
	
	cout<<"Welcome! to Rock, Paper and Scissor Game"<<endl;
	cout<<endl;
	cout<<"Press any key to continue...";
	getch();
	
	system("CLS");
	
	int rounds;                                                          //declaring rounds
	int player_score = 0;                                                //initializing scores
	int computer_score = 0;
	string player_name;                                                  //declaring string object for name
	
	cout<<"Enter your name: ";
	cin>>player_name;                                                    //inputing player's name
	
	cout<<player_name<<" how many rounds you want to play? ";            //asking about rounds
	cin>>rounds;
	
	for(int r = 1; r<=rounds; r++)
	{
		system("CLS");
		
		int player_choice;                                               //declearing choices
		int computer_choice;
		
		cout<<"Round number: "<<r<<"/"<<rounds<<endl;
		cout<<player_name<<"'s Score = "<<player_score<<endl;            //displaying round number and scores
		cout<<"Computer's' Score = "<<computer_score<<endl;
		cout<<endl;
		cout<<"Press 1 to choose Rock"<<endl;
		cout<<"Press 2 to choose Paper"<<endl;                           //displaying choices
		cout<<"Press 3 to choose Scissor"<<endl;
		cout<<endl;
		
		do{
			cout<<"Select your choice: ";
			cin>>player_choice;                                          //select your choice
		}while(player_choice != 1 && player_choice != 2 && player_choice != 3);
		
		srand(time(0));
		computer_choice = (rand() % 3) + 1;
		
		if(player_choice == 1 && computer_choice == 3)
		{
			cout<<"You Win"<<endl;                                       //choice when player wins
			player_score++;
		}
		
		else if(player_choice == 2 && computer_choice == 1)
		{
			cout<<"You Win"<<endl;                                       //choice when player wins
			player_score++;
		}
	
		else if(player_choice == 3 && computer_choice == 2)
		{
			cout<<"You Win"<<endl;                                       //choice when player wins
			player_score++;
		}
	
		else if(player_choice == computer_choice)
		{
			cout<<"DRAW!"<<endl;                                         //choice when player wins
		}
		
		else
		{
			cout<<"Computer Win"<<endl;                                  //choice when player wins
			computer_score++;
		}
	
		cout<<"Press any key to continue...";
		getch();
	}

	cout<<endl;
	cout<<endl;
	
	if(player_score == computer_score)
	{
		cout<<"Game is DRAW";                                            //when game is draw
	}
	
	else if(player_score > computer_score)
	{
		cout<<player_name<<", You won the game.";                        //when computer wins
	}
	
	else
	{
		cout<<"Computer won the game.";                                  //when computer wins
	}
}