// InputWithArrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

//Quiz game with Arrays

int main()
{
	string questions[] = { "1. What year was C++ created? ",
	"2. Who invented C++?: ",
	"3. What is the predecessor of C++?: ",
	"4. Is the Earth flat?" };

	string options[][4] = { { "A. 1969", "B. 1975", "C. 1985", "D. 1989" },
	{ "A. Guido", "B. Bjarne Stroustrup", "C. John", "D. Mark" },
	{ "A. C", "B. C+", "C. B++", "D.Pascal" },
	{ "A. Yes", "B. No", "C. Maybe?", "D. what's Earth?" } };

	char answerKey[] = { 'C', 'B', 'A', 'B' };

	int size = sizeof(questions) / sizeof(questions[0]);
	char guess;
	int score = 0;

	for (int i = 0; i < size; i++)
	{
		cout << "************\n";
		cout << questions[i] << "\n";
		cout << "Select the correct ANSWER:\n";

		for (int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++)
			cout << options[i][j] << "\n";
				

		cin >> guess;
		guess = toupper(guess);

		if (guess == answerKey[i])
		{
			cout << "Correct!\n";
			score++;
		}
		else
			cout << "Wrong! The correct answer is " << answerKey[i] << "\n";

	}

	cout << "**********\n";
	cout << " RESULTS\n";
	cout << "You have guessed " << score << " answers\n";
	cout << "Your Score is: " << (score/(double)size) * 100 << "%";

	return 0;
}


/*
//Insert an item in the array
int main()
{
	string foods[5];
	int size = sizeof(foods) / sizeof(foods[0]);
	string temp;

	for (int i = 0; i < size; i++)
	{
		cout << "Enter a food you like, or 'q' to quit. N. " << i +1 << ": ";
		getline(cin, temp);//because I've added #include <string>
		if (temp == "q")
		{
			cout << "Bye!\n";
			break;
		}
		else
			foods[i] = temp;
	}

	cout << "You like:\n";
	//for (int i = 0; !foods[i].empty(); i++)
		//cout << foods[i] << ", ";
/*
	for (string food : foods)
	{
		if (!food.empty())
			cout << food << ", ";
	}

	return 0;
}
*/

