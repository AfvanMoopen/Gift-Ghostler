#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include <iostream>

#include "../../Seal GE/include/base/BaseMain.h"
#include "../include/SealTest.h"

using Seal::Base::BaseGame;

using SealTest::TestGame;

int main(int argc, char** argv) {
	TestGame game; // Initialize a test game to run

	Seal::Base::BaseMain::getBaseMain().runGame(game);

	return 0;
}