
#include <string>
#include <fstream>

class FileHandler 
{
private:
    bool m_isOpen = false;

    std::string m_fileName;

    std::fstream *m_fileStream;

public:
    FileHandler(const std::string &fileName, std::fstream::openmode openMode);

    ~FileHandler();

    std::string readFile();

    void writeLine(const std::string &content);
};
