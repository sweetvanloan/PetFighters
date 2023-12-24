#include "Item.h"

int Item::getHPIncrease() const {
    switch (gemType) {
        case GemType::Red: return 10;
        case GemType::Green: return 20;
        case GemType::Purple: return 30;
        case GemType::Yellow: return -1; // Special case for full HP
        default: return 0;
    }
}
 
