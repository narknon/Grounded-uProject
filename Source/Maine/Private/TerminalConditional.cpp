#include "TerminalConditional.h"

FTerminalConditional::FTerminalConditional() {
    this->ConditionalLogic = ELogicalOperator::;
    this->WidgetState = ETerminalWidgetState::;
    this->StateDisablesInteraction = false;
    this->ToggleComponent = NULL;
}

