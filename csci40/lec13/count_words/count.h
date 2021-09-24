#ifndef COUNT_H
#define COUNT_H

#include <string>
// NEVER use namespace std in a header file, because when it gets
// #included it will also include namespace std in the file you're
// including it from!

int countWords(const std::string& s);

#endif /* end of include guard: COUNT_H */
