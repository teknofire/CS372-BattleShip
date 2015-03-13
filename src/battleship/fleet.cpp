//
//  fleet.cpp
//  battleship
//
//  Created by Will Fisher on 3/9/15.
//  Copyright (c) 2015 Will Fisher. All rights reserved.
//

#include "fleet.h"

Fleet::Fleet(): _ships{ { "Carrier", 5 }, { "Battleship", 4 }, { "Submarine", 3 }, { "Destroyer", 3 }, { "Patrol boat", 2 } }
{
  
}

std::vector<Ship>::size_type Fleet::size()
{
  return _ships.size();
}

std::vector<Ship>::iterator Fleet::begin()
{
  return _ships.begin();
}
std::vector<Ship>::iterator Fleet::end()
{
  return _ships.end();
}

Ship * Fleet::operator[](const int index)
{
  return &_ships[index];
}