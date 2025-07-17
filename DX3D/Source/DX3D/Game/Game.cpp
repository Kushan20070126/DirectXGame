#include <DX3D/GAME/Game.h>
#include <DX3D/Window/Window.h>

dx3d::Game::Game()
{
	m_display = std::make_unique<Window>();
}

dx3d::Game::~Game()
{

}

