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

void Ship::setClassification(const std::string &classification)
{
  _classification = classification;
}

void Ship::setLocation(const std::string &location)
{
  _location = location;
}

std::string Ship::location()
{
  return _location;
}

void Ship::setOrientation(const std::string & orientation)
{
  _orientation = orientation;
}

std::string Ship::orientation()
{
  return _orientation;
}