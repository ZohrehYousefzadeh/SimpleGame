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
		bool b = false;
		
		int j = r_.generator(10,200);
		
		while(!b)
		{
			int i = im_.get_input();
			switch(compare(i,j))
			{
				case 0:
					cout << "You Won!\n";
					b = true;
					break;
				case 1:
					cout << "Your Number is Smaller than the Random Number!\nTry again...\n";
					break;
				case 2:
					cout << "Your Number is Greater than the Random Number!\nTry again...\n";
					break;
				default:
					break;
			}
			//cout << "Your Number: " << i << endl << "Random Number: " << j << endl;
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
