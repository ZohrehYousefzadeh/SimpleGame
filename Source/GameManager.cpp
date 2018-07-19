#include <iostream>
#include "../include/GameManager.h"

using namespace std;
using namespace Game;
using namespace Game::Input;
using namespace Game::Utility;


namespace Game
{
	void GameManager::run()
	{
		int i = im_.get_input();
		int j = r_.generator(10,200);
		cout << "Your Number: " << i << endl << "Random Number: " << j << endl;
		switch(compare(i,j))
		{
			case 0:
				cout << "You Won!\n";
				break;
			default:
				cout << "You Lost...\n";
				break;
		}
	}

        CompareResult GameManager::compare(int input,int rnum)
	{
		if(input == rnum)
			return Equal;
		else if(input < rnum)
			return Smaller;
		else
			return Greater;
		
	}
        
}
