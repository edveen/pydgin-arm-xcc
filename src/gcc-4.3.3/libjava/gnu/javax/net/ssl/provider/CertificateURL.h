
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_net_ssl_provider_CertificateURL__
#define __gnu_javax_net_ssl_provider_CertificateURL__

#pragma interface

#include <gnu/javax/net/ssl/provider/Extension$Value.h>
extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace net
      {
        namespace ssl
        {
          namespace provider
          {
              class CertificateURL;
              class CertificateURL$CertChainType;
              class CertificateURL$URLAndOptionalHash;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace nio
    {
        class ByteBuffer;
    }
  }
}

class gnu::javax::net::ssl::provider::CertificateURL : public ::gnu::javax::net::ssl::provider::Extension$Value
{

public:
  CertificateURL(::java::nio::ByteBuffer *);
  CertificateURL(::gnu::javax::net::ssl::provider::CertificateURL$CertChainType *, ::java::util::List *);
  virtual jint length();
  virtual ::java::nio::ByteBuffer * buffer();
  virtual ::gnu::javax::net::ssl::provider::CertificateURL$CertChainType * type();
  virtual jint size();
  virtual ::gnu::javax::net::ssl::provider::CertificateURL$URLAndOptionalHash * get(jint);
  virtual void set(jint, ::gnu::javax::net::ssl::provider::CertificateURL$URLAndOptionalHash *);
  virtual void setLength(jint);
  virtual ::java::lang::String * toString();
  virtual ::java::lang::String * toString(::java::lang::String *);
  virtual ::java::util::Iterator * iterator();
private:
  ::java::nio::ByteBuffer * __attribute__((aligned(__alignof__( ::gnu::javax::net::ssl::provider::Extension$Value)))) buffer__;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_net_ssl_provider_CertificateURL__
