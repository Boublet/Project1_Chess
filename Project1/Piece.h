#pragma once

#include "Include.h"


class Piece {
private:
	string imagePath;
	Color color;
public:
	Piece();
	Piece(string imagePath,Color color);
	Piece(Color color); 
	Piece(const Piece& piece);
	void setImagePath(string imagePath);
	void setColor(Color color);
	string getImagePath() const;
	Color getColor() const;
	void display(RenderWindow& window,double size, Vector2f pos);
	virtual vector<vector<int>> getSquareMove(int x, int y) {
		vector<vector<int>> a;
		return a;
	}
};

