
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_gcj_xlib_Clip__
#define __gnu_gcj_xlib_Clip__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace gcj
    {
        class RawData;
      namespace xlib
      {
          class Clip;
      }
    }
  }
  namespace java
  {
    namespace awt
    {
        class Rectangle;
    }
  }
}

class gnu::gcj::xlib::Clip : public ::java::lang::Object
{

public:
  Clip(JArray< ::java::awt::Rectangle * > *);
private:
  void init(JArray< ::java::awt::Rectangle * > *);
public:
  void finalize();
  void dispose();
public: // actually package-private
  ::gnu::gcj::RawData * __attribute__((aligned(__alignof__( ::java::lang::Object)))) xrects;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_gcj_xlib_Clip__
