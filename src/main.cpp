#include <Geode/Geode.hpp>
#include <Geode/modify/CCMenuItemSpriteExtra.hpp>
using namespace geode::prelude;

class $modify(CCMenuItemSpriteExtra) {
	virtual void activate() {
		game::exit(true);
	}
};