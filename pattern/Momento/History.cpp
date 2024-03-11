#include "History.h"

void History::push(const EditorState &state) { states.push(state); }

EditorState History::pop() {
  EditorState state = states.top();
  states.pop();
  return state;
}
