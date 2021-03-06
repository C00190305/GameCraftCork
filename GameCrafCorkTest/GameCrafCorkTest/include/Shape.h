#ifndef  SHAPE_H
#define SHAPE_H

#include <vector>
#include <string>
#include "Tile.h"

class Shape
{
public:
	Shape();
	Shape(std::string type, sf::Vector2f pos);
	~Shape();
	
	void update(sf::Int32 dt);
	void render(sf::RenderWindow &window);
	void rotateShape();
	std::vector<Tile*> getShapeTiles();

	void setPosition(sf::Vector2f position);
	sf::Vector2f getPosition();

	void setFalling(bool falling);

private:
	void getShape();
	void getL();
	void getR();
	void getZ();
	void getS();
	void getSquare();
	void getI();
	void getT();

	void setLPosition();
	void setRPosition();
	void setZPosition();
	void setSPosition();
	void setSquarePosition();
	void setIPosition();
	void setTPosition();


	void rotate();

	std::vector<Tile*> m_shapeTiles;
	sf::Vector2f m_position;
	std::string m_type;

	sf::Int32 m_fallTimer;
	sf::Int32 m_fallDelay;
	bool m_falling;

	const int NUM_TILES = 4;
};
#endif // !TILECOLLECTION_H
