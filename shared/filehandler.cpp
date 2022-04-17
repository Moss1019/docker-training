
#include "filehandler.h"

#include <iostream>
#include <sstream>

FileHandler::FileHandler(const std::string &fileName, std::fstream::openmode openMode)
{
    m_fileName = fileName;
    m_fileStream = new std::fstream(fileName, openMode);
    m_isOpen = m_fileStream->is_open();
}

FileHandler::~FileHandler() 
{
    if(m_isOpen)
    {
        m_fileStream->close();
        std::cout << "Closing\n";
    }
    delete m_fileStream;
}

std::string FileHandler::readFile() 
{
    if(m_isOpen)
    {
        std::stringstream content;
        std::string tmp;
        while((*m_fileStream) >> tmp) 
        {
            content << tmp << " ";
        }
        return content.str();
    }
    return "";
}

void FileHandler::writeLine(const std::string &content) 
{
    if(m_isOpen) 
    {
        (*m_fileStream) << content << std::endl;
    }
}
