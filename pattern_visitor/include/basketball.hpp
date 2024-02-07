
#pragma once

class Basketball {
 public:
  void inflate() { inflated_ = true; }
  [[nodiscard]] bool is_inflated() const noexcept { return inflated_; }

 private:
  bool inflated_{false};
};