#include "Item.h"
#include <string>

namespace spterm {

  void Item::setTitle(std::string nTitle) {
    title = nTitle;
  }

  void Item::setDescription(std::string nDescription) {
    description = nDescription;
  }

  void Item::changeStatus() {
    status = !status;
  }

  void Item::changeType(ItemType nType) {
    type = nType;
  }

  std::string Item::getTitle() {
    return title;
  }

  std::string Item::getDescription() {
    return description;
  }

  bool Item::getStatus() {
    return status;
  }

  ItemType Item::getType() {
    return type;
  }

}