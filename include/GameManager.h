#include "InputManager.h"
#include "RandomGenerator.h"

using namespace Game;
using namespace Game::Input;
using namespace Game::Utility;

namespace Game
{
	typedef enum
	{
		Equal, Smaller, Greater
    	}CompareResult;

    	class GameManager
    	{
      		private:
        		InputManager im_;
        		Random r_;
        		CompareResult compare(int input,int random);
      		public:
        		void run();
    	};
}
