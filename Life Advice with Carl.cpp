// Life Advice with Carl.cpp ------ beta version

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