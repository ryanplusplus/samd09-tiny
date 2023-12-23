/*!
 * @file
 * @brief
 */

#ifndef board_hpp
#define board_hpp

#include "Clock.hpp"
#include "HeartbeatTemplate.hpp"
#include "Interrupts.hpp"
#include "SystemTick.hpp"
#include "Watchdog.hpp"

using Heartbeat = HeartbeatTemplate<PIN_PA27>;

#endif
