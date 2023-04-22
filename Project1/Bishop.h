#pragma once

#include "Piece.h"

class Bishop : public Piece {
public:
	Bishop(Color color);
	vector<vector<int>> getSquareMove(int x, int y);
};