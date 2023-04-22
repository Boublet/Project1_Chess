#pragma once

#include "Include.h"
#include "Piece.h"

class ChessSquare {
private:
	double size;
	Color color;
	Piece* piece;
	Vector2f pos;
public:
	ChessSquare();
	ChessSquare(double size,Color color,Piece* piece,double x,double y);
	ChessSquare(const ChessSquare& chessSquare);
	void updateSquare(double size,Color color,Piece* piece,double x,double y);
	void setChessPiece(Piece* p);
	void display(RenderWindow& window);
	void isChoose(RenderWindow& window);
};



#pragma once
