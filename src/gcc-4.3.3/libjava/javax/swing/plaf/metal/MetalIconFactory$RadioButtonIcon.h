
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_metal_MetalIconFactory$RadioButtonIcon__
#define __javax_swing_plaf_metal_MetalIconFactory$RadioButtonIcon__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Component;
        class Graphics;
    }
  }
  namespace javax
  {
    namespace swing
    {
      namespace plaf
      {
        namespace metal
        {
            class MetalIconFactory$RadioButtonIcon;
        }
      }
    }
  }
}

class javax::swing::plaf::metal::MetalIconFactory$RadioButtonIcon : public ::java::lang::Object
{

public: // actually package-private
  MetalIconFactory$RadioButtonIcon();
public:
  virtual jint getIconWidth();
  virtual jint getIconHeight();
  virtual void paintIcon(::java::awt::Component *, ::java::awt::Graphics *, jint, jint);
private:
  static JArray< JArray< jint > * > * gradientMask;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_plaf_metal_MetalIconFactory$RadioButtonIcon__
