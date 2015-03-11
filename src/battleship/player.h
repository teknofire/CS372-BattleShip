//
//  player.h
//  battleship
//
//  Created by Dylan Tucker on 3/11/15.




#ifndef __battleship__player__
#define __battleship__player__

#include <string>
#include "fleet.h"

class Player
{
public:
	Player();
  Player(std::string);
	~Player() = default;
	
	std::string getName();
	void setName(std::string);
  Fleet & getFleet();

private:
	std::string _name;
  Fleet _fleet;
};

#endif /* defined(__battleship__player__) */
