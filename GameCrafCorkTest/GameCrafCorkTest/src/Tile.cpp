#include "Tile.h"

///<summary>
///
///</summary>
Tile::Tile()
{

}

///<summary>
///
///</summary>
Tile::Tile(sf::Vector2f position, sf::Color color) : m_position(position)
{
	if (!m_texture.loadFromFile("..//GameCrafCorkTest//assets//LegoBlock.png"))
	{
		std::cout << "Texture failed to load." << std::endl;
	}

	m_sprite.setTexture(m_texture);	
	m_sprite.setPosition(position);
	m_sprite.setColor(color);

	m_falling = true;

	m_fallDelay = 1000;
	m_fallTimer = 0;
}

///<summary>
///
///</summary>
Tile::~Tile()
{

}

///<summary>
///
///</summary>
void Tile::update(sf::Int32 dt)
{
	m_sprite.setPosition(m_position);
}

///<summary>
///
///</summary>
void Tile::render(sf::RenderWindow & window)
{
	window.draw(m_sprite);
}

///<summary>
///
///</summary>
int Tile::GetWidth()
{
	return WIDTH;
}

///<summary>
///
///</summary>
int Tile::GetHeight()
{
	return HEIGHT;
}

///<summary>
///
///</summary>
sf::Vector2f Tile::getPosition()
{
	return m_position;
}

///<summary>
///
///</summary>
void Tile::setPosition(sf::Vector2f position)
{
	m_position = position;
}

///<summary>
///
///</summary>
bool Tile::isFalling()
{
	return m_falling;
}

///<summary>
///
///</summary>
void Tile::setFalling(bool falling)
{
	m_falling = falling;
}

///<summary>
///	The amount of time before the tile moves.
///</summary>
void Tile::setFallDelay(sf::Int32 fallDelay)
{
	m_fallDelay = fallDelay;
}
