#include "pattern/Memento/History.h"
#include "pattern/Memento/Editor.h"

#include <ctime>
#include <iostream>
#include <string>


void print_localtime() {
  std::time_t result = std::time(nullptr);
  std::cout << std::asctime(std::localtime(&result));
}

int main(int argc, char** argv) {
  Editor editor;
  History history;
  
  editor.setContent("a");
  history.push(editor.createState());
  std::cout << editor.getContent() << std::endl;
  

  editor.setContent("b");
  history.push(editor.createState());
  std::cout << editor.getContent() << std::endl;

  editor.setContent("c");
  editor.restore(history.pop());
  std::cout << editor.getContent() << std::endl;

  editor.restore(history.pop());
  std::cout << editor.getContent() << std::endl;

  print_localtime();
  return 0;
}
