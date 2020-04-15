#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

const int minNum = 1;
const int maxNum = 6;

int randGenerator();

void menu();
void end();
int diceOne();
int diceTwo();
int diceThree();
int playerOne(int, int, int);
int playerTwo(int, int, int);

int main()
{
	int (time (0));
	int tempDice1, tempDice2, tempDice3, tempPlay1, tempDice1a, tempDice2a, tempDice3a, tempPlay2, scorePlay1, scoerPlay2;
	
	char response;

	menu();

	cin >> response;

	switch (response)
	{
		tempDice1 = diceOne();
		tempDice2 = diceTwo();
		tempDice3 = diceThree();
		tempPlay1 = playerOne(tempDice1, tempDice2, tempDice3);

		cout << tempDice1 << " " << tempDice2 << " " << tempDice3 << " " << tempPlay1 << endl;


		for (int roll = 0; roll < 2; roll++)
		{

			int decide;

			cout << "Unhappy with results? Select dice you wish to reroll:" << endl;
			cout << "Choose Dice One - 1, Dice Two - 2, Dice Three - 3 ";
			cin >> decide;
			if (decide == 1)
			{
				tempDice1 = diceOne();
			}
			else if (decide == 2)
			{
				tempDice2 = diceTwo();
			}
			else if (decide == 3)
			{
				tempDice3 = diceThree();
			}

			{
				cout << "Player Two it's your turn."; //Function call
			}
			tempPlay1 = playerOne(tempDice1, tempDice2, tempDice3 );

			cout << tempDice1 << " " << tempDice2 << " " << tempDice3 << " " << tempPlay1 << endl;
		}
	}

	 if (response == 'B' || response == 'b' )
	{ 
		tempDice1a = diceOne();
		tempDice2a = diceTwo();
		tempDice3a = diceThree();
		tempPlay2 = playerTwo (tempDice1a, tempDice2a, tempDice3a);
		cout << tempDice1a << " " << tempDice2a << " " << tempDice3a << " " << tempPlay2 << endl;

		for (int roll = 0; roll < 2; roll++)
		{

			int decide;


			cout << "Unhappy with results? Select dice you wish to reroll:" << endl;
			cout << "Choose Dice One - 1, Dice Two - 2, Dice Three - 3: ";
			cin >> decide;
			if (decide == 1)
			{
				tempDice1a = diceOne();
			}
			else if (decide == 2)
			{
				tempDice2a = diceTwo();
			}
			else if (decide == 3)
			{
				tempDice3a = diceThree();
			}
			tempPlay2 = playerTwo(tempDice1a, tempDice2a, tempDice3a );
			cout << tempDice1a << " " << tempDice2a << " " << tempDice3a << " " << tempPlay2 << endl;
		}
	 }
	 else if (response == 'Q' || response == 'q')
	 {
		 end();
	 }
	 else
	 {
		 cout << "You have entered an invalid key." << endl;
	 }




	system("pause");
	EXIT_SUCCESS;
}

void menu()
{
	cout << "A Game of Chance with Dice"
<< endl << endl << endl;
	cout << "To play please enter the player designation key: "
		<< endl
		<< "Player One - A. Player Two - B." << endl << endl;
	cout << "press Q to quit if you do not wish to play." << endl;
}

int playerOne(int x, int y, int z)
{
	return x + y + z;
}

int playerTwo(int x, int y, int z)
{
	return x + y + z;
}

int randGenerator()
{
	int x;
	x = minNum + rand() % (maxNum - minNum + 1);
	return x;
}

int diceOne()
{
	return randGenerator();
}
int diceTwo()
{
	return randGenerator();
}
int diceThree()
{
	return randGenerator();
}


void end()
{
	cout << endl << "Thank you for Playing." << endl << "Have a nice day!" << endl << endl;
}
