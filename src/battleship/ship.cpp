//
//  ship.cpp
//  battleship
//
//  Created by Will Fisher on 3/9/15.
//  Copyright (c) 2015 Will Fisher. All rights reserved.
//

#include "ship.h"

Ship::Ship(): _size(0), _classification("")
{
  
}

Ship::Ship(std::string classification, int size): _size(size), _classification(classification)
{
  
}

int Ship::size()
{
  return _size;
}

std::string Ship::classification()
{
  return _classification;
}