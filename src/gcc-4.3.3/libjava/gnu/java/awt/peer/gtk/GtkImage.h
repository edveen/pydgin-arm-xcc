
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_awt_peer_gtk_GtkImage__
#define __gnu_java_awt_peer_gtk_GtkImage__

#pragma interface

#include <java/awt/Image.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace classpath
    {
        class Pointer;
    }
    namespace java
    {
      namespace awt
      {
        namespace peer
        {
          namespace gtk
          {
              class GtkImage;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace awt
    {
        class Graphics;
        class Image;
      namespace image
      {
          class ColorModel;
          class ImageObserver;
          class ImageProducer;
      }
    }
    namespace net
    {
        class URL;
    }
  }
}

class gnu::java::awt::peer::gtk::GtkImage : public ::java::awt::Image
{

  void initFromBuffer(jlong);
public: // actually package-private
  virtual JArray< jint > * getPixels();
private:
  void setPixels(JArray< jint > *);
  jboolean loadPixbuf(::java::lang::String *);
  jboolean loadImageFromData(JArray< jbyte > *);
  void createPixbuf();
  void freePixbuf();
  void createScaledPixbuf(::gnu::java::awt::peer::gtk::GtkImage *, jint);
public:
  GtkImage(::java::awt::image::ImageProducer *);
  GtkImage();
  GtkImage(::java::lang::String *);
  GtkImage(JArray< jbyte > *);
  GtkImage(::java::net::URL *);
private:
  GtkImage(::gnu::java::awt::peer::gtk::GtkImage *, jint, jint, jint);
public: // actually package-private
  GtkImage(::gnu::classpath::Pointer *);
  GtkImage(jint, jint, jlong);
  static ::gnu::java::awt::peer::gtk::GtkImage * getErrorImage();
private:
  void createFromPixbuf();
public:
  virtual void setImage(jint, jint, JArray< jint > *, ::java::util::Hashtable *);
  virtual jint getWidth(::java::awt::image::ImageObserver *);
  virtual jint getHeight(::java::awt::image::ImageObserver *);
  virtual ::java::lang::Object * getProperty(::java::lang::String *, ::java::awt::image::ImageObserver *);
  virtual ::java::awt::image::ImageProducer * getSource();
  virtual ::java::awt::Graphics * getGraphics();
  virtual ::java::awt::Image * getScaledInstance(jint, jint, jint);
  virtual void flush();
  virtual void finalize();
  virtual jint checkImage(::java::awt::image::ImageObserver *);
private:
  void deliver();
  jboolean addObserver(::java::awt::image::ImageObserver *);
public: // actually package-private
  jint __attribute__((aligned(__alignof__( ::java::awt::Image)))) width;
  jint height;
  ::java::util::Hashtable * props;
  jboolean isLoaded;
  ::gnu::classpath::Pointer * pixbuf;
  ::java::util::Vector * observers;
  jboolean errorLoading;
  ::java::awt::image::ImageProducer * source;
  static ::java::awt::image::ColorModel * nativeModel;
private:
  static ::gnu::java::awt::peer::gtk::GtkImage * errorImage;
public: // actually package-private
  static ::java::lang::Object * pixbufLock;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_awt_peer_gtk_GtkImage__
