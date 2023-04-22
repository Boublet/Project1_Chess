#pragma once

#include "Include.h"
#include "Player.h"
#include "ChessBoard.h"

class Game {
private:
	Player player1;
	Player player2;
	ChessBoard board;
public:
	Game();
	Game(Player player1, Player player2);
	void clickProcess(RenderWindow& window);
	void run(RenderWindow& window);
};


