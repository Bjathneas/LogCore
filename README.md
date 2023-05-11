
# LogCore

A simple logging library in c++, compiled with cppship 


## Installation

Install with [cppship](https://github.com/qqiangwu/cppship)

```bash
  cppship install
```
## Usage/Examples

```cpp
#include <LogCore.h>

int main() {
    LogCore::Logger log("main");//create a logger that is stored at logs/main
    
    log.debug("This is a debug msg");
    log.warning("This is a warning msg");
    log.error("This is an error msg");

    log.log("This is a debug msg");
    log.log("This is a warning msg", LogCore::LOG_LEVEL::WARNING);
    log.log("This is an error msg", LogCore::LOG_LEVEL::ERROR);

    return EXIT_SUCCESS;
}
```

