#include <pebble.h>

#include "test1.h"

int main(void) {
  APP_LOG(APP_LOG_LEVEL_DEBUG, "Beginning tests...");

  test1();

  APP_LOG(APP_LOG_LEVEL_DEBUG, "Tests ended.");
}
