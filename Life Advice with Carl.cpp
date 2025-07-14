// Life Advice with Carl.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string> 

using namespace std;

int main()
{
	vector <string> carlAdvice = {
		"sounds like skill issue ngl",
		"erm what the sigma",
		"dawg i ain't chat gpt i'm just carl",
		"Carl thinks that's a problem for tomorrow",
		"...",
		"Carl is secretly judgeing you rn",
		"idk bro maybe go touch some grass",
		"welp.",
		"idk have you tried putting it in some rice?",
		"Carl thinks you should get a therapist.",
		"okay but have you tried not thinking about it?",
		"meh. that's a boring problem.",
		"doesn't sound like a problem to Carl. Carl actually thinks that's badass.",
	};

	srand(time(0));

	cout << "Life Advice with Carl \n";
	cout << "--------------------- \n";
	cout << "input 'thank you Carl' to exit \n";
	cout << "--------------------- \n";
	cout << "\n";
	cout << "Carl: tell Carl your problems, child \n";

	while (true) {
		string input;
		cout << "\nYou: ";
		getline(cin, input);

		if (input == "thank you Carl") break;
		
		int roastIndex = rand() % carlAdvice.size();
		cout << "Carl: " << carlAdvice[roastIndex] << endl;
	}
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
