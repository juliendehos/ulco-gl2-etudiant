#pragma once

#include <string>
#include <tuple>
#include <vector>

enum class Level { Info, Warning, Error };

using Item = std::tuple<Level, std::string>;

class Logger {
  private:
    std::vector<Item> _items;

  public:
    void addItem(Level l, const std::string & m);
    std::string reportByAdded() const;
    std::string reportByLevel() const;
};

