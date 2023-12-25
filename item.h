#ifndef ITEM_H
#define ITEM_H

enum class GemType {
    Red, Green, Purple, Yellow
};

class Item {
private:
    GemType gemType;

public:
    Item(GemType type) : gemType(type) {}

    GemType getType() const;
    int getHPIncrease() const;
};

#endif
