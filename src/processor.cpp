#include "processor.h"
#include "linux_parser.h"

// TODO: Return the aggregate CPU utilization
float Processor::Utilization() { 
  float all = float(LinuxParser::Jiffies());
  float idle = LinuxParser::IdleJiffies();

  return (all - idle) / all; 
}