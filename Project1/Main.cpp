#include "Game.h"

int main() {
	//Piece p(1,"Assets/Image/ChessPiece/1.png");
	Player player1("Vo Chi Trung",Color::Black,1);
	Player player2("Huynh Duong Thanh Tien",Color::White,0);
	Game game(player1,player2);
	RenderWindow window(VideoMode(1000,800),"Chess-Game");
	window.setFramerateLimit(120);
	while (window.isOpen()) {
		Event event;
		while (window.pollEvent(event)) {
			if (event.type == Event::Closed) window.close();
		}
		window.clear();
		game.run(window);
		window.display();
	}
	return EXIT_SUCCESS;

}
