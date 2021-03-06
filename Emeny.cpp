#include "Emeny.hpp"

Enemy::Enemy(int _hp, float _speed, sf::Texture & texture) : SpaceShip(_hp, _speed, texture)
{
	sprite.setOrigin(texture.getSize().x*0.5f, texture.getSize().y*0.5f);
	sprite.setScale(0.28f, 0.28f);
}


void Enemy::shot(std::list<Bullet>& listOfEnemyBullets, sf::Texture & tx)
{
	Bullet tempbullet(sprite.getPosition().x, sprite.getPosition().y - sprite.getTexture()->getSize().y * 0.20f, tx, 1, 800.0f);
	listOfEnemyBullets.push_back(tempbullet);
}

void Enemy::moveLeft()
{
	sprite.move(-1.0f / 120.0f * speed, 0.0f);
}

void Enemy::moveRight()
{
	sprite.move(1.0f / 120.0f * speed,0.0f);
}

void Enemy::moveDown()
{
	sprite.setPosition(sprite.getPosition().x, sprite.getPosition().y + 20.0f);
}
