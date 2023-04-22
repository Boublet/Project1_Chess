#include "Game.h"

Game::Game() {
	this->player1 = Player();
	this->player2 = Player();
	this->board = ChessBoard();
}
Game::Game(Player player1, Player player2) {
	this->player1 = player1;
	this->player2 = player2;
	this->board = ChessBoard();
}
void Game::clickProcess(RenderWindow& window) {
	return ;
}
void Game::run(RenderWindow& window) {
	this->board.display(window);
}