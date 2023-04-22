#include "ChessSquare.h"

ChessSquare::ChessSquare() {
	this->size = 100;
	this->color = Color::White;
	this->piece = nullptr;
}
ChessSquare::ChessSquare(double size, Color color, Piece* piece,double x,double y) {
	this->size = size;
	this->color = color;
	this->piece = piece;
	this->pos = Vector2f(x, y);
}
ChessSquare::ChessSquare(const ChessSquare& chessSquare) {
	this->size = chessSquare.size;
	this->color = chessSquare.color;
	this->piece = chessSquare.piece;
	this->pos = chessSquare.pos;
}

void ChessSquare::updateSquare(double size, Color color, Piece* piece, double x, double y) {
	this->size = size;
	this->color = color;
	this->piece = piece;
	this->pos = Vector2f(y, x);
}

void ChessSquare::display(RenderWindow& window) {
	RectangleShape rect(Vector2f(this->size,this->size));
	rect.setFillColor(this->color);
	rect.setPosition(this->pos);
	window.draw(rect);
	if (this->piece != nullptr) {
		Vector2f piecePos;
		this->piece->display(window,this->size,pos);
	}
}

void ChessSquare::isChoose(RenderWindow& window) {
	Texture texture;
	//texture.loadFromFile();

}

void ChessSquare::setChessPiece(Piece* p) {
	this->piece = p;
}