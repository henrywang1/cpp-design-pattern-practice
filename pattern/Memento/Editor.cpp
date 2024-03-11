#include <string>

#include "Editor.h"

EditorState Editor::createState() { return {content}; }
void Editor::restore(const EditorState &state) { content = state.content; }
void Editor::setContent(const std::string &content) { this->content = content; }
std::string Editor::getContent() const { return content; }
