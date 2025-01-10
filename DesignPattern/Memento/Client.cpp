#include "Originator.h"
#include "Caretaker.h"

int main() {
    Originator originator;
    Caretaker caretaker;
    originator.SetState("State 1");
    originator.Show();
    caretaker.SetMemento(originator.CreateMemento());
    originator.SetState("State 2");
    originator.Show();
    originator.SetMemento(caretaker.GetMemento());
    originator.Show();
}