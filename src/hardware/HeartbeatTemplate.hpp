/*!
 * @file
 * @brief
 */

#ifndef HeartbeatTemplate_hpp
#define HeartbeatTemplate_hpp

extern "C" {
#include "samd09.h"
}

#include "tiny/Timer.hpp"

template <unsigned pin>
class HeartbeatTemplate {
 private:
  enum {
    pin_group = pin / 32,
    pin_mask = 1 << (pin % 32),
    half_period_in_msec = 500,
  };

 public:
  HeartbeatTemplate(tiny::TimerGroup& timer_group)
  {
    PORT->Group[pin_group].DIRSET.reg = pin_mask;

    timer_group.start_periodic(
      this->timer, half_period_in_msec, +[](void*) {
        PORT->Group[pin_group].OUTTGL.reg = pin_mask;
      });
  }

 private:
  tiny::Timer timer{};
};

#endif
