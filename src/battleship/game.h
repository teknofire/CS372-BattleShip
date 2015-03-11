//
//  game.h
//  battleship
//
//  Created by Will Fisher on 3/6/15.
//  Copyright (c) 2015 Will Fisher. All rights reserved.
//

#ifndef __battleship__game__
#define __battleship__game__

#include <string>
#include <iostream>
#include "player.h"

class Game
{
public:
  Game();
  ~Game() = default;
  
  void setPlayer1(std::string);
  void setPlayer2(std::string);
  Player & getPlayer(int);
  std::string getPlayerName(int);
  Fleet & getPlayerFleet(int);
  
  void startSetup();
private:
  Player _player1;
  Player _player2;
  
};

#endif /* defined(__battleship__game__) */
