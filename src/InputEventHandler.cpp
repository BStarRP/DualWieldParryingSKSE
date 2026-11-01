#include <SKSE/SKSE.h>

#include "InputEventHandler.h"

using namespace DualWieldParryingSKSE;

InputEventHandler& InputEventHandler::GetSingleton() noexcept {
    static InputEventHandler instance;
    return instance;
}

RE::BSEventNotifyControl InputEventHandler::ProcessEvent(RE::InputEvent* const* a_event,
    RE::BSTEventSource<RE::InputEvent*>* a_eventSource) {
    return RE::BSEventNotifyControl::kContinue;
}

bool InputEventHandler::IsModifierKeyPressed(uint32_t modifierKey) const {
    return modifierKey >= 300;
}
