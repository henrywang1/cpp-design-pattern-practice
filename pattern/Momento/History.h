#ifndef HISTORY_H
#define HISTORY_H

#include "EditorState.h"
#include <stack>

 class History {
    public:
        void push(const EditorState& state);
        EditorState pop();
    private:
        std::stack<EditorState> states;
 };

#endif // HISTORY_H

