#pragma once

#include "component.h"

class Child {
	COMPONENT_CUSTOM_STORAGE(Child)

	static void _bind_methods();

public:
	// The parent `Entity`.
	EntityID parent;
	// First child of next level.
	EntityID first_child;
	// The next child in this level
	EntityID next;

	Child(EntityID p_parent);
};
