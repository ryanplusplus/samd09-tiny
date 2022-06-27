/*!
 * @file
 * @brief
 */

#ifndef Pa27Heartbeat_hpp
#define Pa27Heartbeat_hpp

#include "tiny/Timer.hpp"

class Pa27Heartbeat {
 public:
  Pa27Heartbeat(tiny::TimerGroup& timer_group);

 private:
  tiny::Timer timer{};
};

#endif
