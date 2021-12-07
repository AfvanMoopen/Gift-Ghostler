#pragma once
#ifndef Seal_ENGINE_H
#define Seal_ENGINE_H

/// This Header contains all of Seal's built in classes and functions, so
/// that the user of the engine can simply include this engine to gain full
/// functionality of the engine, rather than having to import each individual
/// header. Additionally, this header creates a new SealEngine namespace
/// which uses all of the internal namespaces. In order to use this header,
/// simply include it and use the SealEngine namespace.

#include "base/BaseGame.h"
#include "base/BaseMain.h"
#include "base/GameInput.h"
#include "base/GameTime.h"
#include "base/GameWindow.h"
#include "base/GLItem.h"

#include "component/GameComponent.h"
#include "component/light/AmbientLight.h"
#include "component/light/BaseLight.h"
#include "component/light/DirectionalLight.h"
#include "component/light/PointLight.h"
#include "component/light/SpotLight.h"
#include "component/physics/Transform.h"
#include "component/render/CameraController.h"
#include "component/render/MeshRenderer.h"

#include "conjuncture/Event.h"
#include "conjuncture/EventHandler.h"

#include "debug/Logger.h"

#include "file/FileIO.h"
#include "file/ImageIO.h"
#include "file/LineOperation.h"

#include "geometry/Mesh.h"
#include "geometry/Model.h"
#include "geometry/Vertex.h"

#include "graphics/Cubemap.h"
#include "graphics/Material.h"
#include "graphics/Texture2D.h"

#include "math/MathUtils.h"
#include "math/Matrix4f.h"
#include "math/Quaternion.h"
#include "math/Vector2f.h"
#include "math/Vector3f.h"
#include "math/Vector4f.h"

#include "object/GameObjectFactory.h"
#include "object/GameObject.h"

#include "render/Renderer.h"
#include "render/RenderingEngine.h"
#include "render/deferred/DeferredRenderer.h"
#include "render/deferred/GBuffer.h"

#include "scene/GameScene.h"

#include "shader/GenericStruct.h"
#include "shader/ShaderProgram.h"
#include "shader/ShaderSource.h"

namespace SealEngine {
	using namespace Seal::Base;

	using namespace Seal::Component;
	using namespace Seal::Component::Light;
	using namespace Seal::Component::Physics;
	using namespace Seal::Component::Render;

	using namespace Seal::Conjuncture;

	using namespace Seal::File;

	using namespace Seal::Geometry;

	using namespace Seal::Graphics;

	using namespace Seal::Math;
	using namespace Seal::Math::Utils;

	using namespace Seal::Object;

	using namespace Seal::Render;
	using namespace Seal::Render::Deferred;

	using namespace Seal::Scene;

	using namespace Seal::Shader;
}

#endif
