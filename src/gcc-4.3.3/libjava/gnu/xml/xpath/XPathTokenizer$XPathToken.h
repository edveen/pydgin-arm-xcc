
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_xpath_XPathTokenizer$XPathToken__
#define __gnu_xml_xpath_XPathTokenizer$XPathToken__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace xpath
      {
          class XPathTokenizer$XPathToken;
      }
    }
  }
}

class gnu::xml::xpath::XPathTokenizer$XPathToken : public ::java::lang::Object
{

public: // actually package-private
  XPathTokenizer$XPathToken(jint);
  XPathTokenizer$XPathToken(jint, ::java::lang::String *);
public:
  virtual ::java::lang::String * getText();
  virtual ::java::lang::String * toString();
public: // actually package-private
  jint __attribute__((aligned(__alignof__( ::java::lang::Object)))) type;
  ::java::lang::String * val;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_xpath_XPathTokenizer$XPathToken__
