#include <boost/test/unit_test.hpp>
#include <envire_robot_visualizer/Dummy.hpp>

using namespace envire_robot_visualizer;

BOOST_AUTO_TEST_CASE(it_should_not_crash_when_welcome_is_called)
{
    envire_robot_visualizer::DummyClass dummy;
    dummy.welcome();
}
