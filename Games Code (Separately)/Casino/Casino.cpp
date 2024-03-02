//Casino Number Guessing Game

#include <iostream>              //header file for input ouput istream
#include <conio.h>               //header file for getch function
#include <string>                //header file for using  strings
#include <cstdlib>               //header file for using random numbers
#include <ctime>                 //header file for time function

using namespace std;

void rules();                              //function for displaying rule of the game;

int main()
{
    system("CLS");
		
	string playername;                     //stores player's name
	int balance;                           //stores players balance
	int guess;                             //stores the player's guessed number
	int betting_Amount;                    //stores the betting amount of player:
	int dice;                              //stores the random number	char choice;
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

void rules()
{
	system("cls");
	cout<<"CASINO NUMBER GUESSING RULES!"<<endl<<endl;
	cout<<"1. CHOOSE A NUMBER BETWEEN 1 TO 10"<<endl;
	cout<<"2. WINNER will be awarded with 10 times OF the money Bet"<<endl;                  //Rules for game
	cout<<"3. Wrong bet, and you lose the amount you bet"<<endl;
}