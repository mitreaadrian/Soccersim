// Soccersim_test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#define BOOST_TEST_MAIN
#include "boost\test\unit_test.hpp"
#include "Soccersim_lib\sim_game.h"


BOOST_AUTO_TEST_CASE(sim_game_call_does_not_return_an_excpetion) {

	BOOST_CHECK_NO_THROW(soccersim::sim_game(34, 3));

}
