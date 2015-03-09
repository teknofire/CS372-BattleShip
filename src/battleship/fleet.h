//
//  fleet.h
//  battleship
//
//  Created by Will Fisher on 3/9/15.
//  Copyright (c) 2015 Will Fisher. All rights reserved.
//

#ifndef __battleship__fleet__
#define __battleship__fleet__

#include <vector>
#include "ship.h"

class Fleet
{
public:
  Fleet();
  ~Fleet() = default;
  
  std::vector<Ship>::size_type size();
  
private:
  std::vector<Ship> _ships;
};

#endif /* defined(__battleship__fleet__) */
