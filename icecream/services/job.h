#ifndef _COMPILE_JOB_H
#define _COMPILE_JOB_H

#include <list>
#include <string>

class CompileJob {

public:
    typedef enum {Lang_C, Lang_CXX, Lang_OBJC, Lang_ASM} Language;
    typedef std::list<std::string> ArgumentsList;

    CompileJob() : m_id( 0 ) {}

    void setLanguage( Language lg ) {
        m_language = lg;
    }
    Language language() const {
        return m_language;
    }

    void setEnvironmentVersion( const std::string& ver ) {
        m_environment_version = ver;
    }

    std::string environmentVersion() const {
        return m_environment_version;
    }

    void setCompileFlags( const ArgumentsList & l ) {
        m_compile_flags = l;
    }
    ArgumentsList compileFlags() const {
        return m_compile_flags;
    }

    void setFileName( const std::string &file ) {
        m_filename = file;
    }

    std::string fileName() const {
        return m_filename;
    }

    void setJobID( unsigned int id ) {
        m_id = id;
    }
    unsigned int jobID() const {
        return m_id;
    }

private:
    unsigned int m_id;
    Language m_language;
    std::string m_environment_version;
    ArgumentsList m_compile_flags;
    std::string m_filename;
};

#endif
