//
//  main.cpp
//  battleship-test
//
//  Created by Will Fisher on 3/6/15.
//  Copyright (c) 2015 Will Fisher. All rights reserved.
//

#include <iostream>
#include "ship.h"
#include "fleet.h"
#include "player.h"
#include "game.h"

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE( "Players can be defined!", "[player]")
{
  SECTION( "default constructor" )
  {
    Player player;
    
    REQUIRE( player.getName() == "Default Player" );
    
    player.setName("Wombat Player");
    
    REQUIRE( player.getName() == "Wombat Player" );
    REQUIRE( player.getFleet().size() == 5);
  }
  
  SECTION( "constructor with name" )
  {
    Player player("Player 1");
    
    REQUIRE( player.getName() == "Player 1" );
  }
  
  
}

TEST_CASE( "Ships can be defined!", "[ship]" )
{
  SECTION( "Default constructor" )
  {
    Ship ship;
    
    SECTION( "ships have default size of 0" )
    {
      REQUIRE( ship.size() == 0 );
    }
    SECTION( "should have no classification by default" )
    {
      REQUIRE( ship.classification() == "" );
    }
  }
  
  SECTION( "should be able to initialize a ship with a class and size" )
  {
    Ship ship("Carrier", 5);
    
    REQUIRE( ship.size() == 5 );
    REQUIRE( ship.classification() == "Carrier" );
    
    ship.setClassification("test ship");
    REQUIRE( ship.classification() == "test ship" );
    
    SECTION( "Should be able to set the location for a ship" )
    {
      ship.setLocation("A7");
      REQUIRE( ship.location() == "A7" );
    }
    SECTION( "Should be able to set the orientation for a ship" )
    {
      ship.setOrientation("u");
      REQUIRE( ship.orientation() == "u" );
      ship.setOrientation("d");
      REQUIRE( ship.orientation() == "d" );
      ship.setOrientation("l");
      REQUIRE( ship.orientation() == "l" );
      ship.setOrientation("r");
      REQUIRE( ship.orientation() == "r" );
    }
  }
  
}

TEST_CASE( "Fleets can be setup", "[fleet]" )
{
  Fleet fleet;
  
  SECTION( "Should have 5 ships by default" )
  {
    REQUIRE( fleet.size() == 5 );
    REQUIRE( fleet[0]->classification() == "Carrier" );
    REQUIRE( fleet[1]->classification() == "Battleship" );
    REQUIRE( fleet[2]->classification() == "Submarine" );
    REQUIRE( fleet[3]->classification() == "Destroyer" );
    REQUIRE( fleet[4]->classification() == "Patrol boat" );
    REQUIRE( fleet.begin()->classification() == fleet[0]->classification() );
    
    SECTION( "Should be able to change the ship classfication from fleet")
    {
      fleet[0]->setClassification("test ship");
      REQUIRE( fleet[0]->classification() == "test ship" );
    }
  }
}

TEST_CASE( "Game setup", "[game setup]" )
{
  Game game;
  
  SECTION( "By default boards should be 10x10" )
  {
    REQUIRE( game.getBoardSize() == 10 );
  }
  
  SECTION( "Should set player names" )
  {
    for( int ii = 1; ii <= 2; ++ii)
    {
      game.setPlayer(ii, "Player " + std::to_string(ii));
      REQUIRE( game.getPlayerName(ii) == "Player " + std::to_string(ii) );
    }
  }

  SECTION("Players should have a default fleet")
  {
    for( int ii = 1; ii <= 2; ++ii)
    {
      REQUIRE( game.getPlayerFleet(ii).size() == 5);
    }
  }

}

