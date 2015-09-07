// Soccersim_test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <random>
#define BOOST_TEST_MAIN
#include "boost\test\unit_test.hpp"
#include "Soccersim_lib\sim_game.h"
#include <boost/accumulators/accumulators.hpp>
#include <boost/accumulators/statistics/stats.hpp>
#include <boost/accumulators/statistics/mean.hpp>
#include <boost/accumulators/statistics/variance.hpp>
#include <iostream>

using namespace boost::accumulators;


BOOST_AUTO_TEST_CASE(sim_game_dummy_test) {

	//for (int i = 0; i < 1; i++) {
	//	soccersim::result a = soccersim::sim_game(70, 70);
	//	std::cout << a.home_goals << "-" << a.away_goals << std::endl;
	//	//std::cout << a.home_mean << "-" << a.away_mean << std::endl;
	//}

	//for (int i = 0; i < 10; i++) {
	//	soccersim::result b = soccersim::sim_game(70 + i * 5, 70 - i * 5);
	//	std::cout << b.home_goals << "-" << b.away_goals << std::endl;
	//	std::cout << b.home_mean << "-" << b.away_mean << std::endl;
	//}

	//int w = 0;
	//int d = 0;
	//int l = 0;

	//for (int i = 0; i < 10000; i++) {
	//	soccersim::result a = soccersim::sim_game(70, 70);
	//	if (a.home_goals > a.away_goals) {
	//		w++;
	//	}
	//	else if (a.home_goals == a.away_goals) {
	//		d++;
	//	}
	//	else {
	//		l++;
	//	}
	//}

	//std::cout << "70-70" << "wins: " << w << " draws: " << d << " loses: " << l << std::endl;

	//w = 0;
	//d = 0;
	//l = 0;

	//for (int i = 0; i < 10000; i++) {
	//	soccersim::result a = soccersim::sim_game(75, 65);
	//	if (a.home_goals > a.away_goals) {
	//		w++;
	//	}
	//	else if (a.home_goals == a.away_goals) {
	//		d++;
	//	}
	//	else {
	//		l++;
	//	}
	//}

	//std::cout << "75-65" << "wins: " << w << " draws: " << d << " loses: " << l << std::endl;

	//w = 0;
	//d = 0;
	//l = 0;

	//for (int i = 0; i < 10000; i++) {
	//	soccersim::result a = soccersim::sim_game(80, 60);
	//	if (a.home_goals > a.away_goals) {
	//		w++;
	//	}
	//	else if (a.home_goals == a.away_goals) {
	//		d++;
	//	}
	//	else {
	//		l++;
	//	}
	//}

	//std::cout << "80-60" << "wins: " << w << " draws: " << d << " loses: " << l << std::endl;


	//w = 0;
	//d = 0;
	//l = 0;

	//for (int i = 0; i < 10000; i++) {
	//	soccersim::result a = soccersim::sim_game(85, 55);
	//	if (a.home_goals > a.away_goals) {
	//		w++;
	//	}
	//	else if (a.home_goals == a.away_goals) {
	//		d++;
	//	}
	//	else {
	//		l++;
	//	}
	//}

	//std::cout << "85-55" << "wins: " << w << " draws: " << d << " loses: " << l << std::endl;

	//w = 0;
	//d = 0;
	//l = 0;

	//for (int i = 0; i < 10000; i++) {
	//	soccersim::result a = soccersim::sim_game(86, 55);
	//	if (a.home_goals > a.away_goals) {
	//		w++;
	//	}
	//	else if (a.home_goals == a.away_goals) {
	//		d++;
	//	}
	//	else {
	//		l++;
	//	}
	//}

	//std::cout << "86-55" << "wins: " << w << " draws: " << d << " loses: " << l << std::endl;

	//w = 0;
	//d = 0;
	//l = 0;

	//for (int i = 0; i < 10000; i++) {
	//	soccersim::result a = soccersim::sim_game(87, 55);
	//	if (a.home_goals > a.away_goals) {
	//		w++;
	//	}
	//	else if (a.home_goals == a.away_goals) {
	//		d++;
	//	}
	//	else {
	//		l++;
	//	}
	//}

	//std::cout << "87-55" << "wins: " << w << " draws: " << d << " loses: " << l << std::endl;


	//w = 0;
	//d = 0;
	//l = 0;

	//for (int i = 0; i < 10000; i++) {
	//	soccersim::result a = soccersim::sim_game(90, 50);
	//	if (a.home_goals > a.away_goals) {
	//		w++;
	//	}
	//	else if (a.home_goals == a.away_goals) {
	//		d++;
	//	}
	//	else {
	//		l++;
	//	}
	//}

	//std::cout << "90-50" << "wins: " << w << " draws: " << d << " loses: " << l << std::endl;


	//w = 0;
	//d = 0;
	//l = 0;

	//for (int i = 0; i < 10000; i++) {
	//	soccersim::result a = soccersim::sim_game(91, 49);
	//	if (a.home_goals > a.away_goals) {
	//		w++;
	//	}
	//	else if (a.home_goals == a.away_goals) {
	//		d++;
	//	}
	//	else {
	//		l++;
	//	}
	//}

	//std::cout << "91-49" << "wins: " << w << " draws: " << d << " loses: " << l << std::endl;





}


BOOST_AUTO_TEST_CASE(sim_game_call_does_not_return_an_exception) {

	soccersim::simulator sim;
	soccersim::team team_a(34, "a");
	soccersim::team team_b(3, "b");
	BOOST_CHECK_NO_THROW(sim.sim_game(team_a, team_b));

}


BOOST_AUTO_TEST_CASE(sim_game_does_not_return_negative_goals) {
	
	soccersim::simulator sim;
	bool found_negative = false;
	std::default_random_engine generator;
	std::uniform_int_distribution<int> distribution(0, 99);

	for (int i = 0; i < 10000; i++) {
		soccersim::team team_a(distribution(generator), "a");
		soccersim::team team_b(distribution(generator), "b");
		soccersim::result result = sim.sim_game(team_a, team_b);
		if (result.home_goals < 0 || result.away_goals < 0) {
			found_negative = true;
		}
	}
	BOOST_CHECK_EQUAL(found_negative, false);

}


BOOST_AUTO_TEST_CASE(sim_game_does_not_return_outrageous_results) {

	soccersim::simulator sim;
	int super_losses = 0;
	for (int i = 0; i < 10000; i++) {
		soccersim::team team_a(99, "a");
		soccersim::team team_b(0, "b");
		soccersim::result result = sim.sim_game(team_a, team_b);
		if (result.home_goals < result.away_goals ) {
			super_losses++;
		}
	}
	BOOST_CHECK_LE(super_losses, 5);

}


BOOST_AUTO_TEST_CASE(sim_game_returns_reasonable_results) {

	soccersim::simulator sim;
	int home_wins = 0;
	int away_wins = 0;
	std::default_random_engine generator;
	std::uniform_int_distribution<int> distribution(0, 99);

	for (int i = 0; i < 10000; i++) {
		soccersim::team team_a(distribution(generator), "a");
		soccersim::result result = sim.sim_game(team_a, team_a);
		if (result.home_goals < result.away_goals) {
			away_wins++;
		} else if(result.home_goals > result.away_goals) {
			home_wins++;
		}
	}

	BOOST_CHECK_LE(abs(home_wins - away_wins), 500);

}


BOOST_AUTO_TEST_CASE(sim_game_does_not_tie_too_much) {

	soccersim::simulator sim;
	int draws = 0;
	std::default_random_engine generator;
	std::uniform_int_distribution<int> distribution(0, 99);

	for (int i = 0; i < 10000; i++) {
		soccersim::team team_a(distribution(generator), "a");
		soccersim::result result = sim.sim_game(team_a, team_a);
		if (result.home_goals == result.away_goals) {
			draws++;
		}
	}

	BOOST_CHECK_LE(draws, 3000);

}


BOOST_AUTO_TEST_CASE(sim_game_returns_good_mean) {

	soccersim::simulator sim;
	accumulator_set<double, stats<tag::mean > > acc;
	std::default_random_engine generator;
	std::uniform_int_distribution<int> distribution(50, 99);

	for (int i = 0; i < 10000; i++) {
		soccersim::team team_a(distribution(generator), "a");
		soccersim::team team_b(distribution(generator), "b");
		soccersim::result result = sim.sim_game(team_a, team_b);
		acc(result.away_goals + result.home_goals);
	}

	//BOOST_CHECK_GE(mean(acc), 2);
	//BOOST_CHECK_LE(mean(acc), 3);
	BOOST_CHECK_CLOSE(2.5, mean(acc), 20);

}

BOOST_AUTO_TEST_CASE(sim_game_returns_good_variance) {

	soccersim::simulator sim;
	accumulator_set<double, stats<tag::variance > > acc;
	std::default_random_engine generator;
	std::uniform_int_distribution<int> distribution(50, 99);

	for (int i = 0; i < 10000; i++) {
		soccersim::team team_a(distribution(generator), "a");
		soccersim::team team_b(distribution(generator), "b");
		soccersim::result result = sim.sim_game(team_a, team_b);
		acc(result.away_goals + result.home_goals);
	}

	BOOST_CHECK_CLOSE(2.5, variance(acc), 20);

}

