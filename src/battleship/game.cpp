//
//  game.cpp
//  battleship
//
//  Created by Will Fisher on 3/6/15.
//  Copyright (c) 2015 Will Fisher. All rights reserved.
//

#include "game.h"

Game::Game(): _player1(), _player2()
{}

void Game::setPlayer1(std::string name)
{
  _player1.setName(name);
}


void Game::setPlayer2(std::string name)
{
  _player2.setName(name);
}

Player & Game::getPlayer(int playerID)
{
  if(playerID == 1)
    return _player1;
  
  return _player2;
}

std::string Game::getPlayerName(int playerID)
{
  return getPlayer(playerID).getName();
}

Fleet & Game::getPlayerFleet(int playerID)
{
  return getPlayer(playerID).getFleet();
}

void Game::startSetup()
{
  for (int ii=1; ii <= 2; ++ii)
  {
    std::cout << "Player " << ii << ", please enter your name" << std::endl;    
  }
}