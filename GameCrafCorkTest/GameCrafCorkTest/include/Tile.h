#ifndef TILE_H
#define TILE_H

#include "SFML\Graphics.hpp"
#include <iostream>

class Tile
{
public:
	Tile(sf::Vector2f position, bool falling, sf::Color color);
	Tile();
	~Tile();

	void update(sf::Int32 dt);
	void render(sf::RenderWindow& window);

	static int GetWidth();
	static int GetHeight();

private:
	sf::Vector2f m_position;
	sf::Texture m_texture;
	sf::Sprite m_sprite;

	sf::Int32 m_fallTimer;
	sf::Int32 m_fallDelay;
	bool m_falling;

	static const int WIDTH = 30;
	static const int HEIGHT = 30;
};
#endif // !TILE_H
