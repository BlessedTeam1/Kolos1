#include <boost/test/unit_test.hpp>
#include <cstring>
#include <cmath>
#include <iostream>
#include <sstream>
#include <ctime>
#include "Galaxy.h"
#include "typedefs.h"

using namespace std;

BOOST_AUTO_TEST_SUITE(NauczycielSuite)

BOOST_AUTO_TEST_CASE(Nauczyciel1Test) {
  BOOST_FAIL("\nUsun te linijke i po zaimplementowaniu odpowiednich klas odkomentuj kod testu");

//  Interceptor interceptor(REPUBLIC, 0, 4 , X);
//  BOOST_TEST_REQUIRE(interceptor.get_team() == 0);
//  BOOST_TEST_REQUIRE(interceptor.get_x()==0, boost::test_tools::tolerance(0.01));
//  BOOST_TEST_REQUIRE(interceptor.get_y()==4, boost::test_tools::tolerance(0.01));
//  BOOST_TEST_REQUIRE(interceptor.get_direction() == X, boost::test_tools::tolerance(0.01));
//
//  Fighter fighter(EMPIRE, 2, 3, 2.0);
//  BOOST_TEST_REQUIRE(fighter.get_team() == EMPIRE);
//  BOOST_TEST_REQUIRE(fighter.get_x()==2, boost::test_tools::tolerance(0.01));
//  BOOST_TEST_REQUIRE(fighter.get_y()==3, boost::test_tools::tolerance(0.01));
//  BOOST_TEST_REQUIRE(fighter.get_range() == 2.0, boost::test_tools::tolerance(0.01));
//
  Galaxy galaxy(2.0);
  BOOST_TEST_REQUIRE(galaxy.get_balance() == 2.0, boost::test_tools::tolerance(0.01));
}

BOOST_AUTO_TEST_CASE(Nauczyciel2Test) {
  BOOST_FAIL("\nUsun te linijke i po zaimplementowaniu odpowiednich klas odkomentuj kod testu");

//  SpacecraftPtr interceptor = make_shared<Interceptor>(REPUBLIC, 4, 0, X);
//  SpacecraftPtr fighter = make_shared<Fighter>(EMPIRE, 0, 0, 4.0);
//  BOOST_TEST_REQUIRE(fighter->attack(interceptor) == true);
//  BOOST_TEST_REQUIRE(interceptor->attack(fighter) == false);
}

BOOST_AUTO_TEST_CASE(Nauczyciel3Test)
{
  BOOST_FAIL("\nUsun te linijke i po zaimplementowaniu odpowiednich klas odkomentuj kod testu");

//  Galaxy galaxy(1);
//  SpacecraftPtr spacecraft = make_shared<Fighter>(REPUBLIC, 4, 0, 2.0);
//  galaxy.add(make_shared<Interceptor>(REPUBLIC, 0, 4, X));
//  galaxy.add(spacecraft);
//  galaxy.add(make_shared<Fighter>(EMPIRE, 0, 0, 4.0));
//  BOOST_TEST_REQUIRE(galaxy.get_spacecraft_number(REPUBLIC)==2);
//  BOOST_TEST_REQUIRE(galaxy.get_spacecraft_number(EMPIRE)==1);
//  galaxy.remove(spacecraft);
//  BOOST_TEST_REQUIRE(galaxy.get_spacecraft_number(REPUBLIC)==1);
//  BOOST_TEST_REQUIRE(galaxy.get_spacecraft_number(EMPIRE)==1);
}

BOOST_AUTO_TEST_SUITE_END()
