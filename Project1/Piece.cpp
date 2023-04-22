#include "Piece.h"

Piece::Piece() {
	this->imagePath = "";
	this->color = Color::White;
}

Piece::Piece(string imagePath, Color color) {
	this->imagePath = imagePath;
	this->color = color;
}

Piece::Piece(const Piece& piece) {
	this->imagePath = piece.imagePath;
	this->color = piece.color;
}

void Piece::display(RenderWindow& window,double size,Vector2f pos) {
	Texture texture;
	texture.loadFromFile(this->imagePath);
	Sprite sprite;
	sprite.setTexture(texture);
	sprite.setPosition(pos);
	sprite.scale(float(size)/ texture.getSize().x, float(size)  / texture.getSize().y);
	window.draw(sprite);
}

Piece::Piece(Color color) {
	this->color = color;
}

void Piece::setImagePath(string imagePath) {
	this->imagePath = imagePath;
}
void Piece::setColor(Color color) {
	this->color = color;
}
string Piece::getImagePath() const {
	return this->imagePath;
}
Color Piece::getColor() const {
	return this->color;
}

