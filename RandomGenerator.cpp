#include <iostream>
//#include <studio.h>
#include <cstdlib>
#include <ctime>
#include "../include/RandomGenerator.h"


using namespace std;

namespace Game
{
	namespace Utility
	{
		int Random::generator(int min,int max)
		{
			int rnumber;
			srand (time(NULL));
			rnumber = (rand() % (max-min+1)) + min;
			//cout<<rnumber;
			return rnumber;
		}
	}
}

