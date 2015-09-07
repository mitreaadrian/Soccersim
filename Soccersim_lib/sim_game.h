#pragma once
#include <random>
#include <string>
#include "team.h"


namespace soccersim {


	struct result {
		int home_goals;
		int away_goals;

	};

	

	class simulator {

		std::default_random_engine generator;

	public:
		simulator();
		
		result sim_game(const team &home, const team &away);

	};

	double return_mean(int diff);

}









