#ifndef EDITOR_H
#define EDITOR_H

#include "EditorState.h"
#include <string>

class Editor {
public:
  EditorState createState();
  void restore(const EditorState &state);
  std::string getContent() const;
  void setContent(const std::string &content);

private:
  std::string content;
};

#endif // EDITOR_H
