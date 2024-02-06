
#pragma once

#include <ios>
#include <iostream>

class Singleton {
 public:
  Singleton(Singleton const &) = delete;
  Singleton(Singleton &&) = delete;
  Singleton &operator=(Singleton const &) = delete;
  Singleton &operator=(Singleton &&) = delete;
  
  ~Singleton() {
    std::cout << "Singleton destructor called.\n";
  }

  static Singleton &get_instance() {
    static Singleton instance;
    return instance;
  }

  void print_address() {
    std::cout << "Singleton Address: " << std::hex << this << "\n";
  }

 private:
  Singleton() {
    std::cout << "Singleton constructor called.\n";
  }
};
