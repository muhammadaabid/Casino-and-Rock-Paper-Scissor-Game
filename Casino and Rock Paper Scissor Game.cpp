#include <iostream>              //header file for input ouput istream
#include <conio.h>               //header file for getch function
#include <string>                //header file for using  strings
#include <cstdlib>               //header file for using random numbers
#include <ctime>                 //header file for time function

using namespace std;


void rules();                                  //function for displaying rule of the game;


int main()
{
	int play;
	jump:
	cout<<"What game you want to play?"<<endl;                            //asking about what game you want to play
	cout<<endl;
	cout<<"Press 1 to play Casino Number Guessing Game"<<endl;
	cout<<"Press 2 to play Rock, Paper and Scissor Game"<<endl;
	cout<<endl;
	
	cout<<"Select your choice: ";
	cin>>play; 
	

	
	
	
	
	
	//Casino Number Guessing Game
	//Casino Number Guessing Game
	//Casino Number Guessing Game
	
	
	
	if(play == 1)
	{
		system("CLS");
		
		string playername;                     //stores player's name
		int balance;                           //stores players balance
		int guess;                             //stores the player's guessed number
		int betting_Amount;                    //stores the betting amount of player:
		int dice;                              //stores the random number
		char choice;                           //stores the choice
		
		srand(time(0));  	  
		
		cout<<"WELCOME TO CASINO WORLD"<<endl;                                              //Welcome of the player
		cout<<endl;
		cout<<"What's your Name: ";
		cin>>playername;                                                                  //taking name and amount fron player
		cout<<"Enter the Starting Balance to Play the Game: $";
		cin>>balance;
		
		do{
		    do{
		    	system("cls");
		    
			    rules();
		        cout<<endl;
			    cout<<"Your current balance is $"<<balance<<endl;                                  //displaying current balance
			    
				cout<<"Hey, "<<playername<<" enter your bet amount $";
				cin>>betting_Amount;
			    
				if(betting_Amount>balance)
			    {
				    cout<<endl;
					cout<<"Betting is more then current balance!"<<endl;
				    cout<<"PLEASE! Press any key to Re-enter the balance..."<<endl;
				    cout<<endl;
				    getch();
			    }
		    }while(betting_Amount>balance);
		
		    do{
			    cout<<endl;
				cout<<"Guess any betting number between 1 & 10: ";                                //get player's number
			    cin>>guess;
			    if( guess<=0 || guess>10)
			    {
				    cout<<endl;
				    cout<<"Number should be between 1 & 10"<<endl;                               //telling about range of number
				    cout<<"Re-Enter the number"<<endl;
		    	}
			
		    }while(guess<=0 || guess>10);
		    
			dice = 	rand()%10 + 1;
		    
			if(dice == guess)
		    { 
		    	cout<<"You are in luck! You have won Rs. "<<betting_Amount*10;                   //player won the game
			    balance=balance+betting_Amount*10;
		    }
		    
			else
		    {
			    cout<<endl;
				cout<<"OOPS, Better luck next time! You lost $"<<betting_Amount;                //player loss the game
			    balance=balance-betting_Amount;
		    }
		    
		    cout<<endl;
			cout<<"The winning number was "<<dice<<endl;                                        //displaying winning number
		    cout<<endl;
			cout<<playername<<", You have Balance of "<<balance<<endl;
		    
			if(balance == 0)
		    {
		    	cout<<"You have no money to play";
		    	break;
		    }
		    
			cout<<endl;
			cout<<"Do you wants to play again (Y/N)? ";                                        //asking for playing again
		    cin>>choice;
	    }while( choice == 'Y' || choice == 'y');
	
	    cout<<"THANKS! for playing the game. Your balance is $"<<balance;	  
	}
	
	
	
	
	
	//Rock, Paper and Scissor Game
	//Rock, Paper and Scissor Game
	//Rock, Paper and Scissor Game
	
	
	
	else if(play == 2)
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
	
	
	
	else
	{
		cout<<endl;
		cout<<"PLEASE! Press 1 or 2 to play one of the game from above."<<endl;
		cout<<"Press any key to choose games again...";
		getch();
		system("CLS");
		goto jump;
	}
	
	getch();
	return 0;
}



//defination of functions

void rules()                                                                 //defining function rules
{
	system("cls");
	
	cout<<"CASINO NUMBER GUESSING GAME'S RULES!"<<endl;
	cout<<endl;
	cout<<"1. CHOOSE A NUMBER BETWEEN 1 TO 10"<<endl;
	cout<<"2. WINNER will be awarded with 10 times OF the money Bet"<<endl;       //Rules for game
	cout<<"3. Wrong bet, and you lose the amount you bet"<<endl;
}
