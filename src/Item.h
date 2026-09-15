#ifndef ITEM_H
#define ITEM_H

#include "ItemType.h"
#include <string>

namespace spterm {

  class Item{
  public:
    void setTitle(std::string nTitle);
    void setDescription(std::string nDescription);
    void changeStatus();
    void changeType(ItemType nType);

    std::string getTitle();
    std::string getDescription();
    bool getStatus();
    ItemType getType();

  private:
    std::string title;
    std::string description;
    bool status;
    ItemType type;
  };

};

#endif // ITEM_H