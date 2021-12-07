#pragma once
#ifndef TEST_GAME_H
#define TEST_GAME_H

#include <memory>
#include "../../Seal GE/include/SealEngine.h"

#include "../../Seal GE/include/base/BaseGame.h"

#include "../../Seal GE/include/object/GameObject.h"
#include "../../Seal GE/include/scene/GameScene.h"

namespace SealTest {
	class TestGame : public Seal::Base::BaseGame {
	public:
		void input();

		void render();

		void start();

		void stop();

		void update();
	private:
		Seal::Scene::GameScene gameScene;	 // The main scene

		Seal::Object::GameObject *carPtr;

		std::unique_ptr<Seal::Object::GameObject> plane;		// The plane Game Object
		std::unique_ptr<Seal::Object::GameObject> cube;		// The cube Game Object
		std::unique_ptr<Seal::Object::GameObject> car;			// The car Game Object

		std::unique_ptr<Seal::Object::GameObject> camera;		// The scene Camera
		std::unique_ptr<Seal::Object::GameObject> ambient;		// The ambient lighting
		std::unique_ptr<Seal::Object::GameObject> directional; // The directional lighting
	};
}

#endif