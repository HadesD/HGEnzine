#ifndef __HGENZINE_UTILS_SINGLETON_HPP__
#define __HGENZINE_UTILS_SINGLETON_HPP__

#include "hg_enzine/core/BeginPreprocessors.hpp"

namespace HGEnzine::utils
{
  template<class T>
  class HGENZINE_API Singleton
  {
    private:
      static T* s_instance;

    protected:
      // Singleton();
      // virtual ~Singleton() = delete;

    public:
      static T* getInstance()
      {
        if (!s_instance)
        {
          s_instance = new T();
        }
        return s_instance;
      }
  };

  template<class T>
  T* Singleton<T>::s_instance = nullptr;
}

#endif

