#include <pebble.h>

void test1(void) {
  int x = 1;
  if (x == 1) {
    APP_LOG(APP_LOG_LEVEL_DEBUG, "Test passed.");
  }
  else {
    APP_LOG(APP_LOG_LEVEL_ERROR, "Test failed.");
  }

  if (x == 2){
    APP_LOG(APP_LOG_LEVEL_DEBUG, "Test passed.");
  }
  else {
    APP_LOG(APP_LOG_LEVEL_ERROR, "Test failed.");
  }
}
