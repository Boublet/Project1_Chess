#pragma once

#include "Include.h";
#include "ChessSquare.h"
#include "Pawn.h"

class ChessBoard {
private:
	ChessSquare** board;
public:
	ChessBoard();
	ChessBoard(const ChessBoard& board);
	void update();
	void display(RenderWindow& window);
};


#pragma once
