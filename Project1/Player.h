#pragma once

#include "Include.h"


class Player {
private:
	string name;
	Color color;
	bool haveTurn;
public:
	Player();
	Player(const string name,const Color color,bool haveturn);
	Player(const Player& p);
	void setName(const string name);
	void setColor(const Color color);
	void setTurn(bool haveTurn);
	string getName();
	Color getColor();
	bool getTurn();
};


