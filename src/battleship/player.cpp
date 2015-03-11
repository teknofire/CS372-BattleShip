//
//  player.cpp
//  battleship
//
//  Created by Dylan Tucker on 3/11/15.

#include "player.h"

Player::Player() : _name("Default Player"), _fleet()
{}

Player::Player(std::string player) : _name(player), _fleet()
{}

std::string Player::getName()
{
  return _name;
}

void Player::setName(std::string name)
{
	_name = name;
}

Fleet & Player::getFleet()
{
  return _fleet;
}