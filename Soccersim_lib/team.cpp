#include "stdafx.h"
#include "team.h"


soccersim::team::team(int rating, std::string name) :_rating(rating), _name(name) {}

int soccersim::team::get_rating() const {
	return _rating;
}

std::string soccersim::team::get_name() const {
	return _name;
}
