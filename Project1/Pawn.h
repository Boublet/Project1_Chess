#pragma once

#include "Piece.h"

class Pawn : public Piece {
public:
	Pawn(Color color);
	vector<vector<int>> getSquareMove(int x, int y);
};


