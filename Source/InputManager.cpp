#include <iostream>
#include "../include/InputManager.h"

using namespace std;

namespace Game
{
	namespace Input
	{
		int InputManager::get_input()
		{
			int num;
		        bool valid = false;

			while (!valid)
			{
				valid = true;

				cout << "Enter an integer value: ";
				cin >> num;
				cout << endl;
	
				if(cin.fail())
				{
					cin.clear();
					cin.ignore();
					cout << "Please enter an Integer only..." << endl;
					valid = false;
				}
	
			}
			return num;
		}

      
	}
}
