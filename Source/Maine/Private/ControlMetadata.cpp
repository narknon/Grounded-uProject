#include "ControlMetadata.h"

FControlMetadata::FControlMetadata() {
    this->bRebindableKeyboard = false;
    this->bRebindableGamepad = false;
    this->Category = EBindableControlCategory::;
    this->OrderInUI = 0.00f;
    this->bHideForKeyboard = false;
    this->bHideForGamepad = false;
}

