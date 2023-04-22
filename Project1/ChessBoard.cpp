#include "ChessBoard.h"

ChessBoard::ChessBoard() {
	this->board = new  ChessSquare * [8];
	for (int i = 0; i < 8; i++) {
		(this->board)[i] = new ChessSquare[8];
	}
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			Color color;
			(i + j) % 2 == 0 ? color = Color::Color(252, 204, 116) : color = Color::Color(87, 58, 46);
			(this->board)[i][j].updateSquare(100,color,nullptr,i*100,j*100);
		}
	}
	for (int i = 0; i < 8; i++) {
		(this->board)[1][i].setChessPiece(new Pawn(Color::White));
	}
}

ChessBoard::ChessBoard(const ChessBoard& board) {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			(this->board)[i][j] = board.board[i][j];
		}
	}
}

void ChessBoard::update() {

}
void ChessBoard::display(RenderWindow& window) {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			(this->board)[i][j].display(window);
		}
	}
}