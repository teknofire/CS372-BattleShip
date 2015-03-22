//
//  ship.h
//  battleship
//
//  Created by Will Fisher on 3/9/15.
//  Copyright (c) 2015 Will Fisher. All rights reserved.
//

#ifndef __battleship__ship__
#define __battleship__ship__

#include <string>

class Ship
{
public:
  Ship();
  Ship(std::string, int);
  
  ~Ship() = default;
  
  int size();
  std::string classification();
  void setClassification(const std::string &);
  void setLocation(const std::string &);
  std::string location();
  
  void setOrientation(const std::string &);
  std::string orientation();
  
private:
  int _size;
  std::string _classification;
  std::string _location;
  std::string _orientation;
};

#endif /* defined(__battleship__ship__) */
