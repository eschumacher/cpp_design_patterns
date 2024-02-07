
#pragma once

#include <ball.hpp>
#include <iostream>

struct Bounce {
  void operator()(Basketball const &ball) const {
    if (ball.is_inflated()) {
      std::cout << "Basketball bounced.\n";
    } else {
      std::cout << "Basketball is flat! Cannot bounce.\n";
    }
  }

  void operator()(BowlingBall const & /*unused*/) const {
    std::cout << "Bowling ball bounced (sort of).\n";
  }

  void operator()(SoccerBall const &ball) const {
    if (ball.is_inflated()) {
      std::cout << "Soccer ball bounced.\n";
    } else {
      std::cout << "Soccer ball is flat! Cannot bounce.\n";
    }
  }
};
