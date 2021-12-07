#include "../../include/graphics/Material.h"

#include "../../include/shader/ShaderProgram.h"

using Seal::Math::Vector3f;
using Seal::Math::Vector4f;
using Seal::Shader::GenericStruct;
using Seal::Shader::ShaderProgram;
using Seal::Shader::ShaderSource;

namespace Seal { namespace Graphics {
	const std::string Material::DEFAULT_FILE =
		"../Seal GE/res/shaders/standard/structs/stdMaterial.glsl";
	const std::string Material::DEFAULT_STRUCT = "Material";

	Material::Material() : Material(ShaderSource::getShaderSource(
			Material::DEFAULT_FILE), Material::DEFAULT_STRUCT) {

	}
	
	Material::Material(const Seal::Shader::ShaderSource &sS,
			const std::string &name) : GenericStruct(sS, name) {
		this->name = name;
	}

	const std::string& Material::getName() const {
		return this->name;
	}
} }
