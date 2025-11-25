#include <iostream>
#include <string>

using namespace std;


int main()
{
	cout << "What is your' name\n";


	string name;
	cin >> name;
	if (name == "Aidan")

	{
		cout << "Welcome back sir\n";
	}
	else
	{
		cout << "Greetings " << name << " enjoy your stay\n";
	}

	cout << "What is your username\n";
    
	string username;
	cin >> username;
	if (username == "GraniteGoblin")
	{
		cout << "Correct sir\n";
	}
	else
	{
		cout << "Understood " << username << " Thank you!\n";

	}
	
	cout << "What is your clantag\n";


	string clantag;
	cin >> clantag;
	if (clantag == "YTS")
	{

		cout << "Welcome back sir\n";
	}
	else
	{
		cout << "Understood " << clantag << " Thank you!\n";

	}
	
	cout << "your experince points as an unsigned integer?\n";
	
	unsigned int exp;
	cin >> exp;
	if (exp <= 100)
	{
		cout << "Thank you 1\n";
	}
	else if (exp > 100 && exp <= 200)
	{
		cout << "Thank you 2\n";
	}
	else if (exp > 200 && exp <= 300)
	{
		cout << "Thank you 3\n";
	}
	else if (exp > 300 && exp <= 400)
	{
		cout << "Thank you 4\n";
	}
	else
	{
		cout << "Thank you 5\n";
	}

	cout << "thanks for the info broski\n\n\n\n\n";

	cout << "hello " << name << " aka " << username << " of clan " << clantag << " experince level " << exp / 100 << "\n";

	cout << "You need " << ( exp - 400) << " more experince points to reach the next level\n";



}