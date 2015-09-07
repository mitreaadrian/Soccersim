#pragma once
#include <string>

namespace soccersim {

	class team {
		int _rating;
		std::string _name;

	public:
		int get_rating() const;
		std::string get_name() const;
		team(int rating, std::string name);
	};

}