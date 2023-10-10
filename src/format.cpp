#include <string>

#include "format.h"

using std::string;

// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
string Format::ElapsedTime(long seconds)
{
  long hour = seconds / 3600;
  seconds = seconds % 3600;
  long min = seconds / 60;
  long sec =  seconds % 60;

  std::string H = std::to_string(hour);
  std::string M = std::to_string(min);
  std::string S = std::to_string(sec);
  if (hour / 10 == 0)  H = "0" + H;
  if (min / 10 == 0)  M = "0" + M;
  if (sec / 10 == 0)  S = "0" + S;

  return H + ":" + M + ":" + S;
}