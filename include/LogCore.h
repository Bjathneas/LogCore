#pragma once

#include <fstream>
#include <string>

namespace LogCore {
  enum LOG_LEVEL {
    DEBUG,
    WARNING,
    ERROR
  };
  
  class Logger {
    public:
      Logger(std::string name);
      ~Logger();

    void warning(std::string msg);
    void debug(std::string msg);
    void error(std::string msg);

    void log(std::string msg, LOG_LEVEL level = LOG_LEVEL::DEBUG);

    private:
      std::string name;
      std::fstream log_file;

      bool name_is_valid(std::string name);
      std::string get_current_time();
  };
}
