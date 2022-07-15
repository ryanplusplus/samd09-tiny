/*!
 * @file
 * @brief
 */

#include "board.hpp"
#include "tiny/Timer.hpp"
#include "tiny/RingBuffer.hpp"

using namespace tiny;

int main()
{
  Interrupts::disable();

  Clock::init();
  TimerGroup timer_group{SystemTick::get_instance()};
  Watchdog watchdog{timer_group};
  Heartbeat heartbeat{timer_group};

  RingBuffer<int, 5> ring_buffer;
  ring_buffer.insert(4);

  Interrupts::enable();

  while(1) {
    if(timer_group.run()) {
      Interrupts::wait_for_interrupt();
    }
    ring_buffer.remove();
  }
}
