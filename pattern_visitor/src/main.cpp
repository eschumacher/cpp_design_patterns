
#include <iostream>
#include "ball.hpp"
#include "basketball.hpp"
#include "bounce.hpp"
#include "bowlingball.hpp"
#include "inflate.hpp"
#include "soccerball.hpp"

namespace {

void bounce_balls(Balls const &balls) {
  for (auto const &ball : balls) {
    std::visit(Bounce{}, ball);
  }
}

void inflate_balls(Balls &balls) {
  for (auto &ball : balls) {
    std::visit(Inflate{}, ball);
  }
}

}  // namespace

int main() {
  std::cout << "Visitor Pattern Example:\n\n";

  Balls balls;
  balls.emplace_back(Basketball{});
  balls.emplace_back(SoccerBall{});
  balls.emplace_back(BowlingBall{});

  bounce_balls(balls);

  std::cout << "\n";

  inflate_balls(balls);

  std::cout << "\n";

  bounce_balls(balls);

  return 0;
}