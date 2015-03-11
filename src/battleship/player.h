//
//  player.h
//  battleship
//
//  Created by Dylan Tucker on 3/11/15.




#ifndef __battleship__player__
#define __battleship__player__

#include <string>

class Player
{
public:
	Player();
	Player(std::string)
	~Player() = default;
	
	std::string getPlayerName();
	void setPlayerName(std::string);


private:
	std::string _playerName;
};

#endif /* defined(__battleship__player__) */
