// This file is generated by Ubpa::USRefl::AutoRefl

#pragma once

#include <USRefl/USRefl.h>

template<>
struct Ubpa::USRefl::TypeInfo<Ubpa::UECS::EntityQuery>
    : Ubpa::USRefl::TypeInfoBase<Ubpa::UECS::EntityQuery>
{
    static constexpr AttrList attrs = {};

    static constexpr FieldList fields = {
        Field{"filter", &Ubpa::UECS::EntityQuery::filter},
        Field{"locator", &Ubpa::UECS::EntityQuery::locator},
        Field{Name::constructor,
            WrapConstructor<Ubpa::UECS::EntityQuery(Ubpa::UECS::ArchetypeFilter, Ubpa::UECS::CmptLocator)>()
        },
        Field{"HashCode", &Ubpa::UECS::EntityQuery::HashCode},
        Field{"operator==", &Ubpa::UECS::EntityQuery::operator==},
    };
};
