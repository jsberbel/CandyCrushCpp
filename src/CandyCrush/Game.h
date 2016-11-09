#pragma once
#include <ctime>
#include <cmath>
#include <string>
#include <iostream>
#include <algorithm>

#include "Grid.h"
#include "Renderer.h"
#include "InputManager.h"

#define SCREEN_FPS 60.0f
#define SCREEN_TICKS_PER_FRAME (1.0f / SCREEN_FPS)

class Game {
	Grid m_grid;
	Renderer m_renderer;
	InputManager &m_inputManager;
	bool m_isRunning;
	int score = 0;

	void LoadTextures();
	void Update(Uint32 deltaTime);
	void Draw();
public:
	Game(int screenWidth, int screenHeight, int rows, int cols);
	~Game() = default;
	void Run();
};