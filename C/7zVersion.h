#define MY_VER_MAJOR 16
#define MY_VER_MINOR 02
#define MY_VER_BUILD 0
#define MY_VERSION_NUMBERS "6.0.0"
#define MY_VERSION "6.0.0"
#define MY_DATE "2023-10-18"
#undef MY_COPYRIGHT
#undef MY_VERSION_COPYRIGHT_DATE
#define MY_AUTHOR_NAME "LRH"
#define MY_COPYRIGHT_PD "LRH"
#define MY_COPYRIGHT_CR "Copyright (c) 2023 Beijing Yipin Innovation Technology Co., Ltd"

#ifdef USE_COPYRIGHT_CR
  #define MY_COPYRIGHT MY_COPYRIGHT_CR
#else
  #define MY_COPYRIGHT MY_COPYRIGHT_PD
#endif

#define MY_VERSION_COPYRIGHT_DATE MY_VERSION " : " MY_COPYRIGHT " : " MY_DATE

#define P7ZIP_VERSION "6.0.0"

