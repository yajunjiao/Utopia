// This file is generated by Ubpa::USRefl::AutoRefl

#pragma once

#include <USRefl/USRefl.h>

template<>
struct Ubpa::USRefl::TypeInfo<Ubpa::Utopia::ShaderPass>
	: Ubpa::USRefl::TypeInfoBase<Ubpa::Utopia::ShaderPass>
{
	static constexpr AttrList attrs = {};

	static constexpr FieldList fields = { 
		Field{"vertexName", &Ubpa::Utopia::ShaderPass::vertexName},
		Field{"fragmentName", &Ubpa::Utopia::ShaderPass::fragmentName},
		Field{"renderState", &Ubpa::Utopia::ShaderPass::renderState},
		Field{"tags", &Ubpa::Utopia::ShaderPass::tags},
		Field{"queue", &Ubpa::Utopia::ShaderPass::queue},
	};
};
