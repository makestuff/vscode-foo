#ifndef FOO_EXPORT_H
#define FOO_EXPORT_H

#ifdef _MSC_VER
  #ifdef foo_EXPORTS
    #define FOO_EXPORT __declspec(dllexport)
  #else
    #define FOO_EXPORT __declspec(dllimport)
  #endif
#else
  #define FOO_EXPORT
#endif

#endif
