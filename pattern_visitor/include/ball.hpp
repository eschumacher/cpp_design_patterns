
#pragma once

#include <variant>
#include <vector>
#include "basketball.hpp"
#include "bowlingball.hpp"
#include "soccerball.hpp"

using Ball = std::variant<Basketball, BowlingBall, SoccerBall>;

using Balls = std::vector<Ball>;