#include <iostream>
#include <fstream>
#include <unistd.h>

int main()
{
  std::fstream file;
  file.open("text.txt", std::fstream::in | std::fstream::out);

  file.seekg(0, file.end);
  std::streampos endPos = file.tellg();
  file.seekg(0, file.beg);

  std::string firstLine;
  std::getline(file, firstLine);

  std::streampos readPos = firstLine.size() + 1;
  std::streampos writePos = 0;

  std::size_t bufferSize = 256;
  char buffer[bufferSize];
  bool finished = false;
  while(!finished)
  {
    file.seekg(readPos);
    if(readPos + static_cast<std::streampos>(bufferSize) >= endPos)
    {
      bufferSize = endPos - readPos;
      finished = true;
    }
    file.read(buffer, bufferSize);
    file.seekg(writePos);
    file.write(buffer, bufferSize);
    readPos += bufferSize;
    writePos += bufferSize;
  }
  file.close();

  truncate("text.txt", writePos);
  return 0;
}