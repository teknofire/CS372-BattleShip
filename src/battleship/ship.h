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
  Ship(int);
  
  ~Ship() = default;
  
  int size();
  std::string classification();
  
private:
  int _size;
  std::string _classification;
};

#endif /* defined(__battleship__ship__) */
