//
//  ship.h
//  battleship
//
//  Created by Will Fisher on 3/9/15.
//  Copyright (c) 2015 Will Fisher. All rights reserved.
//

#ifndef __battleship__ship__
#define __battleship__ship__

class Ship
{
public:
  Ship();
  Ship(int);
  
  ~Ship() = default;
  
  int size();
  
private:
  int _size;
};

#endif /* defined(__battleship__ship__) */
