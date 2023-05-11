#include  "LogCore.h"

int main() {
  LogCore::Logger main("main_test");
  main.debug("this is a debug");
  main.warning("this is a warning");
  main.error("this is an error");
  return EXIT_SUCCESS;
}
