#include "Pawn.h"

Pawn::Pawn(Color color) : Piece(color){
	this->setImagePath("Assets/Image/ChessPiece/1.png");
}

vector<vector<int>> Pawn::getSquareMove(int x, int y) {
	vector<vector<int>> a;
	return a;
}