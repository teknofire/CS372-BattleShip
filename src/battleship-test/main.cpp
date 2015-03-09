//
//  main.cpp
//  battleship-test
//
//  Created by Will Fisher on 3/6/15.
//  Copyright (c) 2015 Will Fisher. All rights reserved.
//

#include <iostream>
#include "ship.h"
//#include "game.h"

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE( "Ships can be defined!", "[ship]" )
{
  SECTION( "ships have default size of 0" )
  {
    Ship ship;
    
    REQUIRE( ship.size() == 0 );
  }
  
  SECTION( "should be able to initialize a ship with a size" )
  {
    Ship ship(5);
    
    REQUIRE( ship.size() == 5 );
  }
  
}