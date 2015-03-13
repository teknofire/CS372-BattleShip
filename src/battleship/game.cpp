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

void Game::setPlayer(int playerID, std::string name)
{
  getPlayer(playerID).setName(name);
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
  std::string name;
  
  for (int ii=1; ii <= 2; ++ii)
  {
    setupPlayer(ii);
    setupFleet(ii);
  }
}

void Game::setupPlayer(int playerID)
{
  std::string name;
  
  std::cout << std::endl << "Player " << playerID << ", please enter your name: ";
  getline(std::cin, name);
  setPlayer(playerID, name);
  std::cout << "Welcome " + getPlayerName(playerID) << std::endl;
}

void Game::setupFleet(int playerID)
{
  std::cout << std::endl << "Setup ship locations" << std::endl;

  for (auto ship:getPlayerFleet(playerID))
  {
    std::string location;
    
    while(location.length() == 0)
    {
      std::cout << "Where do you want to place your " << ship.classification() << "? ";
      getline(std::cin, location);
      if (location.length() == 0)
        std::cout << "Invalid location, please try again..." << std::endl;
      ship.setLocation(location);
    }
  }
}