
#pragma once

#include <ball.hpp>
#include <iostream>

struct Inflate {
  void operator()(Basketball &ball) const {
    if (ball.is_inflated()) {
      std::cout << "Basketball is already inflated!\n";
    } else {
      ball.inflate();
      std::cout << "Basketball is now inflated.\n";
    }
  }

  void operator()(BowlingBall & /*unused*/) const {
    std::cout << "Cannot inflate a bowling ball!\n";
  }

  void operator()(SoccerBall &ball) const {
    if (ball.is_inflated()) {
      std::cout << "Soccer ball is already inflated!\n";
    } else {
      ball.inflate();
      std::cout << "Soccer ball is now inflated.\n";
    }
  }
};
