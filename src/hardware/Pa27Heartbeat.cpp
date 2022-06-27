/*!
 * @file
 * @brief
 */

extern "C" {
#include "samd09.h"
}

#include "Pa27Heartbeat.hpp"
#include "Clock.hpp"

using namespace tiny;

enum {
  pin = PIN_PA27,
  pin_group = pin / 32,
  pin_mask = 1 << (pin % 32),
  half_period_in_msec = 500,
};

Pa27Heartbeat::Pa27Heartbeat(tiny::TimerGroup& timer_group)
{
  PORT->Group[pin_group].DIRSET.reg = pin_mask;

  timer_group.start_periodic(
    this->timer, half_period_in_msec, +[](void*) {
      PORT->Group[pin_group].OUTTGL.reg = pin_mask;
    });
}
