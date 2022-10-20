#include "OptionsKeybindingsPopulator.h"

UOptionsKeybindingsPopulator::UOptionsKeybindingsPopulator() {
    this->ControlListBox = NULL;
    this->ChildClass = NULL;
    this->Category = EBindableControlCategory::;
    this->bGamepadControls = false;
}

