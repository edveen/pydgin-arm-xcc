
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_geom_CubicCurve2D$Double__
#define __java_awt_geom_CubicCurve2D$Double__

#pragma interface

#include <java/awt/geom/CubicCurve2D.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace geom
      {
          class CubicCurve2D$Double;
          class Point2D;
          class Rectangle2D;
      }
    }
  }
}

class java::awt::geom::CubicCurve2D$Double : public ::java::awt::geom::CubicCurve2D
{

public:
  CubicCurve2D$Double();
  CubicCurve2D$Double(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
  virtual jdouble getX1();
  virtual jdouble getY1();
  virtual ::java::awt::geom::Point2D * getP1();
  virtual jdouble getCtrlX1();
  virtual jdouble getCtrlY1();
  virtual ::java::awt::geom::Point2D * getCtrlP1();
  virtual jdouble getCtrlX2();
  virtual jdouble getCtrlY2();
  virtual ::java::awt::geom::Point2D * getCtrlP2();
  virtual jdouble getX2();
  virtual jdouble getY2();
  virtual ::java::awt::geom::Point2D * getP2();
  virtual void setCurve(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
  virtual ::java::awt::geom::Rectangle2D * getBounds2D();
  jdouble __attribute__((aligned(__alignof__( ::java::awt::geom::CubicCurve2D)))) x1;
  jdouble y1;
  jdouble ctrlx1;
  jdouble ctrly1;
  jdouble ctrlx2;
  jdouble ctrly2;
  jdouble x2;
  jdouble y2;
  static ::java::lang::Class class$;
};

#endif // __java_awt_geom_CubicCurve2D$Double__
