
#include "filehandler.h"

#include <iostream>

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
    }
    delete m_fileStream;
}

std::string FileHandler::readFile() 
{
    if(m_isOpen)
    {
        std::string content;
        (*m_fileStream) >> content;
        return content;
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
