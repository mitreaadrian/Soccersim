#include "stdafx.h"
#include "sim_game.h"
#include <random>
#include <math.h>

soccersim::simulator::simulator() {
	generator.seed();
}


soccersim::result soccersim::simulator::sim_game(const team &home, const team &away) {

	soccersim::result output;

	auto diff = home.get_rating() - away.get_rating();

	double home_mean = return_mean(diff);
	double away_mean = return_mean(-diff);

	std::poisson_distribution<int> home_distribution(home_mean);
	std::poisson_distribution<int> away_distribution(away_mean);

	output.home_goals = home_distribution(generator);
	output.away_goals = away_distribution(generator);

	return output;
}


double soccersim::return_mean(int diff) {

	double k = 0.05 + 0.05 * exp(diff / 40);
	double max = 2.5;

	if (diff >= 0) {
		max = 1.5 + exp(diff / 40);
	}
	else {
		max = 3.5 - exp(diff / 40);
	}

	return (max / (1 + exp(-k * diff)));

}