#include "Player.h"

Player::Player() {
	this->name = "";
	this->color = Color::White;
	this->haveTurn = 0;
}

Player::Player(const Player& p) {
	this->name = p.name;
	this->color = p.color;
	this->haveTurn = p.haveTurn;
}

Player::Player(const string name, const Color color, bool haveturn) {
	this->name = name;
	this->color = color;
	this->haveTurn = haveturn;
}
void Player::setName(const string name) {
	this->name = name;
}
void Player::setColor(const Color color) {
	this->color = color;
}
void Player::setTurn(bool haveTurn) {
	this->haveTurn = haveTurn;
}
string Player::getName() {
	return this->name;
}
Color Player::getColor() {
	return this->color;
}
bool Player::getTurn() {
	return this->haveTurn;
}