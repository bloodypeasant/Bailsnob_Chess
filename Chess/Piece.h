#pragma once
#include "Position.h"
#include "Player.h"

class Player;

class Piece
{
public: 
	//Piece(); // TODO: temporary for testing
	Piece(Player* player, Position* pos);

protected:
	Position* pos;
	Player* player;

	//need a method to calculate legal movements
};
