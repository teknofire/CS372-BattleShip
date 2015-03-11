//
//  player.cpp
//  battleship
//
//  Created by Dylan Tucker on 3/11/15.

#include "player.h"

Player::Player() : _playerName("Default Player")
{}

Player::Player(std:string player) : _playerName(player)
{}

std::string Player::getPlayerName()
{
	return _playerName
}

void Player::setPlayerName(std::string newPlayerName)
{
	_playerName = newPlayerName;
}