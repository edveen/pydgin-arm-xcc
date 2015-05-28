
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_Window__
#define __java_awt_Window__

#pragma interface

#include <java/awt/Container.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class AWTEvent;
        class BufferCapabilities;
        class Component;
        class Container;
        class Cursor;
        class Event;
        class Frame;
        class GraphicsConfiguration;
        class Toolkit;
        class Window;
      namespace event
      {
          class WindowEvent;
          class WindowFocusListener;
          class WindowListener;
          class WindowStateListener;
      }
      namespace image
      {
          class BufferStrategy;
      }
    }
  }
  namespace javax
  {
    namespace accessibility
    {
        class AccessibleContext;
    }
  }
}

class java::awt::Window : public ::java::awt::Container
{

public: // actually package-private
  Window();
  Window(::java::awt::GraphicsConfiguration *);
public:
  Window(::java::awt::Frame *);
  Window(::java::awt::Window *);
  Window(::java::awt::Window *, ::java::awt::GraphicsConfiguration *);
  virtual void addNotify();
  virtual void pack();
  virtual void show();
  virtual void hide();
  virtual void dispose();
  virtual void toBack();
  virtual void toFront();
  virtual ::java::awt::Toolkit * getToolkit();
  virtual ::java::lang::String * getWarningString();
  virtual ::java::util::Locale * getLocale();
  virtual void setCursor(::java::awt::Cursor *);
  virtual ::java::awt::Window * getOwner();
  virtual JArray< ::java::awt::Window * > * getOwnedWindows();
  virtual void addWindowListener(::java::awt::event::WindowListener *);
  virtual void removeWindowListener(::java::awt::event::WindowListener *);
  virtual JArray< ::java::awt::event::WindowListener * > * getWindowListeners();
  virtual JArray< ::java::awt::event::WindowFocusListener * > * getWindowFocusListeners();
  virtual JArray< ::java::awt::event::WindowStateListener * > * getWindowStateListeners();
  virtual void addWindowFocusListener(::java::awt::event::WindowFocusListener *);
  virtual void addWindowStateListener(::java::awt::event::WindowStateListener *);
  virtual void removeWindowFocusListener(::java::awt::event::WindowFocusListener *);
  virtual void removeWindowStateListener(::java::awt::event::WindowStateListener *);
  virtual JArray< ::java::util::EventListener * > * getListeners(::java::lang::Class *);
public: // actually package-private
  virtual void dispatchEventImpl(::java::awt::AWTEvent *);
public: // actually protected
  virtual void processEvent(::java::awt::AWTEvent *);
  virtual void processWindowEvent(::java::awt::event::WindowEvent *);
public:
  virtual jboolean isActive();
  virtual jboolean isFocused();
  virtual ::java::awt::Component * getFocusOwner();
  virtual ::java::awt::Component * getMostRecentFocusOwner();
public: // actually package-private
  virtual void setFocusOwner(::java::awt::Component *);
public:
  virtual jboolean postEvent(::java::awt::Event *);
  virtual jboolean isShowing();
  virtual void setLocationRelativeTo(::java::awt::Component *);
  virtual void createBufferStrategy(jint);
  virtual void createBufferStrategy(jint, ::java::awt::BufferCapabilities *);
  virtual ::java::awt::image::BufferStrategy * getBufferStrategy();
  virtual void applyResourceBundle(::java::util::ResourceBundle *);
  virtual void applyResourceBundle(::java::lang::String *);
  virtual ::javax::accessibility::AccessibleContext * getAccessibleContext();
  virtual ::java::awt::GraphicsConfiguration * getGraphicsConfiguration();
public: // actually protected
  virtual void processWindowFocusEvent(::java::awt::event::WindowEvent *);
  virtual void processWindowStateEvent(::java::awt::event::WindowEvent *);
public:
  virtual jboolean isFocusableWindow();
  virtual jboolean getFocusableWindowState();
  virtual void setFocusableWindowState(jboolean);
  virtual jboolean isFocusCycleRoot();
  virtual void setFocusCycleRoot(jboolean);
  virtual ::java::awt::Container * getFocusCycleRootAncestor();
  virtual jboolean isAlwaysOnTop();
  virtual void setAlwaysOnTop(jboolean);
public: // actually package-private
  virtual ::java::lang::String * generateName();
  virtual jboolean eventTypeEnabled(jint);
private:
  static jlong getUniqueLong();
  static const jlong serialVersionUID = 4497834738069338734LL;
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::awt::Container)))) warningString;
  jint windowSerializedDataVersion;
  jint state;
  jboolean focusableWindowState;
  jboolean alwaysOnTop;
  ::java::util::Vector * ownedWindows;
  ::java::awt::event::WindowListener * windowListener;
  ::java::awt::event::WindowFocusListener * windowFocusListener;
  ::java::awt::event::WindowStateListener * windowStateListener;
  jboolean shown;
public: // actually package-private
  ::java::awt::Component * windowFocusOwner;
private:
  static jlong next_window_number;
public:
  static ::java::lang::Class class$;
};

#endif // __java_awt_Window__
