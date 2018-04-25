#ifndef __HGENZINE_UTILS_SINGLETON_HPP__
#define __HGENZINE_UTILS_SINGLETON_HPP__

namespace HGEnzine::utils
{
  template<class T>
  class HGENZINE_API Singleton
  {
    public:
      static T& getInstance()
      {
        static T instance;
        return instance;
      }
  };
}

#endif

