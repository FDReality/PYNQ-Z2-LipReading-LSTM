# 1 "LSTM/rnn.cpp"
# 1 "LSTM/rnn.cpp" 1
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 152 "<built-in>" 3
# 1 "<command line>" 1







# 1 "E:/Xilinx/Vivado/2019.2/common/technology/autopilot\\etc/autopilot_ssdm_op.h" 1
# 157 "E:/Xilinx/Vivado/2019.2/common/technology/autopilot\\etc/autopilot_ssdm_op.h"
extern "C" {






    void _ssdm_op_IfRead(...) __attribute__ ((nothrow));
    void _ssdm_op_IfWrite(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfNbRead(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfNbWrite(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfCanRead(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfCanWrite(...) __attribute__ ((nothrow));


    void _ssdm_StreamRead(...) __attribute__ ((nothrow));
    void _ssdm_StreamWrite(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamNbRead(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamNbWrite(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamCanRead(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamCanWrite(...) __attribute__ ((nothrow));
    unsigned _ssdm_StreamSize(...) __attribute__ ((nothrow));




    void _ssdm_op_MemShiftRead(...) __attribute__ ((nothrow));

    void _ssdm_op_Wait(...) __attribute__ ((nothrow));
    void _ssdm_op_Poll(...) __attribute__ ((nothrow));

    void _ssdm_op_Return(...) __attribute__ ((nothrow));


    void _ssdm_op_SpecSynModule(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecTopModule(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDecl(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDef(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPort(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecConnection(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecChannel(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecSensitive(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecModuleInst(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPortMap(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecReset(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecPlatform(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecClockDomain(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPowerDomain(...) __attribute__ ((nothrow));

    int _ssdm_op_SpecRegionBegin(...) __attribute__ ((nothrow));
    int _ssdm_op_SpecRegionEnd(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopName(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopTripCount(...) __attribute__ ((nothrow));

    int _ssdm_op_SpecStateBegin(...) __attribute__ ((nothrow));
    int _ssdm_op_SpecStateEnd(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecInterface(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecPipeline(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecDataflowPipeline(...) __attribute__ ((nothrow));


    void _ssdm_op_SpecLatency(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecParallel(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProtocol(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecOccurrence(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecResource(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecResourceLimit(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecCHCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecFUCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecIFCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecIPCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecKeepValue(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecMemCore(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecExt(...) __attribute__ ((nothrow));




    void _ssdm_SpecArrayDimSize(...) __attribute__ ((nothrow));

    void _ssdm_RegionBegin(...) __attribute__ ((nothrow));
    void _ssdm_RegionEnd(...) __attribute__ ((nothrow));

    void _ssdm_Unroll(...) __attribute__ ((nothrow));
    void _ssdm_UnrollRegion(...) __attribute__ ((nothrow));

    void _ssdm_InlineAll(...) __attribute__ ((nothrow));
    void _ssdm_InlineLoop(...) __attribute__ ((nothrow));
    void _ssdm_Inline(...) __attribute__ ((nothrow));
    void _ssdm_InlineSelf(...) __attribute__ ((nothrow));
    void _ssdm_InlineRegion(...) __attribute__ ((nothrow));

    void _ssdm_SpecArrayMap(...) __attribute__ ((nothrow));
    void _ssdm_SpecArrayPartition(...) __attribute__ ((nothrow));
    void _ssdm_SpecArrayReshape(...) __attribute__ ((nothrow));

    void _ssdm_SpecStream(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecStable(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecStableContent(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecPipoDepth(...) __attribute__ ((nothrow));

    void _ssdm_SpecExpr(...) __attribute__ ((nothrow));
    void _ssdm_SpecExprBalance(...) __attribute__ ((nothrow));

    void _ssdm_SpecDependence(...) __attribute__ ((nothrow));

    void _ssdm_SpecLoopMerge(...) __attribute__ ((nothrow));
    void _ssdm_SpecLoopFlatten(...) __attribute__ ((nothrow));
    void _ssdm_SpecLoopRewind(...) __attribute__ ((nothrow));

    void _ssdm_SpecFuncInstantiation(...) __attribute__ ((nothrow));
    void _ssdm_SpecFuncBuffer(...) __attribute__ ((nothrow));
    void _ssdm_SpecFuncExtract(...) __attribute__ ((nothrow));
    void _ssdm_SpecConstant(...) __attribute__ ((nothrow));

    void _ssdm_DataPack(...) __attribute__ ((nothrow));
    void _ssdm_SpecDataPack(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecBitsMap(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecLicense(...) __attribute__ ((nothrow));

    void __xilinx_ip_top(...) __attribute__ ((nothrow));


}
# 9 "<command line>" 2
# 1 "<built-in>" 2
# 1 "LSTM/rnn.cpp" 2
# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iostream" 1 3
# 37 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iostream" 3
# 37 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iostream" 3

# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++config.h" 1 3
# 275 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++config.h" 3
# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/os_defines.h" 1 3
# 276 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++config.h" 2 3


# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/cpu_defines.h" 1 3
# 279 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++config.h" 2 3
# 39 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iostream" 2 3
# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 1 3
# 38 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
# 38 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3

# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ios" 1 3
# 37 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ios" 3
# 37 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ios" 3

# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iosfwd" 1 3
# 38 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iosfwd" 3
# 38 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iosfwd" 3


# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stringfwd.h" 1 3
# 39 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stringfwd.h" 3
# 39 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stringfwd.h" 3



namespace std {

  template<typename _Alloc>
    class allocator;







  template<class _CharT>
    struct char_traits;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
           typename _Alloc = allocator<_CharT> >
    class basic_string;

  template<> struct char_traits<char>;

  typedef basic_string<char> string;


  template<> struct char_traits<wchar_t>;

  typedef basic_string<wchar_t> wstring;
# 82 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stringfwd.h" 3
}
# 41 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iosfwd" 2 3
# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/postypes.h" 1 3
# 40 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/postypes.h" 3
# 40 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/postypes.h" 3

# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 1 3
# 41 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 3
# 41 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 3


# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 1 3
# 41 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3
# 41 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3


# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 1 3 4
# 31 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 3 4
typedef __typeof__(((int*)0)-((int*)0)) ptrdiff_t;



typedef __typeof__(sizeof(int)) size_t;
# 44 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 2 3




namespace std {

  using ::ptrdiff_t;
  using ::size_t;

}
# 44 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 2 3


# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 1 3








# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 10 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/_mingw_mac.h" 1 3
# 10 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3
# 277 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 1 3
# 13 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 3
# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 674 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/sdks/_mingw_directx.h" 1 3
# 674 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3

# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/sdks/_mingw_ddk.h" 1 3
# 675 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3
# 13 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 2 3


#pragma pack(push,_CRT_PACKING)


extern "C" {





  typedef __builtin_va_list __gnuc_va_list;






  typedef __gnuc_va_list va_list;
# 99 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 3
}


#pragma pack(pop)
# 277 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3


#pragma pack(push,_CRT_PACKING)
# 370 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef unsigned long long size_t;
# 380 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef long long ssize_t;
# 392 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef long long intptr_t;
# 405 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef unsigned long long uintptr_t;
# 418 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef long long ptrdiff_t;
# 436 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
typedef unsigned short wint_t;
typedef unsigned short wctype_t;
# 456 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
typedef int errno_t;




typedef long __time32_t;




__extension__ typedef long long __time64_t;







typedef __time64_t time_t;
# 607 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
struct threadlocaleinfostruct;
struct threadmbcinfostruct;
typedef struct threadlocaleinfostruct *pthreadlocinfo;
typedef struct threadmbcinfostruct *pthreadmbcinfo;
struct __lc_time_data;

typedef struct localeinfo_struct {
  pthreadlocinfo locinfo;
  pthreadmbcinfo mbcinfo;
} _locale_tstruct,*_locale_t;



typedef struct tagLC_ID {
  unsigned short wLanguage;
  unsigned short wCountry;
  unsigned short wCodePage;
} LC_ID,*LPLC_ID;




typedef struct threadlocaleinfostruct {
  int refcount;
  unsigned int lc_codepage;
  unsigned int lc_collate_cp;
  unsigned long lc_handle[6];
  LC_ID lc_id[6];
  struct {
    char *locale;
    wchar_t *wlocale;
    int *refcount;
    int *wrefcount;
  } lc_category[6];
  int lc_clike;
  int mb_cur_max;
  int *lconv_intl_refcount;
  int *lconv_num_refcount;
  int *lconv_mon_refcount;
  struct lconv *lconv;
  int *ctype1_refcount;
  unsigned short *ctype1;
  const unsigned short *pctype;
  const unsigned char *pclmap;
  const unsigned char *pcumap;
  struct __lc_time_data *lc_time_curr;
} threadlocinfo;



extern "C" {



const char *__mingw_get_crt_info (void);


}


#pragma pack(pop)
# 9 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 2 3


#pragma pack(push,_CRT_PACKING)


extern "C" {
# 27 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  struct _iobuf {
    char *_ptr;
    int _cnt;
    char *_base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char *_tmpfname;
  };
  typedef struct _iobuf FILE;





  __attribute__ ((__dllimport__)) FILE * __iob_func(void);
# 66 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  typedef unsigned long _fsize_t;




  struct _wfinddata32_t {
    unsigned attrib;
    __time32_t time_create;
    __time32_t time_access;
    __time32_t time_write;
    _fsize_t size;
    wchar_t name[260];
  };

  struct _wfinddata32i64_t {
    unsigned attrib;
    __time32_t time_create;
    __time32_t time_access;
    __time32_t time_write;
    __extension__ long long size;
    wchar_t name[260];
  };

  struct _wfinddata64i32_t {
    unsigned attrib;
    __time64_t time_create;
    __time64_t time_access;
    __time64_t time_write;
    _fsize_t size;
    wchar_t name[260];
  };

  struct _wfinddata64_t {
    unsigned attrib;
    __time64_t time_create;
    __time64_t time_access;
    __time64_t time_write;
    __extension__ long long size;
    wchar_t name[260];
  };
# 164 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  extern unsigned short ** __imp__pctype;
# 178 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  extern unsigned short ** __imp__wctype;
# 193 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  extern unsigned short ** __imp__pwctype;
# 217 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  int iswalpha(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswalpha_l(wint_t _C,_locale_t _Locale);
  int iswupper(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswupper_l(wint_t _C,_locale_t _Locale);
  int iswlower(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswlower_l(wint_t _C,_locale_t _Locale);
  int iswdigit(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswdigit_l(wint_t _C,_locale_t _Locale);
  int iswxdigit(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswxdigit_l(wint_t _C,_locale_t _Locale);
  int iswspace(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswspace_l(wint_t _C,_locale_t _Locale);
  int iswpunct(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswpunct_l(wint_t _C,_locale_t _Locale);
  int iswalnum(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswalnum_l(wint_t _C,_locale_t _Locale);
  int iswprint(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswprint_l(wint_t _C,_locale_t _Locale);
  int iswgraph(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswgraph_l(wint_t _C,_locale_t _Locale);
  int iswcntrl(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswcntrl_l(wint_t _C,_locale_t _Locale);
  int iswascii(wint_t _C);
  int isleadbyte(int _C);
  __attribute__ ((__dllimport__)) int _isleadbyte_l(int _C,_locale_t _Locale);
  wint_t towupper(wint_t _C);
  __attribute__ ((__dllimport__)) wint_t _towupper_l(wint_t _C,_locale_t _Locale);
  wint_t towlower(wint_t _C);
  __attribute__ ((__dllimport__)) wint_t _towlower_l(wint_t _C,_locale_t _Locale);
  int iswctype(wint_t _C,wctype_t _Type);
  __attribute__ ((__dllimport__)) int _iswctype_l(wint_t _C,wctype_t _Type,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __iswcsymf(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswcsymf_l(wint_t _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __iswcsym(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswcsym_l(wint_t _C,_locale_t _Locale);
  int is_wctype(wint_t _C,wctype_t _Type);


  int iswblank(wint_t _C);







  __attribute__ ((__dllimport__)) wchar_t * _wgetcwd(wchar_t *_DstBuf,int _SizeInWords);
  __attribute__ ((__dllimport__)) wchar_t * _wgetdcwd(int _Drive,wchar_t *_DstBuf,int _SizeInWords);
  wchar_t * _wgetdcwd_nolock(int _Drive,wchar_t *_DstBuf,int _SizeInWords);
  __attribute__ ((__dllimport__)) int _wchdir(const wchar_t *_Path);
  __attribute__ ((__dllimport__)) int _wmkdir(const wchar_t *_Path);
  __attribute__ ((__dllimport__)) int _wrmdir(const wchar_t *_Path);





  __attribute__ ((__dllimport__)) int _waccess(const wchar_t *_Filename,int _AccessMode);
  __attribute__ ((__dllimport__)) int _wchmod(const wchar_t *_Filename,int _Mode);
  __attribute__ ((__dllimport__)) int _wcreat(const wchar_t *_Filename,int _PermissionMode) ;
  __attribute__ ((__dllimport__)) intptr_t _wfindfirst32(const wchar_t *_Filename,struct _wfinddata32_t *_FindData);
  __attribute__ ((__dllimport__)) int _wfindnext32(intptr_t _FindHandle,struct _wfinddata32_t *_FindData);
  __attribute__ ((__dllimport__)) int _wunlink(const wchar_t *_Filename);
  __attribute__ ((__dllimport__)) int _wrename(const wchar_t *_NewFilename,const wchar_t *_OldFilename);
  __attribute__ ((__dllimport__)) wchar_t * _wmktemp(wchar_t *_TemplateName) ;
  __attribute__ ((__dllimport__)) intptr_t _wfindfirst32i64(const wchar_t *_Filename,struct _wfinddata32i64_t *_FindData);
  intptr_t _wfindfirst64i32(const wchar_t *_Filename,struct _wfinddata64i32_t *_FindData);
  __attribute__ ((__dllimport__)) intptr_t _wfindfirst64(const wchar_t *_Filename,struct _wfinddata64_t *_FindData);
  __attribute__ ((__dllimport__)) int _wfindnext32i64(intptr_t _FindHandle,struct _wfinddata32i64_t *_FindData);
  int _wfindnext64i32(intptr_t _FindHandle,struct _wfinddata64i32_t *_FindData);
  __attribute__ ((__dllimport__)) int _wfindnext64(intptr_t _FindHandle,struct _wfinddata64_t *_FindData);
  __attribute__ ((__dllimport__)) errno_t _wsopen_s(int *_FileHandle,const wchar_t *_Filename,int _OpenFlag,int _ShareFlag,int _PermissionFlag);
  __attribute__ ((__dllimport__)) int _wopen(const wchar_t *_Filename,int _OpenFlag,...) ;
  __attribute__ ((__dllimport__)) int _wsopen(const wchar_t *_Filename,int _OpenFlag,int _ShareFlag,...) ;




  __attribute__ ((__dllimport__)) wchar_t * _wsetlocale(int _Category,const wchar_t *_Locale);





  __attribute__ ((__dllimport__)) intptr_t _wexecl(const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _wexecle(const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _wexeclp(const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _wexeclpe(const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _wexecv(const wchar_t *_Filename,const wchar_t *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t _wexecve(const wchar_t *_Filename,const wchar_t *const *_ArgList,const wchar_t *const *_Env);
  __attribute__ ((__dllimport__)) intptr_t _wexecvp(const wchar_t *_Filename,const wchar_t *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t _wexecvpe(const wchar_t *_Filename,const wchar_t *const *_ArgList,const wchar_t *const *_Env);
  __attribute__ ((__dllimport__)) intptr_t _wspawnl(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _wspawnle(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _wspawnlp(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _wspawnlpe(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _wspawnv(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t _wspawnve(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList,const wchar_t *const *_Env);
  __attribute__ ((__dllimport__)) intptr_t _wspawnvp(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t _wspawnvpe(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList,const wchar_t *const *_Env);


  __attribute__ ((__dllimport__)) int _wsystem(const wchar_t *_Command);
# 360 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  typedef unsigned short _ino_t;

  typedef unsigned short ino_t;





  typedef unsigned int _dev_t;

  typedef unsigned int dev_t;







  typedef long _off_t;

  typedef long off_t;






  __extension__ typedef long long _off64_t;

  __extension__ typedef long long off64_t;
# 412 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  struct _stat32 {
    _dev_t st_dev;
    _ino_t st_ino;
    unsigned short st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    _off_t st_size;
    __time32_t st_atime;
    __time32_t st_mtime;
    __time32_t st_ctime;
  };


  struct stat {
    _dev_t st_dev;
    _ino_t st_ino;
    unsigned short st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    _off_t st_size;
    time_t st_atime;
    time_t st_mtime;
    time_t st_ctime;
  };


  struct _stat32i64 {
    _dev_t st_dev;
    _ino_t st_ino;
    unsigned short st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    __extension__ long long st_size;
    __time32_t st_atime;
    __time32_t st_mtime;
    __time32_t st_ctime;
  };

  struct _stat64i32 {
    _dev_t st_dev;
    _ino_t st_ino;
    unsigned short st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    _off_t st_size;
    __time64_t st_atime;
    __time64_t st_mtime;
    __time64_t st_ctime;
  };

  struct _stat64 {
    _dev_t st_dev;
    _ino_t st_ino;
    unsigned short st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    __extension__ long long st_size;
    __time64_t st_atime;
    __time64_t st_mtime;
    __time64_t st_ctime;
  };
# 493 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  __attribute__ ((__dllimport__)) int _wstat32(const wchar_t *_Name,struct _stat32 *_Stat);
  __attribute__ ((__dllimport__)) int _wstat32i64(const wchar_t *_Name,struct _stat32i64 *_Stat);
  int _wstat64i32(const wchar_t *_Name,struct _stat64i32 *_Stat);
  __attribute__ ((__dllimport__)) int _wstat64(const wchar_t *_Name,struct _stat64 *_Stat);
# 507 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  __attribute__ ((__dllimport__)) wchar_t *_cgetws(wchar_t *_Buffer) ;
  __attribute__ ((__dllimport__)) wint_t _getwch(void);
  __attribute__ ((__dllimport__)) wint_t _getwche(void);
  __attribute__ ((__dllimport__)) wint_t _putwch(wchar_t _WCh);
  __attribute__ ((__dllimport__)) wint_t _ungetwch(wint_t _WCh);
  __attribute__ ((__dllimport__)) int _cputws(const wchar_t *_String);
  __attribute__ ((__dllimport__)) int _cwprintf(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _cwscanf(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _cwscanf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vcwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _cwprintf_p(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vcwprintf_p(const wchar_t * __restrict__ _Format,va_list _ArgList);

  __attribute__ ((__dllimport__)) int _cwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vcwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _cwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vcwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  wint_t _putwch_nolock(wchar_t _WCh);
  wint_t _getwch_nolock(void);
  wint_t _getwche_nolock(void);
  wint_t _ungetwch_nolock(wint_t _WCh);
# 540 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  __attribute__ ((__dllimport__)) FILE * _wfsopen(const wchar_t *_Filename,const wchar_t *_Mode,int _ShFlag);


  wint_t fgetwc(FILE *_File);
  __attribute__ ((__dllimport__)) wint_t _fgetwchar(void);
  wint_t fputwc(wchar_t _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) wint_t _fputwchar(wchar_t _Ch);
  wint_t getwc(FILE *_File);
  wint_t getwchar(void);
  wint_t putwc(wchar_t _Ch,FILE *_File);
  wint_t putwchar(wchar_t _Ch);
  wint_t ungetwc(wint_t _Ch,FILE *_File);
  wchar_t * fgetws(wchar_t * __restrict__ _Dst,int _SizeInWords,FILE * __restrict__ _File);
  int fputws(const wchar_t * __restrict__ _Str,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) wchar_t * _getws(wchar_t *_String) ;
  __attribute__ ((__dllimport__)) int _putws(const wchar_t *_Str);
  int fwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
  int wprintf(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _scwprintf(const wchar_t * __restrict__ _Format,...);
  int vfwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList);
  int vwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int swprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ , ...) ;
  __attribute__ ((__dllimport__)) int _swprintf_l(wchar_t * __restrict__ ,size_t _SizeInWords,const wchar_t * __restrict__ _Format,_locale_t _Locale,... ) ;
  __attribute__ ((__dllimport__)) int vswprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ ,va_list) ;
  __attribute__ ((__dllimport__)) int _swprintf_c(wchar_t * __restrict__ _DstBuf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vswprintf_c(wchar_t * __restrict__ _DstBuf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _snwprintf(wchar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _vsnwprintf(wchar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,va_list _Args) ;

  int snwprintf (wchar_t * __restrict__ s, size_t n, const wchar_t * __restrict__ format, ...);
  int vsnwprintf (wchar_t * __restrict__ , size_t, const wchar_t * __restrict__ , va_list);






  int vwscanf (const wchar_t * __restrict__ , va_list);
  int vfwscanf (FILE * __restrict__ ,const wchar_t * __restrict__ ,va_list);
  int vswscanf (const wchar_t * __restrict__ ,const wchar_t * __restrict__ ,va_list);

  __attribute__ ((__dllimport__)) int _fwprintf_p(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _wprintf_p(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vfwprintf_p(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vwprintf_p(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _swprintf_p(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vswprintf_p(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _scwprintf_p(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vscwprintf_p(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _wprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _wprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _fwprintf_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _fwprintf_p_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vfwprintf_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vfwprintf_p_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _swprintf_c_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _swprintf_p_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vswprintf_c_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vswprintf_p_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _scwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _scwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vscwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _snwprintf_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vsnwprintf_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList) ;
  __attribute__ ((__dllimport__)) int _swprintf(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vswprintf(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,va_list _Args);
  __attribute__ ((__dllimport__)) int __swprintf_l(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,_locale_t _Plocinfo,...) ;
  __attribute__ ((__dllimport__)) int _vswprintf_l(wchar_t * __restrict__ _Dest,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList) ;
  __attribute__ ((__dllimport__)) int __vswprintf_l(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,_locale_t _Plocinfo,va_list _Args) ;
# 621 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  __attribute__ ((__dllimport__)) wchar_t * _wtempnam(const wchar_t *_Directory,const wchar_t *_FilePrefix);
  __attribute__ ((__dllimport__)) int _vscwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vscwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  int fwscanf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _fwscanf_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,...) ;
  int swscanf(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _swscanf_l(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,_locale_t _Locale,...) ;
  __attribute__ ((__dllimport__)) int _snwscanf(const wchar_t * __restrict__ _Src,size_t _MaxCount,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _snwscanf_l(const wchar_t * __restrict__ _Src,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  int wscanf(const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _wscanf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...) ;
  __attribute__ ((__dllimport__)) FILE * _wfdopen(int _FileHandle ,const wchar_t *_Mode);
  __attribute__ ((__dllimport__)) FILE * _wfopen(const wchar_t * __restrict__ _Filename,const wchar_t * __restrict__ _Mode) ;
  __attribute__ ((__dllimport__)) FILE * _wfreopen(const wchar_t * __restrict__ _Filename,const wchar_t * __restrict__ _Mode,FILE * __restrict__ _OldFile) ;



  __attribute__ ((__dllimport__)) void _wperror(const wchar_t *_ErrMsg);

  __attribute__ ((__dllimport__)) FILE * _wpopen(const wchar_t *_Command,const wchar_t *_Mode);



  __attribute__ ((__dllimport__)) int _wremove(const wchar_t *_Filename);
  __attribute__ ((__dllimport__)) wchar_t * _wtmpnam(wchar_t *_Buffer);
  __attribute__ ((__dllimport__)) wint_t _fgetwc_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) wint_t _fputwc_nolock(wchar_t _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) wint_t _ungetwc_nolock(wint_t _Ch,FILE *_File);
# 669 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  __attribute__ ((__dllimport__)) wchar_t * _itow(int _Value,wchar_t *_Dest,int _Radix) ;
  __attribute__ ((__dllimport__)) wchar_t * _ltow(long _Value,wchar_t *_Dest,int _Radix) ;
  __attribute__ ((__dllimport__)) wchar_t * _ultow(unsigned long _Value,wchar_t *_Dest,int _Radix) ;
  double wcstod(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr);
  __attribute__ ((__dllimport__)) double _wcstod_l(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,_locale_t _Locale);
  float wcstof( const wchar_t * __restrict__ nptr, wchar_t ** __restrict__ endptr);

  float wcstof (const wchar_t * __restrict__, wchar_t ** __restrict__);
  long double wcstold (const wchar_t * __restrict__, wchar_t ** __restrict__);

  long wcstol(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix);
  __attribute__ ((__dllimport__)) long _wcstol_l(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);
  unsigned long wcstoul(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix);
  __attribute__ ((__dllimport__)) unsigned long _wcstoul_l(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);
  __attribute__ ((__dllimport__)) wchar_t * _wgetenv(const wchar_t *_VarName) ;




  __attribute__ ((__dllimport__)) double _wtof(const wchar_t *_Str);
  __attribute__ ((__dllimport__)) double _wtof_l(const wchar_t *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _wtoi(const wchar_t *_Str);
  __attribute__ ((__dllimport__)) int _wtoi_l(const wchar_t *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) long _wtol(const wchar_t *_Str);
  __attribute__ ((__dllimport__)) long _wtol_l(const wchar_t *_Str,_locale_t _Locale);

  __extension__ __attribute__ ((__dllimport__)) wchar_t * _i64tow(long long _Val,wchar_t *_DstBuf,int _Radix) ;
  __extension__ __attribute__ ((__dllimport__)) wchar_t * _ui64tow(unsigned long long _Val,wchar_t *_DstBuf,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) long long _wtoi64(const wchar_t *_Str);
  __extension__ __attribute__ ((__dllimport__)) long long _wtoi64_l(const wchar_t *_Str,_locale_t _Locale);
  __extension__ __attribute__ ((__dllimport__)) long long _wcstoi64(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) long long _wcstoi64_l(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix,_locale_t _Locale);
  __extension__ __attribute__ ((__dllimport__)) unsigned long long _wcstoui64(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) unsigned long long _wcstoui64_l(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix,_locale_t _Locale);





  __attribute__ ((__dllimport__)) wchar_t * _wfullpath(wchar_t *_FullPath,const wchar_t *_Path,size_t _SizeInWords);
  __attribute__ ((__dllimport__)) void _wmakepath(wchar_t *_ResultPath,const wchar_t *_Drive,const wchar_t *_Dir,const wchar_t *_Filename,const wchar_t *_Ext);




  __attribute__ ((__dllimport__)) int _wputenv(const wchar_t *_EnvString);
  __attribute__ ((__dllimport__)) void _wsearchenv(const wchar_t *_Filename,const wchar_t *_EnvVar,wchar_t *_ResultPath) ;
  __attribute__ ((__dllimport__)) void _wsplitpath(const wchar_t *_FullPath,wchar_t *_Drive,wchar_t *_Dir,wchar_t *_Filename,wchar_t *_Ext) ;





  __attribute__ ((__dllimport__)) wchar_t * _wcsdup(const wchar_t *_Str);
  wchar_t * wcscat(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source) ;
                wchar_t * wcschr(const wchar_t *_Str,wchar_t _Ch);
  int wcscmp(const wchar_t *_Str1,const wchar_t *_Str2);
  wchar_t * wcscpy(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source) ;
  size_t wcscspn(const wchar_t *_Str,const wchar_t *_Control);
  size_t wcslen(const wchar_t *_Str);
  size_t wcsnlen(const wchar_t *_Src,size_t _MaxCount);
  wchar_t * wcsncat(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _Count) ;
  int wcsncmp(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  wchar_t * wcsncpy(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _Count) ;
  wchar_t * _wcsncpy_l(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _Count,_locale_t _Locale) ;
                wchar_t * wcspbrk(const wchar_t *_Str,const wchar_t *_Control);
                wchar_t * wcsrchr(const wchar_t *_Str,wchar_t _Ch);
  size_t wcsspn(const wchar_t *_Str,const wchar_t *_Control);
                wchar_t * wcsstr(const wchar_t *_Str,const wchar_t *_SubStr);
  wchar_t * wcstok(wchar_t * __restrict__ _Str,const wchar_t * __restrict__ _Delim) ;
  __attribute__ ((__dllimport__)) wchar_t * _wcserror(int _ErrNum) ;
  __attribute__ ((__dllimport__)) wchar_t * __wcserror(const wchar_t *_Str) ;
  __attribute__ ((__dllimport__)) int _wcsicmp(const wchar_t *_Str1,const wchar_t *_Str2);
  __attribute__ ((__dllimport__)) int _wcsicmp_l(const wchar_t *_Str1,const wchar_t *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _wcsnicmp(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int _wcsnicmp_l(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) wchar_t * _wcsnset(wchar_t *_Str,wchar_t _Val,size_t _MaxCount) ;
  __attribute__ ((__dllimport__)) wchar_t * _wcsrev(wchar_t *_Str);
  __attribute__ ((__dllimport__)) wchar_t * _wcsset(wchar_t *_Str,wchar_t _Val) ;
  __attribute__ ((__dllimport__)) wchar_t * _wcslwr(wchar_t *_String) ;
  __attribute__ ((__dllimport__)) wchar_t *_wcslwr_l(wchar_t *_String,_locale_t _Locale) ;
  __attribute__ ((__dllimport__)) wchar_t * _wcsupr(wchar_t *_String) ;
  __attribute__ ((__dllimport__)) wchar_t *_wcsupr_l(wchar_t *_String,_locale_t _Locale) ;
  size_t wcsxfrm(wchar_t * __restrict__ _Dst,const wchar_t * __restrict__ _Src,size_t _MaxCount);
  __attribute__ ((__dllimport__)) size_t _wcsxfrm_l(wchar_t * __restrict__ _Dst,const wchar_t * __restrict__ _Src,size_t _MaxCount,_locale_t _Locale);
  int wcscoll(const wchar_t *_Str1,const wchar_t *_Str2);
  __attribute__ ((__dllimport__)) int _wcscoll_l(const wchar_t *_Str1,const wchar_t *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _wcsicoll(const wchar_t *_Str1,const wchar_t *_Str2);
  __attribute__ ((__dllimport__)) int _wcsicoll_l(const wchar_t *_Str1,const wchar_t *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _wcsncoll(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int _wcsncoll_l(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _wcsnicoll(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int _wcsnicoll_l(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount,_locale_t _Locale);


  wchar_t * wcsdup(const wchar_t *_Str) ;

  int wcsicmp(const wchar_t *_Str1,const wchar_t *_Str2) ;
  int wcsnicmp(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount) ;
  wchar_t * wcsnset(wchar_t *_Str,wchar_t _Val,size_t _MaxCount) ;
  wchar_t * wcsrev(wchar_t *_Str) ;
  wchar_t * wcsset(wchar_t *_Str,wchar_t _Val) ;
  wchar_t * wcslwr(wchar_t *_Str) ;
  wchar_t * wcsupr(wchar_t *_Str) ;
  int wcsicoll(const wchar_t *_Str1,const wchar_t *_Str2) ;





  struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
  };





  __attribute__ ((__dllimport__)) wchar_t * _wasctime(const struct tm *_Tm);
  wchar_t * _wctime32(const __time32_t *_Time) ;
  size_t wcsftime(wchar_t * __restrict__ _Buf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,const struct tm * __restrict__ _Tm);
  __attribute__ ((__dllimport__)) size_t _wcsftime_l(wchar_t * __restrict__ _Buf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,const struct tm * __restrict__ _Tm,_locale_t _Locale);
  __attribute__ ((__dllimport__)) wchar_t * _wstrdate(wchar_t *_Buffer) ;
  __attribute__ ((__dllimport__)) wchar_t * _wstrtime(wchar_t *_Buffer) ;
  __attribute__ ((__dllimport__)) wchar_t * _wctime64(const __time64_t *_Time) ;



  wchar_t * _wctime(const time_t *_Time) ;
# 816 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  typedef int mbstate_t;
  typedef wchar_t _Wint_t;

  wint_t btowc(int);
  size_t mbrlen(const char * __restrict__ _Ch,size_t _SizeInBytes,mbstate_t * __restrict__ _State);
  size_t mbrtowc(wchar_t * __restrict__ _DstCh,const char * __restrict__ _SrcCh,size_t _SizeInBytes,mbstate_t * __restrict__ _State);
  size_t mbsrtowcs(wchar_t * __restrict__ _Dest,const char ** __restrict__ _PSrc,size_t _Count,mbstate_t * __restrict__ _State) ;
  size_t wcrtomb(char * __restrict__ _Dest,wchar_t _Source,mbstate_t * __restrict__ _State) ;
  size_t wcsrtombs(char * __restrict__ _Dest,const wchar_t ** __restrict__ _PSource,size_t _Count,mbstate_t * __restrict__ _State) ;
  int wctob(wint_t _WCh);


  wchar_t * wmemset(wchar_t *s, wchar_t c, size_t n);
                wchar_t * wmemchr(const wchar_t *s, wchar_t c, size_t n);
  int wmemcmp(const wchar_t *s1, const wchar_t *s2,size_t n);
  wchar_t * wmemcpy(wchar_t * __restrict__ s1,const wchar_t * __restrict__ s2,size_t n) ;
  wchar_t * wmemmove(wchar_t *s1, const wchar_t *s2, size_t n) ;
  int fwide(FILE *stream,int mode);
  int mbsinit(const mbstate_t *ps);
  __extension__ long long wcstoll(const wchar_t * __restrict__ nptr,wchar_t ** __restrict__ endptr, int base);
  __extension__ unsigned long long wcstoull(const wchar_t * __restrict__ nptr,wchar_t ** __restrict__ endptr, int base);


  void * memmove(void *_Dst,const void *_Src,size_t _MaxCount);
  void * memcpy(void * __restrict__ _Dst,const void * __restrict__ _Src,size_t _MaxCount) ;
# 876 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
}


#pragma pack(pop)


# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/wchar_s.h" 1 3








# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 1 3
# 9 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/wchar_s.h" 2 3
# 881 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 2 3
# 47 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 2 3
# 64 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 3
namespace std {

  using ::mbstate_t;

}
# 138 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 3
namespace std {

  using ::wint_t;

  using ::btowc;
  using ::fgetwc;
  using ::fgetws;
  using ::fputwc;
  using ::fputws;
  using ::fwide;
  using ::fwprintf;
  using ::fwscanf;
  using ::getwc;
  using ::getwchar;
  using ::mbrlen;
  using ::mbrtowc;
  using ::mbsinit;
  using ::mbsrtowcs;
  using ::putwc;
  using ::putwchar;



  using ::swscanf;
  using ::ungetwc;
  using ::vfwprintf;

  using ::vfwscanf;





  using ::vswscanf;

  using ::vwprintf;

  using ::vwscanf;

  using ::wcrtomb;
  using ::wcscat;
  using ::wcscmp;
  using ::wcscoll;
  using ::wcscpy;
  using ::wcscspn;
  using ::wcsftime;
  using ::wcslen;
  using ::wcsncat;
  using ::wcsncmp;
  using ::wcsncpy;
  using ::wcsrtombs;
  using ::wcsspn;
  using ::wcstod;

  using ::wcstof;

  using ::wcstok;
  using ::wcstol;
  using ::wcstoul;
  using ::wcsxfrm;
  using ::wctob;
  using ::wmemcmp;
  using ::wmemcpy;
  using ::wmemmove;
  using ::wmemset;
  using ::wprintf;
  using ::wscanf;
  using ::wcschr;
  using ::wcspbrk;
  using ::wcsrchr;
  using ::wcsstr;
  using ::wmemchr;


  inline wchar_t*
  wcschr(wchar_t* __p, wchar_t __c)
  { return wcschr(const_cast<const wchar_t*>(__p), __c); }

  inline wchar_t*
  wcspbrk(wchar_t* __s1, const wchar_t* __s2)
  { return wcspbrk(const_cast<const wchar_t*>(__s1), __s2); }

  inline wchar_t*
  wcsrchr(wchar_t* __p, wchar_t __c)
  { return wcsrchr(const_cast<const wchar_t*>(__p), __c); }

  inline wchar_t*
  wcsstr(wchar_t* __s1, const wchar_t* __s2)
  { return wcsstr(const_cast<const wchar_t*>(__s1), __s2); }

  inline wchar_t*
  wmemchr(wchar_t* __p, wchar_t __c, size_t __n)
  { return wmemchr(const_cast<const wchar_t*>(__p), __c, __n); }


}







namespace __gnu_cxx {






  using ::wcstold;
# 257 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 3
  using ::wcstoll;
  using ::wcstoull;


}

namespace std {

  using ::__gnu_cxx::wcstold;
  using ::__gnu_cxx::wcstoll;
  using ::__gnu_cxx::wcstoull;

}
# 42 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/postypes.h" 2 3
# 69 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/postypes.h" 3
namespace std {
# 89 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/postypes.h" 3
  typedef long long streamoff;







  typedef ptrdiff_t streamsize;
# 110 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/postypes.h" 3
  template<typename _StateT>
    class fpos
    {
    private:
      streamoff _M_off;
      _StateT _M_state;

    public:




      fpos()
      : _M_off(0), _M_state() { }
# 132 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/postypes.h" 3
      fpos(streamoff __off)
      : _M_off(__off), _M_state() { }


      operator streamoff() const { return _M_off; }


      void
      state(_StateT __st)
      { _M_state = __st; }


      _StateT
      state() const
      { return _M_state; }





      fpos&
      operator+=(streamoff __off)
      {
 _M_off += __off;
 return *this;
      }





      fpos&
      operator-=(streamoff __off)
      {
 _M_off -= __off;
 return *this;
      }







      fpos
      operator+(streamoff __off) const
      {
 fpos __pos(*this);
 __pos += __off;
 return __pos;
      }







      fpos
      operator-(streamoff __off) const
      {
 fpos __pos(*this);
 __pos -= __off;
 return __pos;
      }






      streamoff
      operator-(const fpos& __other) const
      { return _M_off - __other._M_off; }
    };






  template<typename _StateT>
    inline bool
    operator==(const fpos<_StateT>& __lhs, const fpos<_StateT>& __rhs)
    { return streamoff(__lhs) == streamoff(__rhs); }

  template<typename _StateT>
    inline bool
    operator!=(const fpos<_StateT>& __lhs, const fpos<_StateT>& __rhs)
    { return streamoff(__lhs) != streamoff(__rhs); }





  typedef fpos<mbstate_t> streampos;

  typedef fpos<mbstate_t> wstreampos;
# 238 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/postypes.h" 3
}
# 42 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iosfwd" 2 3

namespace std {
# 73 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iosfwd" 3
  class ios_base;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ios;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_streambuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_istream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ostream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_iostream;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
     typename _Alloc = allocator<_CharT> >
    class basic_stringbuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
    typename _Alloc = allocator<_CharT> >
    class basic_istringstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
    typename _Alloc = allocator<_CharT> >
    class basic_ostringstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
    typename _Alloc = allocator<_CharT> >
    class basic_stringstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_filebuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ifstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ofstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_fstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class istreambuf_iterator;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class ostreambuf_iterator;




  typedef basic_ios<char> ios;
  typedef basic_streambuf<char> streambuf;
  typedef basic_istream<char> istream;
  typedef basic_ostream<char> ostream;
  typedef basic_iostream<char> iostream;
  typedef basic_stringbuf<char> stringbuf;
  typedef basic_istringstream<char> istringstream;
  typedef basic_ostringstream<char> ostringstream;
  typedef basic_stringstream<char> stringstream;
  typedef basic_filebuf<char> filebuf;
  typedef basic_ifstream<char> ifstream;
  typedef basic_ofstream<char> ofstream;
  typedef basic_fstream<char> fstream;


  typedef basic_ios<wchar_t> wios;
  typedef basic_streambuf<wchar_t> wstreambuf;
  typedef basic_istream<wchar_t> wistream;
  typedef basic_ostream<wchar_t> wostream;
  typedef basic_iostream<wchar_t> wiostream;
  typedef basic_stringbuf<wchar_t> wstringbuf;
  typedef basic_istringstream<wchar_t> wistringstream;
  typedef basic_ostringstream<wchar_t> wostringstream;
  typedef basic_stringstream<wchar_t> wstringstream;
  typedef basic_filebuf<wchar_t> wfilebuf;
  typedef basic_ifstream<wchar_t> wifstream;
  typedef basic_ofstream<wchar_t> wofstream;
  typedef basic_fstream<wchar_t> wfstream;



}
# 39 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ios" 2 3
# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\exception" 1 3
# 35 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\exception" 3
# 35 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\exception" 3

#pragma GCC visibility push(default)



extern "C++" {

namespace std
{
# 60 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\exception" 3
  class exception
  {
  public:
    exception() throw() { }
    virtual ~exception() throw();



    virtual const char* what() const throw();
  };



  class bad_exception : public exception
  {
  public:
    bad_exception() throw() { }



    virtual ~bad_exception() throw();


    virtual const char* what() const throw();
  };


  typedef void (*terminate_handler) ();


  typedef void (*unexpected_handler) ();


  terminate_handler set_terminate(terminate_handler) throw();



  void terminate() throw() __attribute__ ((__noreturn__));


  unexpected_handler set_unexpected(unexpected_handler) throw();



  void unexpected() __attribute__ ((__noreturn__));
# 117 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\exception" 3
  bool uncaught_exception() throw() __attribute__ ((__pure__));


}

namespace __gnu_cxx {
# 140 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\exception" 3
  void __verbose_terminate_handler();

}

}

#pragma GCC visibility pop
# 40 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ios" 2 3
# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/char_traits.h" 1 3
# 39 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/char_traits.h" 3
# 39 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/char_traits.h" 3

# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 1 3
# 61 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 1 3
# 41 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3
# 41 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3


# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 1 3 4
# 44 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 2 3
# 62 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/functexcept.h" 1 3
# 37 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/functexcept.h" 3
# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\exception_defines.h" 1 3
# 38 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/functexcept.h" 2 3

namespace std {


  void
  __throw_bad_exception(void) __attribute__((__noreturn__));


  void
  __throw_bad_alloc(void) __attribute__((__noreturn__));


  void
  __throw_bad_cast(void) __attribute__((__noreturn__));

  void
  __throw_bad_typeid(void) __attribute__((__noreturn__));


  void
  __throw_logic_error(const char*) __attribute__((__noreturn__));

  void
  __throw_domain_error(const char*) __attribute__((__noreturn__));

  void
  __throw_invalid_argument(const char*) __attribute__((__noreturn__));

  void
  __throw_length_error(const char*) __attribute__((__noreturn__));

  void
  __throw_out_of_range(const char*) __attribute__((__noreturn__));

  void
  __throw_runtime_error(const char*) __attribute__((__noreturn__));

  void
  __throw_range_error(const char*) __attribute__((__noreturn__));

  void
  __throw_overflow_error(const char*) __attribute__((__noreturn__));

  void
  __throw_underflow_error(const char*) __attribute__((__noreturn__));


  void
  __throw_ios_failure(const char*) __attribute__((__noreturn__));

  void
  __throw_system_error(int) __attribute__((__noreturn__));

  void
  __throw_future_error(int) __attribute__((__noreturn__));


  void
  __throw_bad_function_call() __attribute__((__noreturn__));

}
# 63 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/cpp_type_traits.h" 1 3
# 36 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/cpp_type_traits.h" 3
# 36 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/cpp_type_traits.h" 3
# 68 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/cpp_type_traits.h" 3
namespace __gnu_cxx {

  template<typename _Iterator, typename _Container>
    class __normal_iterator;

}

namespace std {

  struct __true_type { };
  struct __false_type { };

  template<bool>
    struct __truth_type
    { typedef __false_type __type; };

  template<>
    struct __truth_type<true>
    { typedef __true_type __type; };



  template<class _Sp, class _Tp>
    struct __traitor
    {
      enum { __value = bool(_Sp::__value) || bool(_Tp::__value) };
      typedef typename __truth_type<__value>::__type __type;
    };


  template<typename, typename>
    struct __are_same
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<typename _Tp>
    struct __are_same<_Tp, _Tp>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<typename _Tp>
    struct __is_void
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_void<void>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_integer
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };




  template<>
    struct __is_integer<bool>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<signed char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<>
    struct __is_integer<wchar_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
# 193 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/cpp_type_traits.h" 3
  template<>
    struct __is_integer<short>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned short>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<int>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned int>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<long long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned long long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_floating
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };


  template<>
    struct __is_floating<float>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_floating<double>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_floating<long double>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_pointer
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<typename _Tp>
    struct __is_pointer<_Tp*>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_normal_iterator
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<typename _Iterator, typename _Container>
    struct __is_normal_iterator< __gnu_cxx::__normal_iterator<_Iterator,
             _Container> >
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_arithmetic
    : public __traitor<__is_integer<_Tp>, __is_floating<_Tp> >
    { };




  template<typename _Tp>
    struct __is_fundamental
    : public __traitor<__is_void<_Tp>, __is_arithmetic<_Tp> >
    { };




  template<typename _Tp>
    struct __is_scalar
    : public __traitor<__is_arithmetic<_Tp>, __is_pointer<_Tp> >
    { };




  template<typename _Tp>
    struct __is_char
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_char<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<>
    struct __is_char<wchar_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<typename _Tp>
    struct __is_byte
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_byte<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_byte<signed char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_byte<unsigned char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_move_iterator
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
# 416 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/cpp_type_traits.h" 3
  template<typename _Tp>
    class __is_iterator_helper
    {
      typedef char __one;
      typedef struct { char __arr[2]; } __two;

      template<typename _Up>
        struct _Wrap_type
 { };

      template<typename _Up>
        static __one __test(_Wrap_type<typename _Up::iterator_category>*);

      template<typename _Up>
        static __two __test(...);

    public:
      static const bool __value = (sizeof(__test<_Tp>(0)) == 1
       || __is_pointer<_Tp>::__value);
    };

  template<typename _Tp>
    struct __is_iterator
    {
      enum { __value = __is_iterator_helper<_Tp>::__value };
      typedef typename __truth_type<__value>::__type __type;
    };

}
# 64 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/type_traits.h" 1 3
# 32 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/type_traits.h" 3
# 32 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/type_traits.h" 3




namespace __gnu_cxx {


  template<bool, typename>
    struct __enable_if
    { };

  template<typename _Tp>
    struct __enable_if<true, _Tp>
    { typedef _Tp __type; };



  template<bool _Cond, typename _Iftrue, typename _Iffalse>
    struct __conditional_type
    { typedef _Iftrue __type; };

  template<typename _Iftrue, typename _Iffalse>
    struct __conditional_type<false, _Iftrue, _Iffalse>
    { typedef _Iffalse __type; };



  template<typename _Tp>
    struct __add_unsigned
    {
    private:
      typedef __enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;

    public:
      typedef typename __if_type::__type __type;
    };

  template<>
    struct __add_unsigned<char>
    { typedef unsigned char __type; };

  template<>
    struct __add_unsigned<signed char>
    { typedef unsigned char __type; };

  template<>
    struct __add_unsigned<short>
    { typedef unsigned short __type; };

  template<>
    struct __add_unsigned<int>
    { typedef unsigned int __type; };

  template<>
    struct __add_unsigned<long>
    { typedef unsigned long __type; };

  template<>
    struct __add_unsigned<long long>
    { typedef unsigned long long __type; };


  template<>
    struct __add_unsigned<bool>;

  template<>
    struct __add_unsigned<wchar_t>;



  template<typename _Tp>
    struct __remove_unsigned
    {
    private:
      typedef __enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;

    public:
      typedef typename __if_type::__type __type;
    };

  template<>
    struct __remove_unsigned<char>
    { typedef signed char __type; };

  template<>
    struct __remove_unsigned<unsigned char>
    { typedef signed char __type; };

  template<>
    struct __remove_unsigned<unsigned short>
    { typedef short __type; };

  template<>
    struct __remove_unsigned<unsigned int>
    { typedef int __type; };

  template<>
    struct __remove_unsigned<unsigned long>
    { typedef long __type; };

  template<>
    struct __remove_unsigned<unsigned long long>
    { typedef long long __type; };


  template<>
    struct __remove_unsigned<bool>;

  template<>
    struct __remove_unsigned<wchar_t>;



  template<typename _Type>
    inline bool
    __is_null_pointer(_Type* __ptr)
    { return __ptr == 0; }

  template<typename _Type>
    inline bool
    __is_null_pointer(_Type)
    { return false; }



  template<typename _Tp, bool = std::__is_integer<_Tp>::__value>
    struct __promote
    { typedef double __type; };

  template<typename _Tp>
    struct __promote<_Tp, false>
    { typedef _Tp __type; };

  template<typename _Tp, typename _Up>
    struct __promote_2
    {
    private:
      typedef typename __promote<_Tp>::__type __type1;
      typedef typename __promote<_Up>::__type __type2;

    public:
      typedef __typeof__(__type1() + __type2()) __type;
    };

  template<typename _Tp, typename _Up, typename _Vp>
    struct __promote_3
    {
    private:
      typedef typename __promote<_Tp>::__type __type1;
      typedef typename __promote<_Up>::__type __type2;
      typedef typename __promote<_Vp>::__type __type3;

    public:
      typedef __typeof__(__type1() + __type2() + __type3()) __type;
    };

  template<typename _Tp, typename _Up, typename _Vp, typename _Wp>
    struct __promote_4
    {
    private:
      typedef typename __promote<_Tp>::__type __type1;
      typedef typename __promote<_Up>::__type __type2;
      typedef typename __promote<_Vp>::__type __type3;
      typedef typename __promote<_Wp>::__type __type4;

    public:
      typedef __typeof__(__type1() + __type2() + __type3() + __type4()) __type;
    };

}
# 65 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/numeric_traits.h" 1 3
# 32 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/numeric_traits.h" 3
# 32 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/numeric_traits.h" 3




namespace __gnu_cxx {
# 51 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/numeric_traits.h" 3
  template<typename _Value>
    struct __numeric_traits_integer
    {

      static const _Value __min = (((_Value)(-1) < 0) ? (_Value)1 << (sizeof(_Value) * 8 - ((_Value)(-1) < 0)) : (_Value)0);
      static const _Value __max = (((_Value)(-1) < 0) ? (((((_Value)1 << ((sizeof(_Value) * 8 - ((_Value)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(_Value)0);



      static const bool __is_signed = ((_Value)(-1) < 0);
      static const int __digits = (sizeof(_Value) * 8 - ((_Value)(-1) < 0));
    };

  template<typename _Value>
    const _Value __numeric_traits_integer<_Value>::__min;

  template<typename _Value>
    const _Value __numeric_traits_integer<_Value>::__max;

  template<typename _Value>
    const bool __numeric_traits_integer<_Value>::__is_signed;

  template<typename _Value>
    const int __numeric_traits_integer<_Value>::__digits;
# 96 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/numeric_traits.h" 3
  template<typename _Value>
    struct __numeric_traits_floating
    {

      static const int __max_digits10 = (2 + (std::__are_same<_Value, float>::__value ? 24 : std::__are_same<_Value, double>::__value ? 53 : 64) * 3010 / 10000);


      static const bool __is_signed = true;
      static const int __digits10 = (std::__are_same<_Value, float>::__value ? 6 : std::__are_same<_Value, double>::__value ? 15 : 18);
      static const int __max_exponent10 = (std::__are_same<_Value, float>::__value ? 38 : std::__are_same<_Value, double>::__value ? 308 : 4932);
    };

  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__max_digits10;

  template<typename _Value>
    const bool __numeric_traits_floating<_Value>::__is_signed;

  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__digits10;

  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__max_exponent10;

  template<typename _Value>
    struct __numeric_traits
    : public __conditional_type<std::__is_integer<_Value>::__value,
    __numeric_traits_integer<_Value>,
    __numeric_traits_floating<_Value> >::__type
    { };

}
# 66 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_pair.h" 1 3
# 60 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_pair.h" 3
# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/move.h" 1 3
# 34 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/move.h" 3
# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 1 3
# 41 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3
# 41 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3


# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 1 3 4
# 44 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 2 3
# 35 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/move.h" 2 3
# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/concept_check.h" 1 3
# 33 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/concept_check.h" 3
# 33 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/concept_check.h" 3
# 36 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/move.h" 2 3
# 95 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/move.h" 3
namespace std {
# 104 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/move.h" 3
  template<typename _Tp>
    inline void
    swap(_Tp& __a, _Tp& __b)
    {



      _Tp __tmp = (__a);
      __a = (__b);
      __b = (__tmp);
    }



  template<typename _Tp, size_t _Nm>
    inline void
    swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
    {
      for (size_t __n = 0; __n < _Nm; ++__n)
 swap(__a[__n], __b[__n]);
    }

}
# 61 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_pair.h" 2 3






namespace std {


  template<class _T1, class _T2>
    struct pair
    {
      typedef _T1 first_type;
      typedef _T2 second_type;

      _T1 first;
      _T2 second;





      pair()
      : first(), second() { }


      pair(const _T1& __a, const _T2& __b)
      : first(__a), second(__b) { }
# 113 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_pair.h" 3
      template<class _U1, class _U2>
        pair(const pair<_U1, _U2>& __p)
 : first(__p.first),
   second(__p.second) { }
# 149 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_pair.h" 3
    };


  template<class _T1, class _T2>
    inline bool
    operator==(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __x.first == __y.first && __x.second == __y.second; }


  template<class _T1, class _T2>
    inline bool
    operator<(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __x.first < __y.first
      || (!(__y.first < __x.first) && __x.second < __y.second); }


  template<class _T1, class _T2>
    inline bool
    operator!=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__x == __y); }


  template<class _T1, class _T2>
    inline bool
    operator>(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __y < __x; }


  template<class _T1, class _T2>
    inline bool
    operator<=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__y < __x); }


  template<class _T1, class _T2>
    inline bool
    operator>=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__x < __y); }
# 211 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_pair.h" 3
  template<class _T1, class _T2>
    inline pair<_T1, _T2>
    make_pair(_T1 __x, _T2 __y)
    { return pair<_T1, _T2>(__x, __y); }
# 257 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_pair.h" 3
}
# 67 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_types.h" 1 3
# 63 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_types.h" 3
# 63 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_types.h" 3


# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 1 3
# 41 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3
# 41 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3


# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 1 3 4
# 44 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 2 3
# 66 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_types.h" 2 3

namespace std {
# 84 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_types.h" 3
  struct input_iterator_tag { };


  struct output_iterator_tag { };


  struct forward_iterator_tag : public input_iterator_tag { };



  struct bidirectional_iterator_tag : public forward_iterator_tag { };



  struct random_access_iterator_tag : public bidirectional_iterator_tag { };
# 111 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_types.h" 3
  template<typename _Category, typename _Tp, typename _Distance = ptrdiff_t,
           typename _Pointer = _Tp*, typename _Reference = _Tp&>
    struct iterator
    {

      typedef _Category iterator_category;

      typedef _Tp value_type;

      typedef _Distance difference_type;

      typedef _Pointer pointer;

      typedef _Reference reference;
    };
# 135 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_types.h" 3
  template<typename _Iterator>
    struct iterator_traits
    {
      typedef typename _Iterator::iterator_category iterator_category;
      typedef typename _Iterator::value_type value_type;
      typedef typename _Iterator::difference_type difference_type;
      typedef typename _Iterator::pointer pointer;
      typedef typename _Iterator::reference reference;
    };


  template<typename _Tp>
    struct iterator_traits<_Tp*>
    {
      typedef random_access_iterator_tag iterator_category;
      typedef _Tp value_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef _Tp& reference;
    };


  template<typename _Tp>
    struct iterator_traits<const _Tp*>
    {
      typedef random_access_iterator_tag iterator_category;
      typedef _Tp value_type;
      typedef ptrdiff_t difference_type;
      typedef const _Tp* pointer;
      typedef const _Tp& reference;
    };





  template<typename _Iter>
    inline typename iterator_traits<_Iter>::iterator_category
    __iterator_category(const _Iter&)
    { return typename iterator_traits<_Iter>::iterator_category(); }



}
# 68 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_funcs.h" 1 3
# 63 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_funcs.h" 3
# 63 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_funcs.h" 3



namespace std {

  template<typename _InputIterator>
    inline typename iterator_traits<_InputIterator>::difference_type
    __distance(_InputIterator __first, _InputIterator __last,
               input_iterator_tag)
    {



      typename iterator_traits<_InputIterator>::difference_type __n = 0;
      while (__first != __last)
 {
   ++__first;
   ++__n;
 }
      return __n;
    }

  template<typename _RandomAccessIterator>
    inline typename iterator_traits<_RandomAccessIterator>::difference_type
    __distance(_RandomAccessIterator __first, _RandomAccessIterator __last,
               random_access_iterator_tag)
    {



      return __last - __first;
    }
# 108 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_funcs.h" 3
  template<typename _InputIterator>
    inline typename iterator_traits<_InputIterator>::difference_type
    distance(_InputIterator __first, _InputIterator __last)
    {

      return std::__distance(__first, __last,
        std::__iterator_category(__first));
    }

  template<typename _InputIterator, typename _Distance>
    inline void
    __advance(_InputIterator& __i, _Distance __n, input_iterator_tag)
    {


      while (__n--)
 ++__i;
    }

  template<typename _BidirectionalIterator, typename _Distance>
    inline void
    __advance(_BidirectionalIterator& __i, _Distance __n,
       bidirectional_iterator_tag)
    {



      if (__n > 0)
        while (__n--)
   ++__i;
      else
        while (__n++)
   --__i;
    }

  template<typename _RandomAccessIterator, typename _Distance>
    inline void
    __advance(_RandomAccessIterator& __i, _Distance __n,
              random_access_iterator_tag)
    {



      __i += __n;
    }
# 166 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_funcs.h" 3
  template<typename _InputIterator, typename _Distance>
    inline void
    advance(_InputIterator& __i, _Distance __n)
    {

      typename iterator_traits<_InputIterator>::difference_type __d = __n;
      std::__advance(__i, __d, std::__iterator_category(__i));
    }

}
# 69 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 1 3
# 68 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
namespace std {
# 94 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
  template<typename _Iterator>
    class reverse_iterator
    : public iterator<typename iterator_traits<_Iterator>::iterator_category,
        typename iterator_traits<_Iterator>::value_type,
        typename iterator_traits<_Iterator>::difference_type,
        typename iterator_traits<_Iterator>::pointer,
                      typename iterator_traits<_Iterator>::reference>
    {
    protected:
      _Iterator current;

      typedef iterator_traits<_Iterator> __traits_type;

    public:
      typedef _Iterator iterator_type;
      typedef typename __traits_type::difference_type difference_type;
      typedef typename __traits_type::pointer pointer;
      typedef typename __traits_type::reference reference;







      reverse_iterator() : current() { }




      explicit
      reverse_iterator(iterator_type __x) : current(__x) { }




      reverse_iterator(const reverse_iterator& __x)
      : current(__x.current) { }





      template<typename _Iter>
        reverse_iterator(const reverse_iterator<_Iter>& __x)
 : current(__x.base()) { }




      iterator_type
      base() const
      { return current; }






      reference
      operator*() const
      {
 _Iterator __tmp = current;
 return *--__tmp;
      }






      pointer
      operator->() const
      { return &(operator*()); }






      reverse_iterator&
      operator++()
      {
 --current;
 return *this;
      }






      reverse_iterator
      operator++(int)
      {
 reverse_iterator __tmp = *this;
 --current;
 return __tmp;
      }






      reverse_iterator&
      operator--()
      {
 ++current;
 return *this;
      }






      reverse_iterator
      operator--(int)
      {
 reverse_iterator __tmp = *this;
 ++current;
 return __tmp;
      }






      reverse_iterator
      operator+(difference_type __n) const
      { return reverse_iterator(current - __n); }






      reverse_iterator&
      operator+=(difference_type __n)
      {
 current -= __n;
 return *this;
      }






      reverse_iterator
      operator-(difference_type __n) const
      { return reverse_iterator(current + __n); }






      reverse_iterator&
      operator-=(difference_type __n)
      {
 current += __n;
 return *this;
      }






      reference
      operator[](difference_type __n) const
      { return *(*this + __n); }
    };
# 281 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
  template<typename _Iterator>
    inline bool
    operator==(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return __x.base() == __y.base(); }

  template<typename _Iterator>
    inline bool
    operator<(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y.base() < __x.base(); }

  template<typename _Iterator>
    inline bool
    operator!=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__x == __y); }

  template<typename _Iterator>
    inline bool
    operator>(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y < __x; }

  template<typename _Iterator>
    inline bool
    operator<=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__y < __x); }

  template<typename _Iterator>
    inline bool
    operator>=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__x < __y); }

  template<typename _Iterator>
    inline typename reverse_iterator<_Iterator>::difference_type
    operator-(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y.base() - __x.base(); }

  template<typename _Iterator>
    inline reverse_iterator<_Iterator>
    operator+(typename reverse_iterator<_Iterator>::difference_type __n,
       const reverse_iterator<_Iterator>& __x)
    { return reverse_iterator<_Iterator>(__x.base() - __n); }



  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator==(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return __x.base() == __y.base(); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator<(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)
    { return __y.base() < __x.base(); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator!=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__x == __y); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator>(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)
    { return __y < __x; }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator<=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__y < __x); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator>=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__x < __y); }

  template<typename _IteratorL, typename _IteratorR>







    inline typename reverse_iterator<_IteratorL>::difference_type
    operator-(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)

    { return __y.base() - __x.base(); }
# 393 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
  template<typename _Container>
    class back_insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;

    public:

      typedef _Container container_type;


      explicit
      back_insert_iterator(_Container& __x) : container(&__x) { }
# 420 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
      back_insert_iterator&
      operator=(typename _Container::const_reference __value)
      {
 container->push_back(__value);
 return *this;
      }
# 443 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
      back_insert_iterator&
      operator*()
      { return *this; }


      back_insert_iterator&
      operator++()
      { return *this; }


      back_insert_iterator
      operator++(int)
      { return *this; }
    };
# 469 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
  template<typename _Container>
    inline back_insert_iterator<_Container>
    back_inserter(_Container& __x)
    { return back_insert_iterator<_Container>(__x); }
# 484 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
  template<typename _Container>
    class front_insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;

    public:

      typedef _Container container_type;


      explicit front_insert_iterator(_Container& __x) : container(&__x) { }
# 510 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
      front_insert_iterator&
      operator=(typename _Container::const_reference __value)
      {
 container->push_front(__value);
 return *this;
      }
# 533 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
      front_insert_iterator&
      operator*()
      { return *this; }


      front_insert_iterator&
      operator++()
      { return *this; }


      front_insert_iterator
      operator++(int)
      { return *this; }
    };
# 559 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
  template<typename _Container>
    inline front_insert_iterator<_Container>
    front_inserter(_Container& __x)
    { return front_insert_iterator<_Container>(__x); }
# 578 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
  template<typename _Container>
    class insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;
      typename _Container::iterator iter;

    public:

      typedef _Container container_type;





      insert_iterator(_Container& __x, typename _Container::iterator __i)
      : container(&__x), iter(__i) {}
# 621 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
      insert_iterator&
      operator=(typename _Container::const_reference __value)
      {
 iter = container->insert(iter, __value);
 ++iter;
 return *this;
      }
# 647 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
      insert_iterator&
      operator*()
      { return *this; }


      insert_iterator&
      operator++()
      { return *this; }


      insert_iterator&
      operator++(int)
      { return *this; }
    };
# 673 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
  template<typename _Container, typename _Iterator>
    inline insert_iterator<_Container>
    inserter(_Container& __x, _Iterator __i)
    {
      return insert_iterator<_Container>(__x,
      typename _Container::iterator(__i));
    }



}

namespace __gnu_cxx {
# 694 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
  using std::iterator_traits;
  using std::iterator;
  template<typename _Iterator, typename _Container>
    class __normal_iterator
    {
    protected:
      _Iterator _M_current;

      typedef iterator_traits<_Iterator> __traits_type;

    public:
      typedef _Iterator iterator_type;
      typedef typename __traits_type::iterator_category iterator_category;
      typedef typename __traits_type::value_type value_type;
      typedef typename __traits_type::difference_type difference_type;
      typedef typename __traits_type::reference reference;
      typedef typename __traits_type::pointer pointer;

      __normal_iterator() : _M_current(_Iterator()) { }

      explicit
      __normal_iterator(const _Iterator& __i) : _M_current(__i) { }


      template<typename _Iter>
        __normal_iterator(const __normal_iterator<_Iter,
     typename __enable_if<
              (std::__are_same<_Iter, typename _Container::pointer>::__value),
        _Container>::__type>& __i)
        : _M_current(__i.base()) { }


      reference
      operator*() const
      { return *_M_current; }

      pointer
      operator->() const
      { return _M_current; }

      __normal_iterator&
      operator++()
      {
 ++_M_current;
 return *this;
      }

      __normal_iterator
      operator++(int)
      { return __normal_iterator(_M_current++); }


      __normal_iterator&
      operator--()
      {
 --_M_current;
 return *this;
      }

      __normal_iterator
      operator--(int)
      { return __normal_iterator(_M_current--); }


      reference
      operator[](const difference_type& __n) const
      { return _M_current[__n]; }

      __normal_iterator&
      operator+=(const difference_type& __n)
      { _M_current += __n; return *this; }

      __normal_iterator
      operator+(const difference_type& __n) const
      { return __normal_iterator(_M_current + __n); }

      __normal_iterator&
      operator-=(const difference_type& __n)
      { _M_current -= __n; return *this; }

      __normal_iterator
      operator-(const difference_type& __n) const
      { return __normal_iterator(_M_current - __n); }

      const _Iterator&
      base() const
      { return _M_current; }
    };
# 792 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator==(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() == __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator==(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() == __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator!=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() != __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator!=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() != __rhs.base(); }


  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator<(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() < __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator<(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() < __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator>(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() > __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator>(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() > __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator<=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() <= __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator<=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() <= __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator>=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() >= __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator>=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() >= __rhs.base(); }





  template<typename _IteratorL, typename _IteratorR, typename _Container>







    inline typename __normal_iterator<_IteratorL, _Container>::difference_type
    operator-(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)

    { return __lhs.base() - __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline typename __normal_iterator<_Iterator, _Container>::difference_type
    operator-(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() - __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline __normal_iterator<_Iterator, _Container>
    operator+(typename __normal_iterator<_Iterator, _Container>::difference_type
       __n, const __normal_iterator<_Iterator, _Container>& __i)
    { return __normal_iterator<_Iterator, _Container>(__i.base() + __n); }

}
# 70 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3

# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\debug/debug.h" 1 3
# 47 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\debug/debug.h" 3
namespace std
{
  namespace __debug { }
}




namespace __gnu_debug
{
  using namespace std::__debug;
}
# 72 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3


namespace std {




  template<bool _BoolType>
    struct __iter_swap
    {
      template<typename _ForwardIterator1, typename _ForwardIterator2>
        static void
        iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
        {
          typedef typename iterator_traits<_ForwardIterator1>::value_type
            _ValueType1;
          _ValueType1 __tmp = (*__a);
          *__a = (*__b);
          *__b = (__tmp);
 }
    };

  template<>
    struct __iter_swap<true>
    {
      template<typename _ForwardIterator1, typename _ForwardIterator2>
        static void
        iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
        {
          swap(*__a, *__b);
        }
    };
# 115 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _ForwardIterator1, typename _ForwardIterator2>
    inline void
    iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
    {
      typedef typename iterator_traits<_ForwardIterator1>::value_type
 _ValueType1;
      typedef typename iterator_traits<_ForwardIterator2>::value_type
 _ValueType2;
# 134 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
      typedef typename iterator_traits<_ForwardIterator1>::reference
 _ReferenceType1;
      typedef typename iterator_traits<_ForwardIterator2>::reference
 _ReferenceType2;
      std::__iter_swap<__are_same<_ValueType1, _ValueType2>::__value
 && __are_same<_ValueType1&, _ReferenceType1>::__value
 && __are_same<_ValueType2&, _ReferenceType2>::__value>::
 iter_swap(__a, __b);
    }
# 156 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _ForwardIterator1, typename _ForwardIterator2>
    _ForwardIterator2
    swap_ranges(_ForwardIterator1 __first1, _ForwardIterator1 __last1,
  _ForwardIterator2 __first2)
    {





                                                       ;

      for (; __first1 != __last1; ++__first1, ++__first2)
 std::iter_swap(__first1, __first2);
      return __first2;
    }
# 184 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _Tp>
    inline const _Tp&
    min(const _Tp& __a, const _Tp& __b)
    {



      if (__b < __a)
 return __b;
      return __a;
    }
# 207 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _Tp>
    inline const _Tp&
    max(const _Tp& __a, const _Tp& __b)
    {



      if (__a < __b)
 return __b;
      return __a;
    }
# 230 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _Tp, typename _Compare>
    inline const _Tp&
    min(const _Tp& __a, const _Tp& __b, _Compare __comp)
    {

      if (__comp(__b, __a))
 return __b;
      return __a;
    }
# 251 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _Tp, typename _Compare>
    inline const _Tp&
    max(const _Tp& __a, const _Tp& __b, _Compare __comp)
    {

      if (__comp(__a, __b))
 return __b;
      return __a;
    }




  template<typename _Iterator, bool _HasBase>
    struct _Iter_base
    {
      typedef _Iterator iterator_type;
      static iterator_type
      _S_base(_Iterator __it)
      { return __it; }
    };

  template<typename _Iterator>
    struct _Iter_base<_Iterator, true>
    {
      typedef typename _Iterator::iterator_type iterator_type;
      static iterator_type
      _S_base(_Iterator __it)
      { return __it.base(); }
    };



  template<typename _Iterator>
    struct _Niter_base
    : _Iter_base<_Iterator, __is_normal_iterator<_Iterator>::__value>
    { };

  template<typename _Iterator>
    inline typename _Niter_base<_Iterator>::iterator_type
    __niter_base(_Iterator __it)
    { return std::_Niter_base<_Iterator>::_S_base(__it); }


  template<typename _Iterator>
    struct _Miter_base
    : _Iter_base<_Iterator, __is_move_iterator<_Iterator>::__value>
    { };

  template<typename _Iterator>
    inline typename _Miter_base<_Iterator>::iterator_type
    __miter_base(_Iterator __it)
    { return std::_Miter_base<_Iterator>::_S_base(__it); }







  template<bool, bool, typename>
    struct __copy_move
    {
      template<typename _II, typename _OI>
        static _OI
        __copy_m(_II __first, _II __last, _OI __result)
        {
   for (; __first != __last; ++__result, ++__first)
     *__result = *__first;
   return __result;
 }
    };
# 339 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<>
    struct __copy_move<false, false, random_access_iterator_tag>
    {
      template<typename _II, typename _OI>
        static _OI
        __copy_m(_II __first, _II __last, _OI __result)
        {
   typedef typename iterator_traits<_II>::difference_type _Distance;
   for(_Distance __n = __last - __first; __n > 0; --__n)
     {
       *__result = *__first;
       ++__first;
       ++__result;
     }
   return __result;
 }
    };
# 377 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<bool _IsMove>
    struct __copy_move<_IsMove, true, random_access_iterator_tag>
    {
      template<typename _Tp>
        static _Tp*
        __copy_m(const _Tp* __first, const _Tp* __last, _Tp* __result)
        {
   const ptrdiff_t _Num = __last - __first;
   if (_Num)
     __builtin_memmove(__result, __first, sizeof(_Tp) * _Num);
   return __result + _Num;
 }
    };

  template<bool _IsMove, typename _II, typename _OI>
    inline _OI
    __copy_move_a(_II __first, _II __last, _OI __result)
    {
      typedef typename iterator_traits<_II>::value_type _ValueTypeI;
      typedef typename iterator_traits<_OI>::value_type _ValueTypeO;
      typedef typename iterator_traits<_II>::iterator_category _Category;
      const bool __simple = (__is_pod(_ValueTypeI)
                      && __is_pointer<_II>::__value
                      && __is_pointer<_OI>::__value
        && __are_same<_ValueTypeI, _ValueTypeO>::__value);

      return std::__copy_move<_IsMove, __simple,
                       _Category>::__copy_m(__first, __last, __result);
    }



  template<typename _CharT>
    struct char_traits;

  template<typename _CharT, typename _Traits>
    class istreambuf_iterator;

  template<typename _CharT, typename _Traits>
    class ostreambuf_iterator;

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
      ostreambuf_iterator<_CharT, char_traits<_CharT> > >::__type
    __copy_move_a2(_CharT*, _CharT*,
     ostreambuf_iterator<_CharT, char_traits<_CharT> >);

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
      ostreambuf_iterator<_CharT, char_traits<_CharT> > >::__type
    __copy_move_a2(const _CharT*, const _CharT*,
     ostreambuf_iterator<_CharT, char_traits<_CharT> >);

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
        _CharT*>::__type
    __copy_move_a2(istreambuf_iterator<_CharT, char_traits<_CharT> >,
     istreambuf_iterator<_CharT, char_traits<_CharT> >, _CharT*);

  template<bool _IsMove, typename _II, typename _OI>
    inline _OI
    __copy_move_a2(_II __first, _II __last, _OI __result)
    {
      return _OI(std::__copy_move_a<_IsMove>(std::__niter_base(__first),
          std::__niter_base(__last),
          std::__niter_base(__result)));
    }
# 462 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _II, typename _OI>
    inline _OI
    copy(_II __first, _II __last, _OI __result)
    {




                                                     ;

      return (std::__copy_move_a2<__is_move_iterator<_II>::__value>
       (std::__miter_base(__first), std::__miter_base(__last),
        __result));
    }
# 514 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<bool, bool, typename>
    struct __copy_move_backward
    {
      template<typename _BI1, typename _BI2>
        static _BI2
        __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
        {
   while (__first != __last)
     *--__result = *--__last;
   return __result;
 }
    };
# 542 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<>
    struct __copy_move_backward<false, false, random_access_iterator_tag>
    {
      template<typename _BI1, typename _BI2>
        static _BI2
        __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
        {
   typename iterator_traits<_BI1>::difference_type __n;
   for (__n = __last - __first; __n > 0; --__n)
     *--__result = *--__last;
   return __result;
 }
    };
# 572 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<bool _IsMove>
    struct __copy_move_backward<_IsMove, true, random_access_iterator_tag>
    {
      template<typename _Tp>
        static _Tp*
        __copy_move_b(const _Tp* __first, const _Tp* __last, _Tp* __result)
        {
   const ptrdiff_t _Num = __last - __first;
   if (_Num)
     __builtin_memmove(__result - _Num, __first, sizeof(_Tp) * _Num);
   return __result - _Num;
 }
    };

  template<bool _IsMove, typename _BI1, typename _BI2>
    inline _BI2
    __copy_move_backward_a(_BI1 __first, _BI1 __last, _BI2 __result)
    {
      typedef typename iterator_traits<_BI1>::value_type _ValueType1;
      typedef typename iterator_traits<_BI2>::value_type _ValueType2;
      typedef typename iterator_traits<_BI1>::iterator_category _Category;
      const bool __simple = (__is_pod(_ValueType1)
                      && __is_pointer<_BI1>::__value
                      && __is_pointer<_BI2>::__value
        && __are_same<_ValueType1, _ValueType2>::__value);

      return std::__copy_move_backward<_IsMove, __simple,
                                _Category>::__copy_move_b(__first,
         __last,
         __result);
    }

  template<bool _IsMove, typename _BI1, typename _BI2>
    inline _BI2
    __copy_move_backward_a2(_BI1 __first, _BI1 __last, _BI2 __result)
    {
      return _BI2(std::__copy_move_backward_a<_IsMove>
    (std::__niter_base(__first), std::__niter_base(__last),
     std::__niter_base(__result)));
    }
# 631 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _BI1, typename _BI2>
    inline _BI2
    copy_backward(_BI1 __first, _BI1 __last, _BI2 __result)
    {






                                                     ;

      return (std::__copy_move_backward_a2<__is_move_iterator<_BI1>::__value>
       (std::__miter_base(__first), std::__miter_base(__last),
        __result));
    }
# 689 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _ForwardIterator, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<!__is_scalar<_Tp>::__value, void>::__type
    __fill_a(_ForwardIterator __first, _ForwardIterator __last,
       const _Tp& __value)
    {
      for (; __first != __last; ++__first)
 *__first = __value;
    }

  template<typename _ForwardIterator, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_scalar<_Tp>::__value, void>::__type
    __fill_a(_ForwardIterator __first, _ForwardIterator __last,
      const _Tp& __value)
    {
      const _Tp __tmp = __value;
      for (; __first != __last; ++__first)
 *__first = __tmp;
    }


  template<typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_byte<_Tp>::__value, void>::__type
    __fill_a(_Tp* __first, _Tp* __last, const _Tp& __c)
    {
      const _Tp __tmp = __c;
      __builtin_memset(__first, static_cast<unsigned char>(__tmp),
         __last - __first);
    }
# 733 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _ForwardIterator, typename _Tp>
    inline void
    fill(_ForwardIterator __first, _ForwardIterator __last, const _Tp& __value)
    {



                                                     ;

      std::__fill_a(std::__niter_base(__first), std::__niter_base(__last),
      __value);
    }

  template<typename _OutputIterator, typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<!__is_scalar<_Tp>::__value, _OutputIterator>::__type
    __fill_n_a(_OutputIterator __first, _Size __n, const _Tp& __value)
    {
      for (; __n > 0; --__n, ++__first)
 *__first = __value;
      return __first;
    }

  template<typename _OutputIterator, typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_scalar<_Tp>::__value, _OutputIterator>::__type
    __fill_n_a(_OutputIterator __first, _Size __n, const _Tp& __value)
    {
      const _Tp __tmp = __value;
      for (; __n > 0; --__n, ++__first)
 *__first = __tmp;
      return __first;
    }

  template<typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_byte<_Tp>::__value, _Tp*>::__type
    __fill_n_a(_Tp* __first, _Size __n, const _Tp& __c)
    {
      std::__fill_a(__first, __first + __n, __c);
      return __first + __n;
    }
# 791 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _OI, typename _Size, typename _Tp>
    inline _OI
    fill_n(_OI __first, _Size __n, const _Tp& __value)
    {



      return _OI(std::__fill_n_a(std::__niter_base(__first), __n, __value));
    }

  template<bool _BoolType>
    struct __equal
    {
      template<typename _II1, typename _II2>
        static bool
        equal(_II1 __first1, _II1 __last1, _II2 __first2)
        {
   for (; __first1 != __last1; ++__first1, ++__first2)
     if (!(*__first1 == *__first2))
       return false;
   return true;
 }
    };

  template<>
    struct __equal<true>
    {
      template<typename _Tp>
        static bool
        equal(const _Tp* __first1, const _Tp* __last1, const _Tp* __first2)
        {
   return !__builtin_memcmp(__first1, __first2, sizeof(_Tp)
       * (__last1 - __first1));
 }
    };

  template<typename _II1, typename _II2>
    inline bool
    __equal_aux(_II1 __first1, _II1 __last1, _II2 __first2)
    {
      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;
      const bool __simple = (__is_integer<_ValueType1>::__value
                      && __is_pointer<_II1>::__value
                      && __is_pointer<_II2>::__value
        && __are_same<_ValueType1, _ValueType2>::__value);

      return std::__equal<__simple>::equal(__first1, __last1, __first2);
    }


  template<typename, typename>
    struct __lc_rai
    {
      template<typename _II1, typename _II2>
        static _II1
        __newlast1(_II1, _II1 __last1, _II2, _II2)
        { return __last1; }

      template<typename _II>
        static bool
        __cnd2(_II __first, _II __last)
        { return __first != __last; }
    };

  template<>
    struct __lc_rai<random_access_iterator_tag, random_access_iterator_tag>
    {
      template<typename _RAI1, typename _RAI2>
        static _RAI1
        __newlast1(_RAI1 __first1, _RAI1 __last1,
     _RAI2 __first2, _RAI2 __last2)
        {
   const typename iterator_traits<_RAI1>::difference_type
     __diff1 = __last1 - __first1;
   const typename iterator_traits<_RAI2>::difference_type
     __diff2 = __last2 - __first2;
   return __diff2 < __diff1 ? __first1 + __diff2 : __last1;
 }

      template<typename _RAI>
        static bool
        __cnd2(_RAI, _RAI)
        { return true; }
    };

  template<bool _BoolType>
    struct __lexicographical_compare
    {
      template<typename _II1, typename _II2>
        static bool __lc(_II1, _II1, _II2, _II2);
    };

  template<bool _BoolType>
    template<typename _II1, typename _II2>
      bool
      __lexicographical_compare<_BoolType>::
      __lc(_II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2)
      {
 typedef typename iterator_traits<_II1>::iterator_category _Category1;
 typedef typename iterator_traits<_II2>::iterator_category _Category2;
 typedef std::__lc_rai<_Category1, _Category2> __rai_type;

 __last1 = __rai_type::__newlast1(__first1, __last1,
      __first2, __last2);
 for (; __first1 != __last1 && __rai_type::__cnd2(__first2, __last2);
      ++__first1, ++__first2)
   {
     if (*__first1 < *__first2)
       return true;
     if (*__first2 < *__first1)
       return false;
   }
 return __first1 == __last1 && __first2 != __last2;
      }

  template<>
    struct __lexicographical_compare<true>
    {
      template<typename _Tp, typename _Up>
        static bool
        __lc(const _Tp* __first1, const _Tp* __last1,
      const _Up* __first2, const _Up* __last2)
 {
   const size_t __len1 = __last1 - __first1;
   const size_t __len2 = __last2 - __first2;
   const int __result = __builtin_memcmp(__first1, __first2,
      std::min(__len1, __len2));
   return __result != 0 ? __result < 0 : __len1 < __len2;
 }
    };

  template<typename _II1, typename _II2>
    inline bool
    __lexicographical_compare_aux(_II1 __first1, _II1 __last1,
      _II2 __first2, _II2 __last2)
    {
      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;
      const bool __simple =
 (__is_byte<_ValueType1>::__value && __is_byte<_ValueType2>::__value
  && !__gnu_cxx::__numeric_traits<_ValueType1>::__is_signed
  && !__gnu_cxx::__numeric_traits<_ValueType2>::__is_signed
  && __is_pointer<_II1>::__value
  && __is_pointer<_II2>::__value);

      return std::__lexicographical_compare<__simple>::__lc(__first1, __last1,
           __first2, __last2);
    }
# 952 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _ForwardIterator, typename _Tp>
    _ForwardIterator
    lower_bound(_ForwardIterator __first, _ForwardIterator __last,
  const _Tp& __val)
    {
      typedef typename iterator_traits<_ForwardIterator>::value_type
 _ValueType;
      typedef typename iterator_traits<_ForwardIterator>::difference_type
 _DistanceType;




                                                                  ;

      _DistanceType __len = std::distance(__first, __last);
      _DistanceType __half;
      _ForwardIterator __middle;

      while (__len > 0)
 {
   __half = __len >> 1;
   __middle = __first;
   std::advance(__middle, __half);
   if (*__middle < __val)
     {
       __first = __middle;
       ++__first;
       __len = __len - __half - 1;
     }
   else
     __len = __half;
 }
      return __first;
    }



  template<typename _Size>
    inline _Size
    __lg(_Size __n)
    {
      _Size __k;
      for (__k = 0; __n != 0; __n >>= 1)
 ++__k;
      return __k - 1;
    }

  inline int
  __lg(int __n)
  { return sizeof(int) * 8 - 1 - __builtin_clz(__n); }

  inline long
  __lg(long __n)
  { return sizeof(long) * 8 - 1 - __builtin_clzl(__n); }

  inline long long
  __lg(long long __n)
  { return sizeof(long long) * 8 - 1 - __builtin_clzll(__n); }

}

namespace std {
# 1028 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _II1, typename _II2>
    inline bool
    equal(_II1 __first1, _II1 __last1, _II2 __first2)
    {






                                                       ;

      return std::__equal_aux(std::__niter_base(__first1),
         std::__niter_base(__last1),
         std::__niter_base(__first2));
    }
# 1060 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _IIter1, typename _IIter2, typename _BinaryPredicate>
    inline bool
    equal(_IIter1 __first1, _IIter1 __last1,
   _IIter2 __first2, _BinaryPredicate __binary_pred)
    {



                                                       ;

      for (; __first1 != __last1; ++__first1, ++__first2)
 if (!bool(__binary_pred(*__first1, *__first2)))
   return false;
      return true;
    }
# 1091 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _II1, typename _II2>
    inline bool
    lexicographical_compare(_II1 __first1, _II1 __last1,
       _II2 __first2, _II2 __last2)
    {

      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;




                                                       ;
                                                       ;

      return std::__lexicographical_compare_aux(std::__niter_base(__first1),
      std::__niter_base(__last1),
      std::__niter_base(__first2),
      std::__niter_base(__last2));
    }
# 1125 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _II1, typename _II2, typename _Compare>
    bool
    lexicographical_compare(_II1 __first1, _II1 __last1,
       _II2 __first2, _II2 __last2, _Compare __comp)
    {
      typedef typename iterator_traits<_II1>::iterator_category _Category1;
      typedef typename iterator_traits<_II2>::iterator_category _Category2;
      typedef std::__lc_rai<_Category1, _Category2> __rai_type;




                                                       ;
                                                       ;

      __last1 = __rai_type::__newlast1(__first1, __last1, __first2, __last2);
      for (; __first1 != __last1 && __rai_type::__cnd2(__first2, __last2);
    ++__first1, ++__first2)
 {
   if (__comp(*__first1, *__first2))
     return true;
   if (__comp(*__first2, *__first1))
     return false;
 }
      return __first1 == __last1 && __first2 != __last2;
    }
# 1165 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _InputIterator1, typename _InputIterator2>
    pair<_InputIterator1, _InputIterator2>
    mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2)
    {






                                                       ;

      while (__first1 != __last1 && *__first1 == *__first2)
        {
   ++__first1;
   ++__first2;
        }
      return pair<_InputIterator1, _InputIterator2>(__first1, __first2);
    }
# 1202 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _InputIterator1, typename _InputIterator2,
    typename _BinaryPredicate>
    pair<_InputIterator1, _InputIterator2>
    mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2, _BinaryPredicate __binary_pred)
    {



                                                       ;

      while (__first1 != __last1 && bool(__binary_pred(*__first1, *__first2)))
        {
   ++__first1;
   ++__first2;
        }
      return pair<_InputIterator1, _InputIterator2>(__first1, __first2);
    }

}
# 41 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/char_traits.h" 2 3

# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 1 3
# 41 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 3
# 41 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 3


# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 1 3
# 41 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3
# 41 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3


# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 1 3 4
# 44 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 2 3
# 44 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 2 3
# 43 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/char_traits.h" 2 3








namespace __gnu_cxx {
# 63 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/char_traits.h" 3
  template<typename _CharT>
    struct _Char_types
    {
      typedef unsigned long int_type;
      typedef std::streampos pos_type;
      typedef std::streamoff off_type;
      typedef std::mbstate_t state_type;
    };
# 88 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/char_traits.h" 3
  template<typename _CharT>
    struct char_traits
    {
      typedef _CharT char_type;
      typedef typename _Char_types<_CharT>::int_type int_type;
      typedef typename _Char_types<_CharT>::pos_type pos_type;
      typedef typename _Char_types<_CharT>::off_type off_type;
      typedef typename _Char_types<_CharT>::state_type state_type;

      static void
      assign(char_type& __c1, const char_type& __c2)
      { __c1 = __c2; }

      static bool
      eq(const char_type& __c1, const char_type& __c2)
      { return __c1 == __c2; }

      static bool
      lt(const char_type& __c1, const char_type& __c2)
      { return __c1 < __c2; }

      static int
      compare(const char_type* __s1, const char_type* __s2, std::size_t __n);

      static std::size_t
      length(const char_type* __s);

      static const char_type*
      find(const char_type* __s, std::size_t __n, const char_type& __a);

      static char_type*
      move(char_type* __s1, const char_type* __s2, std::size_t __n);

      static char_type*
      copy(char_type* __s1, const char_type* __s2, std::size_t __n);

      static char_type*
      assign(char_type* __s, std::size_t __n, char_type __a);

      static char_type
      to_char_type(const int_type& __c)
      { return static_cast<char_type>(__c); }

      static int_type
      to_int_type(const char_type& __c)
      { return static_cast<int_type>(__c); }

      static bool
      eq_int_type(const int_type& __c1, const int_type& __c2)
      { return __c1 == __c2; }

      static int_type
      eof()
      { return static_cast<int_type>((-1)); }

      static int_type
      not_eof(const int_type& __c)
      { return !eq_int_type(__c, eof()) ? __c : to_int_type(char_type()); }
    };

  template<typename _CharT>
    int
    char_traits<_CharT>::
    compare(const char_type* __s1, const char_type* __s2, std::size_t __n)
    {
      for (std::size_t __i = 0; __i < __n; ++__i)
 if (lt(__s1[__i], __s2[__i]))
   return -1;
 else if (lt(__s2[__i], __s1[__i]))
   return 1;
      return 0;
    }

  template<typename _CharT>
    std::size_t
    char_traits<_CharT>::
    length(const char_type* __p)
    {
      std::size_t __i = 0;
      while (!eq(__p[__i], char_type()))
        ++__i;
      return __i;
    }

  template<typename _CharT>
    const typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    find(const char_type* __s, std::size_t __n, const char_type& __a)
    {
      for (std::size_t __i = 0; __i < __n; ++__i)
        if (eq(__s[__i], __a))
          return __s + __i;
      return 0;
    }

  template<typename _CharT>
    typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    move(char_type* __s1, const char_type* __s2, std::size_t __n)
    {
      return static_cast<_CharT*>(__builtin_memmove(__s1, __s2,
          __n * sizeof(char_type)));
    }

  template<typename _CharT>
    typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    copy(char_type* __s1, const char_type* __s2, std::size_t __n)
    {

      std::copy(__s2, __s2 + __n, __s1);
      return __s1;
    }

  template<typename _CharT>
    typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    assign(char_type* __s, std::size_t __n, char_type __a)
    {

      std::fill_n(__s, __n, __a);
      return __s;
    }

}

namespace std {
# 229 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/char_traits.h" 3
  template<class _CharT>
    struct char_traits : public __gnu_cxx::char_traits<_CharT>
    { };



  template<>
    struct char_traits<char>
    {
      typedef char char_type;
      typedef int int_type;
      typedef streampos pos_type;
      typedef streamoff off_type;
      typedef mbstate_t state_type;

      static void
      assign(char_type& __c1, const char_type& __c2)
      { __c1 = __c2; }

      static bool
      eq(const char_type& __c1, const char_type& __c2)
      { return __c1 == __c2; }

      static bool
      lt(const char_type& __c1, const char_type& __c2)
      { return __c1 < __c2; }

      static int
      compare(const char_type* __s1, const char_type* __s2, size_t __n)
      { return __builtin_memcmp(__s1, __s2, __n); }

      static size_t
      length(const char_type* __s)
      { return __builtin_strlen(__s); }

      static const char_type*
      find(const char_type* __s, size_t __n, const char_type& __a)
      { return static_cast<const char_type*>(__builtin_memchr(__s, __a, __n)); }

      static char_type*
      move(char_type* __s1, const char_type* __s2, size_t __n)
      { return static_cast<char_type*>(__builtin_memmove(__s1, __s2, __n)); }

      static char_type*
      copy(char_type* __s1, const char_type* __s2, size_t __n)
      { return static_cast<char_type*>(__builtin_memcpy(__s1, __s2, __n)); }

      static char_type*
      assign(char_type* __s, size_t __n, char_type __a)
      { return static_cast<char_type*>(__builtin_memset(__s, __a, __n)); }

      static char_type
      to_char_type(const int_type& __c)
      { return static_cast<char_type>(__c); }



      static int_type
      to_int_type(const char_type& __c)
      { return static_cast<int_type>(static_cast<unsigned char>(__c)); }

      static bool
      eq_int_type(const int_type& __c1, const int_type& __c2)
      { return __c1 == __c2; }

      static int_type
      eof()
      { return static_cast<int_type>((-1)); }

      static int_type
      not_eof(const int_type& __c)
      { return (__c == eof()) ? 0 : __c; }
  };




  template<>
    struct char_traits<wchar_t>
    {
      typedef wchar_t char_type;
      typedef wint_t int_type;
      typedef streamoff off_type;
      typedef wstreampos pos_type;
      typedef mbstate_t state_type;

      static void
      assign(char_type& __c1, const char_type& __c2)
      { __c1 = __c2; }

      static bool
      eq(const char_type& __c1, const char_type& __c2)
      { return __c1 == __c2; }

      static bool
      lt(const char_type& __c1, const char_type& __c2)
      { return __c1 < __c2; }

      static int
      compare(const char_type* __s1, const char_type* __s2, size_t __n)
      { return wmemcmp(__s1, __s2, __n); }

      static size_t
      length(const char_type* __s)
      { return wcslen(__s); }

      static const char_type*
      find(const char_type* __s, size_t __n, const char_type& __a)
      { return wmemchr(__s, __a, __n); }

      static char_type*
      move(char_type* __s1, const char_type* __s2, size_t __n)
      { return wmemmove(__s1, __s2, __n); }

      static char_type*
      copy(char_type* __s1, const char_type* __s2, size_t __n)
      { return wmemcpy(__s1, __s2, __n); }

      static char_type*
      assign(char_type* __s, size_t __n, char_type __a)
      { return wmemset(__s, __a, __n); }

      static char_type
      to_char_type(const int_type& __c)
      { return char_type(__c); }

      static int_type
      to_int_type(const char_type& __c)
      { return int_type(__c); }

      static bool
      eq_int_type(const int_type& __c1, const int_type& __c2)
      { return __c1 == __c2; }

      static int_type
      eof()
      { return static_cast<int_type>((wint_t)(0xFFFF)); }

      static int_type
      not_eof(const int_type& __c)
      { return eq_int_type(__c, eof()) ? 0 : __c; }
  };


}
# 41 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ios" 2 3
# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/localefwd.h" 1 3
# 39 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/localefwd.h" 3
# 39 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/localefwd.h" 3


# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++locale.h" 1 3
# 40 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++locale.h" 3
# 40 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++locale.h" 3

# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\clocale" 1 3
# 41 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\clocale" 3
# 41 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\clocale" 3


# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\locale.h" 1 3








# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 9 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\locale.h" 2 3


#pragma pack(push,_CRT_PACKING)


extern "C" {
# 41 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\locale.h" 3
  struct lconv {
    char *decimal_point;
    char *thousands_sep;
    char *grouping;
    char *int_curr_symbol;
    char *currency_symbol;
    char *mon_decimal_point;
    char *mon_thousands_sep;
    char *mon_grouping;
    char *positive_sign;
    char *negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
  };
# 75 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\locale.h" 3
  int _configthreadlocale(int _Flag);
  char * setlocale(int _Category,const char *_Locale);
  __attribute__ ((__dllimport__)) struct lconv * localeconv(void);
  _locale_t _get_current_locale(void);
  _locale_t _create_locale(int _Category,const char *_Locale);
  void _free_locale(_locale_t _Locale);
  _locale_t __get_current_locale(void);
  _locale_t __create_locale(int _Category,const char *_Locale);
  void __free_locale(_locale_t _Locale);







}


#pragma pack(pop)
# 44 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\clocale" 2 3








namespace std {

  using ::lconv;
  using ::setlocale;
  using ::localeconv;

}
# 42 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++locale.h" 2 3
# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 1 3
# 41 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3
# 41 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3


# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 1 3 4
# 44 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 2 3
# 43 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++locale.h" 2 3



namespace std {

  typedef int* __c_locale;





  inline int
  __convert_from_v(const __c_locale&, char* __out,
     const int __size __attribute__((__unused__)),
     const char* __fmt, ...)
  {
    char* __old = std::setlocale(4, __null);
    char* __sav = __null;
    if (__builtin_strcmp(__old, "C"))
      {
 const size_t __len = __builtin_strlen(__old) + 1;
 __sav = new char[__len];
 __builtin_memcpy(__sav, __old, __len);
 std::setlocale(4, "C");
      }

    __builtin_va_list __args;
    __builtin_va_start(__args, __fmt);


    const int __ret = __builtin_vsnprintf(__out, __size, __fmt, __args);




    __builtin_va_end(__args);

    if (__sav)
      {
 std::setlocale(4, __sav);
 delete [] __sav;
      }
    return __ret;
  }

}
# 42 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/localefwd.h" 2 3

# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cctype" 1 3
# 41 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cctype" 3
# 41 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cctype" 3


# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\ctype.h" 1 3








# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 9 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\ctype.h" 2 3



extern "C" {
# 72 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\ctype.h" 3
  extern const unsigned char __newclmap[];
  extern const unsigned char __newcumap[];
  extern pthreadlocinfo __ptlocinfo;
  extern pthreadmbcinfo __ptmbcinfo;
  extern int __globallocalestatus;
  extern int __locale_changed;
  extern struct threadlocaleinfostruct __initiallocinfo;
  extern _locale_tstruct __initiallocalestructinfo;
  pthreadlocinfo __updatetlocinfo(void);
  pthreadmbcinfo __updatetmbcinfo(void);
# 100 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\ctype.h" 3
  __attribute__ ((__dllimport__)) int _isctype(int _C,int _Type);
  __attribute__ ((__dllimport__)) int _isctype_l(int _C,int _Type,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int isalpha(int _C);
  __attribute__ ((__dllimport__)) int _isalpha_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int isupper(int _C);
  __attribute__ ((__dllimport__)) int _isupper_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int islower(int _C);
  __attribute__ ((__dllimport__)) int _islower_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int isdigit(int _C);
  __attribute__ ((__dllimport__)) int _isdigit_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int isxdigit(int _C);
  __attribute__ ((__dllimport__)) int _isxdigit_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int isspace(int _C);
  __attribute__ ((__dllimport__)) int _isspace_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int ispunct(int _C);
  __attribute__ ((__dllimport__)) int _ispunct_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int isalnum(int _C);
  __attribute__ ((__dllimport__)) int _isalnum_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int isprint(int _C);
  __attribute__ ((__dllimport__)) int _isprint_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int isgraph(int _C);
  __attribute__ ((__dllimport__)) int _isgraph_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int iscntrl(int _C);
  __attribute__ ((__dllimport__)) int _iscntrl_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int toupper(int _C);
  __attribute__ ((__dllimport__)) int tolower(int _C);
  __attribute__ ((__dllimport__)) int _tolower(int _C);
  __attribute__ ((__dllimport__)) int _tolower_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _toupper(int _C);
  __attribute__ ((__dllimport__)) int _toupper_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __isascii(int _C);
  __attribute__ ((__dllimport__)) int __toascii(int _C);
  __attribute__ ((__dllimport__)) int __iscsymf(int _C);
  __attribute__ ((__dllimport__)) int __iscsym(int _C);


int isblank(int _C);
# 193 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\ctype.h" 3
  extern int * __imp___mb_cur_max;
# 275 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\ctype.h" 3
}
# 44 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cctype" 2 3
# 63 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cctype" 3
namespace std {

  using ::isalnum;
  using ::isalpha;
  using ::iscntrl;
  using ::isdigit;
  using ::isgraph;
  using ::islower;
  using ::isprint;
  using ::ispunct;
  using ::isspace;
  using ::isupper;
  using ::isxdigit;
  using ::tolower;
  using ::toupper;

}
# 44 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/localefwd.h" 2 3

namespace std {
# 54 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/localefwd.h" 3
  class locale;

  template<typename _Facet>
    bool
    has_facet(const locale&) throw();

  template<typename _Facet>
    const _Facet&
    use_facet(const locale&);


  template<typename _CharT>
    bool
    isspace(_CharT, const locale&);

  template<typename _CharT>
    bool
    isprint(_CharT, const locale&);

  template<typename _CharT>
    bool
    iscntrl(_CharT, const locale&);

  template<typename _CharT>
    bool
    isupper(_CharT, const locale&);

  template<typename _CharT>
    bool
    islower(_CharT, const locale&);

  template<typename _CharT>
    bool
    isalpha(_CharT, const locale&);

  template<typename _CharT>
    bool
    isdigit(_CharT, const locale&);

  template<typename _CharT>
    bool
    ispunct(_CharT, const locale&);

  template<typename _CharT>
    bool
    isxdigit(_CharT, const locale&);

  template<typename _CharT>
    bool
    isalnum(_CharT, const locale&);

  template<typename _CharT>
    bool
    isgraph(_CharT, const locale&);

  template<typename _CharT>
    _CharT
    toupper(_CharT, const locale&);

  template<typename _CharT>
    _CharT
    tolower(_CharT, const locale&);


  class ctype_base;
  template<typename _CharT>
    class ctype;
  template<> class ctype<char>;

  template<> class ctype<wchar_t>;

  template<typename _CharT>
    class ctype_byname;


  class codecvt_base;
  template<typename _InternT, typename _ExternT, typename _StateT>
    class codecvt;
  template<> class codecvt<char, char, mbstate_t>;

  template<> class codecvt<wchar_t, char, mbstate_t>;

  template<typename _InternT, typename _ExternT, typename _StateT>
    class codecvt_byname;



  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class num_get;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class num_put;

  template<typename _CharT> class numpunct;
  template<typename _CharT> class numpunct_byname;


  template<typename _CharT>
    class collate;
  template<typename _CharT> class
    collate_byname;


  class time_base;
  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class time_get;
  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class time_get_byname;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class time_put;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class time_put_byname;


  class money_base;

  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class money_get;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class money_put;

  template<typename _CharT, bool _Intl = false>
    class moneypunct;
  template<typename _CharT, bool _Intl = false>
    class moneypunct_byname;


  class messages_base;
  template<typename _CharT>
    class messages;
  template<typename _CharT>
    class messages_byname;

}
# 42 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ios" 2 3
# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 1 3
# 39 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
# 39 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3

# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/atomicity.h" 1 3
# 34 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/atomicity.h" 3
# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr.h" 1 3
# 30 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr.h" 3
#pragma GCC visibility push(default)
# 162 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr.h" 3
# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr-default.h" 1 3
# 70 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr-default.h" 3
# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\errno.h" 1 3








# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 9 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\errno.h" 2 3



extern "C" {




__attribute__ ((__dllimport__)) extern int * _errno(void);


errno_t _set_errno(int _Value);
errno_t _get_errno(int *_Value);
# 74 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\errno.h" 3
}
# 71 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr-default.h" 2 3

# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 73 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr-default.h" 2 3
# 340 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr-default.h" 3
extern "C" {


typedef unsigned long __gthread_key_t;

typedef struct {
  int done;
  long started;
} __gthread_once_t;

typedef struct {
  long counter;
  void *sema;
} __gthread_mutex_t;

typedef struct {
  long counter;
  long depth;
  unsigned long owner;
  void *sema;
} __gthread_recursive_mutex_t;
# 374 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr-default.h" 3
extern int _CRT_MT;
extern int __mingwthr_key_dtor (unsigned long, void (*) (void *));
# 401 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr-default.h" 3
static inline int
__gthread_active_p (void)
{

  return _CRT_MT;



}







extern int __gthr_win32_once (__gthread_once_t *, void (*) (void));
extern int __gthr_win32_key_create (__gthread_key_t *, void (*) (void*));
extern int __gthr_win32_key_delete (__gthread_key_t);
extern void * __gthr_win32_getspecific (__gthread_key_t);
extern int __gthr_win32_setspecific (__gthread_key_t, const void *);
extern void __gthr_win32_mutex_init_function (__gthread_mutex_t *);
extern int __gthr_win32_mutex_lock (__gthread_mutex_t *);
extern int __gthr_win32_mutex_trylock (__gthread_mutex_t *);
extern int __gthr_win32_mutex_unlock (__gthread_mutex_t *);
extern void
  __gthr_win32_recursive_mutex_init_function (__gthread_recursive_mutex_t *);
extern int __gthr_win32_recursive_mutex_lock (__gthread_recursive_mutex_t *);
extern int
  __gthr_win32_recursive_mutex_trylock (__gthread_recursive_mutex_t *);
extern int __gthr_win32_recursive_mutex_unlock (__gthread_recursive_mutex_t *);
extern void __gthr_win32_mutex_destroy (__gthread_mutex_t *);

static inline int
__gthread_once (__gthread_once_t *__once, void (*__func) (void))
{
  if (__gthread_active_p ())
    return __gthr_win32_once (__once, __func);
  else
    return -1;
}

static inline int
__gthread_key_create (__gthread_key_t *__key, void (*__dtor) (void *))
{
  return __gthr_win32_key_create (__key, __dtor);
}

static inline int
__gthread_key_delete (__gthread_key_t __key)
{
  return __gthr_win32_key_delete (__key);
}

static inline void *
__gthread_getspecific (__gthread_key_t __key)
{
  return __gthr_win32_getspecific (__key);
}

static inline int
__gthread_setspecific (__gthread_key_t __key, const void *__ptr)
{
  return __gthr_win32_setspecific (__key, __ptr);
}

static inline void
__gthread_mutex_init_function (__gthread_mutex_t *__mutex)
{
  __gthr_win32_mutex_init_function (__mutex);
}

static inline void
__gthread_mutex_destroy (__gthread_mutex_t *__mutex)
{
  __gthr_win32_mutex_destroy (__mutex);
}

static inline int
__gthread_mutex_lock (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthr_win32_mutex_lock (__mutex);
  else
    return 0;
}

static inline int
__gthread_mutex_trylock (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthr_win32_mutex_trylock (__mutex);
  else
    return 0;
}

static inline int
__gthread_mutex_unlock (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthr_win32_mutex_unlock (__mutex);
  else
    return 0;
}

static inline void
__gthread_recursive_mutex_init_function (__gthread_recursive_mutex_t *__mutex)
{
   __gthr_win32_recursive_mutex_init_function (__mutex);
}

static inline int
__gthread_recursive_mutex_lock (__gthread_recursive_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthr_win32_recursive_mutex_lock (__mutex);
  else
    return 0;
}

static inline int
__gthread_recursive_mutex_trylock (__gthread_recursive_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthr_win32_recursive_mutex_trylock (__mutex);
  else
    return 0;
}

static inline int
__gthread_recursive_mutex_unlock (__gthread_recursive_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthr_win32_recursive_mutex_unlock (__mutex);
  else
    return 0;
}
# 767 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr-default.h" 3
}
# 163 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr.h" 2 3







#pragma GCC visibility pop
# 35 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/atomicity.h" 2 3
# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/atomic_word.h" 1 3
# 32 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/atomic_word.h" 3
typedef int _Atomic_word;
# 36 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/atomicity.h" 2 3

namespace __gnu_cxx {






  static inline _Atomic_word
  __exchange_and_add(volatile _Atomic_word* __mem, int __val)
  { return __sync_fetch_and_add(__mem, __val); }

  static inline void
  __atomic_add(volatile _Atomic_word* __mem, int __val)
  { __sync_fetch_and_add(__mem, __val); }
# 61 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/atomicity.h" 3
  static inline _Atomic_word
  __exchange_and_add_single(_Atomic_word* __mem, int __val)
  {
    _Atomic_word __result = *__mem;
    *__mem += __val;
    return __result;
  }

  static inline void
  __atomic_add_single(_Atomic_word* __mem, int __val)
  { *__mem += __val; }

  static inline _Atomic_word
  __attribute__ ((__unused__))
  __exchange_and_add_dispatch(_Atomic_word* __mem, int __val)
  {

    if (__gthread_active_p())
      return __exchange_and_add(__mem, __val);
    else
      return __exchange_and_add_single(__mem, __val);



  }

  static inline void
  __attribute__ ((__unused__))
  __atomic_add_dispatch(_Atomic_word* __mem, int __val)
  {

    if (__gthread_active_p())
      __atomic_add(__mem, __val);
    else
      __atomic_add_single(__mem, __val);



  }

}
# 41 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 2 3

# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 1 3
# 39 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
# 39 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3


# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\string" 1 3
# 38 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\string" 3
# 38 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\string" 3




# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/allocator.h" 1 3
# 48 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/allocator.h" 3
# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++allocator.h" 1 3
# 34 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++allocator.h" 3
# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/new_allocator.h" 1 3
# 33 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/new_allocator.h" 3
# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\new" 1 3
# 39 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\new" 3
# 39 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\new" 3

# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 1 3
# 41 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3
# 41 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3


# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 1 3 4
# 44 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 2 3
# 41 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\new" 2 3


#pragma GCC visibility push(default)

extern "C++" {

namespace std
{






  class bad_alloc : public exception
  {
  public:
    bad_alloc() throw() { }



    virtual ~bad_alloc() throw();


    virtual const char* what() const throw();
  };

  struct nothrow_t { };

  extern const nothrow_t nothrow;



  typedef void (*new_handler)();



  new_handler set_new_handler(new_handler) throw();
}
# 92 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\new" 3
void* operator new(std::size_t) throw (std::bad_alloc);
void* operator new[](std::size_t) throw (std::bad_alloc);
void operator delete(void*) throw();
void operator delete[](void*) throw();
void* operator new(std::size_t, const std::nothrow_t&) throw();
void* operator new[](std::size_t, const std::nothrow_t&) throw();
void operator delete(void*, const std::nothrow_t&) throw();
void operator delete[](void*, const std::nothrow_t&) throw();


inline void* operator new(std::size_t, void* __p) throw() { return __p; }
inline void* operator new[](std::size_t, void* __p) throw() { return __p; }


inline void operator delete (void*, void*) throw() { }
inline void operator delete[](void*, void*) throw() { }

}

#pragma GCC visibility pop
# 34 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/new_allocator.h" 2 3



namespace __gnu_cxx {

  using std::size_t;
  using std::ptrdiff_t;
# 50 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/new_allocator.h" 3
  template<typename _Tp>
    class new_allocator
    {
    public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef const _Tp* const_pointer;
      typedef _Tp& reference;
      typedef const _Tp& const_reference;
      typedef _Tp value_type;

      template<typename _Tp1>
        struct rebind
        { typedef new_allocator<_Tp1> other; };

      new_allocator() throw() { }

      new_allocator(const new_allocator&) throw() { }

      template<typename _Tp1>
        new_allocator(const new_allocator<_Tp1>&) throw() { }

      ~new_allocator() throw() { }

      pointer
      address(reference __x) const { return &__x; }

      const_pointer
      address(const_reference __x) const { return &__x; }



      pointer
      allocate(size_type __n, const void* = 0)
      {
 if (__n > this->max_size())
   std::__throw_bad_alloc();

 return static_cast<_Tp*>(::operator new(__n * sizeof(_Tp)));
      }


      void
      deallocate(pointer __p, size_type)
      { ::operator delete(__p); }

      size_type
      max_size() const throw()
      { return size_t(-1) / sizeof(_Tp); }



      void
      construct(pointer __p, const _Tp& __val)
      { ::new((void *)__p) _Tp(__val); }
# 114 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/new_allocator.h" 3
      void
      destroy(pointer __p) { __p->~_Tp(); }
    };

  template<typename _Tp>
    inline bool
    operator==(const new_allocator<_Tp>&, const new_allocator<_Tp>&)
    { return true; }

  template<typename _Tp>
    inline bool
    operator!=(const new_allocator<_Tp>&, const new_allocator<_Tp>&)
    { return false; }

}
# 35 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++allocator.h" 2 3
# 49 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/allocator.h" 2 3

namespace std {
# 59 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/allocator.h" 3
  template<typename _Tp>
    class allocator;


  template<>
    class allocator<void>
    {
    public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef void* pointer;
      typedef const void* const_pointer;
      typedef void value_type;

      template<typename _Tp1>
        struct rebind
        { typedef allocator<_Tp1> other; };
    };
# 85 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/allocator.h" 3
  template<typename _Tp>
    class allocator: public __gnu_cxx::new_allocator<_Tp>
    {
   public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef const _Tp* const_pointer;
      typedef _Tp& reference;
      typedef const _Tp& const_reference;
      typedef _Tp value_type;

      template<typename _Tp1>
        struct rebind
        { typedef allocator<_Tp1> other; };

      allocator() throw() { }

      allocator(const allocator& __a) throw()
      : __gnu_cxx::new_allocator<_Tp>(__a) { }

      template<typename _Tp1>
        allocator(const allocator<_Tp1>&) throw() { }

      ~allocator() throw() { }


    };

  template<typename _T1, typename _T2>
    inline bool
    operator==(const allocator<_T1>&, const allocator<_T2>&)
    { return true; }

  template<typename _Tp>
    inline bool
    operator==(const allocator<_Tp>&, const allocator<_Tp>&)
    { return true; }

  template<typename _T1, typename _T2>
    inline bool
    operator!=(const allocator<_T1>&, const allocator<_T2>&)
    { return false; }

  template<typename _Tp>
    inline bool
    operator!=(const allocator<_Tp>&, const allocator<_Tp>&)
    { return false; }





  extern template class allocator<char>;
  extern template class allocator<wchar_t>;






  template<typename _Alloc, bool = __is_empty(_Alloc)>
    struct __alloc_swap
    { static void _S_do_it(_Alloc&, _Alloc&) { } };

  template<typename _Alloc>
    struct __alloc_swap<_Alloc, false>
    {
      static void
      _S_do_it(_Alloc& __one, _Alloc& __two)
      {

 if (__one != __two)
   swap(__one, __two);
      }
    };


  template<typename _Alloc, bool = __is_empty(_Alloc)>
    struct __alloc_neq
    {
      static bool
      _S_do_it(const _Alloc&, const _Alloc&)
      { return false; }
    };

  template<typename _Alloc>
    struct __alloc_neq<_Alloc, false>
    {
      static bool
      _S_do_it(const _Alloc& __one, const _Alloc& __two)
      { return __one != __two; }
    };
# 204 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/allocator.h" 3
}
# 43 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\string" 2 3


# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ostream_insert.h" 1 3
# 33 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ostream_insert.h" 3
# 33 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ostream_insert.h" 3


# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cxxabi-forced.h" 1 3
# 33 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cxxabi-forced.h" 3
# 33 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cxxabi-forced.h" 3

#pragma GCC visibility push(default)


namespace __cxxabiv1
{







  class __forced_unwind
  {
    virtual ~__forced_unwind() throw();


    virtual void __pure_dummy() = 0;
  };
}


#pragma GCC visibility pop
# 36 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ostream_insert.h" 2 3

namespace std {

  template<typename _CharT, typename _Traits>
    inline void
    __ostream_write(basic_ostream<_CharT, _Traits>& __out,
      const _CharT* __s, streamsize __n)
    {
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef typename __ostream_type::ios_base __ios_base;

      const streamsize __put = __out.rdbuf()->sputn(__s, __n);
      if (__put != __n)
 __out.setstate(__ios_base::badbit);
    }

  template<typename _CharT, typename _Traits>
    inline void
    __ostream_fill(basic_ostream<_CharT, _Traits>& __out, streamsize __n)
    {
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef typename __ostream_type::ios_base __ios_base;

      const _CharT __c = __out.fill();
      for (; __n > 0; --__n)
 {
   const typename _Traits::int_type __put = __out.rdbuf()->sputc(__c);
   if (_Traits::eq_int_type(__put, _Traits::eof()))
     {
       __out.setstate(__ios_base::badbit);
       break;
     }
 }
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    __ostream_insert(basic_ostream<_CharT, _Traits>& __out,
       const _CharT* __s, streamsize __n)
    {
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef typename __ostream_type::ios_base __ios_base;

      typename __ostream_type::sentry __cerb(__out);
      if (__cerb)
 {
   if (true)
     {
       const streamsize __w = __out.width();
       if (__w > __n)
  {
    const bool __left = ((__out.flags()
     & __ios_base::adjustfield)
           == __ios_base::left);
    if (!__left)
      __ostream_fill(__out, __w - __n);
    if (__out.good())
      __ostream_write(__out, __s, __n);
    if (__left && __out.good())
      __ostream_fill(__out, __w - __n);
  }
       else
  __ostream_write(__out, __s, __n);
       __out.width(0);
     }
   if (false)
     {
       __out._M_setstate(__ios_base::badbit);
                              ;
     }
   if (false)
     { __out._M_setstate(__ios_base::badbit); }
 }
      return __out;
    }





  extern template ostream& __ostream_insert(ostream&, const char*, streamsize);


  extern template wostream& __ostream_insert(wostream&, const wchar_t*,
          streamsize);



}
# 46 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\string" 2 3



# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 1 3
# 60 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 3
namespace std {
# 99 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 3
  template<typename _Arg, typename _Result>
    struct unary_function
    {
      typedef _Arg argument_type;


      typedef _Result result_type;
    };




  template<typename _Arg1, typename _Arg2, typename _Result>
    struct binary_function
    {
      typedef _Arg1 first_argument_type;


      typedef _Arg2 second_argument_type;
      typedef _Result result_type;
    };
# 134 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 3
  template<typename _Tp>
    struct plus : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x + __y; }
    };


  template<typename _Tp>
    struct minus : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x - __y; }
    };


  template<typename _Tp>
    struct multiplies : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x * __y; }
    };


  template<typename _Tp>
    struct divides : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x / __y; }
    };


  template<typename _Tp>
    struct modulus : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x % __y; }
    };


  template<typename _Tp>
    struct negate : public unary_function<_Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x) const
      { return -__x; }
    };
# 198 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 3
  template<typename _Tp>
    struct equal_to : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x == __y; }
    };


  template<typename _Tp>
    struct not_equal_to : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x != __y; }
    };


  template<typename _Tp>
    struct greater : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x > __y; }
    };


  template<typename _Tp>
    struct less : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x < __y; }
    };


  template<typename _Tp>
    struct greater_equal : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x >= __y; }
    };


  template<typename _Tp>
    struct less_equal : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x <= __y; }
    };
# 262 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 3
  template<typename _Tp>
    struct logical_and : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x && __y; }
    };


  template<typename _Tp>
    struct logical_or : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x || __y; }
    };


  template<typename _Tp>
    struct logical_not : public unary_function<_Tp, bool>
    {
      bool
      operator()(const _Tp& __x) const
      { return !__x; }
    };




  template<typename _Tp>
    struct bit_and : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x & __y; }
    };

  template<typename _Tp>
    struct bit_or : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x | __y; }
    };

  template<typename _Tp>
    struct bit_xor : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x ^ __y; }
    };
# 345 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 3
  template<typename _Predicate>
    class unary_negate
    : public unary_function<typename _Predicate::argument_type, bool>
    {
    protected:
      _Predicate _M_pred;

    public:
      explicit
      unary_negate(const _Predicate& __x) : _M_pred(__x) { }

      bool
      operator()(const typename _Predicate::argument_type& __x) const
      { return !_M_pred(__x); }
    };


  template<typename _Predicate>
    inline unary_negate<_Predicate>
    not1(const _Predicate& __pred)
    { return unary_negate<_Predicate>(__pred); }


  template<typename _Predicate>
    class binary_negate
    : public binary_function<typename _Predicate::first_argument_type,
        typename _Predicate::second_argument_type, bool>
    {
    protected:
      _Predicate _M_pred;

    public:
      explicit
      binary_negate(const _Predicate& __x) : _M_pred(__x) { }

      bool
      operator()(const typename _Predicate::first_argument_type& __x,
   const typename _Predicate::second_argument_type& __y) const
      { return !_M_pred(__x, __y); }
    };


  template<typename _Predicate>
    inline binary_negate<_Predicate>
    not2(const _Predicate& __pred)
    { return binary_negate<_Predicate>(__pred); }
# 416 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 3
  template<typename _Arg, typename _Result>
    class pointer_to_unary_function : public unary_function<_Arg, _Result>
    {
    protected:
      _Result (*_M_ptr)(_Arg);

    public:
      pointer_to_unary_function() { }

      explicit
      pointer_to_unary_function(_Result (*__x)(_Arg))
      : _M_ptr(__x) { }

      _Result
      operator()(_Arg __x) const
      { return _M_ptr(__x); }
    };


  template<typename _Arg, typename _Result>
    inline pointer_to_unary_function<_Arg, _Result>
    ptr_fun(_Result (*__x)(_Arg))
    { return pointer_to_unary_function<_Arg, _Result>(__x); }


  template<typename _Arg1, typename _Arg2, typename _Result>
    class pointer_to_binary_function
    : public binary_function<_Arg1, _Arg2, _Result>
    {
    protected:
      _Result (*_M_ptr)(_Arg1, _Arg2);

    public:
      pointer_to_binary_function() { }

      explicit
      pointer_to_binary_function(_Result (*__x)(_Arg1, _Arg2))
      : _M_ptr(__x) { }

      _Result
      operator()(_Arg1 __x, _Arg2 __y) const
      { return _M_ptr(__x, __y); }
    };


  template<typename _Arg1, typename _Arg2, typename _Result>
    inline pointer_to_binary_function<_Arg1, _Arg2, _Result>
    ptr_fun(_Result (*__x)(_Arg1, _Arg2))
    { return pointer_to_binary_function<_Arg1, _Arg2, _Result>(__x); }


  template<typename _Tp>
    struct _Identity : public unary_function<_Tp,_Tp>
    {
      _Tp&
      operator()(_Tp& __x) const
      { return __x; }

      const _Tp&
      operator()(const _Tp& __x) const
      { return __x; }
    };

  template<typename _Pair>
    struct _Select1st : public unary_function<_Pair,
           typename _Pair::first_type>
    {
      typename _Pair::first_type&
      operator()(_Pair& __x) const
      { return __x.first; }

      const typename _Pair::first_type&
      operator()(const _Pair& __x) const
      { return __x.first; }
    };

  template<typename _Pair>
    struct _Select2nd : public unary_function<_Pair,
           typename _Pair::second_type>
    {
      typename _Pair::second_type&
      operator()(_Pair& __x) const
      { return __x.second; }

      const typename _Pair::second_type&
      operator()(const _Pair& __x) const
      { return __x.second; }
    };
# 523 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 3
  template<typename _Ret, typename _Tp>
    class mem_fun_t : public unary_function<_Tp*, _Ret>
    {
    public:
      explicit
      mem_fun_t(_Ret (_Tp::*__pf)())
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp* __p) const
      { return (__p->*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)();
    };



  template<typename _Ret, typename _Tp>
    class const_mem_fun_t : public unary_function<const _Tp*, _Ret>
    {
    public:
      explicit
      const_mem_fun_t(_Ret (_Tp::*__pf)() const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp* __p) const
      { return (__p->*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)() const;
    };



  template<typename _Ret, typename _Tp>
    class mem_fun_ref_t : public unary_function<_Tp, _Ret>
    {
    public:
      explicit
      mem_fun_ref_t(_Ret (_Tp::*__pf)())
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp& __r) const
      { return (__r.*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)();
  };



  template<typename _Ret, typename _Tp>
    class const_mem_fun_ref_t : public unary_function<_Tp, _Ret>
    {
    public:
      explicit
      const_mem_fun_ref_t(_Ret (_Tp::*__pf)() const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp& __r) const
      { return (__r.*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)() const;
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class mem_fun1_t : public binary_function<_Tp*, _Arg, _Ret>
    {
    public:
      explicit
      mem_fun1_t(_Ret (_Tp::*__pf)(_Arg))
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp* __p, _Arg __x) const
      { return (__p->*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg);
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class const_mem_fun1_t : public binary_function<const _Tp*, _Arg, _Ret>
    {
    public:
      explicit
      const_mem_fun1_t(_Ret (_Tp::*__pf)(_Arg) const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp* __p, _Arg __x) const
      { return (__p->*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg) const;
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class mem_fun1_ref_t : public binary_function<_Tp, _Arg, _Ret>
    {
    public:
      explicit
      mem_fun1_ref_t(_Ret (_Tp::*__pf)(_Arg))
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp& __r, _Arg __x) const
      { return (__r.*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg);
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class const_mem_fun1_ref_t : public binary_function<_Tp, _Arg, _Ret>
    {
    public:
      explicit
      const_mem_fun1_ref_t(_Ret (_Tp::*__pf)(_Arg) const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp& __r, _Arg __x) const
      { return (__r.*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg) const;
    };



  template<typename _Ret, typename _Tp>
    inline mem_fun_t<_Ret, _Tp>
    mem_fun(_Ret (_Tp::*__f)())
    { return mem_fun_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp>
    inline const_mem_fun_t<_Ret, _Tp>
    mem_fun(_Ret (_Tp::*__f)() const)
    { return const_mem_fun_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp>
    inline mem_fun_ref_t<_Ret, _Tp>
    mem_fun_ref(_Ret (_Tp::*__f)())
    { return mem_fun_ref_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp>
    inline const_mem_fun_ref_t<_Ret, _Tp>
    mem_fun_ref(_Ret (_Tp::*__f)() const)
    { return const_mem_fun_ref_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline mem_fun1_t<_Ret, _Tp, _Arg>
    mem_fun(_Ret (_Tp::*__f)(_Arg))
    { return mem_fun1_t<_Ret, _Tp, _Arg>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline const_mem_fun1_t<_Ret, _Tp, _Arg>
    mem_fun(_Ret (_Tp::*__f)(_Arg) const)
    { return const_mem_fun1_t<_Ret, _Tp, _Arg>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline mem_fun1_ref_t<_Ret, _Tp, _Arg>
    mem_fun_ref(_Ret (_Tp::*__f)(_Arg))
    { return mem_fun1_ref_t<_Ret, _Tp, _Arg>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline const_mem_fun1_ref_t<_Ret, _Tp, _Arg>
    mem_fun_ref(_Ret (_Tp::*__f)(_Arg) const)
    { return const_mem_fun1_ref_t<_Ret, _Tp, _Arg>(__f); }



}



# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\backward/binders.h" 1 3
# 60 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\backward/binders.h" 3
namespace std {
# 97 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\backward/binders.h" 3
  template<typename _Operation>
    class binder1st
    : public unary_function<typename _Operation::second_argument_type,
       typename _Operation::result_type>
    {
    protected:
      _Operation op;
      typename _Operation::first_argument_type value;

    public:
      binder1st(const _Operation& __x,
  const typename _Operation::first_argument_type& __y)
      : op(__x), value(__y) { }

      typename _Operation::result_type
      operator()(const typename _Operation::second_argument_type& __x) const
      { return op(value, __x); }



      typename _Operation::result_type
      operator()(typename _Operation::second_argument_type& __x) const
      { return op(value, __x); }
    } ;


  template<typename _Operation, typename _Tp>
    inline binder1st<_Operation>
    bind1st(const _Operation& __fn, const _Tp& __x)
    {
      typedef typename _Operation::first_argument_type _Arg1_type;
      return binder1st<_Operation>(__fn, _Arg1_type(__x));
    }


  template<typename _Operation>
    class binder2nd
    : public unary_function<typename _Operation::first_argument_type,
       typename _Operation::result_type>
    {
    protected:
      _Operation op;
      typename _Operation::second_argument_type value;

    public:
      binder2nd(const _Operation& __x,
  const typename _Operation::second_argument_type& __y)
      : op(__x), value(__y) { }

      typename _Operation::result_type
      operator()(const typename _Operation::first_argument_type& __x) const
      { return op(__x, value); }



      typename _Operation::result_type
      operator()(typename _Operation::first_argument_type& __x) const
      { return op(__x, value); }
    } ;


  template<typename _Operation, typename _Tp>
    inline binder2nd<_Operation>
    bind2nd(const _Operation& __fn, const _Tp& __x)
    {
      typedef typename _Operation::second_argument_type _Arg2_type;
      return binder2nd<_Operation>(__fn, _Arg2_type(__x));
    }


}
# 713 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 2 3
# 50 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\string" 2 3


# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 1 3
# 39 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
# 39 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3



# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\initializer_list" 1 3
# 33 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\initializer_list" 3
# 33 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\initializer_list" 3
# 43 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 2 3

namespace std {
# 103 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    class basic_string
    {
      typedef typename _Alloc::template rebind<_CharT>::other _CharT_alloc_type;


    public:
      typedef _Traits traits_type;
      typedef typename _Traits::char_type value_type;
      typedef _Alloc allocator_type;
      typedef typename _CharT_alloc_type::size_type size_type;
      typedef typename _CharT_alloc_type::difference_type difference_type;
      typedef typename _CharT_alloc_type::reference reference;
      typedef typename _CharT_alloc_type::const_reference const_reference;
      typedef typename _CharT_alloc_type::pointer pointer;
      typedef typename _CharT_alloc_type::const_pointer const_pointer;
      typedef __gnu_cxx::__normal_iterator<pointer, basic_string> iterator;
      typedef __gnu_cxx::__normal_iterator<const_pointer, basic_string>
                                                            const_iterator;
      typedef std::reverse_iterator<const_iterator> const_reverse_iterator;
      typedef std::reverse_iterator<iterator> reverse_iterator;

    private:
# 140 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      struct _Rep_base
      {
 size_type _M_length;
 size_type _M_capacity;
 _Atomic_word _M_refcount;
      };

      struct _Rep : _Rep_base
      {

 typedef typename _Alloc::template rebind<char>::other _Raw_bytes_alloc;
# 165 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 static const size_type _S_max_size;
 static const _CharT _S_terminal;



        static size_type _S_empty_rep_storage[];

        static _Rep&
        _S_empty_rep()
        {



   void* __p = reinterpret_cast<void*>(&_S_empty_rep_storage);
   return *reinterpret_cast<_Rep*>(__p);
 }

        bool
 _M_is_leaked() const
        { return this->_M_refcount < 0; }

        bool
 _M_is_shared() const
        { return this->_M_refcount > 0; }

        void
 _M_set_leaked()
        { this->_M_refcount = -1; }

        void
 _M_set_sharable()
        { this->_M_refcount = 0; }

 void
 _M_set_length_and_sharable(size_type __n)
 {



     {
       this->_M_set_sharable();
       this->_M_length = __n;
       traits_type::assign(this->_M_refdata()[__n], _S_terminal);


     }
 }

 _CharT*
 _M_refdata() throw()
 { return reinterpret_cast<_CharT*>(this + 1); }

 _CharT*
 _M_grab(const _Alloc& __alloc1, const _Alloc& __alloc2)
 {
   return (!_M_is_leaked() && __alloc1 == __alloc2)
           ? _M_refcopy() : _M_clone(__alloc1);
 }


 static _Rep*
 _S_create(size_type, size_type, const _Alloc&);

 void
 _M_dispose(const _Alloc& __a)
 {



     if (__gnu_cxx::__exchange_and_add_dispatch(&this->_M_refcount,
             -1) <= 0)
       _M_destroy(__a);
 }

 void
 _M_destroy(const _Alloc&) throw();

 _CharT*
 _M_refcopy() throw()
 {



            __gnu_cxx::__atomic_add_dispatch(&this->_M_refcount, 1);
   return _M_refdata();
 }

 _CharT*
 _M_clone(const _Alloc&, size_type __res = 0);
      };


      struct _Alloc_hider : _Alloc
      {
 _Alloc_hider(_CharT* __dat, const _Alloc& __a)
 : _Alloc(__a), _M_p(__dat) { }

 _CharT* _M_p;
      };

    public:




      static const size_type npos = static_cast<size_type>(-1);

    private:

      mutable _Alloc_hider _M_dataplus;

      _CharT*
      _M_data() const
      { return _M_dataplus._M_p; }

      _CharT*
      _M_data(_CharT* __p)
      { return (_M_dataplus._M_p = __p); }

      _Rep*
      _M_rep() const
      { return &((reinterpret_cast<_Rep*> (_M_data()))[-1]); }



      iterator
      _M_ibegin() const
      { return iterator(_M_data()); }

      iterator
      _M_iend() const
      { return iterator(_M_data() + this->size()); }

      void
      _M_leak()
      {
 if (!_M_rep()->_M_is_leaked())
   _M_leak_hard();
      }

      size_type
      _M_check(size_type __pos, const char* __s) const
      {
 if (__pos > this->size())
   __throw_out_of_range((__s));
 return __pos;
      }

      void
      _M_check_length(size_type __n1, size_type __n2, const char* __s) const
      {
 if (this->max_size() - (this->size() - __n1) < __n2)
   __throw_length_error((__s));
      }


      size_type
      _M_limit(size_type __pos, size_type __off) const
      {
 const bool __testoff = __off < this->size() - __pos;
 return __testoff ? __off : this->size() - __pos;
      }


      bool
      _M_disjunct(const _CharT* __s) const
      {
 return (less<const _CharT*>()(__s, _M_data())
  || less<const _CharT*>()(_M_data() + this->size(), __s));
      }



      static void
      _M_copy(_CharT* __d, const _CharT* __s, size_type __n)
      {
 if (__n == 1)
   traits_type::assign(*__d, *__s);
 else
   traits_type::copy(__d, __s, __n);
      }

      static void
      _M_move(_CharT* __d, const _CharT* __s, size_type __n)
      {
 if (__n == 1)
   traits_type::assign(*__d, *__s);
 else
   traits_type::move(__d, __s, __n);
      }

      static void
      _M_assign(_CharT* __d, size_type __n, _CharT __c)
      {
 if (__n == 1)
   traits_type::assign(*__d, __c);
 else
   traits_type::assign(__d, __n, __c);
      }



      template<class _Iterator>
        static void
        _S_copy_chars(_CharT* __p, _Iterator __k1, _Iterator __k2)
        {
   for (; __k1 != __k2; ++__k1, ++__p)
     traits_type::assign(*__p, *__k1);
 }

      static void
      _S_copy_chars(_CharT* __p, iterator __k1, iterator __k2)
      { _S_copy_chars(__p, __k1.base(), __k2.base()); }

      static void
      _S_copy_chars(_CharT* __p, const_iterator __k1, const_iterator __k2)
      { _S_copy_chars(__p, __k1.base(), __k2.base()); }

      static void
      _S_copy_chars(_CharT* __p, _CharT* __k1, _CharT* __k2)
      { _M_copy(__p, __k1, __k2 - __k1); }

      static void
      _S_copy_chars(_CharT* __p, const _CharT* __k1, const _CharT* __k2)
      { _M_copy(__p, __k1, __k2 - __k1); }

      static int
      _S_compare(size_type __n1, size_type __n2)
      {
 const difference_type __d = difference_type(__n1 - __n2);

 if (__d > __gnu_cxx::__numeric_traits<int>::__max)
   return __gnu_cxx::__numeric_traits<int>::__max;
 else if (__d < __gnu_cxx::__numeric_traits<int>::__min)
   return __gnu_cxx::__numeric_traits<int>::__min;
 else
   return int(__d);
      }

      void
      _M_mutate(size_type __pos, size_type __len1, size_type __len2);

      void
      _M_leak_hard();

      static _Rep&
      _S_empty_rep()
      { return _Rep::_S_empty_rep(); }

    public:







      basic_string()



      : _M_dataplus(_S_construct(size_type(), _CharT(), _Alloc()), _Alloc()){ }





      explicit
      basic_string(const _Alloc& __a);






      basic_string(const basic_string& __str);






      basic_string(const basic_string& __str, size_type __pos,
     size_type __n = npos);







      basic_string(const basic_string& __str, size_type __pos,
     size_type __n, const _Alloc& __a);
# 468 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string(const _CharT* __s, size_type __n,
     const _Alloc& __a = _Alloc());





      basic_string(const _CharT* __s, const _Alloc& __a = _Alloc());






      basic_string(size_type __n, _CharT __c, const _Alloc& __a = _Alloc());
# 516 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      template<class _InputIterator>
        basic_string(_InputIterator __beg, _InputIterator __end,
       const _Alloc& __a = _Alloc());




      ~basic_string()
      { _M_rep()->_M_dispose(this->get_allocator()); }





      basic_string&
      operator=(const basic_string& __str)
      { return this->assign(__str); }





      basic_string&
      operator=(const _CharT* __s)
      { return this->assign(__s); }
# 549 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      operator=(_CharT __c)
      {
 this->assign(1, __c);
 return *this;
      }
# 589 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      iterator
      begin()
      {
 _M_leak();
 return iterator(_M_data());
      }





      const_iterator
      begin() const
      { return const_iterator(_M_data()); }





      iterator
      end()
      {
 _M_leak();
 return iterator(_M_data() + this->size());
      }





      const_iterator
      end() const
      { return const_iterator(_M_data() + this->size()); }






      reverse_iterator
      rbegin()
      { return reverse_iterator(this->end()); }






      const_reverse_iterator
      rbegin() const
      { return const_reverse_iterator(this->end()); }






      reverse_iterator
      rend()
      { return reverse_iterator(this->begin()); }






      const_reverse_iterator
      rend() const
      { return const_reverse_iterator(this->begin()); }
# 695 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
    public:



      size_type
      size() const
      { return _M_rep()->_M_length; }



      size_type
      length() const
      { return _M_rep()->_M_length; }


      size_type
      max_size() const
      { return _Rep::_S_max_size; }
# 724 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      void
      resize(size_type __n, _CharT __c);
# 737 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      void
      resize(size_type __n)
      { this->resize(__n, _CharT()); }
# 757 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      capacity() const
      { return _M_rep()->_M_capacity; }
# 778 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      void
      reserve(size_type __res_arg = 0);




      void
      clear()
      { _M_mutate(0, this->size(), 0); }





      bool
      empty() const
      { return this->size() == 0; }
# 807 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      const_reference
      operator[] (size_type __pos) const
      {
                                       ;
 return _M_data()[__pos];
      }
# 824 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      reference
      operator[](size_type __pos)
      {

                                       ;

                                         ;
 _M_leak();
 return _M_data()[__pos];
      }
# 845 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      const_reference
      at(size_type __n) const
      {
 if (__n >= this->size())
   __throw_out_of_range(("basic_string::at"));
 return _M_data()[__n];
      }
# 864 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      reference
      at(size_type __n)
      {
 if (__n >= size())
   __throw_out_of_range(("basic_string::at"));
 _M_leak();
 return _M_data()[__n];
      }







      basic_string&
      operator+=(const basic_string& __str)
      { return this->append(__str); }






      basic_string&
      operator+=(const _CharT* __s)
      { return this->append(__s); }






      basic_string&
      operator+=(_CharT __c)
      {
 this->push_back(__c);
 return *this;
      }
# 920 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      append(const basic_string& __str);
# 935 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      append(const basic_string& __str, size_type __pos, size_type __n);







      basic_string&
      append(const _CharT* __s, size_type __n);






      basic_string&
      append(const _CharT* __s)
      {
                               ;
 return this->append(__s, traits_type::length(__s));
      }
# 967 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      append(size_type __n, _CharT __c);
# 989 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      template<class _InputIterator>
        basic_string&
        append(_InputIterator __first, _InputIterator __last)
        { return this->replace(_M_iend(), _M_iend(), __first, __last); }





      void
      push_back(_CharT __c)
      {
 const size_type __len = 1 + this->size();
 if (__len > this->capacity() || _M_rep()->_M_is_shared())
   this->reserve(__len);
 traits_type::assign(_M_data()[this->size()], __c);
 _M_rep()->_M_set_length_and_sharable(__len);
      }






      basic_string&
      assign(const basic_string& __str);
# 1045 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      assign(const basic_string& __str, size_type __pos, size_type __n)
      { return this->assign(__str._M_data()
       + __str._M_check(__pos, "basic_string::assign"),
       __str._M_limit(__pos, __n)); }
# 1061 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      assign(const _CharT* __s, size_type __n);
# 1073 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      assign(const _CharT* __s)
      {
                               ;
 return this->assign(__s, traits_type::length(__s));
      }
# 1089 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      assign(size_type __n, _CharT __c)
      { return _M_replace_aux(size_type(0), this->size(), __n, __c); }
# 1101 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      template<class _InputIterator>
        basic_string&
        assign(_InputIterator __first, _InputIterator __last)
        { return this->replace(_M_ibegin(), _M_iend(), __first, __last); }
# 1129 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      void
      insert(iterator __p, size_type __n, _CharT __c)
      { this->replace(__p, __p, __n, __c); }
# 1144 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      template<class _InputIterator>
        void
        insert(iterator __p, _InputIterator __beg, _InputIterator __end)
        { this->replace(__p, __p, __beg, __end); }
# 1175 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos1, const basic_string& __str)
      { return this->insert(__pos1, __str, size_type(0), __str.size()); }
# 1197 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos1, const basic_string& __str,
      size_type __pos2, size_type __n)
      { return this->insert(__pos1, __str._M_data()
       + __str._M_check(__pos2, "basic_string::insert"),
       __str._M_limit(__pos2, __n)); }
# 1220 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos, const _CharT* __s, size_type __n);
# 1238 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos, const _CharT* __s)
      {
                               ;
 return this->insert(__pos, __s, traits_type::length(__s));
      }
# 1261 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos, size_type __n, _CharT __c)
      { return _M_replace_aux(_M_check(__pos, "basic_string::insert"),
         size_type(0), __n, __c); }
# 1278 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      iterator
      insert(iterator __p, _CharT __c)
      {
                                                                 ;
 const size_type __pos = __p - _M_ibegin();
 _M_replace_aux(__pos, size_type(0), size_type(1), __c);
 _M_rep()->_M_set_leaked();
 return iterator(_M_data() + __pos);
      }
# 1302 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      erase(size_type __pos = 0, size_type __n = npos)
      {
 _M_mutate(_M_check(__pos, "basic_string::erase"),
    _M_limit(__pos, __n), size_type(0));
 return *this;
      }
# 1318 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      iterator
      erase(iterator __position)
      {

                               ;
 const size_type __pos = __position - _M_ibegin();
 _M_mutate(__pos, size_type(1), size_type(0));
 _M_rep()->_M_set_leaked();
 return iterator(_M_data() + __pos);
      }
# 1338 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      iterator
      erase(iterator __first, iterator __last);
# 1357 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n, const basic_string& __str)
      { return this->replace(__pos, __n, __str._M_data(), __str.size()); }
# 1379 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos1, size_type __n1, const basic_string& __str,
       size_type __pos2, size_type __n2)
      { return this->replace(__pos1, __n1, __str._M_data()
        + __str._M_check(__pos2, "basic_string::replace"),
        __str._M_limit(__pos2, __n2)); }
# 1403 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n1, const _CharT* __s,
       size_type __n2);
# 1422 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n1, const _CharT* __s)
      {
                               ;
 return this->replace(__pos, __n1, __s, traits_type::length(__s));
      }
# 1445 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n1, size_type __n2, _CharT __c)
      { return _M_replace_aux(_M_check(__pos, "basic_string::replace"),
         _M_limit(__pos, __n1), __n2, __c); }
# 1463 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      replace(iterator __i1, iterator __i2, const basic_string& __str)
      { return this->replace(__i1, __i2, __str._M_data(), __str.size()); }
# 1481 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      replace(iterator __i1, iterator __i2, const _CharT* __s, size_type __n)
      {

                          ;
 return this->replace(__i1 - _M_ibegin(), __i2 - __i1, __s, __n);
      }
# 1502 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      replace(iterator __i1, iterator __i2, const _CharT* __s)
      {
                               ;
 return this->replace(__i1, __i2, __s, traits_type::length(__s));
      }
# 1523 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      replace(iterator __i1, iterator __i2, size_type __n, _CharT __c)
      {

                          ;
 return _M_replace_aux(__i1 - _M_ibegin(), __i2 - __i1, __n, __c);
      }
# 1545 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      template<class _InputIterator>
        basic_string&
        replace(iterator __i1, iterator __i2,
  _InputIterator __k1, _InputIterator __k2)
        {

                            ;
                                             ;
   typedef typename std::__is_integer<_InputIterator>::__type _Integral;
   return _M_replace_dispatch(__i1, __i2, __k1, __k2, _Integral());
 }



      basic_string&
      replace(iterator __i1, iterator __i2, _CharT* __k1, _CharT* __k2)
      {

                          ;
                                           ;
 return this->replace(__i1 - _M_ibegin(), __i2 - __i1,
        __k1, __k2 - __k1);
      }

      basic_string&
      replace(iterator __i1, iterator __i2,
       const _CharT* __k1, const _CharT* __k2)
      {

                          ;
                                           ;
 return this->replace(__i1 - _M_ibegin(), __i2 - __i1,
        __k1, __k2 - __k1);
      }

      basic_string&
      replace(iterator __i1, iterator __i2, iterator __k1, iterator __k2)
      {

                          ;
                                           ;
 return this->replace(__i1 - _M_ibegin(), __i2 - __i1,
        __k1.base(), __k2 - __k1);
      }

      basic_string&
      replace(iterator __i1, iterator __i2,
       const_iterator __k1, const_iterator __k2)
      {

                          ;
                                           ;
 return this->replace(__i1 - _M_ibegin(), __i2 - __i1,
        __k1.base(), __k2 - __k1);
      }
# 1620 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
    private:
      template<class _Integer>
 basic_string&
 _M_replace_dispatch(iterator __i1, iterator __i2, _Integer __n,
       _Integer __val, __true_type)
        { return _M_replace_aux(__i1 - _M_ibegin(), __i2 - __i1, __n, __val); }

      template<class _InputIterator>
 basic_string&
 _M_replace_dispatch(iterator __i1, iterator __i2, _InputIterator __k1,
       _InputIterator __k2, __false_type);

      basic_string&
      _M_replace_aux(size_type __pos1, size_type __n1, size_type __n2,
       _CharT __c);

      basic_string&
      _M_replace_safe(size_type __pos1, size_type __n1, const _CharT* __s,
        size_type __n2);



      template<class _InIterator>
        static _CharT*
        _S_construct_aux(_InIterator __beg, _InIterator __end,
    const _Alloc& __a, __false_type)
 {
          typedef typename iterator_traits<_InIterator>::iterator_category _Tag;
          return _S_construct(__beg, __end, __a, _Tag());
 }



      template<class _Integer>
        static _CharT*
        _S_construct_aux(_Integer __beg, _Integer __end,
    const _Alloc& __a, __true_type)
        { return _S_construct_aux_2(static_cast<size_type>(__beg),
        __end, __a); }

      static _CharT*
      _S_construct_aux_2(size_type __req, _CharT __c, const _Alloc& __a)
      { return _S_construct(__req, __c, __a); }

      template<class _InIterator>
        static _CharT*
        _S_construct(_InIterator __beg, _InIterator __end, const _Alloc& __a)
 {
   typedef typename std::__is_integer<_InIterator>::__type _Integral;
   return _S_construct_aux(__beg, __end, __a, _Integral());
        }


      template<class _InIterator>
        static _CharT*
         _S_construct(_InIterator __beg, _InIterator __end, const _Alloc& __a,
        input_iterator_tag);



      template<class _FwdIterator>
        static _CharT*
        _S_construct(_FwdIterator __beg, _FwdIterator __end, const _Alloc& __a,
       forward_iterator_tag);

      static _CharT*
      _S_construct(size_type __req, _CharT __c, const _Alloc& __a);

    public:
# 1701 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      copy(_CharT* __s, size_type __n, size_type __pos = 0) const;
# 1711 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      void
      swap(basic_string& __s);
# 1721 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      const _CharT*
      c_str() const
      { return _M_data(); }







      const _CharT*
      data() const
      { return _M_data(); }




      allocator_type
      get_allocator() const
      { return _M_dataplus; }
# 1753 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find(const _CharT* __s, size_type __pos, size_type __n) const;
# 1766 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find(const basic_string& __str, size_type __pos = 0) const
      { return this->find(__str.data(), __pos, __str.size()); }
# 1780 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find(const _CharT* __s, size_type __pos = 0) const
      {
                               ;
 return this->find(__s, __pos, traits_type::length(__s));
      }
# 1797 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find(_CharT __c, size_type __pos = 0) const;
# 1810 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      rfind(const basic_string& __str, size_type __pos = npos) const
      { return this->rfind(__str.data(), __pos, __str.size()); }
# 1825 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      rfind(const _CharT* __s, size_type __pos, size_type __n) const;
# 1838 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      rfind(const _CharT* __s, size_type __pos = npos) const
      {
                               ;
 return this->rfind(__s, __pos, traits_type::length(__s));
      }
# 1855 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      rfind(_CharT __c, size_type __pos = npos) const;
# 1868 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_first_of(const basic_string& __str, size_type __pos = 0) const
      { return this->find_first_of(__str.data(), __pos, __str.size()); }
# 1883 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_first_of(const _CharT* __s, size_type __pos, size_type __n) const;
# 1896 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_first_of(const _CharT* __s, size_type __pos = 0) const
      {
                               ;
 return this->find_first_of(__s, __pos, traits_type::length(__s));
      }
# 1915 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_first_of(_CharT __c, size_type __pos = 0) const
      { return this->find(__c, __pos); }
# 1929 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_last_of(const basic_string& __str, size_type __pos = npos) const
      { return this->find_last_of(__str.data(), __pos, __str.size()); }
# 1944 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_last_of(const _CharT* __s, size_type __pos, size_type __n) const;
# 1957 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_last_of(const _CharT* __s, size_type __pos = npos) const
      {
                               ;
 return this->find_last_of(__s, __pos, traits_type::length(__s));
      }
# 1976 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_last_of(_CharT __c, size_type __pos = npos) const
      { return this->rfind(__c, __pos); }
# 1990 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_first_not_of(const basic_string& __str, size_type __pos = 0) const
      { return this->find_first_not_of(__str.data(), __pos, __str.size()); }
# 2005 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_first_not_of(const _CharT* __s, size_type __pos,
   size_type __n) const;
# 2019 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_first_not_of(const _CharT* __s, size_type __pos = 0) const
      {
                               ;
 return this->find_first_not_of(__s, __pos, traits_type::length(__s));
      }
# 2036 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_first_not_of(_CharT __c, size_type __pos = 0) const;
# 2049 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_last_not_of(const basic_string& __str, size_type __pos = npos) const
      { return this->find_last_not_of(__str.data(), __pos, __str.size()); }
# 2065 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_last_not_of(const _CharT* __s, size_type __pos,
         size_type __n) const;
# 2078 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_last_not_of(const _CharT* __s, size_type __pos = npos) const
      {
                               ;
 return this->find_last_not_of(__s, __pos, traits_type::length(__s));
      }
# 2095 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_last_not_of(_CharT __c, size_type __pos = npos) const;
# 2110 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string
      substr(size_type __pos = 0, size_type __n = npos) const
      { return basic_string(*this,
       _M_check(__pos, "basic_string::substr"), __n); }
# 2128 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      int
      compare(const basic_string& __str) const
      {
 const size_type __size = this->size();
 const size_type __osize = __str.size();
 const size_type __len = std::min(__size, __osize);

 int __r = traits_type::compare(_M_data(), __str.data(), __len);
 if (!__r)
   __r = _S_compare(__size, __osize);
 return __r;
      }
# 2158 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      int
      compare(size_type __pos, size_type __n, const basic_string& __str) const;
# 2182 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      int
      compare(size_type __pos1, size_type __n1, const basic_string& __str,
       size_type __pos2, size_type __n2) const;
# 2200 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      int
      compare(const _CharT* __s) const;
# 2223 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      int
      compare(size_type __pos, size_type __n1, const _CharT* __s) const;
# 2248 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      int
      compare(size_type __pos, size_type __n1, const _CharT* __s,
       size_type __n2) const;
  };
# 2260 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    {
      basic_string<_CharT, _Traits, _Alloc> __str(__lhs);
      __str.append(__rhs);
      return __str;
    }







  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT,_Traits,_Alloc>
    operator+(const _CharT* __lhs,
       const basic_string<_CharT,_Traits,_Alloc>& __rhs);







  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT,_Traits,_Alloc>
    operator+(_CharT __lhs, const basic_string<_CharT,_Traits,_Alloc>& __rhs);







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
      const _CharT* __rhs)
    {
      basic_string<_CharT, _Traits, _Alloc> __str(__lhs);
      __str.append(__rhs);
      return __str;
    }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs, _CharT __rhs)
    {
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type __size_type;
      __string_type __str(__lhs);
      __str.append(__size_type(1), __rhs);
      return __str;
    }
# 2331 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator==(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) == 0; }

  template<typename _CharT>
    inline
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value, bool>::__type
    operator==(const basic_string<_CharT>& __lhs,
        const basic_string<_CharT>& __rhs)
    { return (__lhs.size() == __rhs.size()
       && !std::char_traits<_CharT>::compare(__lhs.data(), __rhs.data(),
          __lhs.size())); }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator==(const _CharT* __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) == 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator==(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return __lhs.compare(__rhs) == 0; }
# 2377 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator!=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return !(__lhs == __rhs); }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator!=(const _CharT* __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return !(__lhs == __rhs); }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator!=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return !(__lhs == __rhs); }
# 2414 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) < 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const _CharT* __rhs)
    { return __lhs.compare(__rhs) < 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<(const _CharT* __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) > 0; }
# 2451 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) > 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const _CharT* __rhs)
    { return __lhs.compare(__rhs) > 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>(const _CharT* __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) < 0; }
# 2488 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) <= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return __lhs.compare(__rhs) <= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<=(const _CharT* __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) >= 0; }
# 2525 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) >= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return __lhs.compare(__rhs) >= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>=(const _CharT* __lhs,
      const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) <= 0; }
# 2562 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline void
    swap(basic_string<_CharT, _Traits, _Alloc>& __lhs,
  basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { __lhs.swap(__rhs); }
# 2579 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __is,
        basic_string<_CharT, _Traits, _Alloc>& __str);

  template<>
    basic_istream<char>&
    operator>>(basic_istream<char>& __is, basic_string<char>& __str);
# 2597 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __os,
        const basic_string<_CharT, _Traits, _Alloc>& __str)
    {


      return __ostream_insert(__os, __str.data(), __str.size());
    }
# 2620 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>& __is,
     basic_string<_CharT, _Traits, _Alloc>& __str, _CharT __delim);
# 2638 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>& __is,
     basic_string<_CharT, _Traits, _Alloc>& __str)
    { return getline(__is, __str, __is.widen('\n')); }

  template<>
    basic_istream<char>&
    getline(basic_istream<char>& __in, basic_string<char>& __str,
     char __delim);


  template<>
    basic_istream<wchar_t>&
    getline(basic_istream<wchar_t>& __in, basic_string<wchar_t>& __str,
     wchar_t __delim);


}
# 53 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\string" 2 3


# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.tcc" 1 3
# 42 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.tcc" 3
# 42 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.tcc" 3



namespace std {

  template<typename _CharT, typename _Traits, typename _Alloc>
    const typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    _Rep::_S_max_size = (((npos - sizeof(_Rep_base))/sizeof(_CharT)) - 1) / 4;

  template<typename _CharT, typename _Traits, typename _Alloc>
    const _CharT
    basic_string<_CharT, _Traits, _Alloc>::
    _Rep::_S_terminal = _CharT();

  template<typename _CharT, typename _Traits, typename _Alloc>
    const typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::npos;



  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::_Rep::_S_empty_rep_storage[
    (sizeof(_Rep_base) + sizeof(_CharT) + sizeof(size_type) - 1) /
      sizeof(size_type)];





  template<typename _CharT, typename _Traits, typename _Alloc>
    template<typename _InIterator>
      _CharT*
      basic_string<_CharT, _Traits, _Alloc>::
      _S_construct(_InIterator __beg, _InIterator __end, const _Alloc& __a,
     input_iterator_tag)
      {





 _CharT __buf[128];
 size_type __len = 0;
 while (__beg != __end && __len < sizeof(__buf) / sizeof(_CharT))
   {
     __buf[__len++] = *__beg;
     ++__beg;
   }
 _Rep* __r = _Rep::_S_create(__len, size_type(0), __a);
 _M_copy(__r->_M_refdata(), __buf, __len);
 if (true)
   {
     while (__beg != __end)
       {
  if (__len == __r->_M_capacity)
    {

      _Rep* __another = _Rep::_S_create(__len + 1, __len, __a);
      _M_copy(__another->_M_refdata(), __r->_M_refdata(), __len);
      __r->_M_destroy(__a);
      __r = __another;
    }
  __r->_M_refdata()[__len++] = *__beg;
  ++__beg;
       }
   }
 if (false)
   {
     __r->_M_destroy(__a);
                            ;
   }
 __r->_M_set_length_and_sharable(__len);
 return __r->_M_refdata();
      }

  template<typename _CharT, typename _Traits, typename _Alloc>
    template <typename _InIterator>
      _CharT*
      basic_string<_CharT, _Traits, _Alloc>::
      _S_construct(_InIterator __beg, _InIterator __end, const _Alloc& __a,
     forward_iterator_tag)
      {





 if (__gnu_cxx::__is_null_pointer(__beg) && __beg != __end)
   __throw_logic_error(("basic_string::_S_construct NULL not valid"));

 const size_type __dnew = static_cast<size_type>(std::distance(__beg,
              __end));

 _Rep* __r = _Rep::_S_create(__dnew, size_type(0), __a);
 if (true)
   { _S_copy_chars(__r->_M_refdata(), __beg, __end); }
 if (false)
   {
     __r->_M_destroy(__a);
                            ;
   }
 __r->_M_set_length_and_sharable(__dnew);
 return __r->_M_refdata();
      }

  template<typename _CharT, typename _Traits, typename _Alloc>
    _CharT*
    basic_string<_CharT, _Traits, _Alloc>::
    _S_construct(size_type __n, _CharT __c, const _Alloc& __a)
    {





      _Rep* __r = _Rep::_S_create(__n, size_type(0), __a);
      if (__n)
 _M_assign(__r->_M_refdata(), __n, __c);

      __r->_M_set_length_and_sharable(__n);
      return __r->_M_refdata();
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const basic_string& __str)
    : _M_dataplus(__str._M_rep()->_M_grab(_Alloc(__str.get_allocator()),
       __str.get_allocator()),
    __str.get_allocator())
    { }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const _Alloc& __a)
    : _M_dataplus(_S_construct(size_type(), _CharT(), __a), __a)
    { }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const basic_string& __str, size_type __pos, size_type __n)
    : _M_dataplus(_S_construct(__str._M_data()
          + __str._M_check(__pos,
      "basic_string::basic_string"),
          __str._M_data() + __str._M_limit(__pos, __n)
          + __pos, _Alloc()), _Alloc())
    { }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const basic_string& __str, size_type __pos,
   size_type __n, const _Alloc& __a)
    : _M_dataplus(_S_construct(__str._M_data()
          + __str._M_check(__pos,
      "basic_string::basic_string"),
          __str._M_data() + __str._M_limit(__pos, __n)
          + __pos, __a), __a)
    { }


  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const _CharT* __s, size_type __n, const _Alloc& __a)
    : _M_dataplus(_S_construct(__s, __s + __n, __a), __a)
    { }


  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const _CharT* __s, const _Alloc& __a)
    : _M_dataplus(_S_construct(__s, __s ? __s + traits_type::length(__s) :
          __s + npos, __a), __a)
    { }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(size_type __n, _CharT __c, const _Alloc& __a)
    : _M_dataplus(_S_construct(__n, __c, __a), __a)
    { }


  template<typename _CharT, typename _Traits, typename _Alloc>
    template<typename _InputIterator>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(_InputIterator __beg, _InputIterator __end, const _Alloc& __a)
    : _M_dataplus(_S_construct(__beg, __end, __a), __a)
    { }
# 239 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.tcc" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    assign(const basic_string& __str)
    {
      if (_M_rep() != __str._M_rep())
 {

   const allocator_type __a = this->get_allocator();
   _CharT* __tmp = __str._M_rep()->_M_grab(__a, __str.get_allocator());
   _M_rep()->_M_dispose(__a);
   _M_data(__tmp);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    assign(const _CharT* __s, size_type __n)
    {
                                             ;
      _M_check_length(this->size(), __n, "basic_string::assign");
      if (_M_disjunct(__s) || _M_rep()->_M_is_shared())
 return _M_replace_safe(size_type(0), this->size(), __s, __n);
      else
 {

   const size_type __pos = __s - _M_data();
   if (__pos >= __n)
     _M_copy(_M_data(), __s, __n);
   else if (__pos)
     _M_move(_M_data(), __s, __n);
   _M_rep()->_M_set_length_and_sharable(__n);
   return *this;
 }
     }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    append(size_type __n, _CharT __c)
    {
      if (__n)
 {
   _M_check_length(size_type(0), __n, "basic_string::append");
   const size_type __len = __n + this->size();
   if (__len > this->capacity() || _M_rep()->_M_is_shared())
     this->reserve(__len);
   _M_assign(_M_data() + this->size(), __n, __c);
   _M_rep()->_M_set_length_and_sharable(__len);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    append(const _CharT* __s, size_type __n)
    {
                                             ;
      if (__n)
 {
   _M_check_length(size_type(0), __n, "basic_string::append");
   const size_type __len = __n + this->size();
   if (__len > this->capacity() || _M_rep()->_M_is_shared())
     {
       if (_M_disjunct(__s))
  this->reserve(__len);
       else
  {
    const size_type __off = __s - _M_data();
    this->reserve(__len);
    __s = _M_data() + __off;
  }
     }
   _M_copy(_M_data() + this->size(), __s, __n);
   _M_rep()->_M_set_length_and_sharable(__len);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    append(const basic_string& __str)
    {
      const size_type __size = __str.size();
      if (__size)
 {
   const size_type __len = __size + this->size();
   if (__len > this->capacity() || _M_rep()->_M_is_shared())
     this->reserve(__len);
   _M_copy(_M_data() + this->size(), __str._M_data(), __size);
   _M_rep()->_M_set_length_and_sharable(__len);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    append(const basic_string& __str, size_type __pos, size_type __n)
    {
      __str._M_check(__pos, "basic_string::append");
      __n = __str._M_limit(__pos, __n);
      if (__n)
 {
   const size_type __len = __n + this->size();
   if (__len > this->capacity() || _M_rep()->_M_is_shared())
     this->reserve(__len);
   _M_copy(_M_data() + this->size(), __str._M_data() + __pos, __n);
   _M_rep()->_M_set_length_and_sharable(__len);
 }
      return *this;
    }

   template<typename _CharT, typename _Traits, typename _Alloc>
     basic_string<_CharT, _Traits, _Alloc>&
     basic_string<_CharT, _Traits, _Alloc>::
     insert(size_type __pos, const _CharT* __s, size_type __n)
     {
                                              ;
       _M_check(__pos, "basic_string::insert");
       _M_check_length(size_type(0), __n, "basic_string::insert");
       if (_M_disjunct(__s) || _M_rep()->_M_is_shared())
         return _M_replace_safe(__pos, size_type(0), __s, __n);
       else
         {

           const size_type __off = __s - _M_data();
           _M_mutate(__pos, 0, __n);
           __s = _M_data() + __off;
           _CharT* __p = _M_data() + __pos;
           if (__s + __n <= __p)
             _M_copy(__p, __s, __n);
           else if (__s >= __p)
             _M_copy(__p, __s + __n, __n);
           else
             {
        const size_type __nleft = __p - __s;
               _M_copy(__p, __s, __nleft);
               _M_copy(__p + __nleft, __p + __n, __n - __nleft);
             }
           return *this;
         }
     }

   template<typename _CharT, typename _Traits, typename _Alloc>
     typename basic_string<_CharT, _Traits, _Alloc>::iterator
     basic_string<_CharT, _Traits, _Alloc>::
     erase(iterator __first, iterator __last)
     {

                           ;




       const size_type __size = __last - __first;
       if (__size)
  {
    const size_type __pos = __first - _M_ibegin();
    _M_mutate(__pos, __size, size_type(0));
    _M_rep()->_M_set_leaked();
    return iterator(_M_data() + __pos);
  }
       else
  return __first;
     }

   template<typename _CharT, typename _Traits, typename _Alloc>
     basic_string<_CharT, _Traits, _Alloc>&
     basic_string<_CharT, _Traits, _Alloc>::
     replace(size_type __pos, size_type __n1, const _CharT* __s,
      size_type __n2)
     {
                                               ;
       _M_check(__pos, "basic_string::replace");
       __n1 = _M_limit(__pos, __n1);
       _M_check_length(__n1, __n2, "basic_string::replace");
       bool __left;
       if (_M_disjunct(__s) || _M_rep()->_M_is_shared())
         return _M_replace_safe(__pos, __n1, __s, __n2);
       else if ((__left = __s + __n2 <= _M_data() + __pos)
  || _M_data() + __pos + __n1 <= __s)
  {

    size_type __off = __s - _M_data();
    __left ? __off : (__off += __n2 - __n1);
    _M_mutate(__pos, __n1, __n2);
    _M_copy(_M_data() + __pos, _M_data() + __off, __n2);
    return *this;
  }
       else
  {

    const basic_string __tmp(__s, __n2);
    return _M_replace_safe(__pos, __n1, __tmp._M_data(), __n2);
  }
     }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::_Rep::
    _M_destroy(const _Alloc& __a) throw ()
    {
      const size_type __size = sizeof(_Rep_base) +
                        (this->_M_capacity + 1) * sizeof(_CharT);
      _Raw_bytes_alloc(__a).deallocate(reinterpret_cast<char*>(this), __size);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    _M_leak_hard()
    {




      if (_M_rep()->_M_is_shared())
 _M_mutate(0, 0, 0);
      _M_rep()->_M_set_leaked();
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    _M_mutate(size_type __pos, size_type __len1, size_type __len2)
    {
      const size_type __old_size = this->size();
      const size_type __new_size = __old_size + __len2 - __len1;
      const size_type __how_much = __old_size - __pos - __len1;

      if (__new_size > this->capacity() || _M_rep()->_M_is_shared())
 {

   const allocator_type __a = get_allocator();
   _Rep* __r = _Rep::_S_create(__new_size, this->capacity(), __a);

   if (__pos)
     _M_copy(__r->_M_refdata(), _M_data(), __pos);
   if (__how_much)
     _M_copy(__r->_M_refdata() + __pos + __len2,
      _M_data() + __pos + __len1, __how_much);

   _M_rep()->_M_dispose(__a);
   _M_data(__r->_M_refdata());
 }
      else if (__how_much && __len1 != __len2)
 {

   _M_move(_M_data() + __pos + __len2,
    _M_data() + __pos + __len1, __how_much);
 }
      _M_rep()->_M_set_length_and_sharable(__new_size);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    reserve(size_type __res)
    {
      if (__res != this->capacity() || _M_rep()->_M_is_shared())
        {

   if (__res < this->size())
     __res = this->size();
   const allocator_type __a = get_allocator();
   _CharT* __tmp = _M_rep()->_M_clone(__a, __res - this->size());
   _M_rep()->_M_dispose(__a);
   _M_data(__tmp);
        }
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    swap(basic_string& __s)
    {
      if (_M_rep()->_M_is_leaked())
 _M_rep()->_M_set_sharable();
      if (__s._M_rep()->_M_is_leaked())
 __s._M_rep()->_M_set_sharable();
      if (this->get_allocator() == __s.get_allocator())
 {
   _CharT* __tmp = _M_data();
   _M_data(__s._M_data());
   __s._M_data(__tmp);
 }

      else
 {
   const basic_string __tmp1(_M_ibegin(), _M_iend(),
        __s.get_allocator());
   const basic_string __tmp2(__s._M_ibegin(), __s._M_iend(),
        this->get_allocator());
   *this = __tmp2;
   __s = __tmp1;
 }
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::_Rep*
    basic_string<_CharT, _Traits, _Alloc>::_Rep::
    _S_create(size_type __capacity, size_type __old_capacity,
       const _Alloc& __alloc)
    {


      if (__capacity > _S_max_size)
 __throw_length_error(("basic_string::_S_create"));
# 576 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.tcc" 3
      const size_type __pagesize = 4096;
      const size_type __malloc_header_size = 4 * sizeof(void*);







      if (__capacity > __old_capacity && __capacity < 2 * __old_capacity)
 __capacity = 2 * __old_capacity;




      size_type __size = (__capacity + 1) * sizeof(_CharT) + sizeof(_Rep);

      const size_type __adj_size = __size + __malloc_header_size;
      if (__adj_size > __pagesize && __capacity > __old_capacity)
 {
   const size_type __extra = __pagesize - __adj_size % __pagesize;
   __capacity += __extra / sizeof(_CharT);

   if (__capacity > _S_max_size)
     __capacity = _S_max_size;
   __size = (__capacity + 1) * sizeof(_CharT) + sizeof(_Rep);
 }



      void* __place = _Raw_bytes_alloc(__alloc).allocate(__size);
      _Rep *__p = new (__place) _Rep;
      __p->_M_capacity = __capacity;







      __p->_M_set_sharable();
      return __p;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    _CharT*
    basic_string<_CharT, _Traits, _Alloc>::_Rep::
    _M_clone(const _Alloc& __alloc, size_type __res)
    {

      const size_type __requested_cap = this->_M_length + __res;
      _Rep* __r = _Rep::_S_create(__requested_cap, this->_M_capacity,
      __alloc);
      if (this->_M_length)
 _M_copy(__r->_M_refdata(), _M_refdata(), this->_M_length);

      __r->_M_set_length_and_sharable(this->_M_length);
      return __r->_M_refdata();
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    resize(size_type __n, _CharT __c)
    {
      const size_type __size = this->size();
      _M_check_length(__size, __n, "basic_string::resize");
      if (__size < __n)
 this->append(__n - __size, __c);
      else if (__n < __size)
 this->erase(__n);

    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    template<typename _InputIterator>
      basic_string<_CharT, _Traits, _Alloc>&
      basic_string<_CharT, _Traits, _Alloc>::
      _M_replace_dispatch(iterator __i1, iterator __i2, _InputIterator __k1,
     _InputIterator __k2, __false_type)
      {
 const basic_string __s(__k1, __k2);
 const size_type __n1 = __i2 - __i1;
 _M_check_length(__n1, __s.size(), "basic_string::_M_replace_dispatch");
 return _M_replace_safe(__i1 - _M_ibegin(), __n1, __s._M_data(),
          __s.size());
      }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    _M_replace_aux(size_type __pos1, size_type __n1, size_type __n2,
     _CharT __c)
    {
      _M_check_length(__n1, __n2, "basic_string::_M_replace_aux");
      _M_mutate(__pos1, __n1, __n2);
      if (__n2)
 _M_assign(_M_data() + __pos1, __n2, __c);
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    _M_replace_safe(size_type __pos1, size_type __n1, const _CharT* __s,
      size_type __n2)
    {
      _M_mutate(__pos1, __n1, __n2);
      if (__n2)
 _M_copy(_M_data() + __pos1, __s, __n2);
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>
    operator+(const _CharT* __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    {
                                      ;
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type __size_type;
      const __size_type __len = _Traits::length(__lhs);
      __string_type __str;
      __str.reserve(__len + __rhs.size());
      __str.append(__lhs, __len);
      __str.append(__rhs);
      return __str;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>
    operator+(_CharT __lhs, const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    {
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type __size_type;
      __string_type __str;
      const __size_type __len = __rhs.size();
      __str.reserve(__len + 1);
      __str.append(__size_type(1), __lhs);
      __str.append(__rhs);
      return __str;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    copy(_CharT* __s, size_type __n, size_type __pos) const
    {
      _M_check(__pos, "basic_string::copy");
      __n = _M_limit(__pos, __n);
                                             ;
      if (__n)
 _M_copy(__s, _M_data() + __pos, __n);

      return __n;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find(const _CharT* __s, size_type __pos, size_type __n) const
    {
                                             ;
      const size_type __size = this->size();
      const _CharT* __data = _M_data();

      if (__n == 0)
 return __pos <= __size ? __pos : npos;

      if (__n <= __size)
 {
   for (; __pos <= __size - __n; ++__pos)
     if (traits_type::eq(__data[__pos], __s[0])
  && traits_type::compare(__data + __pos + 1,
     __s + 1, __n - 1) == 0)
       return __pos;
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find(_CharT __c, size_type __pos) const
    {
      size_type __ret = npos;
      const size_type __size = this->size();
      if (__pos < __size)
 {
   const _CharT* __data = _M_data();
   const size_type __n = __size - __pos;
   const _CharT* __p = traits_type::find(__data + __pos, __n, __c);
   if (__p)
     __ret = __p - __data;
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    rfind(const _CharT* __s, size_type __pos, size_type __n) const
    {
                                             ;
      const size_type __size = this->size();
      if (__n <= __size)
 {
   __pos = std::min(size_type(__size - __n), __pos);
   const _CharT* __data = _M_data();
   do
     {
       if (traits_type::compare(__data + __pos, __s, __n) == 0)
  return __pos;
     }
   while (__pos-- > 0);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    rfind(_CharT __c, size_type __pos) const
    {
      size_type __size = this->size();
      if (__size)
 {
   if (--__size > __pos)
     __size = __pos;
   for (++__size; __size-- > 0; )
     if (traits_type::eq(_M_data()[__size], __c))
       return __size;
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_first_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
                                             ;
      for (; __n && __pos < this->size(); ++__pos)
 {
   const _CharT* __p = traits_type::find(__s, __n, _M_data()[__pos]);
   if (__p)
     return __pos;
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_last_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
                                             ;
      size_type __size = this->size();
      if (__size && __n)
 {
   if (--__size > __pos)
     __size = __pos;
   do
     {
       if (traits_type::find(__s, __n, _M_data()[__size]))
  return __size;
     }
   while (__size-- != 0);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_first_not_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
                                             ;
      for (; __pos < this->size(); ++__pos)
 if (!traits_type::find(__s, __n, _M_data()[__pos]))
   return __pos;
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_first_not_of(_CharT __c, size_type __pos) const
    {
      for (; __pos < this->size(); ++__pos)
 if (!traits_type::eq(_M_data()[__pos], __c))
   return __pos;
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_last_not_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
                                             ;
      size_type __size = this->size();
      if (__size)
 {
   if (--__size > __pos)
     __size = __pos;
   do
     {
       if (!traits_type::find(__s, __n, _M_data()[__size]))
  return __size;
     }
   while (__size--);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_last_not_of(_CharT __c, size_type __pos) const
    {
      size_type __size = this->size();
      if (__size)
 {
   if (--__size > __pos)
     __size = __pos;
   do
     {
       if (!traits_type::eq(_M_data()[__size], __c))
  return __size;
     }
   while (__size--);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string<_CharT, _Traits, _Alloc>::
    compare(size_type __pos, size_type __n, const basic_string& __str) const
    {
      _M_check(__pos, "basic_string::compare");
      __n = _M_limit(__pos, __n);
      const size_type __osize = __str.size();
      const size_type __len = std::min(__n, __osize);
      int __r = traits_type::compare(_M_data() + __pos, __str.data(), __len);
      if (!__r)
 __r = _S_compare(__n, __osize);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string<_CharT, _Traits, _Alloc>::
    compare(size_type __pos1, size_type __n1, const basic_string& __str,
     size_type __pos2, size_type __n2) const
    {
      _M_check(__pos1, "basic_string::compare");
      __str._M_check(__pos2, "basic_string::compare");
      __n1 = _M_limit(__pos1, __n1);
      __n2 = __str._M_limit(__pos2, __n2);
      const size_type __len = std::min(__n1, __n2);
      int __r = traits_type::compare(_M_data() + __pos1,
         __str.data() + __pos2, __len);
      if (!__r)
 __r = _S_compare(__n1, __n2);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string<_CharT, _Traits, _Alloc>::
    compare(const _CharT* __s) const
    {
                                    ;
      const size_type __size = this->size();
      const size_type __osize = traits_type::length(__s);
      const size_type __len = std::min(__size, __osize);
      int __r = traits_type::compare(_M_data(), __s, __len);
      if (!__r)
 __r = _S_compare(__size, __osize);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string <_CharT, _Traits, _Alloc>::
    compare(size_type __pos, size_type __n1, const _CharT* __s) const
    {
                                    ;
      _M_check(__pos, "basic_string::compare");
      __n1 = _M_limit(__pos, __n1);
      const size_type __osize = traits_type::length(__s);
      const size_type __len = std::min(__n1, __osize);
      int __r = traits_type::compare(_M_data() + __pos, __s, __len);
      if (!__r)
 __r = _S_compare(__n1, __osize);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string <_CharT, _Traits, _Alloc>::
    compare(size_type __pos, size_type __n1, const _CharT* __s,
     size_type __n2) const
    {
                                              ;
      _M_check(__pos, "basic_string::compare");
      __n1 = _M_limit(__pos, __n1);
      const size_type __len = std::min(__n1, __n2);
      int __r = traits_type::compare(_M_data() + __pos, __s, __len);
      if (!__r)
 __r = _S_compare(__n1, __n2);
      return __r;
    }


  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in,
        basic_string<_CharT, _Traits, _Alloc>& __str)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __istream_type::ios_base __ios_base;
      typedef typename __istream_type::int_type __int_type;
      typedef typename __string_type::size_type __size_type;
      typedef ctype<_CharT> __ctype_type;
      typedef typename __ctype_type::ctype_base __ctype_base;

      __size_type __extracted = 0;
      typename __ios_base::iostate __err = __ios_base::goodbit;
      typename __istream_type::sentry __cerb(__in, false);
      if (__cerb)
 {
   if (true)
     {

       __str.erase();
       _CharT __buf[128];
       __size_type __len = 0;
       const streamsize __w = __in.width();
       const __size_type __n = __w > 0 ? static_cast<__size_type>(__w)
                                : __str.max_size();
       const __ctype_type& __ct = use_facet<__ctype_type>(__in.getloc());
       const __int_type __eof = _Traits::eof();
       __int_type __c = __in.rdbuf()->sgetc();

       while (__extracted < __n
       && !_Traits::eq_int_type(__c, __eof)
       && !__ct.is(__ctype_base::space,
     _Traits::to_char_type(__c)))
  {
    if (__len == sizeof(__buf) / sizeof(_CharT))
      {
        __str.append(__buf, sizeof(__buf) / sizeof(_CharT));
        __len = 0;
      }
    __buf[__len++] = _Traits::to_char_type(__c);
    ++__extracted;
    __c = __in.rdbuf()->snextc();
  }
       __str.append(__buf, __len);

       if (_Traits::eq_int_type(__c, __eof))
  __err |= __ios_base::eofbit;
       __in.width(0);
     }
   if (false)
     {
       __in._M_setstate(__ios_base::badbit);
                              ;
     }
   if (false)
     {



       __in._M_setstate(__ios_base::badbit);
     }
 }

      if (!__extracted)
 __err |= __ios_base::failbit;
      if (__err)
 __in.setstate(__err);
      return __in;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>& __in,
     basic_string<_CharT, _Traits, _Alloc>& __str, _CharT __delim)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __istream_type::ios_base __ios_base;
      typedef typename __istream_type::int_type __int_type;
      typedef typename __string_type::size_type __size_type;

      __size_type __extracted = 0;
      const __size_type __n = __str.max_size();
      typename __ios_base::iostate __err = __ios_base::goodbit;
      typename __istream_type::sentry __cerb(__in, true);
      if (__cerb)
 {
   if (true)
     {
       __str.erase();
       const __int_type __idelim = _Traits::to_int_type(__delim);
       const __int_type __eof = _Traits::eof();
       __int_type __c = __in.rdbuf()->sgetc();

       while (__extracted < __n
       && !_Traits::eq_int_type(__c, __eof)
       && !_Traits::eq_int_type(__c, __idelim))
  {
    __str += _Traits::to_char_type(__c);
    ++__extracted;
    __c = __in.rdbuf()->snextc();
  }

       if (_Traits::eq_int_type(__c, __eof))
  __err |= __ios_base::eofbit;
       else if (_Traits::eq_int_type(__c, __idelim))
  {
    ++__extracted;
    __in.rdbuf()->sbumpc();
  }
       else
  __err |= __ios_base::failbit;
     }
   if (false)
     {
       __in._M_setstate(__ios_base::badbit);
                              ;
     }
   if (false)
     {



       __in._M_setstate(__ios_base::badbit);
     }
 }
      if (!__extracted)
 __err |= __ios_base::failbit;
      if (__err)
 __in.setstate(__err);
      return __in;
    }





  extern template class basic_string<char>;
  extern template
    basic_istream<char>&
    operator>>(basic_istream<char>&, string&);
  extern template
    basic_ostream<char>&
    operator<<(basic_ostream<char>&, const string&);
  extern template
    basic_istream<char>&
    getline(basic_istream<char>&, string&, char);
  extern template
    basic_istream<char>&
    getline(basic_istream<char>&, string&);


  extern template class basic_string<wchar_t>;
  extern template
    basic_istream<wchar_t>&
    operator>>(basic_istream<wchar_t>&, wstring&);
  extern template
    basic_ostream<wchar_t>&
    operator<<(basic_ostream<wchar_t>&, const wstring&);
  extern template
    basic_istream<wchar_t>&
    getline(basic_istream<wchar_t>&, wstring&, wchar_t);
  extern template
    basic_istream<wchar_t>&
    getline(basic_istream<wchar_t>&, wstring&);



}
# 56 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\string" 2 3
# 42 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 2 3


namespace std {
# 61 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
  class locale
  {
  public:


    typedef int category;


    class facet;
    class id;
    class _Impl;

    friend class facet;
    friend class _Impl;

    template<typename _Facet>
      friend bool
      has_facet(const locale&) throw();

    template<typename _Facet>
      friend const _Facet&
      use_facet(const locale&);

    template<typename _Cache>
      friend struct __use_cache;
# 97 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    static const category none = 0;
    static const category ctype = 1L << 0;
    static const category numeric = 1L << 1;
    static const category collate = 1L << 2;
    static const category time = 1L << 3;
    static const category monetary = 1L << 4;
    static const category messages = 1L << 5;
    static const category all = (ctype | numeric | collate |
        time | monetary | messages);
# 116 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    locale() throw();
# 125 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    locale(const locale& __other) throw();
# 135 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    explicit
    locale(const char* __s);
# 150 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    locale(const locale& __base, const char* __s, category __cat);
# 163 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    locale(const locale& __base, const locale& __add, category __cat);
# 175 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    template<typename _Facet>
      locale(const locale& __other, _Facet* __f);


    ~locale() throw();
# 189 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    const locale&
    operator=(const locale& __other) throw();
# 204 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    template<typename _Facet>
      locale
      combine(const locale& __other) const;






    string
    name() const;
# 223 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    bool
    operator==(const locale& __other) const throw();







    bool
    operator!=(const locale& __other) const throw()
    { return !(this->operator==(__other)); }
# 251 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    template<typename _Char, typename _Traits, typename _Alloc>
      bool
      operator()(const basic_string<_Char, _Traits, _Alloc>& __s1,
   const basic_string<_Char, _Traits, _Alloc>& __s2) const;
# 267 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    static locale
    global(const locale&);




    static const locale&
    classic();

  private:

    _Impl* _M_impl;


    static _Impl* _S_classic;


    static _Impl* _S_global;





    static const char* const* const _S_categories;
# 302 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    enum { _S_categories_size = 6 + 0 };


    static __gthread_once_t _S_once;


    explicit
    locale(_Impl*) throw();

    static void
    _S_initialize();

    static void
    _S_initialize_once() throw();

    static category
    _S_normalize_category(category);

    void
    _M_coalesce(const locale& __base, const locale& __add, category __cat);
  };
# 336 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
  class locale::facet
  {
  private:
    friend class locale;
    friend class locale::_Impl;

    mutable _Atomic_word _M_refcount;


    static __c_locale _S_c_locale;


    static const char _S_c_name[2];


    static __gthread_once_t _S_once;


    static void
    _S_initialize_once();

  protected:
# 367 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    explicit
    facet(size_t __refs = 0) throw() : _M_refcount(__refs ? 1 : 0)
    { }


    virtual
    ~facet();

    static void
    _S_create_c_locale(__c_locale& __cloc, const char* __s,
         __c_locale __old = 0);

    static __c_locale
    _S_clone_c_locale(__c_locale& __cloc) throw();

    static void
    _S_destroy_c_locale(__c_locale& __cloc);

    static __c_locale
    _S_lc_ctype_c_locale(__c_locale __cloc, const char* __s);



    static __c_locale
    _S_get_c_locale();

    __attribute__ ((__const__)) static const char*
    _S_get_c_name() throw();

  private:
    void
    _M_add_reference() const throw()
    { __gnu_cxx::__atomic_add_dispatch(&_M_refcount, 1); }

    void
    _M_remove_reference() const throw()
    {
      if (__gnu_cxx::__exchange_and_add_dispatch(&_M_refcount, -1) == 1)
 {
   if (true)
     { delete this; }
   if (false)
     { }
 }
    }

    facet(const facet&);

    facet&
    operator=(const facet&);
  };
# 431 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
  class locale::id
  {
  private:
    friend class locale;
    friend class locale::_Impl;

    template<typename _Facet>
      friend const _Facet&
      use_facet(const locale&);

    template<typename _Facet>
      friend bool
      has_facet(const locale&) throw();




    mutable size_t _M_index;


    static _Atomic_word _S_refcount;

    void
    operator=(const id&);

    id(const id&);

  public:



    id() { }

    size_t
    _M_id() const throw();
  };



  class locale::_Impl
  {
  public:

    friend class locale;
    friend class locale::facet;

    template<typename _Facet>
      friend bool
      has_facet(const locale&) throw();

    template<typename _Facet>
      friend const _Facet&
      use_facet(const locale&);

    template<typename _Cache>
      friend struct __use_cache;

  private:

    _Atomic_word _M_refcount;
    const facet** _M_facets;
    size_t _M_facets_size;
    const facet** _M_caches;
    char** _M_names;
    static const locale::id* const _S_id_ctype[];
    static const locale::id* const _S_id_numeric[];
    static const locale::id* const _S_id_collate[];
    static const locale::id* const _S_id_time[];
    static const locale::id* const _S_id_monetary[];
    static const locale::id* const _S_id_messages[];
    static const locale::id* const* const _S_facet_categories[];

    void
    _M_add_reference() throw()
    { __gnu_cxx::__atomic_add_dispatch(&_M_refcount, 1); }

    void
    _M_remove_reference() throw()
    {
      if (__gnu_cxx::__exchange_and_add_dispatch(&_M_refcount, -1) == 1)
 {
   if (true)
     { delete this; }
   if (false)
     { }
 }
    }

    _Impl(const _Impl&, size_t);
    _Impl(const char*, size_t);
    _Impl(size_t) throw();

   ~_Impl() throw();

    _Impl(const _Impl&);

    void
    operator=(const _Impl&);

    bool
    _M_check_same_name()
    {
      bool __ret = true;
      if (_M_names[1])

 for (size_t __i = 0; __ret && __i < _S_categories_size - 1; ++__i)
   __ret = __builtin_strcmp(_M_names[__i], _M_names[__i + 1]) == 0;
      return __ret;
    }

    void
    _M_replace_categories(const _Impl*, category);

    void
    _M_replace_category(const _Impl*, const locale::id* const*);

    void
    _M_replace_facet(const _Impl*, const locale::id*);

    void
    _M_install_facet(const locale::id*, const facet*);

    template<typename _Facet>
      void
      _M_init_facet(_Facet* __facet)
      { _M_install_facet(&_Facet::id, __facet); }

    void
    _M_install_cache(const facet*, size_t);
  };
# 574 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
  template<typename _Facet>
    bool
    has_facet(const locale& __loc) throw();
# 591 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
  template<typename _Facet>
    const _Facet&
    use_facet(const locale& __loc);
# 608 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
  template<typename _CharT>
    class collate : public locale::facet
    {
    public:



      typedef _CharT char_type;
      typedef basic_string<_CharT> string_type;


    protected:


      __c_locale _M_c_locale_collate;

    public:

      static locale::id id;
# 635 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
      explicit
      collate(size_t __refs = 0)
      : facet(__refs), _M_c_locale_collate(_S_get_c_locale())
      { }
# 649 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
      explicit
      collate(__c_locale __cloc, size_t __refs = 0)
      : facet(__refs), _M_c_locale_collate(_S_clone_c_locale(__cloc))
      { }
# 666 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
      int
      compare(const _CharT* __lo1, const _CharT* __hi1,
       const _CharT* __lo2, const _CharT* __hi2) const
      { return this->do_compare(__lo1, __hi1, __lo2, __hi2); }
# 685 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
      string_type
      transform(const _CharT* __lo, const _CharT* __hi) const
      { return this->do_transform(__lo, __hi); }
# 699 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
      long
      hash(const _CharT* __lo, const _CharT* __hi) const
      { return this->do_hash(__lo, __hi); }


      int
      _M_compare(const _CharT*, const _CharT*) const throw();

      size_t
      _M_transform(_CharT*, const _CharT*, size_t) const throw();

  protected:

      virtual
      ~collate()
      { _S_destroy_c_locale(_M_c_locale_collate); }
# 728 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
      virtual int
      do_compare(const _CharT* __lo1, const _CharT* __hi1,
   const _CharT* __lo2, const _CharT* __hi2) const;
# 744 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
      virtual string_type
      do_transform(const _CharT* __lo, const _CharT* __hi) const;
# 757 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
      virtual long
      do_hash(const _CharT* __lo, const _CharT* __hi) const;
    };

  template<typename _CharT>
    locale::id collate<_CharT>::id;


  template<>
    int
    collate<char>::_M_compare(const char*, const char*) const throw();

  template<>
    size_t
    collate<char>::_M_transform(char*, const char*, size_t) const throw();


  template<>
    int
    collate<wchar_t>::_M_compare(const wchar_t*, const wchar_t*) const throw();

  template<>
    size_t
    collate<wchar_t>::_M_transform(wchar_t*, const wchar_t*, size_t) const throw();



  template<typename _CharT>
    class collate_byname : public collate<_CharT>
    {
    public:


      typedef _CharT char_type;
      typedef basic_string<_CharT> string_type;


      explicit
      collate_byname(const char* __s, size_t __refs = 0)
      : collate<_CharT>(__refs)
      {
 if (__builtin_strcmp(__s, "C") != 0
     && __builtin_strcmp(__s, "POSIX") != 0)
   {
     this->_S_destroy_c_locale(this->_M_c_locale_collate);
     this->_S_create_c_locale(this->_M_c_locale_collate, __s);
   }
      }

    protected:
      virtual
      ~collate_byname() { }
    };

}



# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.tcc" 1 3
# 37 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.tcc" 3
# 37 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.tcc" 3

namespace std {

  template<typename _Facet>
    locale::
    locale(const locale& __other, _Facet* __f)
    {
      _M_impl = new _Impl(*__other._M_impl, 1);

      if (true)
 { _M_impl->_M_install_facet(&_Facet::id, __f); }
      if (false)
 {
   _M_impl->_M_remove_reference();
                          ;
 }
      delete [] _M_impl->_M_names[0];
      _M_impl->_M_names[0] = 0;
    }

  template<typename _Facet>
    locale
    locale::
    combine(const locale& __other) const
    {
      _Impl* __tmp = new _Impl(*_M_impl, 1);
      if (true)
 {
   __tmp->_M_replace_facet(__other._M_impl, &_Facet::id);
 }
      if (false)
 {
   __tmp->_M_remove_reference();
                          ;
 }
      return locale(__tmp);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    bool
    locale::
    operator()(const basic_string<_CharT, _Traits, _Alloc>& __s1,
        const basic_string<_CharT, _Traits, _Alloc>& __s2) const
    {
      typedef std::collate<_CharT> __collate_type;
      const __collate_type& __collate = use_facet<__collate_type>(*this);
      return (__collate.compare(__s1.data(), __s1.data() + __s1.length(),
    __s2.data(), __s2.data() + __s2.length()) < 0);
    }


  template<typename _Facet>
    bool
    has_facet(const locale& __loc) throw()
    {
      const size_t __i = _Facet::id._M_id();
      const locale::facet** __facets = __loc._M_impl->_M_facets;
      return (__i < __loc._M_impl->_M_facets_size

       && dynamic_cast<const _Facet*>(__facets[__i]));



    }

  template<typename _Facet>
    const _Facet&
    use_facet(const locale& __loc)
    {
      const size_t __i = _Facet::id._M_id();
      const locale::facet** __facets = __loc._M_impl->_M_facets;
      if (__i >= __loc._M_impl->_M_facets_size || !__facets[__i])
        __throw_bad_cast();

      return dynamic_cast<const _Facet&>(*__facets[__i]);



    }



  template<typename _CharT>
    int
    collate<_CharT>::_M_compare(const _CharT*, const _CharT*) const throw ()
    { return 0; }


  template<typename _CharT>
    size_t
    collate<_CharT>::_M_transform(_CharT*, const _CharT*, size_t) const throw ()
    { return 0; }

  template<typename _CharT>
    int
    collate<_CharT>::
    do_compare(const _CharT* __lo1, const _CharT* __hi1,
        const _CharT* __lo2, const _CharT* __hi2) const
    {


      const string_type __one(__lo1, __hi1);
      const string_type __two(__lo2, __hi2);

      const _CharT* __p = __one.c_str();
      const _CharT* __pend = __one.data() + __one.length();
      const _CharT* __q = __two.c_str();
      const _CharT* __qend = __two.data() + __two.length();




      for (;;)
 {
   const int __res = _M_compare(__p, __q);
   if (__res)
     return __res;

   __p += char_traits<_CharT>::length(__p);
   __q += char_traits<_CharT>::length(__q);
   if (__p == __pend && __q == __qend)
     return 0;
   else if (__p == __pend)
     return -1;
   else if (__q == __qend)
     return 1;

   __p++;
   __q++;
 }
    }

  template<typename _CharT>
    typename collate<_CharT>::string_type
    collate<_CharT>::
    do_transform(const _CharT* __lo, const _CharT* __hi) const
    {
      string_type __ret;


      const string_type __str(__lo, __hi);

      const _CharT* __p = __str.c_str();
      const _CharT* __pend = __str.data() + __str.length();

      size_t __len = (__hi - __lo) * 2;

      _CharT* __c = new _CharT[__len];

      if (true)
 {



   for (;;)
     {

       size_t __res = _M_transform(__c, __p, __len);


       if (__res >= __len)
  {
    __len = __res + 1;
    delete [] __c, __c = 0;
    __c = new _CharT[__len];
    __res = _M_transform(__c, __p, __len);
  }

       __ret.append(__c, __res);
       __p += char_traits<_CharT>::length(__p);
       if (__p == __pend)
  break;

       __p++;
       __ret.push_back(_CharT());
     }
 }
      if (false)
 {
   delete [] __c;
                          ;
 }

      delete [] __c;

      return __ret;
    }

  template<typename _CharT>
    long
    collate<_CharT>::
    do_hash(const _CharT* __lo, const _CharT* __hi) const
    {
      unsigned long __val = 0;
      for (; __lo < __hi; ++__lo)
 __val =
   *__lo + ((__val << 7)
     | (__val >> (__gnu_cxx::__numeric_traits<unsigned long>::
    __digits - 7)));
      return static_cast<long>(__val);
    }





  extern template class collate<char>;
  extern template class collate_byname<char>;

  extern template
    const collate<char>&
    use_facet<collate<char> >(const locale&);

  extern template
    bool
    has_facet<collate<char> >(const locale&);


  extern template class collate<wchar_t>;
  extern template class collate_byname<wchar_t>;

  extern template
    const collate<wchar_t>&
    use_facet<collate<wchar_t> >(const locale&);

  extern template
    bool
    has_facet<collate<wchar_t> >(const locale&);



}
# 815 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 2 3
# 43 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 2 3
# 53 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
namespace std {





  enum _Ios_Fmtflags
    {
      _S_boolalpha = 1L << 0,
      _S_dec = 1L << 1,
      _S_fixed = 1L << 2,
      _S_hex = 1L << 3,
      _S_internal = 1L << 4,
      _S_left = 1L << 5,
      _S_oct = 1L << 6,
      _S_right = 1L << 7,
      _S_scientific = 1L << 8,
      _S_showbase = 1L << 9,
      _S_showpoint = 1L << 10,
      _S_showpos = 1L << 11,
      _S_skipws = 1L << 12,
      _S_unitbuf = 1L << 13,
      _S_uppercase = 1L << 14,
      _S_adjustfield = _S_left | _S_right | _S_internal,
      _S_basefield = _S_dec | _S_oct | _S_hex,
      _S_floatfield = _S_scientific | _S_fixed,
      _S_ios_fmtflags_end = 1L << 16
    };

  inline _Ios_Fmtflags
  operator&(_Ios_Fmtflags __a, _Ios_Fmtflags __b)
  { return _Ios_Fmtflags(static_cast<int>(__a) & static_cast<int>(__b)); }

  inline _Ios_Fmtflags
  operator|(_Ios_Fmtflags __a, _Ios_Fmtflags __b)
  { return _Ios_Fmtflags(static_cast<int>(__a) | static_cast<int>(__b)); }

  inline _Ios_Fmtflags
  operator^(_Ios_Fmtflags __a, _Ios_Fmtflags __b)
  { return _Ios_Fmtflags(static_cast<int>(__a) ^ static_cast<int>(__b)); }

  inline _Ios_Fmtflags&
  operator|=(_Ios_Fmtflags& __a, _Ios_Fmtflags __b)
  { return __a = __a | __b; }

  inline _Ios_Fmtflags&
  operator&=(_Ios_Fmtflags& __a, _Ios_Fmtflags __b)
  { return __a = __a & __b; }

  inline _Ios_Fmtflags&
  operator^=(_Ios_Fmtflags& __a, _Ios_Fmtflags __b)
  { return __a = __a ^ __b; }

  inline _Ios_Fmtflags
  operator~(_Ios_Fmtflags __a)
  { return _Ios_Fmtflags(~static_cast<int>(__a)); }


  enum _Ios_Openmode
    {
      _S_app = 1L << 0,
      _S_ate = 1L << 1,
      _S_bin = 1L << 2,
      _S_in = 1L << 3,
      _S_out = 1L << 4,
      _S_trunc = 1L << 5,
      _S_ios_openmode_end = 1L << 16
    };

  inline _Ios_Openmode
  operator&(_Ios_Openmode __a, _Ios_Openmode __b)
  { return _Ios_Openmode(static_cast<int>(__a) & static_cast<int>(__b)); }

  inline _Ios_Openmode
  operator|(_Ios_Openmode __a, _Ios_Openmode __b)
  { return _Ios_Openmode(static_cast<int>(__a) | static_cast<int>(__b)); }

  inline _Ios_Openmode
  operator^(_Ios_Openmode __a, _Ios_Openmode __b)
  { return _Ios_Openmode(static_cast<int>(__a) ^ static_cast<int>(__b)); }

  inline _Ios_Openmode&
  operator|=(_Ios_Openmode& __a, _Ios_Openmode __b)
  { return __a = __a | __b; }

  inline _Ios_Openmode&
  operator&=(_Ios_Openmode& __a, _Ios_Openmode __b)
  { return __a = __a & __b; }

  inline _Ios_Openmode&
  operator^=(_Ios_Openmode& __a, _Ios_Openmode __b)
  { return __a = __a ^ __b; }

  inline _Ios_Openmode
  operator~(_Ios_Openmode __a)
  { return _Ios_Openmode(~static_cast<int>(__a)); }


  enum _Ios_Iostate
    {
      _S_goodbit = 0,
      _S_badbit = 1L << 0,
      _S_eofbit = 1L << 1,
      _S_failbit = 1L << 2,
      _S_ios_iostate_end = 1L << 16
    };

  inline _Ios_Iostate
  operator&(_Ios_Iostate __a, _Ios_Iostate __b)
  { return _Ios_Iostate(static_cast<int>(__a) & static_cast<int>(__b)); }

  inline _Ios_Iostate
  operator|(_Ios_Iostate __a, _Ios_Iostate __b)
  { return _Ios_Iostate(static_cast<int>(__a) | static_cast<int>(__b)); }

  inline _Ios_Iostate
  operator^(_Ios_Iostate __a, _Ios_Iostate __b)
  { return _Ios_Iostate(static_cast<int>(__a) ^ static_cast<int>(__b)); }

  inline _Ios_Iostate&
  operator|=(_Ios_Iostate& __a, _Ios_Iostate __b)
  { return __a = __a | __b; }

  inline _Ios_Iostate&
  operator&=(_Ios_Iostate& __a, _Ios_Iostate __b)
  { return __a = __a & __b; }

  inline _Ios_Iostate&
  operator^=(_Ios_Iostate& __a, _Ios_Iostate __b)
  { return __a = __a ^ __b; }

  inline _Ios_Iostate
  operator~(_Ios_Iostate __a)
  { return _Ios_Iostate(~static_cast<int>(__a)); }

  enum _Ios_Seekdir
    {
      _S_beg = 0,
      _S_cur = 1,
      _S_end = 2,
      _S_ios_seekdir_end = 1L << 16
    };
# 206 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
  class ios_base
  {
  public:







    class failure : public exception
    {
    public:


      explicit
      failure(const string& __str) throw();



      virtual
      ~failure() throw();

      virtual const char*
      what() const throw();

    private:
      string _M_msg;
    };
# 262 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    typedef _Ios_Fmtflags fmtflags;


    static const fmtflags boolalpha = _S_boolalpha;


    static const fmtflags dec = _S_dec;


    static const fmtflags fixed = _S_fixed;


    static const fmtflags hex = _S_hex;




    static const fmtflags internal = _S_internal;



    static const fmtflags left = _S_left;


    static const fmtflags oct = _S_oct;



    static const fmtflags right = _S_right;


    static const fmtflags scientific = _S_scientific;



    static const fmtflags showbase = _S_showbase;



    static const fmtflags showpoint = _S_showpoint;


    static const fmtflags showpos = _S_showpos;


    static const fmtflags skipws = _S_skipws;


    static const fmtflags unitbuf = _S_unitbuf;



    static const fmtflags uppercase = _S_uppercase;


    static const fmtflags adjustfield = _S_adjustfield;


    static const fmtflags basefield = _S_basefield;


    static const fmtflags floatfield = _S_floatfield;
# 337 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    typedef _Ios_Iostate iostate;



    static const iostate badbit = _S_badbit;


    static const iostate eofbit = _S_eofbit;




    static const iostate failbit = _S_failbit;


    static const iostate goodbit = _S_goodbit;
# 368 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    typedef _Ios_Openmode openmode;


    static const openmode app = _S_app;


    static const openmode ate = _S_ate;




    static const openmode binary = _S_bin;


    static const openmode in = _S_in;


    static const openmode out = _S_out;


    static const openmode trunc = _S_trunc;
# 400 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    typedef _Ios_Seekdir seekdir;


    static const seekdir beg = _S_beg;


    static const seekdir cur = _S_cur;


    static const seekdir end = _S_end;


    typedef int io_state;
    typedef int open_mode;
    typedef int seek_dir;

    typedef std::streampos streampos;
    typedef std::streamoff streamoff;
# 426 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    enum event
    {
      erase_event,
      imbue_event,
      copyfmt_event
    };
# 443 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    typedef void (*event_callback) (event, ios_base&, int);
# 455 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    void
    register_callback(event_callback __fn, int __index);

  protected:
    streamsize _M_precision;
    streamsize _M_width;
    fmtflags _M_flags;
    iostate _M_exception;
    iostate _M_streambuf_state;



    struct _Callback_list
    {

      _Callback_list* _M_next;
      ios_base::event_callback _M_fn;
      int _M_index;
      _Atomic_word _M_refcount;

      _Callback_list(ios_base::event_callback __fn, int __index,
       _Callback_list* __cb)
      : _M_next(__cb), _M_fn(__fn), _M_index(__index), _M_refcount(0) { }

      void
      _M_add_reference() { __gnu_cxx::__atomic_add_dispatch(&_M_refcount, 1); }


      int
      _M_remove_reference()
      { return __gnu_cxx::__exchange_and_add_dispatch(&_M_refcount, -1); }
    };

     _Callback_list* _M_callbacks;

    void
    _M_call_callbacks(event __ev) throw();

    void
    _M_dispose_callbacks(void) throw();


    struct _Words
    {
      void* _M_pword;
      long _M_iword;
      _Words() : _M_pword(0), _M_iword(0) { }
    };


    _Words _M_word_zero;



    enum { _S_local_word_size = 8 };
    _Words _M_local_word[_S_local_word_size];


    int _M_word_size;
    _Words* _M_word;

    _Words&
    _M_grow_words(int __index, bool __iword);


    locale _M_ios_locale;

    void
    _M_init() throw();

  public:





    class Init
    {
      friend class ios_base;
    public:
      Init();
      ~Init();

    private:
      static _Atomic_word _S_refcount;
      static bool _S_synced_with_stdio;
    };






    fmtflags
    flags() const
    { return _M_flags; }
# 559 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    fmtflags
    flags(fmtflags __fmtfl)
    {
      fmtflags __old = _M_flags;
      _M_flags = __fmtfl;
      return __old;
    }
# 575 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    fmtflags
    setf(fmtflags __fmtfl)
    {
      fmtflags __old = _M_flags;
      _M_flags |= __fmtfl;
      return __old;
    }
# 592 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    fmtflags
    setf(fmtflags __fmtfl, fmtflags __mask)
    {
      fmtflags __old = _M_flags;
      _M_flags &= ~__mask;
      _M_flags |= (__fmtfl & __mask);
      return __old;
    }







    void
    unsetf(fmtflags __mask)
    { _M_flags &= ~__mask; }
# 618 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    streamsize
    precision() const
    { return _M_precision; }






    streamsize
    precision(streamsize __prec)
    {
      streamsize __old = _M_precision;
      _M_precision = __prec;
      return __old;
    }







    streamsize
    width() const
    { return _M_width; }






    streamsize
    width(streamsize __wide)
    {
      streamsize __old = _M_width;
      _M_width = __wide;
      return __old;
    }
# 669 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    static bool
    sync_with_stdio(bool __sync = true);
# 681 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    locale
    imbue(const locale& __loc) throw();
# 692 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    locale
    getloc() const
    { return _M_ios_locale; }
# 703 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    const locale&
    _M_getloc() const
    { return _M_ios_locale; }
# 722 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    static int
    xalloc() throw();
# 738 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    long&
    iword(int __ix)
    {
      _Words& __word = (__ix < _M_word_size)
   ? _M_word[__ix] : _M_grow_words(__ix, true);
      return __word._M_iword;
    }
# 759 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    void*&
    pword(int __ix)
    {
      _Words& __word = (__ix < _M_word_size)
   ? _M_word[__ix] : _M_grow_words(__ix, false);
      return __word._M_pword;
    }
# 776 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    virtual ~ios_base();

  protected:
    ios_base() throw ();



  private:
    ios_base(const ios_base&);

    ios_base&
    operator=(const ios_base&);
  };



  inline ios_base&
  boolalpha(ios_base& __base)
  {
    __base.setf(ios_base::boolalpha);
    return __base;
  }


  inline ios_base&
  noboolalpha(ios_base& __base)
  {
    __base.unsetf(ios_base::boolalpha);
    return __base;
  }


  inline ios_base&
  showbase(ios_base& __base)
  {
    __base.setf(ios_base::showbase);
    return __base;
  }


  inline ios_base&
  noshowbase(ios_base& __base)
  {
    __base.unsetf(ios_base::showbase);
    return __base;
  }


  inline ios_base&
  showpoint(ios_base& __base)
  {
    __base.setf(ios_base::showpoint);
    return __base;
  }


  inline ios_base&
  noshowpoint(ios_base& __base)
  {
    __base.unsetf(ios_base::showpoint);
    return __base;
  }


  inline ios_base&
  showpos(ios_base& __base)
  {
    __base.setf(ios_base::showpos);
    return __base;
  }


  inline ios_base&
  noshowpos(ios_base& __base)
  {
    __base.unsetf(ios_base::showpos);
    return __base;
  }


  inline ios_base&
  skipws(ios_base& __base)
  {
    __base.setf(ios_base::skipws);
    return __base;
  }


  inline ios_base&
  noskipws(ios_base& __base)
  {
    __base.unsetf(ios_base::skipws);
    return __base;
  }


  inline ios_base&
  uppercase(ios_base& __base)
  {
    __base.setf(ios_base::uppercase);
    return __base;
  }


  inline ios_base&
  nouppercase(ios_base& __base)
  {
    __base.unsetf(ios_base::uppercase);
    return __base;
  }


  inline ios_base&
  unitbuf(ios_base& __base)
  {
     __base.setf(ios_base::unitbuf);
     return __base;
  }


  inline ios_base&
  nounitbuf(ios_base& __base)
  {
     __base.unsetf(ios_base::unitbuf);
     return __base;
  }



  inline ios_base&
  internal(ios_base& __base)
  {
     __base.setf(ios_base::internal, ios_base::adjustfield);
     return __base;
  }


  inline ios_base&
  left(ios_base& __base)
  {
    __base.setf(ios_base::left, ios_base::adjustfield);
    return __base;
  }


  inline ios_base&
  right(ios_base& __base)
  {
    __base.setf(ios_base::right, ios_base::adjustfield);
    return __base;
  }



  inline ios_base&
  dec(ios_base& __base)
  {
    __base.setf(ios_base::dec, ios_base::basefield);
    return __base;
  }


  inline ios_base&
  hex(ios_base& __base)
  {
    __base.setf(ios_base::hex, ios_base::basefield);
    return __base;
  }


  inline ios_base&
  oct(ios_base& __base)
  {
    __base.setf(ios_base::oct, ios_base::basefield);
    return __base;
  }



  inline ios_base&
  fixed(ios_base& __base)
  {
    __base.setf(ios_base::fixed, ios_base::floatfield);
    return __base;
  }


  inline ios_base&
  scientific(ios_base& __base)
  {
    __base.setf(ios_base::scientific, ios_base::floatfield);
    return __base;
  }

}
# 43 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ios" 2 3
# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 1 3
# 37 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
# 37 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3








namespace std {

  template<typename _CharT, typename _Traits>
    streamsize
    __copy_streambufs_eof(basic_streambuf<_CharT, _Traits>*,
     basic_streambuf<_CharT, _Traits>*, bool&);
# 113 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
  template<typename _CharT, typename _Traits>
    class basic_streambuf
    {
    public:






      typedef _CharT char_type;
      typedef _Traits traits_type;
      typedef typename traits_type::int_type int_type;
      typedef typename traits_type::pos_type pos_type;
      typedef typename traits_type::off_type off_type;




      typedef basic_streambuf<char_type, traits_type> __streambuf_type;


      friend class basic_ios<char_type, traits_type>;
      friend class basic_istream<char_type, traits_type>;
      friend class basic_ostream<char_type, traits_type>;
      friend class istreambuf_iterator<char_type, traits_type>;
      friend class ostreambuf_iterator<char_type, traits_type>;

      friend streamsize
      __copy_streambufs_eof<>(__streambuf_type*, __streambuf_type*, bool&);

      template<bool _IsMove, typename _CharT2>
        friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
            _CharT2*>::__type
        __copy_move_a2(istreambuf_iterator<_CharT2>,
         istreambuf_iterator<_CharT2>, _CharT2*);

      template<typename _CharT2>
        friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
      istreambuf_iterator<_CharT2> >::__type
        find(istreambuf_iterator<_CharT2>, istreambuf_iterator<_CharT2>,
      const _CharT2&);

      template<typename _CharT2, typename _Traits2>
        friend basic_istream<_CharT2, _Traits2>&
        operator>>(basic_istream<_CharT2, _Traits2>&, _CharT2*);

      template<typename _CharT2, typename _Traits2, typename _Alloc>
        friend basic_istream<_CharT2, _Traits2>&
        operator>>(basic_istream<_CharT2, _Traits2>&,
     basic_string<_CharT2, _Traits2, _Alloc>&);

      template<typename _CharT2, typename _Traits2, typename _Alloc>
        friend basic_istream<_CharT2, _Traits2>&
        getline(basic_istream<_CharT2, _Traits2>&,
  basic_string<_CharT2, _Traits2, _Alloc>&, _CharT2);

    protected:
# 179 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      char_type* _M_in_beg;
      char_type* _M_in_cur;
      char_type* _M_in_end;
      char_type* _M_out_beg;
      char_type* _M_out_cur;
      char_type* _M_out_end;


      locale _M_buf_locale;

  public:

      virtual
      ~basic_streambuf()
      { }
# 203 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      locale
      pubimbue(const locale &__loc)
      {
 locale __tmp(this->getloc());
 this->imbue(__loc);
 _M_buf_locale = __loc;
 return __tmp;
      }
# 220 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      locale
      getloc() const
      { return _M_buf_locale; }
# 233 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      __streambuf_type*
      pubsetbuf(char_type* __s, streamsize __n)
      { return this->setbuf(__s, __n); }

      pos_type
      pubseekoff(off_type __off, ios_base::seekdir __way,
   ios_base::openmode __mode = ios_base::in | ios_base::out)
      { return this->seekoff(__off, __way, __mode); }

      pos_type
      pubseekpos(pos_type __sp,
   ios_base::openmode __mode = ios_base::in | ios_base::out)
      { return this->seekpos(__sp, __mode); }

      int
      pubsync() { return this->sync(); }
# 260 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      streamsize
      in_avail()
      {
 const streamsize __ret = this->egptr() - this->gptr();
 return __ret ? __ret : this->showmanyc();
      }
# 274 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      int_type
      snextc()
      {
 int_type __ret = traits_type::eof();
 if (__builtin_expect(!traits_type::eq_int_type(this->sbumpc(),
             __ret), true))
   __ret = this->sgetc();
 return __ret;
      }
# 292 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      int_type
      sbumpc()
      {
 int_type __ret;
 if (__builtin_expect(this->gptr() < this->egptr(), true))
   {
     __ret = traits_type::to_int_type(*this->gptr());
     this->gbump(1);
   }
 else
   __ret = this->uflow();
 return __ret;
      }
# 314 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      int_type
      sgetc()
      {
 int_type __ret;
 if (__builtin_expect(this->gptr() < this->egptr(), true))
   __ret = traits_type::to_int_type(*this->gptr());
 else
   __ret = this->underflow();
 return __ret;
      }
# 333 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      streamsize
      sgetn(char_type* __s, streamsize __n)
      { return this->xsgetn(__s, __n); }
# 348 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      int_type
      sputbackc(char_type __c)
      {
 int_type __ret;
 const bool __testpos = this->eback() < this->gptr();
 if (__builtin_expect(!__testpos ||
        !traits_type::eq(__c, this->gptr()[-1]), false))
   __ret = this->pbackfail(traits_type::to_int_type(__c));
 else
   {
     this->gbump(-1);
     __ret = traits_type::to_int_type(*this->gptr());
   }
 return __ret;
      }
# 373 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      int_type
      sungetc()
      {
 int_type __ret;
 if (__builtin_expect(this->eback() < this->gptr(), true))
   {
     this->gbump(-1);
     __ret = traits_type::to_int_type(*this->gptr());
   }
 else
   __ret = this->pbackfail();
 return __ret;
      }
# 400 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      int_type
      sputc(char_type __c)
      {
 int_type __ret;
 if (__builtin_expect(this->pptr() < this->epptr(), true))
   {
     *this->pptr() = __c;
     this->pbump(1);
     __ret = traits_type::to_int_type(__c);
   }
 else
   __ret = this->overflow(traits_type::to_int_type(__c));
 return __ret;
      }
# 426 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      streamsize
      sputn(const char_type* __s, streamsize __n)
      { return this->xsputn(__s, __n); }

    protected:
# 440 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      basic_streambuf()
      : _M_in_beg(0), _M_in_cur(0), _M_in_end(0),
      _M_out_beg(0), _M_out_cur(0), _M_out_end(0),
      _M_buf_locale(locale())
      { }
# 458 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      char_type*
      eback() const { return _M_in_beg; }

      char_type*
      gptr() const { return _M_in_cur; }

      char_type*
      egptr() const { return _M_in_end; }
# 474 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      void
      gbump(int __n) { _M_in_cur += __n; }
# 485 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      void
      setg(char_type* __gbeg, char_type* __gnext, char_type* __gend)
      {
 _M_in_beg = __gbeg;
 _M_in_cur = __gnext;
 _M_in_end = __gend;
      }
# 505 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      char_type*
      pbase() const { return _M_out_beg; }

      char_type*
      pptr() const { return _M_out_cur; }

      char_type*
      epptr() const { return _M_out_end; }
# 521 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      void
      pbump(int __n) { _M_out_cur += __n; }
# 531 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      void
      setp(char_type* __pbeg, char_type* __pend)
      {
 _M_out_beg = _M_out_cur = __pbeg;
 _M_out_end = __pend;
      }
# 552 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      virtual void
      imbue(const locale&)
      { }
# 567 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      virtual basic_streambuf<char_type,_Traits>*
      setbuf(char_type*, streamsize)
      { return this; }
# 578 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      virtual pos_type
      seekoff(off_type, ios_base::seekdir,
       ios_base::openmode = ios_base::in | ios_base::out)
      { return pos_type(off_type(-1)); }
# 590 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      virtual pos_type
      seekpos(pos_type,
       ios_base::openmode = ios_base::in | ios_base::out)
      { return pos_type(off_type(-1)); }
# 603 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      virtual int
      sync() { return 0; }
# 625 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      virtual streamsize
      showmanyc() { return 0; }
# 641 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      virtual streamsize
      xsgetn(char_type* __s, streamsize __n);
# 663 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      virtual int_type
      underflow()
      { return traits_type::eof(); }
# 676 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      virtual int_type
      uflow()
      {
 int_type __ret = traits_type::eof();
 const bool __testeof = traits_type::eq_int_type(this->underflow(),
       __ret);
 if (!__testeof)
   {
     __ret = traits_type::to_int_type(*this->gptr());
     this->gbump(1);
   }
 return __ret;
      }
# 700 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      virtual int_type
      pbackfail(int_type = traits_type::eof())
      { return traits_type::eof(); }
# 718 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      virtual streamsize
      xsputn(const char_type* __s, streamsize __n);
# 744 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      virtual int_type
      overflow(int_type = traits_type::eof())
      { return traits_type::eof(); }



    public:
# 759 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      void
      stossc()
      {
 if (this->gptr() < this->egptr())
   this->gbump(1);
 else
   this->uflow();
      }


    private:


      basic_streambuf(const __streambuf_type& __sb)
      : _M_in_beg(__sb._M_in_beg), _M_in_cur(__sb._M_in_cur),
      _M_in_end(__sb._M_in_end), _M_out_beg(__sb._M_out_beg),
      _M_out_cur(__sb._M_out_cur), _M_out_end(__sb._M_out_cur),
      _M_buf_locale(__sb._M_buf_locale)
      { }

      __streambuf_type&
      operator=(const __streambuf_type&) { return *this; };
    };


  template<>
    streamsize
    __copy_streambufs_eof(basic_streambuf<char>* __sbin,
     basic_streambuf<char>* __sbout, bool& __ineof);

  template<>
    streamsize
    __copy_streambufs_eof(basic_streambuf<wchar_t>* __sbin,
     basic_streambuf<wchar_t>* __sbout, bool& __ineof);


}



# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/streambuf.tcc" 1 3
# 38 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/streambuf.tcc" 3
# 38 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/streambuf.tcc" 3

namespace std {

  template<typename _CharT, typename _Traits>
    streamsize
    basic_streambuf<_CharT, _Traits>::
    xsgetn(char_type* __s, streamsize __n)
    {
      streamsize __ret = 0;
      while (__ret < __n)
 {
   const streamsize __buf_len = this->egptr() - this->gptr();
   if (__buf_len)
     {
       const streamsize __remaining = __n - __ret;
       const streamsize __len = std::min(__buf_len, __remaining);
       traits_type::copy(__s, this->gptr(), __len);
       __ret += __len;
       __s += __len;
       this->gbump(__len);
     }

   if (__ret < __n)
     {
       const int_type __c = this->uflow();
       if (!traits_type::eq_int_type(__c, traits_type::eof()))
  {
    traits_type::assign(*__s++, traits_type::to_char_type(__c));
    ++__ret;
  }
       else
  break;
     }
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    streamsize
    basic_streambuf<_CharT, _Traits>::
    xsputn(const char_type* __s, streamsize __n)
    {
      streamsize __ret = 0;
      while (__ret < __n)
 {
   const streamsize __buf_len = this->epptr() - this->pptr();
   if (__buf_len)
     {
       const streamsize __remaining = __n - __ret;
       const streamsize __len = std::min(__buf_len, __remaining);
       traits_type::copy(this->pptr(), __s, __len);
       __ret += __len;
       __s += __len;
       this->pbump(__len);
     }

   if (__ret < __n)
     {
       int_type __c = this->overflow(traits_type::to_int_type(*__s));
       if (!traits_type::eq_int_type(__c, traits_type::eof()))
  {
    ++__ret;
    ++__s;
  }
       else
  break;
     }
 }
      return __ret;
    }




  template<typename _CharT, typename _Traits>
    streamsize
    __copy_streambufs_eof(basic_streambuf<_CharT, _Traits>* __sbin,
     basic_streambuf<_CharT, _Traits>* __sbout,
     bool& __ineof)
    {
      streamsize __ret = 0;
      __ineof = true;
      typename _Traits::int_type __c = __sbin->sgetc();
      while (!_Traits::eq_int_type(__c, _Traits::eof()))
 {
   __c = __sbout->sputc(_Traits::to_char_type(__c));
   if (_Traits::eq_int_type(__c, _Traits::eof()))
     {
       __ineof = false;
       break;
     }
   ++__ret;
   __c = __sbin->snextc();
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    inline streamsize
    __copy_streambufs(basic_streambuf<_CharT, _Traits>* __sbin,
        basic_streambuf<_CharT, _Traits>* __sbout)
    {
      bool __ineof;
      return __copy_streambufs_eof(__sbin, __sbout, __ineof);
    }





  extern template class basic_streambuf<char>;
  extern template
    streamsize
    __copy_streambufs(basic_streambuf<char>*,
        basic_streambuf<char>*);
  extern template
    streamsize
    __copy_streambufs_eof(basic_streambuf<char>*,
     basic_streambuf<char>*, bool&);


  extern template class basic_streambuf<wchar_t>;
  extern template
    streamsize
    __copy_streambufs(basic_streambuf<wchar_t>*,
        basic_streambuf<wchar_t>*);
  extern template
    streamsize
    __copy_streambufs_eof(basic_streambuf<wchar_t>*,
     basic_streambuf<wchar_t>*, bool&);



}
# 799 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 2 3
# 44 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ios" 2 3
# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 1 3
# 35 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
# 35 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3



# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 1 3
# 39 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
# 39 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3

# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwctype" 1 3
# 41 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwctype" 3
# 41 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwctype" 3




# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wctype.h" 1 3
# 13 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wctype.h" 3
# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 13 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wctype.h" 2 3


#pragma pack(push,_CRT_PACKING)


extern "C" {
# 166 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wctype.h" 3
  typedef wchar_t wctrans_t;
  wint_t towctrans(wint_t,wctrans_t);
  wctrans_t wctrans(const char *);
  wctype_t wctype(const char *);


}


#pragma pack(pop)
# 46 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwctype" 2 3
# 75 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwctype" 3
namespace std {

  using ::wctrans_t;
  using ::wctype_t;
  using ::wint_t;

  using ::iswalnum;
  using ::iswalpha;

  using ::iswblank;

  using ::iswcntrl;
  using ::iswctype;
  using ::iswdigit;
  using ::iswgraph;
  using ::iswlower;
  using ::iswprint;
  using ::iswpunct;
  using ::iswspace;
  using ::iswupper;
  using ::iswxdigit;
  using ::towctrans;
  using ::towlower;
  using ::towupper;
  using ::wctrans;
  using ::wctype;

}
# 41 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 2 3
# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cctype" 1 3
# 41 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cctype" 3
# 41 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cctype" 3
# 42 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 2 3
# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/ctype_base.h" 1 3
# 37 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/ctype_base.h" 3
namespace std {


  struct ctype_base
  {

    typedef const int* __to_type;



    typedef unsigned short mask;
    static const mask upper = 1 << 0;
    static const mask lower = 1 << 1;
    static const mask alpha = 1 << 2;
    static const mask digit = 1 << 3;
    static const mask xdigit = 1 << 4;
    static const mask space = 1 << 5;
    static const mask print = 1 << 6;
    static const mask graph = (1 << 2) | (1 << 3) | (1 << 9);
    static const mask cntrl = 1 << 8;
    static const mask punct = 1 << 9;
    static const mask alnum = (1 << 2) | (1 << 3);
  };

}
# 43 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 2 3






# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/streambuf_iterator.h" 1 3
# 35 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/streambuf_iterator.h" 3
# 35 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/streambuf_iterator.h" 3




namespace std {
# 48 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/streambuf_iterator.h" 3
  template<typename _CharT, typename _Traits>
    class istreambuf_iterator
    : public iterator<input_iterator_tag, _CharT, typename _Traits::off_type,
        _CharT*, _CharT&>
    {
    public:



      typedef _CharT char_type;
      typedef _Traits traits_type;
      typedef typename _Traits::int_type int_type;
      typedef basic_streambuf<_CharT, _Traits> streambuf_type;
      typedef basic_istream<_CharT, _Traits> istream_type;


      template<typename _CharT2>
 friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
                      ostreambuf_iterator<_CharT2> >::__type
 copy(istreambuf_iterator<_CharT2>, istreambuf_iterator<_CharT2>,
      ostreambuf_iterator<_CharT2>);

      template<bool _IsMove, typename _CharT2>
 friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
            _CharT2*>::__type
 __copy_move_a2(istreambuf_iterator<_CharT2>,
         istreambuf_iterator<_CharT2>, _CharT2*);

      template<typename _CharT2>
 friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
               istreambuf_iterator<_CharT2> >::__type
 find(istreambuf_iterator<_CharT2>, istreambuf_iterator<_CharT2>,
      const _CharT2&);

    private:







      mutable streambuf_type* _M_sbuf;
      mutable int_type _M_c;

    public:

      istreambuf_iterator() throw()
      : _M_sbuf(0), _M_c(traits_type::eof()) { }


      istreambuf_iterator(istream_type& __s) throw()
      : _M_sbuf(__s.rdbuf()), _M_c(traits_type::eof()) { }


      istreambuf_iterator(streambuf_type* __s) throw()
      : _M_sbuf(__s), _M_c(traits_type::eof()) { }




      char_type
      operator*() const
      {







 return traits_type::to_char_type(_M_get());
      }


      istreambuf_iterator&
      operator++()
      {


                        ;
 if (_M_sbuf)
   {
     _M_sbuf->sbumpc();
     _M_c = traits_type::eof();
   }
 return *this;
      }


      istreambuf_iterator
      operator++(int)
      {


                        ;

 istreambuf_iterator __old = *this;
 if (_M_sbuf)
   {
     __old._M_c = _M_sbuf->sbumpc();
     _M_c = traits_type::eof();
   }
 return __old;
      }





      bool
      equal(const istreambuf_iterator& __b) const
      { return _M_at_eof() == __b._M_at_eof(); }

    private:
      int_type
      _M_get() const
      {
 const int_type __eof = traits_type::eof();
 int_type __ret = __eof;
 if (_M_sbuf)
   {
     if (!traits_type::eq_int_type(_M_c, __eof))
       __ret = _M_c;
     else if (!traits_type::eq_int_type((__ret = _M_sbuf->sgetc()),
            __eof))
       _M_c = __ret;
     else
       _M_sbuf = 0;
   }
 return __ret;
      }

      bool
      _M_at_eof() const
      {
 const int_type __eof = traits_type::eof();
 return traits_type::eq_int_type(_M_get(), __eof);
      }
    };

  template<typename _CharT, typename _Traits>
    inline bool
    operator==(const istreambuf_iterator<_CharT, _Traits>& __a,
        const istreambuf_iterator<_CharT, _Traits>& __b)
    { return __a.equal(__b); }

  template<typename _CharT, typename _Traits>
    inline bool
    operator!=(const istreambuf_iterator<_CharT, _Traits>& __a,
        const istreambuf_iterator<_CharT, _Traits>& __b)
    { return !__a.equal(__b); }


  template<typename _CharT, typename _Traits>
    class ostreambuf_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    public:



      typedef _CharT char_type;
      typedef _Traits traits_type;
      typedef basic_streambuf<_CharT, _Traits> streambuf_type;
      typedef basic_ostream<_CharT, _Traits> ostream_type;


      template<typename _CharT2>
 friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
                      ostreambuf_iterator<_CharT2> >::__type
 copy(istreambuf_iterator<_CharT2>, istreambuf_iterator<_CharT2>,
      ostreambuf_iterator<_CharT2>);

    private:
      streambuf_type* _M_sbuf;
      bool _M_failed;

    public:

      ostreambuf_iterator(ostream_type& __s) throw ()
      : _M_sbuf(__s.rdbuf()), _M_failed(!_M_sbuf) { }


      ostreambuf_iterator(streambuf_type* __s) throw ()
      : _M_sbuf(__s), _M_failed(!_M_sbuf) { }


      ostreambuf_iterator&
      operator=(_CharT __c)
      {
 if (!_M_failed &&
     _Traits::eq_int_type(_M_sbuf->sputc(__c), _Traits::eof()))
   _M_failed = true;
 return *this;
      }


      ostreambuf_iterator&
      operator*()
      { return *this; }


      ostreambuf_iterator&
      operator++(int)
      { return *this; }


      ostreambuf_iterator&
      operator++()
      { return *this; }


      bool
      failed() const throw()
      { return _M_failed; }

      ostreambuf_iterator&
      _M_put(const _CharT* __ws, streamsize __len)
      {
 if (__builtin_expect(!_M_failed, true)
     && __builtin_expect(this->_M_sbuf->sputn(__ws, __len) != __len,
    false))
   _M_failed = true;
 return *this;
      }
    };


  template<typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
                           ostreambuf_iterator<_CharT> >::__type
    copy(istreambuf_iterator<_CharT> __first,
  istreambuf_iterator<_CharT> __last,
  ostreambuf_iterator<_CharT> __result)
    {
      if (__first._M_sbuf && !__last._M_sbuf && !__result._M_failed)
 {
   bool __ineof;
   __copy_streambufs_eof(__first._M_sbuf, __result._M_sbuf, __ineof);
   if (!__ineof)
     __result._M_failed = true;
 }
      return __result;
    }

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
            ostreambuf_iterator<_CharT> >::__type
    __copy_move_a2(_CharT* __first, _CharT* __last,
     ostreambuf_iterator<_CharT> __result)
    {
      const streamsize __num = __last - __first;
      if (__num > 0)
 __result._M_put(__first, __num);
      return __result;
    }

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
        ostreambuf_iterator<_CharT> >::__type
    __copy_move_a2(const _CharT* __first, const _CharT* __last,
     ostreambuf_iterator<_CharT> __result)
    {
      const streamsize __num = __last - __first;
      if (__num > 0)
 __result._M_put(__first, __num);
      return __result;
    }

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
            _CharT*>::__type
    __copy_move_a2(istreambuf_iterator<_CharT> __first,
     istreambuf_iterator<_CharT> __last, _CharT* __result)
    {
      typedef istreambuf_iterator<_CharT> __is_iterator_type;
      typedef typename __is_iterator_type::traits_type traits_type;
      typedef typename __is_iterator_type::streambuf_type streambuf_type;
      typedef typename traits_type::int_type int_type;

      if (__first._M_sbuf && !__last._M_sbuf)
 {
   streambuf_type* __sb = __first._M_sbuf;
   int_type __c = __sb->sgetc();
   while (!traits_type::eq_int_type(__c, traits_type::eof()))
     {
       const streamsize __n = __sb->egptr() - __sb->gptr();
       if (__n > 1)
  {
    traits_type::copy(__result, __sb->gptr(), __n);
    __sb->gbump(__n);
    __result += __n;
    __c = __sb->underflow();
  }
       else
  {
    *__result++ = traits_type::to_char_type(__c);
    __c = __sb->snextc();
  }
     }
 }
      return __result;
    }

  template<typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
          istreambuf_iterator<_CharT> >::__type
    find(istreambuf_iterator<_CharT> __first,
  istreambuf_iterator<_CharT> __last, const _CharT& __val)
    {
      typedef istreambuf_iterator<_CharT> __is_iterator_type;
      typedef typename __is_iterator_type::traits_type traits_type;
      typedef typename __is_iterator_type::streambuf_type streambuf_type;
      typedef typename traits_type::int_type int_type;

      if (__first._M_sbuf && !__last._M_sbuf)
 {
   const int_type __ival = traits_type::to_int_type(__val);
   streambuf_type* __sb = __first._M_sbuf;
   int_type __c = __sb->sgetc();
   while (!traits_type::eq_int_type(__c, traits_type::eof())
   && !traits_type::eq_int_type(__c, __ival))
     {
       streamsize __n = __sb->egptr() - __sb->gptr();
       if (__n > 1)
  {
    const _CharT* __p = traits_type::find(__sb->gptr(),
       __n, __val);
    if (__p)
      __n = __p - __sb->gptr();
    __sb->gbump(__n);
    __c = __sb->sgetc();
  }
       else
  __c = __sb->snextc();
     }

   if (!traits_type::eq_int_type(__c, traits_type::eof()))
     __first._M_c = __c;
   else
     __first._M_sbuf = 0;
 }
      return __first;
    }



}
# 50 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 2 3

namespace std {
# 63 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
  template<typename _Tp>
    void
    __convert_to_v(const char*, _Tp&, ios_base::iostate&,
     const __c_locale&) throw();


  template<>
    void
    __convert_to_v(const char*, float&, ios_base::iostate&,
     const __c_locale&) throw();

  template<>
    void
    __convert_to_v(const char*, double&, ios_base::iostate&,
     const __c_locale&) throw();

  template<>
    void
    __convert_to_v(const char*, long double&, ios_base::iostate&,
     const __c_locale&) throw();



  template<typename _CharT, typename _Traits>
    struct __pad
    {
      static void
      _S_pad(ios_base& __io, _CharT __fill, _CharT* __news,
      const _CharT* __olds, streamsize __newlen, streamsize __oldlen);
    };






  template<typename _CharT>
    _CharT*
    __add_grouping(_CharT* __s, _CharT __sep,
     const char* __gbeg, size_t __gsize,
     const _CharT* __first, const _CharT* __last);




  template<typename _CharT>
    inline
    ostreambuf_iterator<_CharT>
    __write(ostreambuf_iterator<_CharT> __s, const _CharT* __ws, int __len)
    {
      __s._M_put(__ws, __len);
      return __s;
    }


  template<typename _CharT, typename _OutIter>
    inline
    _OutIter
    __write(_OutIter __s, const _CharT* __ws, int __len)
    {
      for (int __j = 0; __j < __len; __j++, ++__s)
 *__s = __ws[__j];
      return __s;
    }
# 141 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
  template<typename _CharT>
    class __ctype_abstract_base : public locale::facet, public ctype_base
    {
    public:


      typedef _CharT char_type;
# 159 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      bool
      is(mask __m, char_type __c) const
      { return this->do_is(__m, __c); }
# 176 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      const char_type*
      is(const char_type *__lo, const char_type *__hi, mask *__vec) const
      { return this->do_is(__lo, __hi, __vec); }
# 192 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      const char_type*
      scan_is(mask __m, const char_type* __lo, const char_type* __hi) const
      { return this->do_scan_is(__m, __lo, __hi); }
# 208 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      const char_type*
      scan_not(mask __m, const char_type* __lo, const char_type* __hi) const
      { return this->do_scan_not(__m, __lo, __hi); }
# 222 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      char_type
      toupper(char_type __c) const
      { return this->do_toupper(__c); }
# 237 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      const char_type*
      toupper(char_type *__lo, const char_type* __hi) const
      { return this->do_toupper(__lo, __hi); }
# 251 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      char_type
      tolower(char_type __c) const
      { return this->do_tolower(__c); }
# 266 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      const char_type*
      tolower(char_type* __lo, const char_type* __hi) const
      { return this->do_tolower(__lo, __hi); }
# 283 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      char_type
      widen(char __c) const
      { return this->do_widen(__c); }
# 302 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      const char*
      widen(const char* __lo, const char* __hi, char_type* __to) const
      { return this->do_widen(__lo, __hi, __to); }
# 321 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      char
      narrow(char_type __c, char __dfault) const
      { return this->do_narrow(__c, __dfault); }
# 343 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      const char_type*
      narrow(const char_type* __lo, const char_type* __hi,
       char __dfault, char *__to) const
      { return this->do_narrow(__lo, __hi, __dfault, __to); }

    protected:
      explicit
      __ctype_abstract_base(size_t __refs = 0): facet(__refs) { }

      virtual
      ~__ctype_abstract_base() { }
# 368 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual bool
      do_is(mask __m, char_type __c) const = 0;
# 387 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_is(const char_type* __lo, const char_type* __hi,
     mask* __vec) const = 0;
# 406 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_scan_is(mask __m, const char_type* __lo,
   const char_type* __hi) const = 0;
# 425 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_scan_not(mask __m, const char_type* __lo,
    const char_type* __hi) const = 0;
# 443 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char_type
      do_toupper(char_type) const = 0;
# 460 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_toupper(char_type* __lo, const char_type* __hi) const = 0;
# 476 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char_type
      do_tolower(char_type) const = 0;
# 493 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_tolower(char_type* __lo, const char_type* __hi) const = 0;
# 512 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char_type
      do_widen(char) const = 0;
# 533 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char*
      do_widen(const char* __lo, const char* __hi,
        char_type* __dest) const = 0;
# 555 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char
      do_narrow(char_type, char __dfault) const = 0;
# 579 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_narrow(const char_type* __lo, const char_type* __hi,
  char __dfault, char* __dest) const = 0;
    };
# 602 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
  template<typename _CharT>
    class ctype : public __ctype_abstract_base<_CharT>
    {
    public:

      typedef _CharT char_type;
      typedef typename __ctype_abstract_base<_CharT>::mask mask;


      static locale::id id;

      explicit
      ctype(size_t __refs = 0) : __ctype_abstract_base<_CharT>(__refs) { }

   protected:
      virtual
      ~ctype();

      virtual bool
      do_is(mask __m, char_type __c) const;

      virtual const char_type*
      do_is(const char_type* __lo, const char_type* __hi, mask* __vec) const;

      virtual const char_type*
      do_scan_is(mask __m, const char_type* __lo, const char_type* __hi) const;

      virtual const char_type*
      do_scan_not(mask __m, const char_type* __lo,
    const char_type* __hi) const;

      virtual char_type
      do_toupper(char_type __c) const;

      virtual const char_type*
      do_toupper(char_type* __lo, const char_type* __hi) const;

      virtual char_type
      do_tolower(char_type __c) const;

      virtual const char_type*
      do_tolower(char_type* __lo, const char_type* __hi) const;

      virtual char_type
      do_widen(char __c) const;

      virtual const char*
      do_widen(const char* __lo, const char* __hi, char_type* __dest) const;

      virtual char
      do_narrow(char_type, char __dfault) const;

      virtual const char_type*
      do_narrow(const char_type* __lo, const char_type* __hi,
  char __dfault, char* __dest) const;
    };

  template<typename _CharT>
    locale::id ctype<_CharT>::id;
# 671 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
  template<>
    class ctype<char> : public locale::facet, public ctype_base
    {
    public:


      typedef char char_type;

    protected:

      __c_locale _M_c_locale_ctype;
      bool _M_del;
      __to_type _M_toupper;
      __to_type _M_tolower;
      const mask* _M_table;
      mutable char _M_widen_ok;
      mutable char _M_widen[1 + static_cast<unsigned char>(-1)];
      mutable char _M_narrow[1 + static_cast<unsigned char>(-1)];
      mutable char _M_narrow_ok;


    public:

      static locale::id id;

      static const size_t table_size = 1 + static_cast<unsigned char>(-1);
# 708 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      explicit
      ctype(const mask* __table = 0, bool __del = false, size_t __refs = 0);
# 721 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      explicit
      ctype(__c_locale __cloc, const mask* __table = 0, bool __del = false,
     size_t __refs = 0);
# 734 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      inline bool
      is(mask __m, char __c) const;
# 749 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      inline const char*
      is(const char* __lo, const char* __hi, mask* __vec) const;
# 763 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      inline const char*
      scan_is(mask __m, const char* __lo, const char* __hi) const;
# 777 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      inline const char*
      scan_not(mask __m, const char* __lo, const char* __hi) const;
# 792 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      char_type
      toupper(char_type __c) const
      { return this->do_toupper(__c); }
# 809 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      const char_type*
      toupper(char_type *__lo, const char_type* __hi) const
      { return this->do_toupper(__lo, __hi); }
# 825 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      char_type
      tolower(char_type __c) const
      { return this->do_tolower(__c); }
# 842 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      const char_type*
      tolower(char_type* __lo, const char_type* __hi) const
      { return this->do_tolower(__lo, __hi); }
# 862 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      char_type
      widen(char __c) const
      {
 if (_M_widen_ok)
   return _M_widen[static_cast<unsigned char>(__c)];
 this->_M_widen_init();
 return this->do_widen(__c);
      }
# 889 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      const char*
      widen(const char* __lo, const char* __hi, char_type* __to) const
      {
 if (_M_widen_ok == 1)
   {
     __builtin_memcpy(__to, __lo, __hi - __lo);
     return __hi;
   }
 if (!_M_widen_ok)
   _M_widen_init();
 return this->do_widen(__lo, __hi, __to);
      }
# 920 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      char
      narrow(char_type __c, char __dfault) const
      {
 if (_M_narrow[static_cast<unsigned char>(__c)])
   return _M_narrow[static_cast<unsigned char>(__c)];
 const char __t = do_narrow(__c, __dfault);
 if (__t != __dfault)
   _M_narrow[static_cast<unsigned char>(__c)] = __t;
 return __t;
      }
# 953 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      const char_type*
      narrow(const char_type* __lo, const char_type* __hi,
      char __dfault, char *__to) const
      {
 if (__builtin_expect(_M_narrow_ok == 1, true))
   {
     __builtin_memcpy(__to, __lo, __hi - __lo);
     return __hi;
   }
 if (!_M_narrow_ok)
   _M_narrow_init();
 return this->do_narrow(__lo, __hi, __dfault, __to);
      }





      const mask*
      table() const throw()
      { return _M_table; }


      static const mask*
      classic_table() throw();
    protected:







      virtual
      ~ctype();
# 1002 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char_type
      do_toupper(char_type) const;
# 1019 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_toupper(char_type* __lo, const char_type* __hi) const;
# 1035 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char_type
      do_tolower(char_type) const;
# 1052 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_tolower(char_type* __lo, const char_type* __hi) const;
# 1072 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char_type
      do_widen(char __c) const
      { return __c; }
# 1095 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char*
      do_widen(const char* __lo, const char* __hi, char_type* __dest) const
      {
 __builtin_memcpy(__dest, __lo, __hi - __lo);
 return __hi;
      }
# 1121 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char
      do_narrow(char_type __c, char) const
      { return __c; }
# 1147 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_narrow(const char_type* __lo, const char_type* __hi,
  char, char* __dest) const
      {
 __builtin_memcpy(__dest, __lo, __hi - __lo);
 return __hi;
      }

    private:
      void _M_narrow_init() const;
      void _M_widen_init() const;
    };
# 1172 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
  template<>
    class ctype<wchar_t> : public __ctype_abstract_base<wchar_t>
    {
    public:


      typedef wchar_t char_type;
      typedef wctype_t __wmask_type;

    protected:
      __c_locale _M_c_locale_ctype;


      bool _M_narrow_ok;
      char _M_narrow[128];
      wint_t _M_widen[1 + static_cast<unsigned char>(-1)];


      mask _M_bit[16];
      __wmask_type _M_wmask[16];

    public:


      static locale::id id;
# 1205 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      explicit
      ctype(size_t __refs = 0);
# 1216 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      explicit
      ctype(__c_locale __cloc, size_t __refs = 0);

    protected:
      __wmask_type
      _M_convert_to_wmask(const mask __m) const throw();


      virtual
      ~ctype();
# 1240 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual bool
      do_is(mask __m, char_type __c) const;
# 1259 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_is(const char_type* __lo, const char_type* __hi, mask* __vec) const;
# 1277 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_scan_is(mask __m, const char_type* __lo, const char_type* __hi) const;
# 1295 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_scan_not(mask __m, const char_type* __lo,
    const char_type* __hi) const;
# 1312 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char_type
      do_toupper(char_type) const;
# 1329 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_toupper(char_type* __lo, const char_type* __hi) const;
# 1345 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char_type
      do_tolower(char_type) const;
# 1362 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_tolower(char_type* __lo, const char_type* __hi) const;
# 1382 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char_type
      do_widen(char) const;
# 1404 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char*
      do_widen(const char* __lo, const char* __hi, char_type* __dest) const;
# 1427 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char
      do_narrow(char_type, char __dfault) const;
# 1453 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_narrow(const char_type* __lo, const char_type* __hi,
  char __dfault, char* __dest) const;


      void
      _M_initialize_ctype() throw();
    };



  template<typename _CharT>
    class ctype_byname : public ctype<_CharT>
    {
    public:
      typedef typename ctype<_CharT>::mask mask;

      explicit
      ctype_byname(const char* __s, size_t __refs = 0);

    protected:
      virtual
      ~ctype_byname() { };
    };


  template<>
    class ctype_byname<char> : public ctype<char>
    {
    public:
      explicit
      ctype_byname(const char* __s, size_t __refs = 0);

    protected:
      virtual
      ~ctype_byname();
    };


  template<>
    class ctype_byname<wchar_t> : public ctype<wchar_t>
    {
    public:
      explicit
      ctype_byname(const char* __s, size_t __refs = 0);

    protected:
      virtual
      ~ctype_byname();
    };


}



# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/ctype_inline.h" 1 3
# 37 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/ctype_inline.h" 3
namespace std {

  bool
  ctype<char>::
  is(mask __m, char __c) const
  { return (_M_table[static_cast<unsigned char>(__c) ] & __m); }


  const char*
  ctype<char>::
  is(const char* __low, const char* __high, mask* __vec) const
  {
    while (__low < __high)
      *__vec++ = _M_table[static_cast<unsigned char>(*__low++)];
    return __high;
  }

  const char*
  ctype<char>::
  scan_is(mask __m, const char* __low, const char* __high) const
  {
    while (__low < __high && !this->is(__m, *__low))
      ++__low;
    return __low;
  }

  const char*
  ctype<char>::
  scan_not(mask __m, const char* __low, const char* __high) const
  {
    while (__low < __high && this->is(__m, *__low) != 0)
      ++__low;
    return __low;
  }

}
# 1509 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 2 3

namespace std {


  class __num_base
  {
  public:


    enum
      {
        _S_ominus,
        _S_oplus,
        _S_ox,
        _S_oX,
        _S_odigits,
        _S_odigits_end = _S_odigits + 16,
        _S_oudigits = _S_odigits_end,
        _S_oudigits_end = _S_oudigits + 16,
        _S_oe = _S_odigits + 14,
        _S_oE = _S_oudigits + 14,
 _S_oend = _S_oudigits_end
      };






    static const char* _S_atoms_out;



    static const char* _S_atoms_in;

    enum
    {
      _S_iminus,
      _S_iplus,
      _S_ix,
      _S_iX,
      _S_izero,
      _S_ie = _S_izero + 14,
      _S_iE = _S_izero + 20,
      _S_iend = 26
    };



    static void
    _S_format_float(const ios_base& __io, char* __fptr, char __mod) throw();
  };

  template<typename _CharT>
    struct __numpunct_cache : public locale::facet
    {
      const char* _M_grouping;
      size_t _M_grouping_size;
      bool _M_use_grouping;
      const _CharT* _M_truename;
      size_t _M_truename_size;
      const _CharT* _M_falsename;
      size_t _M_falsename_size;
      _CharT _M_decimal_point;
      _CharT _M_thousands_sep;





      _CharT _M_atoms_out[__num_base::_S_oend];





      _CharT _M_atoms_in[__num_base::_S_iend];

      bool _M_allocated;

      __numpunct_cache(size_t __refs = 0) : facet(__refs),
      _M_grouping(__null), _M_grouping_size(0), _M_use_grouping(false),
      _M_truename(__null), _M_truename_size(0), _M_falsename(__null),
      _M_falsename_size(0), _M_decimal_point(_CharT()),
      _M_thousands_sep(_CharT()), _M_allocated(false)
      { }

      ~__numpunct_cache();

      void
      _M_cache(const locale& __loc);

    private:
      __numpunct_cache&
      operator=(const __numpunct_cache&);

      explicit
      __numpunct_cache(const __numpunct_cache&);
    };

  template<typename _CharT>
    __numpunct_cache<_CharT>::~__numpunct_cache()
    {
      if (_M_allocated)
 {
   delete [] _M_grouping;
   delete [] _M_truename;
   delete [] _M_falsename;
 }
    }
# 1634 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
  template<typename _CharT>
    class numpunct : public locale::facet
    {
    public:



      typedef _CharT char_type;
      typedef basic_string<_CharT> string_type;

      typedef __numpunct_cache<_CharT> __cache_type;

    protected:
      __cache_type* _M_data;

    public:

      static locale::id id;






      explicit
      numpunct(size_t __refs = 0) : facet(__refs), _M_data(__null)
      { _M_initialize_numpunct(); }
# 1671 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      explicit
      numpunct(__cache_type* __cache, size_t __refs = 0)
      : facet(__refs), _M_data(__cache)
      { _M_initialize_numpunct(); }
# 1685 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      explicit
      numpunct(__c_locale __cloc, size_t __refs = 0)
      : facet(__refs), _M_data(__null)
      { _M_initialize_numpunct(__cloc); }
# 1699 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      char_type
      decimal_point() const
      { return this->do_decimal_point(); }
# 1712 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      char_type
      thousands_sep() const
      { return this->do_thousands_sep(); }
# 1743 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      string
      grouping() const
      { return this->do_grouping(); }
# 1756 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      string_type
      truename() const
      { return this->do_truename(); }
# 1769 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      string_type
      falsename() const
      { return this->do_falsename(); }

    protected:

      virtual
      ~numpunct();
# 1786 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char_type
      do_decimal_point() const
      { return _M_data->_M_decimal_point; }
# 1798 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char_type
      do_thousands_sep() const
      { return _M_data->_M_thousands_sep; }
# 1811 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual string
      do_grouping() const
      { return _M_data->_M_grouping; }
# 1824 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual string_type
      do_truename() const
      { return _M_data->_M_truename; }
# 1837 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual string_type
      do_falsename() const
      { return _M_data->_M_falsename; }


      void
      _M_initialize_numpunct(__c_locale __cloc = __null);
    };

  template<typename _CharT>
    locale::id numpunct<_CharT>::id;

  template<>
    numpunct<char>::~numpunct();

  template<>
    void
    numpunct<char>::_M_initialize_numpunct(__c_locale __cloc);


  template<>
    numpunct<wchar_t>::~numpunct();

  template<>
    void
    numpunct<wchar_t>::_M_initialize_numpunct(__c_locale __cloc);



  template<typename _CharT>
    class numpunct_byname : public numpunct<_CharT>
    {
    public:
      typedef _CharT char_type;
      typedef basic_string<_CharT> string_type;

      explicit
      numpunct_byname(const char* __s, size_t __refs = 0)
      : numpunct<_CharT>(__refs)
      {
 if (__builtin_strcmp(__s, "C") != 0
     && __builtin_strcmp(__s, "POSIX") != 0)
   {
     __c_locale __tmp;
     this->_S_create_c_locale(__tmp, __s);
     this->_M_initialize_numpunct(__tmp);
     this->_S_destroy_c_locale(__tmp);
   }
      }

    protected:
      virtual
      ~numpunct_byname() { }
    };
# 1907 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
  template<typename _CharT, typename _InIter>
    class num_get : public locale::facet
    {
    public:



      typedef _CharT char_type;
      typedef _InIter iter_type;



      static locale::id id;
# 1928 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      explicit
      num_get(size_t __refs = 0) : facet(__refs) { }
# 1954 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, bool& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }
# 1990 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, long& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, unsigned short& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, unsigned int& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, unsigned long& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }


      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, long long& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, unsigned long long& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }
# 2049 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, float& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, double& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, long double& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }
# 2091 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, void*& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

    protected:

      virtual ~num_get() { }

      iter_type
      _M_extract_float(iter_type, iter_type, ios_base&, ios_base::iostate&,
         string&) const;

      template<typename _ValueT>
        iter_type
        _M_extract_int(iter_type, iter_type, ios_base&, ios_base::iostate&,
         _ValueT&) const;

      template<typename _CharT2>
      typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value, int>::__type
        _M_find(const _CharT2*, size_t __len, _CharT2 __c) const
        {
   int __ret = -1;
   if (__len <= 10)
     {
       if (__c >= _CharT2('0') && __c < _CharT2(_CharT2('0') + __len))
  __ret = __c - _CharT2('0');
     }
   else
     {
       if (__c >= _CharT2('0') && __c <= _CharT2('9'))
  __ret = __c - _CharT2('0');
       else if (__c >= _CharT2('a') && __c <= _CharT2('f'))
  __ret = 10 + (__c - _CharT2('a'));
       else if (__c >= _CharT2('A') && __c <= _CharT2('F'))
  __ret = 10 + (__c - _CharT2('A'));
     }
   return __ret;
 }

      template<typename _CharT2>
      typename __gnu_cxx::__enable_if<!__is_char<_CharT2>::__value,
          int>::__type
        _M_find(const _CharT2* __zero, size_t __len, _CharT2 __c) const
        {
   int __ret = -1;
   const char_type* __q = char_traits<_CharT2>::find(__zero, __len, __c);
   if (__q)
     {
       __ret = __q - __zero;
       if (__ret > 15)
  __ret -= 6;
     }
   return __ret;
 }
# 2162 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate&, bool&) const;

      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, long& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }

      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, unsigned short& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }

      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, unsigned int& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }

      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, unsigned long& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }


      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, long long& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }

      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, unsigned long long& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }


      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
      float&) const;

      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
      double&) const;







      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
      long double&) const;


      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
      void*&) const;
# 2227 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
    };

  template<typename _CharT, typename _InIter>
    locale::id num_get<_CharT, _InIter>::id;
# 2245 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
  template<typename _CharT, typename _OutIter>
    class num_put : public locale::facet
    {
    public:



      typedef _CharT char_type;
      typedef _OutIter iter_type;



      static locale::id id;
# 2266 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      explicit
      num_put(size_t __refs = 0) : facet(__refs) { }
# 2284 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill, bool __v) const
      { return this->do_put(__s, __f, __fill, __v); }
# 2326 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill, long __v) const
      { return this->do_put(__s, __f, __fill, __v); }

      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill,
   unsigned long __v) const
      { return this->do_put(__s, __f, __fill, __v); }


      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill, long long __v) const
      { return this->do_put(__s, __f, __fill, __v); }

      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill,
   unsigned long long __v) const
      { return this->do_put(__s, __f, __fill, __v); }
# 2389 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill, double __v) const
      { return this->do_put(__s, __f, __fill, __v); }

      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill,
   long double __v) const
      { return this->do_put(__s, __f, __fill, __v); }
# 2414 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill,
   const void* __v) const
      { return this->do_put(__s, __f, __fill, __v); }

    protected:
      template<typename _ValueT>
        iter_type
        _M_insert_float(iter_type, ios_base& __io, char_type __fill,
   char __mod, _ValueT __v) const;

      void
      _M_group_float(const char* __grouping, size_t __grouping_size,
       char_type __sep, const char_type* __p, char_type* __new,
       char_type* __cs, int& __len) const;

      template<typename _ValueT>
        iter_type
        _M_insert_int(iter_type, ios_base& __io, char_type __fill,
        _ValueT __v) const;

      void
      _M_group_int(const char* __grouping, size_t __grouping_size,
     char_type __sep, ios_base& __io, char_type* __new,
     char_type* __cs, int& __len) const;

      void
      _M_pad(char_type __fill, streamsize __w, ios_base& __io,
      char_type* __new, const char_type* __cs, int& __len) const;


      virtual
      ~num_put() { };
# 2462 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, bool __v) const;

      virtual iter_type
      do_put(iter_type __s, ios_base& __io, char_type __fill, long __v) const
      { return _M_insert_int(__s, __io, __fill, __v); }

      virtual iter_type
      do_put(iter_type __s, ios_base& __io, char_type __fill,
      unsigned long __v) const
      { return _M_insert_int(__s, __io, __fill, __v); }


      virtual iter_type
      do_put(iter_type __s, ios_base& __io, char_type __fill,
      long long __v) const
      { return _M_insert_int(__s, __io, __fill, __v); }

      virtual iter_type
      do_put(iter_type __s, ios_base& __io, char_type __fill,
      unsigned long long __v) const
      { return _M_insert_int(__s, __io, __fill, __v); }


      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, double __v) const;






      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, long double __v) const;


      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, const void* __v) const;







    };

  template <typename _CharT, typename _OutIter>
    locale::id num_put<_CharT, _OutIter>::id;
# 2520 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
  template<typename _CharT>
    inline bool
    isspace(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::space, __c); }


  template<typename _CharT>
    inline bool
    isprint(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::print, __c); }


  template<typename _CharT>
    inline bool
    iscntrl(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::cntrl, __c); }


  template<typename _CharT>
    inline bool
    isupper(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::upper, __c); }


  template<typename _CharT>
    inline bool
    islower(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::lower, __c); }


  template<typename _CharT>
    inline bool
    isalpha(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::alpha, __c); }


  template<typename _CharT>
    inline bool
    isdigit(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::digit, __c); }


  template<typename _CharT>
    inline bool
    ispunct(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::punct, __c); }


  template<typename _CharT>
    inline bool
    isxdigit(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::xdigit, __c); }


  template<typename _CharT>
    inline bool
    isalnum(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::alnum, __c); }


  template<typename _CharT>
    inline bool
    isgraph(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::graph, __c); }


  template<typename _CharT>
    inline _CharT
    toupper(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).toupper(__c); }


  template<typename _CharT>
    inline _CharT
    tolower(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).tolower(__c); }

}



# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.tcc" 1 3
# 35 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.tcc" 3
# 35 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.tcc" 3

namespace std {



  template<typename _Facet>
    struct __use_cache
    {
      const _Facet*
      operator() (const locale& __loc) const;
    };


  template<typename _CharT>
    struct __use_cache<__numpunct_cache<_CharT> >
    {
      const __numpunct_cache<_CharT>*
      operator() (const locale& __loc) const
      {
 const size_t __i = numpunct<_CharT>::id._M_id();
 const locale::facet** __caches = __loc._M_impl->_M_caches;
 if (!__caches[__i])
   {
     __numpunct_cache<_CharT>* __tmp = __null;
     if (true)
       {
  __tmp = new __numpunct_cache<_CharT>;
  __tmp->_M_cache(__loc);
       }
     if (false)
       {
  delete __tmp;
                         ;
       }
     __loc._M_impl->_M_install_cache(__tmp, __i);
   }
 return static_cast<const __numpunct_cache<_CharT>*>(__caches[__i]);
      }
    };

  template<typename _CharT>
    void
    __numpunct_cache<_CharT>::_M_cache(const locale& __loc)
    {
      _M_allocated = true;

      const numpunct<_CharT>& __np = use_facet<numpunct<_CharT> >(__loc);

      char* __grouping = 0;
      _CharT* __truename = 0;
      _CharT* __falsename = 0;
      if (true)
 {
   _M_grouping_size = __np.grouping().size();
   __grouping = new char[_M_grouping_size];
   __np.grouping().copy(__grouping, _M_grouping_size);
   _M_grouping = __grouping;
   _M_use_grouping = (_M_grouping_size
        && static_cast<signed char>(_M_grouping[0]) > 0
        && (_M_grouping[0]
     != __gnu_cxx::__numeric_traits<char>::__max));

   _M_truename_size = __np.truename().size();
   __truename = new _CharT[_M_truename_size];
   __np.truename().copy(__truename, _M_truename_size);
   _M_truename = __truename;

   _M_falsename_size = __np.falsename().size();
   __falsename = new _CharT[_M_falsename_size];
   __np.falsename().copy(__falsename, _M_falsename_size);
   _M_falsename = __falsename;

   _M_decimal_point = __np.decimal_point();
   _M_thousands_sep = __np.thousands_sep();

   const ctype<_CharT>& __ct = use_facet<ctype<_CharT> >(__loc);
   __ct.widen(__num_base::_S_atoms_out,
       __num_base::_S_atoms_out
       + __num_base::_S_oend, _M_atoms_out);
   __ct.widen(__num_base::_S_atoms_in,
       __num_base::_S_atoms_in
       + __num_base::_S_iend, _M_atoms_in);
 }
      if (false)
 {
   delete [] __grouping;
   delete [] __truename;
   delete [] __falsename;
                          ;
 }
    }
# 135 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.tcc" 3
  __attribute__ ((__pure__)) bool
  __verify_grouping(const char* __grouping, size_t __grouping_size,
      const string& __grouping_tmp) throw ();



  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    _M_extract_float(_InIter __beg, _InIter __end, ios_base& __io,
       ios_base::iostate& __err, string& __xtrc) const
    {
      typedef char_traits<_CharT> __traits_type;
      typedef __numpunct_cache<_CharT> __cache_type;
      __use_cache<__cache_type> __uc;
      const locale& __loc = __io._M_getloc();
      const __cache_type* __lc = __uc(__loc);
      const _CharT* __lit = __lc->_M_atoms_in;
      char_type __c = char_type();


      bool __testeof = __beg == __end;


      if (!__testeof)
 {
   __c = *__beg;
   const bool __plus = __c == __lit[__num_base::_S_iplus];
   if ((__plus || __c == __lit[__num_base::_S_iminus])
       && !(__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
       && !(__c == __lc->_M_decimal_point))
     {
       __xtrc += __plus ? '+' : '-';
       if (++__beg != __end)
  __c = *__beg;
       else
  __testeof = true;
     }
 }


      bool __found_mantissa = false;
      int __sep_pos = 0;
      while (!__testeof)
 {
   if ((__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
       || __c == __lc->_M_decimal_point)
     break;
   else if (__c == __lit[__num_base::_S_izero])
     {
       if (!__found_mantissa)
  {
    __xtrc += '0';
    __found_mantissa = true;
  }
       ++__sep_pos;

       if (++__beg != __end)
  __c = *__beg;
       else
  __testeof = true;
     }
   else
     break;
 }


      bool __found_dec = false;
      bool __found_sci = false;
      string __found_grouping;
      if (__lc->_M_use_grouping)
 __found_grouping.reserve(32);
      const char_type* __lit_zero = __lit + __num_base::_S_izero;

      if (!__lc->_M_allocated)

 while (!__testeof)
   {
     const int __digit = _M_find(__lit_zero, 10, __c);
     if (__digit != -1)
       {
  __xtrc += '0' + __digit;
  __found_mantissa = true;
       }
     else if (__c == __lc->_M_decimal_point
       && !__found_dec && !__found_sci)
       {
  __xtrc += '.';
  __found_dec = true;
       }
     else if ((__c == __lit[__num_base::_S_ie]
        || __c == __lit[__num_base::_S_iE])
       && !__found_sci && __found_mantissa)
       {

  __xtrc += 'e';
  __found_sci = true;


  if (++__beg != __end)
    {
      __c = *__beg;
      const bool __plus = __c == __lit[__num_base::_S_iplus];
      if (__plus || __c == __lit[__num_base::_S_iminus])
        __xtrc += __plus ? '+' : '-';
      else
        continue;
    }
  else
    {
      __testeof = true;
      break;
    }
       }
     else
       break;

     if (++__beg != __end)
       __c = *__beg;
     else
       __testeof = true;
   }
      else
 while (!__testeof)
   {


     if (__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
       {
  if (!__found_dec && !__found_sci)
    {


      if (__sep_pos)
        {
   __found_grouping += static_cast<char>(__sep_pos);
   __sep_pos = 0;
        }
      else
        {


   __xtrc.clear();
   break;
        }
    }
  else
    break;
       }
     else if (__c == __lc->_M_decimal_point)
       {
  if (!__found_dec && !__found_sci)
    {



      if (__found_grouping.size())
        __found_grouping += static_cast<char>(__sep_pos);
      __xtrc += '.';
      __found_dec = true;
    }
  else
    break;
       }
     else
       {
  const char_type* __q =
    __traits_type::find(__lit_zero, 10, __c);
  if (__q)
    {
      __xtrc += '0' + (__q - __lit_zero);
      __found_mantissa = true;
      ++__sep_pos;
    }
  else if ((__c == __lit[__num_base::_S_ie]
     || __c == __lit[__num_base::_S_iE])
    && !__found_sci && __found_mantissa)
    {

      if (__found_grouping.size() && !__found_dec)
        __found_grouping += static_cast<char>(__sep_pos);
      __xtrc += 'e';
      __found_sci = true;


      if (++__beg != __end)
        {
   __c = *__beg;
   const bool __plus = __c == __lit[__num_base::_S_iplus];
   if ((__plus || __c == __lit[__num_base::_S_iminus])
       && !(__lc->_M_use_grouping
     && __c == __lc->_M_thousands_sep)
       && !(__c == __lc->_M_decimal_point))
        __xtrc += __plus ? '+' : '-';
   else
     continue;
        }
      else
        {
   __testeof = true;
   break;
        }
    }
  else
    break;
       }

     if (++__beg != __end)
       __c = *__beg;
     else
       __testeof = true;
   }



      if (__found_grouping.size())
        {

   if (!__found_dec && !__found_sci)
     __found_grouping += static_cast<char>(__sep_pos);

          if (!std::__verify_grouping(__lc->_M_grouping,
          __lc->_M_grouping_size,
          __found_grouping))
     __err = ios_base::failbit;
        }

      return __beg;
    }

  template<typename _CharT, typename _InIter>
    template<typename _ValueT>
      _InIter
      num_get<_CharT, _InIter>::
      _M_extract_int(_InIter __beg, _InIter __end, ios_base& __io,
       ios_base::iostate& __err, _ValueT& __v) const
      {
        typedef char_traits<_CharT> __traits_type;
 using __gnu_cxx::__add_unsigned;
 typedef typename __add_unsigned<_ValueT>::__type __unsigned_type;
 typedef __numpunct_cache<_CharT> __cache_type;
 __use_cache<__cache_type> __uc;
 const locale& __loc = __io._M_getloc();
 const __cache_type* __lc = __uc(__loc);
 const _CharT* __lit = __lc->_M_atoms_in;
 char_type __c = char_type();


 const ios_base::fmtflags __basefield = __io.flags()
                                        & ios_base::basefield;
 const bool __oct = __basefield == ios_base::oct;
 int __base = __oct ? 8 : (__basefield == ios_base::hex ? 16 : 10);


 bool __testeof = __beg == __end;


 bool __negative = false;
 if (!__testeof)
   {
     __c = *__beg;
     __negative = __c == __lit[__num_base::_S_iminus];
     if ((__negative || __c == __lit[__num_base::_S_iplus])
  && !(__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
  && !(__c == __lc->_M_decimal_point))
       {
  if (++__beg != __end)
    __c = *__beg;
  else
    __testeof = true;
       }
   }



 bool __found_zero = false;
 int __sep_pos = 0;
 while (!__testeof)
   {
     if ((__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
  || __c == __lc->_M_decimal_point)
       break;
     else if (__c == __lit[__num_base::_S_izero]
       && (!__found_zero || __base == 10))
       {
  __found_zero = true;
  ++__sep_pos;
  if (__basefield == 0)
    __base = 8;
  if (__base == 8)
    __sep_pos = 0;
       }
     else if (__found_zero
       && (__c == __lit[__num_base::_S_ix]
    || __c == __lit[__num_base::_S_iX]))
       {
  if (__basefield == 0)
    __base = 16;
  if (__base == 16)
    {
      __found_zero = false;
      __sep_pos = 0;
    }
  else
    break;
       }
     else
       break;

     if (++__beg != __end)
       {
  __c = *__beg;
  if (!__found_zero)
    break;
       }
     else
       __testeof = true;
   }



 const size_t __len = (__base == 16 ? __num_base::_S_iend
         - __num_base::_S_izero : __base);


 string __found_grouping;
 if (__lc->_M_use_grouping)
   __found_grouping.reserve(32);
 bool __testfail = false;
 bool __testoverflow = false;
 const __unsigned_type __max =
   (__negative && __gnu_cxx::__numeric_traits<_ValueT>::__is_signed)
   ? -__gnu_cxx::__numeric_traits<_ValueT>::__min
   : __gnu_cxx::__numeric_traits<_ValueT>::__max;
 const __unsigned_type __smax = __max / __base;
 __unsigned_type __result = 0;
 int __digit = 0;
 const char_type* __lit_zero = __lit + __num_base::_S_izero;

 if (!__lc->_M_allocated)

   while (!__testeof)
     {
       __digit = _M_find(__lit_zero, __len, __c);
       if (__digit == -1)
  break;

       if (__result > __smax)
  __testoverflow = true;
       else
  {
    __result *= __base;
    __testoverflow |= __result > __max - __digit;
    __result += __digit;
    ++__sep_pos;
  }

       if (++__beg != __end)
  __c = *__beg;
       else
  __testeof = true;
     }
 else
   while (!__testeof)
     {


       if (__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
  {


    if (__sep_pos)
      {
        __found_grouping += static_cast<char>(__sep_pos);
        __sep_pos = 0;
      }
    else
      {
        __testfail = true;
        break;
      }
  }
       else if (__c == __lc->_M_decimal_point)
  break;
       else
  {
    const char_type* __q =
      __traits_type::find(__lit_zero, __len, __c);
    if (!__q)
      break;

    __digit = __q - __lit_zero;
    if (__digit > 15)
      __digit -= 6;
    if (__result > __smax)
      __testoverflow = true;
    else
      {
        __result *= __base;
        __testoverflow |= __result > __max - __digit;
        __result += __digit;
        ++__sep_pos;
      }
  }

       if (++__beg != __end)
  __c = *__beg;
       else
  __testeof = true;
     }



 if (__found_grouping.size())
   {

     __found_grouping += static_cast<char>(__sep_pos);

     if (!std::__verify_grouping(__lc->_M_grouping,
     __lc->_M_grouping_size,
     __found_grouping))
       __err = ios_base::failbit;
   }



 if ((!__sep_pos && !__found_zero && !__found_grouping.size())
     || __testfail)
   {
     __v = 0;
     __err = ios_base::failbit;
   }
 else if (__testoverflow)
   {
     if (__negative
  && __gnu_cxx::__numeric_traits<_ValueT>::__is_signed)
       __v = __gnu_cxx::__numeric_traits<_ValueT>::__min;
     else
       __v = __gnu_cxx::__numeric_traits<_ValueT>::__max;
     __err = ios_base::failbit;
   }
 else
   __v = __negative ? -__result : __result;

 if (__testeof)
   __err |= ios_base::eofbit;
 return __beg;
      }



  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, bool& __v) const
    {
      if (!(__io.flags() & ios_base::boolalpha))
        {



   long __l = -1;
          __beg = _M_extract_int(__beg, __end, __io, __err, __l);
   if (__l == 0 || __l == 1)
     __v = bool(__l);
   else
     {


       __v = true;
       __err = ios_base::failbit;
       if (__beg == __end)
  __err |= ios_base::eofbit;
     }
        }
      else
        {

   typedef __numpunct_cache<_CharT> __cache_type;
   __use_cache<__cache_type> __uc;
   const locale& __loc = __io._M_getloc();
   const __cache_type* __lc = __uc(__loc);

   bool __testf = true;
   bool __testt = true;
   bool __donef = __lc->_M_falsename_size == 0;
   bool __donet = __lc->_M_truename_size == 0;
   bool __testeof = false;
   size_t __n = 0;
   while (!__donef || !__donet)
     {
       if (__beg == __end)
  {
    __testeof = true;
    break;
  }

       const char_type __c = *__beg;

       if (!__donef)
  __testf = __c == __lc->_M_falsename[__n];

       if (!__testf && __donet)
  break;

       if (!__donet)
  __testt = __c == __lc->_M_truename[__n];

       if (!__testt && __donef)
  break;

       if (!__testt && !__testf)
  break;

       ++__n;
       ++__beg;

       __donef = !__testf || __n >= __lc->_M_falsename_size;
       __donet = !__testt || __n >= __lc->_M_truename_size;
     }
   if (__testf && __n == __lc->_M_falsename_size && __n)
     {
       __v = false;
       if (__testt && __n == __lc->_M_truename_size)
  __err = ios_base::failbit;
       else
  __err = __testeof ? ios_base::eofbit : ios_base::goodbit;
     }
   else if (__testt && __n == __lc->_M_truename_size && __n)
     {
       __v = true;
       __err = __testeof ? ios_base::eofbit : ios_base::goodbit;
     }
   else
     {


       __v = false;
       __err = ios_base::failbit;
       if (__testeof)
  __err |= ios_base::eofbit;
     }
 }
      return __beg;
    }

  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
    ios_base::iostate& __err, float& __v) const
    {
      string __xtrc;
      __xtrc.reserve(32);
      __beg = _M_extract_float(__beg, __end, __io, __err, __xtrc);
      std::__convert_to_v(__xtrc.c_str(), __v, __err, _S_get_c_locale());
      if (__beg == __end)
 __err |= ios_base::eofbit;
      return __beg;
    }

  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, double& __v) const
    {
      string __xtrc;
      __xtrc.reserve(32);
      __beg = _M_extract_float(__beg, __end, __io, __err, __xtrc);
      std::__convert_to_v(__xtrc.c_str(), __v, __err, _S_get_c_locale());
      if (__beg == __end)
 __err |= ios_base::eofbit;
      return __beg;
    }
# 729 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.tcc" 3
  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, long double& __v) const
    {
      string __xtrc;
      __xtrc.reserve(32);
      __beg = _M_extract_float(__beg, __end, __io, __err, __xtrc);
      std::__convert_to_v(__xtrc.c_str(), __v, __err, _S_get_c_locale());
      if (__beg == __end)
 __err |= ios_base::eofbit;
      return __beg;
    }

  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, void*& __v) const
    {

      typedef ios_base::fmtflags fmtflags;
      const fmtflags __fmt = __io.flags();
      __io.flags((__fmt & ~ios_base::basefield) | ios_base::hex);

      typedef __gnu_cxx::__conditional_type<(sizeof(void*)
          <= sizeof(unsigned long)),
 unsigned long, unsigned long long>::__type _UIntPtrType;

      _UIntPtrType __ul;
      __beg = _M_extract_int(__beg, __end, __io, __err, __ul);


      __io.flags(__fmt);

      __v = reinterpret_cast<void*>(__ul);
      return __beg;
    }



  template<typename _CharT, typename _OutIter>
    void
    num_put<_CharT, _OutIter>::
    _M_pad(_CharT __fill, streamsize __w, ios_base& __io,
    _CharT* __new, const _CharT* __cs, int& __len) const
    {


      __pad<_CharT, char_traits<_CharT> >::_S_pad(__io, __fill, __new,
        __cs, __w, __len);
      __len = static_cast<int>(__w);
    }



  template<typename _CharT, typename _ValueT>
    int
    __int_to_char(_CharT* __bufend, _ValueT __v, const _CharT* __lit,
    ios_base::fmtflags __flags, bool __dec)
    {
      _CharT* __buf = __bufend;
      if (__builtin_expect(__dec, true))
 {

   do
     {
       *--__buf = __lit[(__v % 10) + __num_base::_S_odigits];
       __v /= 10;
     }
   while (__v != 0);
 }
      else if ((__flags & ios_base::basefield) == ios_base::oct)
 {

   do
     {
       *--__buf = __lit[(__v & 0x7) + __num_base::_S_odigits];
       __v >>= 3;
     }
   while (__v != 0);
 }
      else
 {

   const bool __uppercase = __flags & ios_base::uppercase;
   const int __case_offset = __uppercase ? __num_base::_S_oudigits
                                         : __num_base::_S_odigits;
   do
     {
       *--__buf = __lit[(__v & 0xf) + __case_offset];
       __v >>= 4;
     }
   while (__v != 0);
 }
      return __bufend - __buf;
    }



  template<typename _CharT, typename _OutIter>
    void
    num_put<_CharT, _OutIter>::
    _M_group_int(const char* __grouping, size_t __grouping_size, _CharT __sep,
   ios_base&, _CharT* __new, _CharT* __cs, int& __len) const
    {
      _CharT* __p = std::__add_grouping(__new, __sep, __grouping,
     __grouping_size, __cs, __cs + __len);
      __len = __p - __new;
    }

  template<typename _CharT, typename _OutIter>
    template<typename _ValueT>
      _OutIter
      num_put<_CharT, _OutIter>::
      _M_insert_int(_OutIter __s, ios_base& __io, _CharT __fill,
      _ValueT __v) const
      {
 using __gnu_cxx::__add_unsigned;
 typedef typename __add_unsigned<_ValueT>::__type __unsigned_type;
 typedef __numpunct_cache<_CharT> __cache_type;
 __use_cache<__cache_type> __uc;
 const locale& __loc = __io._M_getloc();
 const __cache_type* __lc = __uc(__loc);
 const _CharT* __lit = __lc->_M_atoms_out;
 const ios_base::fmtflags __flags = __io.flags();


 const int __ilen = 5 * sizeof(_ValueT);
 _CharT* __cs = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
            * __ilen));



 const ios_base::fmtflags __basefield = __flags & ios_base::basefield;
 const bool __dec = (__basefield != ios_base::oct
       && __basefield != ios_base::hex);
 const __unsigned_type __u = ((__v > 0 || !__dec)
         ? __unsigned_type(__v)
         : -__unsigned_type(__v));
  int __len = __int_to_char(__cs + __ilen, __u, __lit, __flags, __dec);
 __cs += __ilen - __len;


 if (__lc->_M_use_grouping)
   {


     _CharT* __cs2 = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
          * (__len + 1)
          * 2));
     _M_group_int(__lc->_M_grouping, __lc->_M_grouping_size,
    __lc->_M_thousands_sep, __io, __cs2 + 2, __cs, __len);
     __cs = __cs2 + 2;
   }


 if (__builtin_expect(__dec, true))
   {

     if (__v >= 0)
       {
  if (bool(__flags & ios_base::showpos)
      && __gnu_cxx::__numeric_traits<_ValueT>::__is_signed)
    *--__cs = __lit[__num_base::_S_oplus], ++__len;
       }
     else
       *--__cs = __lit[__num_base::_S_ominus], ++__len;
   }
 else if (bool(__flags & ios_base::showbase) && __v)
   {
     if (__basefield == ios_base::oct)
       *--__cs = __lit[__num_base::_S_odigits], ++__len;
     else
       {

  const bool __uppercase = __flags & ios_base::uppercase;
  *--__cs = __lit[__num_base::_S_ox + __uppercase];

  *--__cs = __lit[__num_base::_S_odigits];
  __len += 2;
       }
   }


 const streamsize __w = __io.width();
 if (__w > static_cast<streamsize>(__len))
   {
     _CharT* __cs3 = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
          * __w));
     _M_pad(__fill, __w, __io, __cs3, __cs, __len);
     __cs = __cs3;
   }
 __io.width(0);



 return std::__write(__s, __cs, __len);
      }

  template<typename _CharT, typename _OutIter>
    void
    num_put<_CharT, _OutIter>::
    _M_group_float(const char* __grouping, size_t __grouping_size,
     _CharT __sep, const _CharT* __p, _CharT* __new,
     _CharT* __cs, int& __len) const
    {



      const int __declen = __p ? __p - __cs : __len;
      _CharT* __p2 = std::__add_grouping(__new, __sep, __grouping,
      __grouping_size,
      __cs, __cs + __declen);


      int __newlen = __p2 - __new;
      if (__p)
 {
   char_traits<_CharT>::copy(__p2, __p, __len - __declen);
   __newlen += __len - __declen;
 }
      __len = __newlen;
    }
# 965 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.tcc" 3
  template<typename _CharT, typename _OutIter>
    template<typename _ValueT>
      _OutIter
      num_put<_CharT, _OutIter>::
      _M_insert_float(_OutIter __s, ios_base& __io, _CharT __fill, char __mod,
         _ValueT __v) const
      {
 typedef __numpunct_cache<_CharT> __cache_type;
 __use_cache<__cache_type> __uc;
 const locale& __loc = __io._M_getloc();
 const __cache_type* __lc = __uc(__loc);


 const streamsize __prec = __io.precision() < 0 ? 6 : __io.precision();

 const int __max_digits =
   __gnu_cxx::__numeric_traits<_ValueT>::__digits10;


 int __len;

 char __fbuf[16];
 __num_base::_S_format_float(__io, __fbuf, __mod);




 int __cs_size = __max_digits * 3;
 char* __cs = static_cast<char*>(__builtin_alloca(__cs_size));
 __len = std::__convert_from_v(_S_get_c_locale(), __cs, __cs_size,
          __fbuf, __prec, __v);


 if (__len >= __cs_size)
   {
     __cs_size = __len + 1;
     __cs = static_cast<char*>(__builtin_alloca(__cs_size));
     __len = std::__convert_from_v(_S_get_c_locale(), __cs, __cs_size,
       __fbuf, __prec, __v);
   }
# 1026 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.tcc" 3
 const ctype<_CharT>& __ctype = use_facet<ctype<_CharT> >(__loc);

 _CharT* __ws = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
            * __len));
 __ctype.widen(__cs, __cs + __len, __ws);


 _CharT* __wp = 0;
 const char* __p = char_traits<char>::find(__cs, __len, '.');
 if (__p)
   {
     __wp = __ws + (__p - __cs);
     *__wp = __lc->_M_decimal_point;
   }




 if (__lc->_M_use_grouping
     && (__wp || __len < 3 || (__cs[1] <= '9' && __cs[2] <= '9'
          && __cs[1] >= '0' && __cs[2] >= '0')))
   {


     _CharT* __ws2 = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
          * __len * 2));

     streamsize __off = 0;
     if (__cs[0] == '-' || __cs[0] == '+')
       {
  __off = 1;
  __ws2[0] = __ws[0];
  __len -= 1;
       }

     _M_group_float(__lc->_M_grouping, __lc->_M_grouping_size,
      __lc->_M_thousands_sep, __wp, __ws2 + __off,
      __ws + __off, __len);
     __len += __off;

     __ws = __ws2;
   }


 const streamsize __w = __io.width();
 if (__w > static_cast<streamsize>(__len))
   {
     _CharT* __ws3 = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
          * __w));
     _M_pad(__fill, __w, __io, __ws3, __ws, __len);
     __ws = __ws3;
   }
 __io.width(0);



 return std::__write(__s, __ws, __len);
      }

  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill, bool __v) const
    {
      const ios_base::fmtflags __flags = __io.flags();
      if ((__flags & ios_base::boolalpha) == 0)
        {
          const long __l = __v;
          __s = _M_insert_int(__s, __io, __fill, __l);
        }
      else
        {
   typedef __numpunct_cache<_CharT> __cache_type;
   __use_cache<__cache_type> __uc;
   const locale& __loc = __io._M_getloc();
   const __cache_type* __lc = __uc(__loc);

   const _CharT* __name = __v ? __lc->_M_truename
                              : __lc->_M_falsename;
   int __len = __v ? __lc->_M_truename_size
                   : __lc->_M_falsename_size;

   const streamsize __w = __io.width();
   if (__w > static_cast<streamsize>(__len))
     {
       const streamsize __plen = __w - __len;
       _CharT* __ps
  = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
       * __plen));

       char_traits<_CharT>::assign(__ps, __plen, __fill);
       __io.width(0);

       if ((__flags & ios_base::adjustfield) == ios_base::left)
  {
    __s = std::__write(__s, __name, __len);
    __s = std::__write(__s, __ps, __plen);
  }
       else
  {
    __s = std::__write(__s, __ps, __plen);
    __s = std::__write(__s, __name, __len);
  }
       return __s;
     }
   __io.width(0);
   __s = std::__write(__s, __name, __len);
 }
      return __s;
    }

  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill, double __v) const
    { return _M_insert_float(__s, __io, __fill, char(), __v); }
# 1151 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.tcc" 3
  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill,
    long double __v) const
    { return _M_insert_float(__s, __io, __fill, 'L', __v); }

  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill,
           const void* __v) const
    {
      const ios_base::fmtflags __flags = __io.flags();
      const ios_base::fmtflags __fmt = ~(ios_base::basefield
      | ios_base::uppercase);
      __io.flags((__flags & __fmt) | (ios_base::hex | ios_base::showbase));

      typedef __gnu_cxx::__conditional_type<(sizeof(const void*)
          <= sizeof(unsigned long)),
 unsigned long, unsigned long long>::__type _UIntPtrType;

      __s = _M_insert_int(__s, __io, __fill,
     reinterpret_cast<_UIntPtrType>(__v));
      __io.flags(__flags);
      return __s;
    }
# 1188 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.tcc" 3
  template<typename _CharT, typename _Traits>
    void
    __pad<_CharT, _Traits>::_S_pad(ios_base& __io, _CharT __fill,
       _CharT* __news, const _CharT* __olds,
       streamsize __newlen, streamsize __oldlen)
    {
      const size_t __plen = static_cast<size_t>(__newlen - __oldlen);
      const ios_base::fmtflags __adjust = __io.flags() & ios_base::adjustfield;


      if (__adjust == ios_base::left)
 {
   _Traits::copy(__news, __olds, __oldlen);
   _Traits::assign(__news + __oldlen, __plen, __fill);
   return;
 }

      size_t __mod = 0;
      if (__adjust == ios_base::internal)
 {



          const locale& __loc = __io._M_getloc();
   const ctype<_CharT>& __ctype = use_facet<ctype<_CharT> >(__loc);

   if (__ctype.widen('-') == __olds[0]
       || __ctype.widen('+') == __olds[0])
     {
       __news[0] = __olds[0];
       __mod = 1;
       ++__news;
     }
   else if (__ctype.widen('0') == __olds[0]
     && __oldlen > 1
     && (__ctype.widen('x') == __olds[1]
         || __ctype.widen('X') == __olds[1]))
     {
       __news[0] = __olds[0];
       __news[1] = __olds[1];
       __mod = 2;
       __news += 2;
     }

 }
      _Traits::assign(__news, __plen, __fill);
      _Traits::copy(__news + __plen, __olds + __mod, __oldlen - __mod);
    }

  template<typename _CharT>
    _CharT*
    __add_grouping(_CharT* __s, _CharT __sep,
     const char* __gbeg, size_t __gsize,
     const _CharT* __first, const _CharT* __last)
    {
      size_t __idx = 0;
      size_t __ctr = 0;

      while (__last - __first > __gbeg[__idx]
      && static_cast<signed char>(__gbeg[__idx]) > 0
      && __gbeg[__idx] != __gnu_cxx::__numeric_traits<char>::__max)
 {
   __last -= __gbeg[__idx];
   __idx < __gsize - 1 ? ++__idx : ++__ctr;
 }

      while (__first != __last)
 *__s++ = *__first++;

      while (__ctr--)
 {
   *__s++ = __sep;
   for (char __i = __gbeg[__idx]; __i > 0; --__i)
     *__s++ = *__first++;
 }

      while (__idx--)
 {
   *__s++ = __sep;
   for (char __i = __gbeg[__idx]; __i > 0; --__i)
     *__s++ = *__first++;
 }

      return __s;
    }





  extern template class numpunct<char>;
  extern template class numpunct_byname<char>;
  extern template class num_get<char>;
  extern template class num_put<char>;
  extern template class ctype_byname<char>;

  extern template
    const ctype<char>&
    use_facet<ctype<char> >(const locale&);

  extern template
    const numpunct<char>&
    use_facet<numpunct<char> >(const locale&);

  extern template
    const num_put<char>&
    use_facet<num_put<char> >(const locale&);

  extern template
    const num_get<char>&
    use_facet<num_get<char> >(const locale&);

  extern template
    bool
    has_facet<ctype<char> >(const locale&);

  extern template
    bool
    has_facet<numpunct<char> >(const locale&);

  extern template
    bool
    has_facet<num_put<char> >(const locale&);

  extern template
    bool
    has_facet<num_get<char> >(const locale&);


  extern template class numpunct<wchar_t>;
  extern template class numpunct_byname<wchar_t>;
  extern template class num_get<wchar_t>;
  extern template class num_put<wchar_t>;
  extern template class ctype_byname<wchar_t>;

  extern template
    const ctype<wchar_t>&
    use_facet<ctype<wchar_t> >(const locale&);

  extern template
    const numpunct<wchar_t>&
    use_facet<numpunct<wchar_t> >(const locale&);

  extern template
    const num_put<wchar_t>&
    use_facet<num_put<wchar_t> >(const locale&);

  extern template
    const num_get<wchar_t>&
    use_facet<num_get<wchar_t> >(const locale&);

 extern template
    bool
    has_facet<ctype<wchar_t> >(const locale&);

  extern template
    bool
    has_facet<numpunct<wchar_t> >(const locale&);

  extern template
    bool
    has_facet<num_put<wchar_t> >(const locale&);

  extern template
    bool
    has_facet<num_get<wchar_t> >(const locale&);



}
# 2601 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 2 3
# 39 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 2 3


namespace std {

  template<typename _Facet>
    inline const _Facet&
    __check_facet(const _Facet* __f)
    {
      if (!__f)
 __throw_bad_cast();
      return *__f;
    }
# 60 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
  template<typename _CharT, typename _Traits>
    class basic_ios : public ios_base
    {
    public:






      typedef _CharT char_type;
      typedef typename _Traits::int_type int_type;
      typedef typename _Traits::pos_type pos_type;
      typedef typename _Traits::off_type off_type;
      typedef _Traits traits_type;






      typedef ctype<_CharT> __ctype_type;
      typedef num_put<_CharT, ostreambuf_iterator<_CharT, _Traits> >
           __num_put_type;
      typedef num_get<_CharT, istreambuf_iterator<_CharT, _Traits> >
           __num_get_type;



    protected:
      basic_ostream<_CharT, _Traits>* _M_tie;
      mutable char_type _M_fill;
      mutable bool _M_fill_init;
      basic_streambuf<_CharT, _Traits>* _M_streambuf;


      const __ctype_type* _M_ctype;

      const __num_put_type* _M_num_put;

      const __num_get_type* _M_num_get;

    public:







      operator void*() const
      { return this->fail() ? 0 : const_cast<basic_ios*>(this); }

      bool
      operator!() const
      { return this->fail(); }
# 125 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      iostate
      rdstate() const
      { return _M_streambuf_state; }
# 136 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      void
      clear(iostate __state = goodbit);







      void
      setstate(iostate __state)
      { this->clear(this->rdstate() | __state); }




      void
      _M_setstate(iostate __state)
      {


 _M_streambuf_state |= __state;
 if (this->exceptions() & __state)
                          ;
      }







      bool
      good() const
      { return this->rdstate() == 0; }







      bool
      eof() const
      { return (this->rdstate() & eofbit) != 0; }
# 189 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      bool
      fail() const
      { return (this->rdstate() & (badbit | failbit)) != 0; }







      bool
      bad() const
      { return (this->rdstate() & badbit) != 0; }
# 210 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      iostate
      exceptions() const
      { return _M_exception; }
# 245 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      void
      exceptions(iostate __except)
      {
        _M_exception = __except;
        this->clear(_M_streambuf_state);
      }







      explicit
      basic_ios(basic_streambuf<_CharT, _Traits>* __sb)
      : ios_base(), _M_tie(0), _M_fill(), _M_fill_init(false), _M_streambuf(0),
 _M_ctype(0), _M_num_put(0), _M_num_get(0)
      { this->init(__sb); }







      virtual
      ~basic_ios() { }
# 283 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      basic_ostream<_CharT, _Traits>*
      tie() const
      { return _M_tie; }
# 295 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      basic_ostream<_CharT, _Traits>*
      tie(basic_ostream<_CharT, _Traits>* __tiestr)
      {
        basic_ostream<_CharT, _Traits>* __old = _M_tie;
        _M_tie = __tiestr;
        return __old;
      }







      basic_streambuf<_CharT, _Traits>*
      rdbuf() const
      { return _M_streambuf; }
# 335 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      basic_streambuf<_CharT, _Traits>*
      rdbuf(basic_streambuf<_CharT, _Traits>* __sb);
# 349 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      basic_ios&
      copyfmt(const basic_ios& __rhs);







      char_type
      fill() const
      {
 if (!_M_fill_init)
   {
     _M_fill = this->widen(' ');
     _M_fill_init = true;
   }
 return _M_fill;
      }
# 378 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      char_type
      fill(char_type __ch)
      {
 char_type __old = this->fill();
 _M_fill = __ch;
 return __old;
      }
# 398 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      locale
      imbue(const locale& __loc);
# 418 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      char
      narrow(char_type __c, char __dfault) const
      { return __check_facet(_M_ctype).narrow(__c, __dfault); }
# 437 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      char_type
      widen(char __c) const
      { return __check_facet(_M_ctype).widen(__c); }

    protected:







      basic_ios()
      : ios_base(), _M_tie(0), _M_fill(char_type()), _M_fill_init(false),
 _M_streambuf(0), _M_ctype(0), _M_num_put(0), _M_num_get(0)
      { }







      void
      init(basic_streambuf<_CharT, _Traits>* __sb);

      void
      _M_cache_locale(const locale& __loc);
    };

}



# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.tcc" 1 3
# 34 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.tcc" 3
# 34 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.tcc" 3

namespace std {

  template<typename _CharT, typename _Traits>
    void
    basic_ios<_CharT, _Traits>::clear(iostate __state)
    {
      if (this->rdbuf())
 _M_streambuf_state = __state;
      else
   _M_streambuf_state = __state | badbit;
      if (this->exceptions() & this->rdstate())
 __throw_ios_failure(("basic_ios::clear"));
    }

  template<typename _CharT, typename _Traits>
    basic_streambuf<_CharT, _Traits>*
    basic_ios<_CharT, _Traits>::rdbuf(basic_streambuf<_CharT, _Traits>* __sb)
    {
      basic_streambuf<_CharT, _Traits>* __old = _M_streambuf;
      _M_streambuf = __sb;
      this->clear();
      return __old;
    }

  template<typename _CharT, typename _Traits>
    basic_ios<_CharT, _Traits>&
    basic_ios<_CharT, _Traits>::copyfmt(const basic_ios& __rhs)
    {


      if (this != &__rhs)
 {




   _Words* __words = (__rhs._M_word_size <= _S_local_word_size) ?
                      _M_local_word : new _Words[__rhs._M_word_size];


   _Callback_list* __cb = __rhs._M_callbacks;
   if (__cb)
     __cb->_M_add_reference();
   _M_call_callbacks(erase_event);
   if (_M_word != _M_local_word)
     {
       delete [] _M_word;
       _M_word = 0;
     }
   _M_dispose_callbacks();


   _M_callbacks = __cb;
   for (int __i = 0; __i < __rhs._M_word_size; ++__i)
     __words[__i] = __rhs._M_word[__i];
   _M_word = __words;
   _M_word_size = __rhs._M_word_size;

   this->flags(__rhs.flags());
   this->width(__rhs.width());
   this->precision(__rhs.precision());
   this->tie(__rhs.tie());
   this->fill(__rhs.fill());
   _M_ios_locale = __rhs.getloc();
   _M_cache_locale(_M_ios_locale);

   _M_call_callbacks(copyfmt_event);


   this->exceptions(__rhs.exceptions());
 }
      return *this;
    }


  template<typename _CharT, typename _Traits>
    locale
    basic_ios<_CharT, _Traits>::imbue(const locale& __loc)
    {
      locale __old(this->getloc());
      ios_base::imbue(__loc);
      _M_cache_locale(__loc);
      if (this->rdbuf() != 0)
 this->rdbuf()->pubimbue(__loc);
      return __old;
    }

  template<typename _CharT, typename _Traits>
    void
    basic_ios<_CharT, _Traits>::init(basic_streambuf<_CharT, _Traits>* __sb)
    {

      ios_base::_M_init();


      _M_cache_locale(_M_ios_locale);
# 144 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.tcc" 3
      _M_fill = _CharT();
      _M_fill_init = false;

      _M_tie = 0;
      _M_exception = goodbit;
      _M_streambuf = __sb;
      _M_streambuf_state = __sb ? goodbit : badbit;
    }

  template<typename _CharT, typename _Traits>
    void
    basic_ios<_CharT, _Traits>::_M_cache_locale(const locale& __loc)
    {
      if (__builtin_expect(has_facet<__ctype_type>(__loc), true))
 _M_ctype = &use_facet<__ctype_type>(__loc);
      else
 _M_ctype = 0;

      if (__builtin_expect(has_facet<__num_put_type>(__loc), true))
 _M_num_put = &use_facet<__num_put_type>(__loc);
      else
 _M_num_put = 0;

      if (__builtin_expect(has_facet<__num_get_type>(__loc), true))
 _M_num_get = &use_facet<__num_get_type>(__loc);
      else
 _M_num_get = 0;
    }





  extern template class basic_ios<char>;


  extern template class basic_ios<wchar_t>;



}
# 471 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 2 3
# 45 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ios" 2 3
# 40 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 2 3


namespace std {
# 53 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
  template<typename _CharT, typename _Traits>
    class basic_ostream : virtual public basic_ios<_CharT, _Traits>
    {
    public:

      typedef _CharT char_type;
      typedef typename _Traits::int_type int_type;
      typedef typename _Traits::pos_type pos_type;
      typedef typename _Traits::off_type off_type;
      typedef _Traits traits_type;


      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef basic_ios<_CharT, _Traits> __ios_type;
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef num_put<_CharT, ostreambuf_iterator<_CharT, _Traits> >
             __num_put_type;
      typedef ctype<_CharT> __ctype_type;
# 80 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
      explicit
      basic_ostream(__streambuf_type* __sb)
      { this->init(__sb); }






      virtual
      ~basic_ostream() { }


      class sentry;
      friend class sentry;
# 106 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
      __ostream_type&
      operator<<(__ostream_type& (*__pf)(__ostream_type&))
      {



 return __pf(*this);
      }

      __ostream_type&
      operator<<(__ios_type& (*__pf)(__ios_type&))
      {



 __pf(*this);
 return *this;
      }

      __ostream_type&
      operator<<(ios_base& (*__pf) (ios_base&))
      {



 __pf(*this);
 return *this;
      }
# 163 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
      __ostream_type&
      operator<<(long __n)
      { return _M_insert(__n); }

      __ostream_type&
      operator<<(unsigned long __n)
      { return _M_insert(__n); }

      __ostream_type&
      operator<<(bool __n)
      { return _M_insert(__n); }

      __ostream_type&
      operator<<(short __n);

      __ostream_type&
      operator<<(unsigned short __n)
      {


 return _M_insert(static_cast<unsigned long>(__n));
      }

      __ostream_type&
      operator<<(int __n);

      __ostream_type&
      operator<<(unsigned int __n)
      {


 return _M_insert(static_cast<unsigned long>(__n));
      }


      __ostream_type&
      operator<<(long long __n)
      { return _M_insert(__n); }

      __ostream_type&
      operator<<(unsigned long long __n)
      { return _M_insert(__n); }


      __ostream_type&
      operator<<(double __f)
      { return _M_insert(__f); }

      __ostream_type&
      operator<<(float __f)
      {


 return _M_insert(static_cast<double>(__f));
      }

      __ostream_type&
      operator<<(long double __f)
      { return _M_insert(__f); }

      __ostream_type&
      operator<<(const void* __p)
      { return _M_insert(__p); }
# 248 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
      __ostream_type&
      operator<<(__streambuf_type* __sb);
# 281 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
      __ostream_type&
      put(char_type __c);


      void
      _M_write(const char_type* __s, streamsize __n)
      {
 const streamsize __put = this->rdbuf()->sputn(__s, __n);
 if (__put != __n)
   this->setstate(ios_base::badbit);
      }
# 309 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
      __ostream_type&
      write(const char_type* __s, streamsize __n);
# 322 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
      __ostream_type&
      flush();
# 333 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
      pos_type
      tellp();
# 344 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
      __ostream_type&
      seekp(pos_type);
# 356 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
       __ostream_type&
      seekp(off_type, ios_base::seekdir);

    protected:
      basic_ostream()
      { this->init(0); }

      template<typename _ValueT>
        __ostream_type&
        _M_insert(_ValueT __v);
    };
# 375 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
  template <typename _CharT, typename _Traits>
    class basic_ostream<_CharT, _Traits>::sentry
    {

      bool _M_ok;
      basic_ostream<_CharT, _Traits>& _M_os;

    public:
# 394 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
      explicit
      sentry(basic_ostream<_CharT, _Traits>& __os);
# 404 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
      ~sentry()
      {

 if (bool(_M_os.flags() & ios_base::unitbuf) && !uncaught_exception())
   {

     if (_M_os.rdbuf() && _M_os.rdbuf()->pubsync() == -1)
       _M_os.setstate(ios_base::badbit);
   }
      }
# 425 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
      operator bool() const
      { return _M_ok; }
    };
# 446 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, _CharT __c)
    { return __ostream_insert(__out, &__c, 1); }

  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, char __c)
    { return (__out << __out.widen(__c)); }


  template <class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, char __c)
    { return __ostream_insert(__out, &__c, 1); }


  template<class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, signed char __c)
    { return (__out << static_cast<char>(__c)); }

  template<class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, unsigned char __c)
    { return (__out << static_cast<char>(__c)); }
# 488 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, const _CharT* __s)
    {
      if (!__s)
 __out.setstate(ios_base::badbit);
      else
 __ostream_insert(__out, __s,
    static_cast<streamsize>(_Traits::length(__s)));
      return __out;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits> &
    operator<<(basic_ostream<_CharT, _Traits>& __out, const char* __s);


  template<class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, const char* __s)
    {
      if (!__s)
 __out.setstate(ios_base::badbit);
      else
 __ostream_insert(__out, __s,
    static_cast<streamsize>(_Traits::length(__s)));
      return __out;
    }


  template<class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, const signed char* __s)
    { return (__out << reinterpret_cast<const char*>(__s)); }

  template<class _Traits>
    inline basic_ostream<char, _Traits> &
    operator<<(basic_ostream<char, _Traits>& __out, const unsigned char* __s)
    { return (__out << reinterpret_cast<const char*>(__s)); }
# 538 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    endl(basic_ostream<_CharT, _Traits>& __os)
    { return flush(__os.put(__os.widen('\n'))); }







  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    ends(basic_ostream<_CharT, _Traits>& __os)
    { return __os.put(_CharT()); }






  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    flush(basic_ostream<_CharT, _Traits>& __os)
    { return __os.flush(); }
# 582 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
}



# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ostream.tcc" 1 3
# 39 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ostream.tcc" 3
# 39 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ostream.tcc" 3



namespace std {

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>::sentry::
    sentry(basic_ostream<_CharT, _Traits>& __os)
    : _M_ok(false), _M_os(__os)
    {

      if (__os.tie() && __os.good())
 __os.tie()->flush();

      if (__os.good())
 _M_ok = true;
      else
 __os.setstate(ios_base::failbit);
    }

  template<typename _CharT, typename _Traits>
    template<typename _ValueT>
      basic_ostream<_CharT, _Traits>&
      basic_ostream<_CharT, _Traits>::
      _M_insert(_ValueT __v)
      {
 sentry __cerb(*this);
 if (__cerb)
   {
     ios_base::iostate __err = ios_base::goodbit;
     if (true)
       {
  const __num_put_type& __np = __check_facet(this->_M_num_put);
  if (__np.put(*this, *this, this->fill(), __v).failed())
    __err |= ios_base::badbit;
       }
     if (false)
       {
  this->_M_setstate(ios_base::badbit);
                         ;
       }
     if (false)
       { this->_M_setstate(ios_base::badbit); }
     if (__err)
       this->setstate(__err);
   }
 return *this;
      }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    operator<<(short __n)
    {


      const ios_base::fmtflags __fmt = this->flags() & ios_base::basefield;
      if (__fmt == ios_base::oct || __fmt == ios_base::hex)
 return _M_insert(static_cast<long>(static_cast<unsigned short>(__n)));
      else
 return _M_insert(static_cast<long>(__n));
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    operator<<(int __n)
    {


      const ios_base::fmtflags __fmt = this->flags() & ios_base::basefield;
      if (__fmt == ios_base::oct || __fmt == ios_base::hex)
 return _M_insert(static_cast<long>(static_cast<unsigned int>(__n)));
      else
 return _M_insert(static_cast<long>(__n));
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    operator<<(__streambuf_type* __sbin)
    {
      ios_base::iostate __err = ios_base::goodbit;
      sentry __cerb(*this);
      if (__cerb && __sbin)
 {
   if (true)
     {
       if (!__copy_streambufs(__sbin, this->rdbuf()))
  __err |= ios_base::failbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::failbit); }
 }
      else if (!__sbin)
 __err |= ios_base::badbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    put(char_type __c)
    {






      sentry __cerb(*this);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {
       const int_type __put = this->rdbuf()->sputc(__c);
       if (traits_type::eq_int_type(__put, traits_type::eof()))
  __err |= ios_base::badbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    write(const _CharT* __s, streamsize __n)
    {







      sentry __cerb(*this);
      if (__cerb)
 {
   if (true)
     { _M_write(__s, __n); }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    flush()
    {



      ios_base::iostate __err = ios_base::goodbit;
      if (true)
 {
   if (this->rdbuf() && this->rdbuf()->pubsync() == -1)
     __err |= ios_base::badbit;
 }
      if (false)
 {
   this->_M_setstate(ios_base::badbit);
                          ;
 }
      if (false)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    typename basic_ostream<_CharT, _Traits>::pos_type
    basic_ostream<_CharT, _Traits>::
    tellp()
    {
      pos_type __ret = pos_type(-1);
      if (true)
 {
   if (!this->fail())
     __ret = this->rdbuf()->pubseekoff(0, ios_base::cur, ios_base::out);
 }
      if (false)
 {
   this->_M_setstate(ios_base::badbit);
                          ;
 }
      if (false)
 { this->_M_setstate(ios_base::badbit); }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    seekp(pos_type __pos)
    {
      ios_base::iostate __err = ios_base::goodbit;
      if (true)
 {
   if (!this->fail())
     {


       const pos_type __p = this->rdbuf()->pubseekpos(__pos,
            ios_base::out);


       if (__p == pos_type(off_type(-1)))
  __err |= ios_base::failbit;
     }
 }
      if (false)
 {
   this->_M_setstate(ios_base::badbit);
                          ;
 }
      if (false)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    seekp(off_type __off, ios_base::seekdir __dir)
    {
      ios_base::iostate __err = ios_base::goodbit;
      if (true)
 {
   if (!this->fail())
     {


       const pos_type __p = this->rdbuf()->pubseekoff(__off, __dir,
            ios_base::out);


       if (__p == pos_type(off_type(-1)))
  __err |= ios_base::failbit;
     }
 }
      if (false)
 {
   this->_M_setstate(ios_base::badbit);
                          ;
 }
      if (false)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, const char* __s)
    {
      if (!__s)
 __out.setstate(ios_base::badbit);
      else
 {


   const size_t __clen = char_traits<char>::length(__s);
   if (true)
     {
       struct __ptr_guard
       {
  _CharT *__p;
  __ptr_guard (_CharT *__ip): __p(__ip) { }
  ~__ptr_guard() { delete[] __p; }
  _CharT* __get() { return __p; }
       } __pg (new _CharT[__clen]);

       _CharT *__ws = __pg.__get();
       for (size_t __i = 0; __i < __clen; ++__i)
  __ws[__i] = __out.widen(__s[__i]);
       __ostream_insert(__out, __ws, __clen);
     }
   if (false)
     {
       __out._M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { __out._M_setstate(ios_base::badbit); }
 }
      return __out;
    }





  extern template class basic_ostream<char>;
  extern template ostream& endl(ostream&);
  extern template ostream& ends(ostream&);
  extern template ostream& flush(ostream&);
  extern template ostream& operator<<(ostream&, char);
  extern template ostream& operator<<(ostream&, unsigned char);
  extern template ostream& operator<<(ostream&, signed char);
  extern template ostream& operator<<(ostream&, const char*);
  extern template ostream& operator<<(ostream&, const unsigned char*);
  extern template ostream& operator<<(ostream&, const signed char*);

  extern template ostream& ostream::_M_insert(long);
  extern template ostream& ostream::_M_insert(unsigned long);
  extern template ostream& ostream::_M_insert(bool);

  extern template ostream& ostream::_M_insert(long long);
  extern template ostream& ostream::_M_insert(unsigned long long);

  extern template ostream& ostream::_M_insert(double);
  extern template ostream& ostream::_M_insert(long double);
  extern template ostream& ostream::_M_insert(const void*);


  extern template class basic_ostream<wchar_t>;
  extern template wostream& endl(wostream&);
  extern template wostream& ends(wostream&);
  extern template wostream& flush(wostream&);
  extern template wostream& operator<<(wostream&, wchar_t);
  extern template wostream& operator<<(wostream&, char);
  extern template wostream& operator<<(wostream&, const wchar_t*);
  extern template wostream& operator<<(wostream&, const char*);

  extern template wostream& wostream::_M_insert(long);
  extern template wostream& wostream::_M_insert(unsigned long);
  extern template wostream& wostream::_M_insert(bool);

  extern template wostream& wostream::_M_insert(long long);
  extern template wostream& wostream::_M_insert(unsigned long long);

  extern template wostream& wostream::_M_insert(double);
  extern template wostream& wostream::_M_insert(long double);
  extern template wostream& wostream::_M_insert(const void*);



}
# 586 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 2 3
# 40 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iostream" 2 3
# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 1 3
# 38 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
# 38 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3




namespace std {
# 53 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
  template<typename _CharT, typename _Traits>
    class basic_istream : virtual public basic_ios<_CharT, _Traits>
    {
    public:

      typedef _CharT char_type;
      typedef typename _Traits::int_type int_type;
      typedef typename _Traits::pos_type pos_type;
      typedef typename _Traits::off_type off_type;
      typedef _Traits traits_type;


      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef basic_ios<_CharT, _Traits> __ios_type;
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef num_get<_CharT, istreambuf_iterator<_CharT, _Traits> >
        __num_get_type;
      typedef ctype<_CharT> __ctype_type;

    protected:





      streamsize _M_gcount;

    public:
# 89 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      explicit
      basic_istream(__streambuf_type* __sb)
      : _M_gcount(streamsize(0))
      { this->init(__sb); }






      virtual
      ~basic_istream()
      { _M_gcount = streamsize(0); }


      class sentry;
      friend class sentry;
# 118 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      operator>>(__istream_type& (*__pf)(__istream_type&))
      { return __pf(*this); }

      __istream_type&
      operator>>(__ios_type& (*__pf)(__ios_type&))
      {
 __pf(*this);
 return *this;
      }

      __istream_type&
      operator>>(ios_base& (*__pf)(ios_base&))
      {
 __pf(*this);
 return *this;
      }
# 165 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      operator>>(bool& __n)
      { return _M_extract(__n); }

      __istream_type&
      operator>>(short& __n);

      __istream_type&
      operator>>(unsigned short& __n)
      { return _M_extract(__n); }

      __istream_type&
      operator>>(int& __n);

      __istream_type&
      operator>>(unsigned int& __n)
      { return _M_extract(__n); }

      __istream_type&
      operator>>(long& __n)
      { return _M_extract(__n); }

      __istream_type&
      operator>>(unsigned long& __n)
      { return _M_extract(__n); }


      __istream_type&
      operator>>(long long& __n)
      { return _M_extract(__n); }

      __istream_type&
      operator>>(unsigned long long& __n)
      { return _M_extract(__n); }


      __istream_type&
      operator>>(float& __f)
      { return _M_extract(__f); }

      __istream_type&
      operator>>(double& __f)
      { return _M_extract(__f); }

      __istream_type&
      operator>>(long double& __f)
      { return _M_extract(__f); }

      __istream_type&
      operator>>(void*& __p)
      { return _M_extract(__p); }
# 237 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      operator>>(__streambuf_type* __sb);
# 247 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      streamsize
      gcount() const
      { return _M_gcount; }
# 279 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      int_type
      get();
# 293 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      get(char_type& __c);
# 320 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      get(char_type* __s, streamsize __n, char_type __delim);
# 331 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      get(char_type* __s, streamsize __n)
      { return this->get(__s, __n, this->widen('\n')); }
# 354 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      get(__streambuf_type& __sb, char_type __delim);
# 364 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      get(__streambuf_type& __sb)
      { return this->get(__sb, this->widen('\n')); }
# 393 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      getline(char_type* __s, streamsize __n, char_type __delim);
# 404 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      getline(char_type* __s, streamsize __n)
      { return this->getline(__s, __n, this->widen('\n')); }
# 428 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      ignore();

      __istream_type&
      ignore(streamsize __n);

      __istream_type&
      ignore(streamsize __n, int_type __delim);
# 445 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      int_type
      peek();
# 463 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      read(char_type* __s, streamsize __n);
# 482 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      streamsize
      readsome(char_type* __s, streamsize __n);
# 498 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      putback(char_type __c);
# 513 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      unget();
# 531 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      int
      sync();
# 545 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      pos_type
      tellg();
# 560 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      seekg(pos_type);
# 576 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      seekg(off_type, ios_base::seekdir);


    protected:
      basic_istream()
      : _M_gcount(streamsize(0))
      { this->init(0); }

      template<typename _ValueT>
        __istream_type&
        _M_extract(_ValueT& __v);
    };


  template<>
    basic_istream<char>&
    basic_istream<char>::
    getline(char_type* __s, streamsize __n, char_type __delim);

  template<>
    basic_istream<char>&
    basic_istream<char>::
    ignore(streamsize __n);

  template<>
    basic_istream<char>&
    basic_istream<char>::
    ignore(streamsize __n, int_type __delim);


  template<>
    basic_istream<wchar_t>&
    basic_istream<wchar_t>::
    getline(char_type* __s, streamsize __n, char_type __delim);

  template<>
    basic_istream<wchar_t>&
    basic_istream<wchar_t>::
    ignore(streamsize __n);

  template<>
    basic_istream<wchar_t>&
    basic_istream<wchar_t>::
    ignore(streamsize __n, int_type __delim);
# 631 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
  template<typename _CharT, typename _Traits>
    class basic_istream<_CharT, _Traits>::sentry
    {

      bool _M_ok;

    public:

      typedef _Traits traits_type;
      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef typename __istream_type::__ctype_type __ctype_type;
      typedef typename _Traits::int_type __int_type;
# 667 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      explicit
      sentry(basic_istream<_CharT, _Traits>& __is, bool __noskipws = false);
# 680 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      operator bool() const
      { return _M_ok; }
    };
# 697 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in, _CharT& __c);

  template<class _Traits>
    inline basic_istream<char, _Traits>&
    operator>>(basic_istream<char, _Traits>& __in, unsigned char& __c)
    { return (__in >> reinterpret_cast<char&>(__c)); }

  template<class _Traits>
    inline basic_istream<char, _Traits>&
    operator>>(basic_istream<char, _Traits>& __in, signed char& __c)
    { return (__in >> reinterpret_cast<char&>(__c)); }
# 739 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in, _CharT* __s);


  template<>
    basic_istream<char>&
    operator>>(basic_istream<char>& __in, char* __s);

  template<class _Traits>
    inline basic_istream<char, _Traits>&
    operator>>(basic_istream<char, _Traits>& __in, unsigned char* __s)
    { return (__in >> reinterpret_cast<char*>(__s)); }

  template<class _Traits>
    inline basic_istream<char, _Traits>&
    operator>>(basic_istream<char, _Traits>& __in, signed char* __s)
    { return (__in >> reinterpret_cast<char*>(__s)); }
# 767 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
  template<typename _CharT, typename _Traits>
    class basic_iostream
    : public basic_istream<_CharT, _Traits>,
      public basic_ostream<_CharT, _Traits>
    {
    public:



      typedef _CharT char_type;
      typedef typename _Traits::int_type int_type;
      typedef typename _Traits::pos_type pos_type;
      typedef typename _Traits::off_type off_type;
      typedef _Traits traits_type;


      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_ostream<_CharT, _Traits> __ostream_type;







      explicit
      basic_iostream(basic_streambuf<_CharT, _Traits>* __sb)
      : __istream_type(__sb), __ostream_type(__sb) { }




      virtual
      ~basic_iostream() { }

    protected:
      basic_iostream()
      : __istream_type(), __ostream_type() { }
    };
# 828 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    ws(basic_istream<_CharT, _Traits>& __is);
# 850 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
}



# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/istream.tcc" 1 3
# 39 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/istream.tcc" 3
# 39 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/istream.tcc" 3



namespace std {

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>::sentry::
    sentry(basic_istream<_CharT, _Traits>& __in, bool __noskip) : _M_ok(false)
    {
      ios_base::iostate __err = ios_base::goodbit;
      if (__in.good())
 {
   if (__in.tie())
     __in.tie()->flush();
   if (!__noskip && bool(__in.flags() & ios_base::skipws))
     {
       const __int_type __eof = traits_type::eof();
       __streambuf_type* __sb = __in.rdbuf();
       __int_type __c = __sb->sgetc();

       const __ctype_type& __ct = __check_facet(__in._M_ctype);
       while (!traits_type::eq_int_type(__c, __eof)
       && __ct.is(ctype_base::space,
    traits_type::to_char_type(__c)))
  __c = __sb->snextc();




       if (traits_type::eq_int_type(__c, __eof))
  __err |= ios_base::eofbit;
     }
 }

      if (__in.good() && __err == ios_base::goodbit)
 _M_ok = true;
      else
 {
   __err |= ios_base::failbit;
   __in.setstate(__err);
 }
    }

  template<typename _CharT, typename _Traits>
    template<typename _ValueT>
      basic_istream<_CharT, _Traits>&
      basic_istream<_CharT, _Traits>::
      _M_extract(_ValueT& __v)
      {
 sentry __cerb(*this, false);
 if (__cerb)
   {
     ios_base::iostate __err = ios_base::goodbit;
     if (true)
       {
  const __num_get_type& __ng = __check_facet(this->_M_num_get);
  __ng.get(*this, 0, *this, __err, __v);
       }
     if (false)
       {
  this->_M_setstate(ios_base::badbit);
                         ;
       }
     if (false)
       { this->_M_setstate(ios_base::badbit); }
     if (__err)
       this->setstate(__err);
   }
 return *this;
      }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    operator>>(short& __n)
    {


      sentry __cerb(*this, false);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {
       long __l;
       const __num_get_type& __ng = __check_facet(this->_M_num_get);
       __ng.get(*this, 0, *this, __err, __l);



       if (__l < __gnu_cxx::__numeric_traits<short>::__min)
  {
    __err |= ios_base::failbit;
    __n = __gnu_cxx::__numeric_traits<short>::__min;
  }
       else if (__l > __gnu_cxx::__numeric_traits<short>::__max)
  {
    __err |= ios_base::failbit;
    __n = __gnu_cxx::__numeric_traits<short>::__max;
  }
       else
  __n = short(__l);
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    operator>>(int& __n)
    {


      sentry __cerb(*this, false);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {
       long __l;
       const __num_get_type& __ng = __check_facet(this->_M_num_get);
       __ng.get(*this, 0, *this, __err, __l);



       if (__l < __gnu_cxx::__numeric_traits<int>::__min)
  {
    __err |= ios_base::failbit;
    __n = __gnu_cxx::__numeric_traits<int>::__min;
  }
       else if (__l > __gnu_cxx::__numeric_traits<int>::__max)
  {
    __err |= ios_base::failbit;
    __n = __gnu_cxx::__numeric_traits<int>::__max;
  }
       else
  __n = int(__l);
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    operator>>(__streambuf_type* __sbout)
    {
      ios_base::iostate __err = ios_base::goodbit;
      sentry __cerb(*this, false);
      if (__cerb && __sbout)
 {
   if (true)
     {
       bool __ineof;
       if (!__copy_streambufs_eof(this->rdbuf(), __sbout, __ineof))
  __err |= ios_base::failbit;
       if (__ineof)
  __err |= ios_base::eofbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::failbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::failbit); }
 }
      else if (!__sbout)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    typename basic_istream<_CharT, _Traits>::int_type
    basic_istream<_CharT, _Traits>::
    get(void)
    {
      const int_type __eof = traits_type::eof();
      int_type __c = __eof;
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::goodbit;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   if (true)
     {
       __c = this->rdbuf()->sbumpc();

       if (!traits_type::eq_int_type(__c, __eof))
  _M_gcount = 1;
       else
  __err |= ios_base::eofbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
 }
      if (!_M_gcount)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return __c;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    get(char_type& __c)
    {
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::goodbit;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   if (true)
     {
       const int_type __cb = this->rdbuf()->sbumpc();

       if (!traits_type::eq_int_type(__cb, traits_type::eof()))
  {
    _M_gcount = 1;
    __c = traits_type::to_char_type(__cb);
  }
       else
  __err |= ios_base::eofbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
 }
      if (!_M_gcount)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    get(char_type* __s, streamsize __n, char_type __delim)
    {
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::goodbit;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   if (true)
     {
       const int_type __idelim = traits_type::to_int_type(__delim);
       const int_type __eof = traits_type::eof();
       __streambuf_type* __sb = this->rdbuf();
       int_type __c = __sb->sgetc();

       while (_M_gcount + 1 < __n
       && !traits_type::eq_int_type(__c, __eof)
       && !traits_type::eq_int_type(__c, __idelim))
  {
    *__s++ = traits_type::to_char_type(__c);
    ++_M_gcount;
    __c = __sb->snextc();
  }
       if (traits_type::eq_int_type(__c, __eof))
  __err |= ios_base::eofbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
 }


      if (__n > 0)
 *__s = char_type();
      if (!_M_gcount)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    get(__streambuf_type& __sb, char_type __delim)
    {
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::goodbit;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   if (true)
     {
       const int_type __idelim = traits_type::to_int_type(__delim);
       const int_type __eof = traits_type::eof();
       __streambuf_type* __this_sb = this->rdbuf();
       int_type __c = __this_sb->sgetc();
       char_type __c2 = traits_type::to_char_type(__c);

       while (!traits_type::eq_int_type(__c, __eof)
       && !traits_type::eq_int_type(__c, __idelim)
       && !traits_type::eq_int_type(__sb.sputc(__c2), __eof))
  {
    ++_M_gcount;
    __c = __this_sb->snextc();
    __c2 = traits_type::to_char_type(__c);
  }
       if (traits_type::eq_int_type(__c, __eof))
  __err |= ios_base::eofbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
 }
      if (!_M_gcount)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    getline(char_type* __s, streamsize __n, char_type __delim)
    {
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::goodbit;
      sentry __cerb(*this, true);
      if (__cerb)
        {
          if (true)
            {
              const int_type __idelim = traits_type::to_int_type(__delim);
              const int_type __eof = traits_type::eof();
              __streambuf_type* __sb = this->rdbuf();
              int_type __c = __sb->sgetc();

              while (_M_gcount + 1 < __n
                     && !traits_type::eq_int_type(__c, __eof)
                     && !traits_type::eq_int_type(__c, __idelim))
                {
                  *__s++ = traits_type::to_char_type(__c);
                  __c = __sb->snextc();
                  ++_M_gcount;
                }
              if (traits_type::eq_int_type(__c, __eof))
                __err |= ios_base::eofbit;
              else
                {
                  if (traits_type::eq_int_type(__c, __idelim))
                    {
                      __sb->sbumpc();
                      ++_M_gcount;
                    }
                  else
                    __err |= ios_base::failbit;
                }
            }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
          if (false)
            { this->_M_setstate(ios_base::badbit); }
        }


      if (__n > 0)
 *__s = char_type();
      if (!_M_gcount)
        __err |= ios_base::failbit;
      if (__err)
        this->setstate(__err);
      return *this;
    }




  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    ignore(void)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {
       const int_type __eof = traits_type::eof();
       __streambuf_type* __sb = this->rdbuf();

       if (traits_type::eq_int_type(__sb->sbumpc(), __eof))
  __err |= ios_base::eofbit;
       else
  _M_gcount = 1;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    ignore(streamsize __n)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb && __n > 0)
        {
          ios_base::iostate __err = ios_base::goodbit;
          if (true)
            {
              const int_type __eof = traits_type::eof();
              __streambuf_type* __sb = this->rdbuf();
              int_type __c = __sb->sgetc();
# 512 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/istream.tcc" 3
       bool __large_ignore = false;
       while (true)
  {
    while (_M_gcount < __n
    && !traits_type::eq_int_type(__c, __eof))
      {
        ++_M_gcount;
        __c = __sb->snextc();
      }
    if (__n == __gnu_cxx::__numeric_traits<streamsize>::__max
        && !traits_type::eq_int_type(__c, __eof))
      {
        _M_gcount =
   __gnu_cxx::__numeric_traits<streamsize>::__min;
        __large_ignore = true;
      }
    else
      break;
  }

       if (__large_ignore)
  _M_gcount = __gnu_cxx::__numeric_traits<streamsize>::__max;

       if (traits_type::eq_int_type(__c, __eof))
                __err |= ios_base::eofbit;
            }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
          if (false)
            { this->_M_setstate(ios_base::badbit); }
          if (__err)
            this->setstate(__err);
        }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    ignore(streamsize __n, int_type __delim)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb && __n > 0)
        {
          ios_base::iostate __err = ios_base::goodbit;
          if (true)
            {
              const int_type __eof = traits_type::eof();
              __streambuf_type* __sb = this->rdbuf();
              int_type __c = __sb->sgetc();


       bool __large_ignore = false;
       while (true)
  {
    while (_M_gcount < __n
    && !traits_type::eq_int_type(__c, __eof)
    && !traits_type::eq_int_type(__c, __delim))
      {
        ++_M_gcount;
        __c = __sb->snextc();
      }
    if (__n == __gnu_cxx::__numeric_traits<streamsize>::__max
        && !traits_type::eq_int_type(__c, __eof)
        && !traits_type::eq_int_type(__c, __delim))
      {
        _M_gcount =
   __gnu_cxx::__numeric_traits<streamsize>::__min;
        __large_ignore = true;
      }
    else
      break;
  }

       if (__large_ignore)
  _M_gcount = __gnu_cxx::__numeric_traits<streamsize>::__max;

              if (traits_type::eq_int_type(__c, __eof))
                __err |= ios_base::eofbit;
       else if (traits_type::eq_int_type(__c, __delim))
  {
    if (_M_gcount
        < __gnu_cxx::__numeric_traits<streamsize>::__max)
      ++_M_gcount;
    __sb->sbumpc();
  }
            }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
          if (false)
            { this->_M_setstate(ios_base::badbit); }
          if (__err)
            this->setstate(__err);
        }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    typename basic_istream<_CharT, _Traits>::int_type
    basic_istream<_CharT, _Traits>::
    peek(void)
    {
      int_type __c = traits_type::eof();
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {
       __c = this->rdbuf()->sgetc();
       if (traits_type::eq_int_type(__c, traits_type::eof()))
  __err |= ios_base::eofbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return __c;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    read(char_type* __s, streamsize __n)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {
       _M_gcount = this->rdbuf()->sgetn(__s, __n);
       if (_M_gcount != __n)
  __err |= (ios_base::eofbit | ios_base::failbit);
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    streamsize
    basic_istream<_CharT, _Traits>::
    readsome(char_type* __s, streamsize __n)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {

       const streamsize __num = this->rdbuf()->in_avail();
       if (__num > 0)
  _M_gcount = this->rdbuf()->sgetn(__s, std::min(__num, __n));
       else if (__num == -1)
  __err |= ios_base::eofbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return _M_gcount;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    putback(char_type __c)
    {


      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {
       const int_type __eof = traits_type::eof();
       __streambuf_type* __sb = this->rdbuf();
       if (!__sb
    || traits_type::eq_int_type(__sb->sputbackc(__c), __eof))
  __err |= ios_base::badbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    unget(void)
    {


      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {
       const int_type __eof = traits_type::eof();
       __streambuf_type* __sb = this->rdbuf();
       if (!__sb
    || traits_type::eq_int_type(__sb->sungetc(), __eof))
  __err |= ios_base::badbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    int
    basic_istream<_CharT, _Traits>::
    sync(void)
    {


      int __ret = -1;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {
       __streambuf_type* __sb = this->rdbuf();
       if (__sb)
  {
    if (__sb->pubsync() == -1)
      __err |= ios_base::badbit;
    else
      __ret = 0;
  }
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    typename basic_istream<_CharT, _Traits>::pos_type
    basic_istream<_CharT, _Traits>::
    tellg(void)
    {


      pos_type __ret = pos_type(-1);
      if (true)
 {
   if (!this->fail())
     __ret = this->rdbuf()->pubseekoff(0, ios_base::cur,
           ios_base::in);
 }
      if (false)
 {
   this->_M_setstate(ios_base::badbit);
                          ;
 }
      if (false)
 { this->_M_setstate(ios_base::badbit); }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    seekg(pos_type __pos)
    {


      ios_base::iostate __err = ios_base::goodbit;
      if (true)
 {
   if (!this->fail())
     {

       const pos_type __p = this->rdbuf()->pubseekpos(__pos,
            ios_base::in);


       if (__p == pos_type(off_type(-1)))
  __err |= ios_base::failbit;
     }
 }
      if (false)
 {
   this->_M_setstate(ios_base::badbit);
                          ;
 }
      if (false)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    seekg(off_type __off, ios_base::seekdir __dir)
    {


      ios_base::iostate __err = ios_base::goodbit;
      if (true)
 {
   if (!this->fail())
     {

       const pos_type __p = this->rdbuf()->pubseekoff(__off, __dir,
            ios_base::in);


       if (__p == pos_type(off_type(-1)))
  __err |= ios_base::failbit;
     }
 }
      if (false)
 {
   this->_M_setstate(ios_base::badbit);
                          ;
 }
      if (false)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }


  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in, _CharT& __c)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef typename __istream_type::int_type __int_type;

      typename __istream_type::sentry __cerb(__in, false);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {
       const __int_type __cb = __in.rdbuf()->sbumpc();
       if (!_Traits::eq_int_type(__cb, _Traits::eof()))
  __c = _Traits::to_char_type(__cb);
       else
  __err |= (ios_base::eofbit | ios_base::failbit);
     }
   if (false)
     {
       __in._M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { __in._M_setstate(ios_base::badbit); }
   if (__err)
     __in.setstate(__err);
 }
      return __in;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in, _CharT* __s)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef typename _Traits::int_type int_type;
      typedef _CharT char_type;
      typedef ctype<_CharT> __ctype_type;

      streamsize __extracted = 0;
      ios_base::iostate __err = ios_base::goodbit;
      typename __istream_type::sentry __cerb(__in, false);
      if (__cerb)
 {
   if (true)
     {

       streamsize __num = __in.width();
       if (__num <= 0)
  __num = __gnu_cxx::__numeric_traits<streamsize>::__max;

       const __ctype_type& __ct = use_facet<__ctype_type>(__in.getloc());

       const int_type __eof = _Traits::eof();
       __streambuf_type* __sb = __in.rdbuf();
       int_type __c = __sb->sgetc();

       while (__extracted < __num - 1
       && !_Traits::eq_int_type(__c, __eof)
       && !__ct.is(ctype_base::space,
     _Traits::to_char_type(__c)))
  {
    *__s++ = _Traits::to_char_type(__c);
    ++__extracted;
    __c = __sb->snextc();
  }
       if (_Traits::eq_int_type(__c, __eof))
  __err |= ios_base::eofbit;



       *__s = char_type();
       __in.width(0);
     }
   if (false)
     {
       __in._M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { __in._M_setstate(ios_base::badbit); }
 }
      if (!__extracted)
 __err |= ios_base::failbit;
      if (__err)
 __in.setstate(__err);
      return __in;
    }


  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    ws(basic_istream<_CharT, _Traits>& __in)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef typename __istream_type::int_type __int_type;
      typedef ctype<_CharT> __ctype_type;

      const __ctype_type& __ct = use_facet<__ctype_type>(__in.getloc());
      const __int_type __eof = _Traits::eof();
      __streambuf_type* __sb = __in.rdbuf();
      __int_type __c = __sb->sgetc();

      while (!_Traits::eq_int_type(__c, __eof)
      && __ct.is(ctype_base::space, _Traits::to_char_type(__c)))
 __c = __sb->snextc();

       if (_Traits::eq_int_type(__c, __eof))
  __in.setstate(ios_base::eofbit);
      return __in;
    }





  extern template class basic_istream<char>;
  extern template istream& ws(istream&);
  extern template istream& operator>>(istream&, char&);
  extern template istream& operator>>(istream&, char*);
  extern template istream& operator>>(istream&, unsigned char&);
  extern template istream& operator>>(istream&, signed char&);
  extern template istream& operator>>(istream&, unsigned char*);
  extern template istream& operator>>(istream&, signed char*);

  extern template istream& istream::_M_extract(unsigned short&);
  extern template istream& istream::_M_extract(unsigned int&);
  extern template istream& istream::_M_extract(long&);
  extern template istream& istream::_M_extract(unsigned long&);
  extern template istream& istream::_M_extract(bool&);

  extern template istream& istream::_M_extract(long long&);
  extern template istream& istream::_M_extract(unsigned long long&);

  extern template istream& istream::_M_extract(float&);
  extern template istream& istream::_M_extract(double&);
  extern template istream& istream::_M_extract(long double&);
  extern template istream& istream::_M_extract(void*&);

  extern template class basic_iostream<char>;


  extern template class basic_istream<wchar_t>;
  extern template wistream& ws(wistream&);
  extern template wistream& operator>>(wistream&, wchar_t&);
  extern template wistream& operator>>(wistream&, wchar_t*);

  extern template wistream& wistream::_M_extract(unsigned short&);
  extern template wistream& wistream::_M_extract(unsigned int&);
  extern template wistream& wistream::_M_extract(long&);
  extern template wistream& wistream::_M_extract(unsigned long&);
  extern template wistream& wistream::_M_extract(bool&);

  extern template wistream& wistream::_M_extract(long long&);
  extern template wistream& wistream::_M_extract(unsigned long long&);

  extern template wistream& wistream::_M_extract(float&);
  extern template wistream& wistream::_M_extract(double&);
  extern template wistream& wistream::_M_extract(long double&);
  extern template wistream& wistream::_M_extract(void*&);

  extern template class basic_iostream<wchar_t>;



}
# 854 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 2 3
# 41 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iostream" 2 3

namespace std {
# 58 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iostream" 3
  extern istream cin;
  extern ostream cout;
  extern ostream cerr;
  extern ostream clog;


  extern wistream wcin;
  extern wostream wcout;
  extern wostream wcerr;
  extern wostream wclog;




  static ios_base::Init __ioinit;

}
# 2 "LSTM/rnn.cpp" 2
# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cmath" 1 3
# 41 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cmath" 3
# 41 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cmath" 3




# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 1 3
# 10 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
# 10 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3


# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 12 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 2 3


struct _exception;

#pragma pack(push,_CRT_PACKING)
# 75 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
extern "C" {



  extern double * __imp__HUGE;
# 91 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  struct _exception {
    int type;
    const char *name;
    double arg1;
    double arg2;
    double retval;
  };

  void __mingw_raise_matherr (int typ, const char *name, double a1, double a2,
         double rslt);
  void __mingw_setusermatherr (int ( *)(struct _exception *));
  __attribute__ ((__dllimport__)) void __setusermatherr(int ( *)(struct _exception *));



  double sin(double _X);
  double cos(double _X);
  double tan(double _X);
  double sinh(double _X);
  double cosh(double _X);
  double tanh(double _X);
  double asin(double _X);
  double acos(double _X);
  double atan(double _X);
  double atan2(double _Y,double _X);
  double exp(double _X);
  double log(double _X);
  double log10(double _X);
  double pow(double _X,double _Y);
  double sqrt(double _X);
  double ceil(double _X);
  double floor(double _X);
  double fabs(double _X);
# 135 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  double ldexp(double _X,int _Y);
  double frexp(double _X,int *_Y);
  double modf(double _X,double *_Y);
  double fmod(double _X,double _Y);

  void sincos (double __x, double *p_sin, double *p_cos);
  void sincosl (long double __x, long double *p_sin, long double *p_cos);
  void sincosf (float __x, float *p_sin, float *p_cos);



  int abs(int _X);
  long labs(long _X);



  double atof(const char *_String);
  double _atof_l(const char *_String,_locale_t _Locale);
# 162 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  struct _complex {
    double x;
    double y;
  };


  __attribute__ ((__dllimport__)) double _cabs(struct _complex _ComplexA);
  double _hypot(double _X,double _Y);
  __attribute__ ((__dllimport__)) double _j0(double _X);
  __attribute__ ((__dllimport__)) double _j1(double _X);
  __attribute__ ((__dllimport__)) double _jn(int _X,double _Y);
  __attribute__ ((__dllimport__)) double _y0(double _X);
  __attribute__ ((__dllimport__)) double _y1(double _X);
  __attribute__ ((__dllimport__)) double _yn(int _X,double _Y);


  __attribute__ ((__dllimport__)) int _matherr (struct _exception *);
# 189 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  __attribute__ ((__dllimport__)) double _chgsign (double _X);
  __attribute__ ((__dllimport__)) double _copysign (double _Number,double _Sign);
  __attribute__ ((__dllimport__)) double _logb (double);
  __attribute__ ((__dllimport__)) double _nextafter (double, double);
  __attribute__ ((__dllimport__)) double _scalb (double, long);
  __attribute__ ((__dllimport__)) int _finite (double);
  __attribute__ ((__dllimport__)) int _fpclass (double);
  __attribute__ ((__dllimport__)) int _isnan (double);






__attribute__ ((__dllimport__)) double j0 (double) ;
__attribute__ ((__dllimport__)) double j1 (double) ;
__attribute__ ((__dllimport__)) double jn (int, double) ;
__attribute__ ((__dllimport__)) double y0 (double) ;
__attribute__ ((__dllimport__)) double y1 (double) ;
__attribute__ ((__dllimport__)) double yn (int, double) ;

__attribute__ ((__dllimport__)) double chgsign (double);
# 219 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  __attribute__ ((__dllimport__)) int finite (double);
  __attribute__ ((__dllimport__)) int fpclass (double);
# 264 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
typedef float float_t;
typedef double double_t;
# 299 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern int __fpclassifyl (long double);
  extern int __fpclassifyf (float);
  extern int __fpclassify (double);
# 335 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern int __isnan (double);
  extern int __isnanf (float);
  extern int __isnanl (long double);
# 376 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern int __signbit (double);
  extern int __signbitf (float);
  extern int __signbitl (long double);
# 404 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern float sinf(float _X);
  extern long double sinl(long double);

  extern float cosf(float _X);
  extern long double cosl(long double);

  extern float tanf(float _X);
  extern long double tanl(long double);
  extern float asinf(float _X);
  extern long double asinl(long double);

  extern float acosf (float);
  extern long double acosl (long double);

  extern float atanf (float);
  extern long double atanl (long double);

  extern float atan2f (float, float);
  extern long double atan2l (long double, long double);


  extern float sinhf(float _X);



  extern long double sinhl(long double);

  extern float coshf(float _X);



  extern long double coshl(long double);

  extern float tanhf(float _X);



  extern long double tanhl(long double);



  extern double acosh (double);
  extern float acoshf (float);
  extern long double acoshl (long double);


  extern double asinh (double);
  extern float asinhf (float);
  extern long double asinhl (long double);


  extern double atanh (double);
  extern float atanhf (float);
  extern long double atanhl (long double);



  extern float expf(float _X);



  extern long double expl(long double);


  extern double exp2(double);
  extern float exp2f(float);
  extern long double exp2l(long double);



  extern double expm1(double);
  extern float expm1f(float);
  extern long double expm1l(long double);


  extern float frexpf(float _X,int *_Y);



  extern long double frexpl(long double,int *);




  extern int ilogb (double);
  extern int ilogbf (float);
  extern int ilogbl (long double);


  extern float ldexpf(float _X,int _Y);



  extern long double ldexpl (long double, int);


  extern float logf (float);
  extern long double logl(long double);


  extern float log10f (float);
  extern long double log10l(long double);


  extern double log1p(double);
  extern float log1pf(float);
  extern long double log1pl(long double);


  extern double log2 (double);
  extern float log2f (float);
  extern long double log2l (long double);


  extern double logb (double);
  extern float logbf (float);
  extern long double logbl (long double);
# 553 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern float modff (float, float*);
  extern long double modfl (long double, long double*);


  extern double scalbn (double, int);
  extern float scalbnf (float, int);
  extern long double scalbnl (long double, int);

  extern double scalbln (double, long);
  extern float scalblnf (float, long);
  extern long double scalblnl (long double, long);



  extern double cbrt (double);
  extern float cbrtf (float);
  extern long double cbrtl (long double);


  extern float fabsf (float x);
# 583 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern long double fabsl (long double);
# 595 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern double hypot (double, double) ;
  extern float hypotf (float x, float y);



  extern long double hypotl (long double, long double);


  extern float powf(float _X,float _Y);



  extern long double powl (long double, long double);


  extern float sqrtf (float);
  extern long double sqrtl(long double);


  extern double erf (double);
  extern float erff (float);
  extern long double erfl (long double);


  extern double erfc (double);
  extern float erfcf (float);
  extern long double erfcl (long double);


  extern double lgamma (double);
  extern float lgammaf (float);
  extern long double lgammal (long double);


  extern double tgamma (double);
  extern float tgammaf (float);
  extern long double tgammal (long double);


  extern float ceilf (float);
  extern long double ceill (long double);


  extern float floorf (float);
  extern long double floorl (long double);


  extern double nearbyint ( double);
  extern float nearbyintf (float);
  extern long double nearbyintl (long double);



extern double rint (double);
extern float rintf (float);
extern long double rintl (long double);


extern long lrint (double);
extern long lrintf (float);
extern long lrintl (long double);

__extension__ long long llrint (double);
__extension__ long long llrintf (float);
__extension__ long long llrintl (long double);
# 739 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern double round (double);
  extern float roundf (float);
  extern long double roundl (long double);


  extern long lround (double);
  extern long lroundf (float);
  extern long lroundl (long double);
  __extension__ long long llround (double);
  __extension__ long long llroundf (float);
  __extension__ long long llroundl (long double);



  extern double trunc (double);
  extern float truncf (float);
  extern long double truncl (long double);


  extern float fmodf (float, float);
  extern long double fmodl (long double, long double);


  extern double remainder (double, double);
  extern float remainderf (float, float);
  extern long double remainderl (long double, long double);


  extern double remquo(double, double, int *);
  extern float remquof(float, float, int *);
  extern long double remquol(long double, long double, int *);


  extern double copysign (double, double);
  extern float copysignf (float, float);
  extern long double copysignl (long double, long double);


  extern double nan(const char *tagp);
  extern float nanf(const char *tagp);
  extern long double nanl(const char *tagp);
# 788 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern double nextafter (double, double);
  extern float nextafterf (float, float);
  extern long double nextafterl (long double, long double);


  extern double nexttoward (double, long double);
  extern float nexttowardf (float, long double);
  extern long double nexttowardl (long double, long double);



  extern double fdim (double x, double y);
  extern float fdimf (float x, float y);
  extern long double fdiml (long double x, long double y);







  extern double fmax (double, double);
  extern float fmaxf (float, float);
  extern long double fmaxl (long double, long double);


  extern double fmin (double, double);
  extern float fminf (float, float);
  extern long double fminl (long double, long double);



  extern double fma (double, double, double);
  extern float fmaf (float, float, float);
  extern long double fmal (long double, long double, long double);
# 871 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
   __attribute__ ((__dllimport__)) float _copysignf (float _Number,float _Sign);
   __attribute__ ((__dllimport__)) float _chgsignf (float _X);
   __attribute__ ((__dllimport__)) float _logbf(float _X);
   __attribute__ ((__dllimport__)) float _nextafterf(float _X,float _Y);
   __attribute__ ((__dllimport__)) int _finitef(float _X);
   __attribute__ ((__dllimport__)) int _isnanf(float _X);
   __attribute__ ((__dllimport__)) int _fpclassf(float _X);



   extern long double _chgsignl (long double);
# 893 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
}




#pragma pack(pop)
# 46 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cmath" 2 3
# 76 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cmath" 3
namespace std {



  template<typename _Tp>
    _Tp __cmath_power(_Tp, unsigned int);

  template<typename _Tp>
    inline _Tp
    __pow_helper(_Tp __x, int __n)
    {
      return __n < 0
        ? _Tp(1)/__cmath_power(__x, -__n)
        : __cmath_power(__x, __n);
    }

  inline double
  abs(double __x)
  { return __builtin_fabs(__x); }

  inline float
  abs(float __x)
  { return __builtin_fabsf(__x); }

  inline long double
  abs(long double __x)
  { return __builtin_fabsl(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    abs(_Tp __x)
    { return __builtin_fabs(__x); }

  using ::acos;

  inline float
  acos(float __x)
  { return __builtin_acosf(__x); }

  inline long double
  acos(long double __x)
  { return __builtin_acosl(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    acos(_Tp __x)
    { return __builtin_acos(__x); }

  using ::asin;

  inline float
  asin(float __x)
  { return __builtin_asinf(__x); }

  inline long double
  asin(long double __x)
  { return __builtin_asinl(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    asin(_Tp __x)
    { return __builtin_asin(__x); }

  using ::atan;

  inline float
  atan(float __x)
  { return __builtin_atanf(__x); }

  inline long double
  atan(long double __x)
  { return __builtin_atanl(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    atan(_Tp __x)
    { return __builtin_atan(__x); }

  using ::atan2;

  inline float
  atan2(float __y, float __x)
  { return __builtin_atan2f(__y, __x); }

  inline long double
  atan2(long double __y, long double __x)
  { return __builtin_atan2l(__y, __x); }

  template<typename _Tp, typename _Up>
    inline
    typename __gnu_cxx::__promote_2<
    typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value
        && __is_arithmetic<_Up>::__value,
        _Tp>::__type, _Up>::__type
    atan2(_Tp __y, _Up __x)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return atan2(__type(__y), __type(__x));
    }

  using ::ceil;

  inline float
  ceil(float __x)
  { return __builtin_ceilf(__x); }

  inline long double
  ceil(long double __x)
  { return __builtin_ceill(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    ceil(_Tp __x)
    { return __builtin_ceil(__x); }

  using ::cos;

  inline float
  cos(float __x)
  { return __builtin_cosf(__x); }

  inline long double
  cos(long double __x)
  { return __builtin_cosl(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    cos(_Tp __x)
    { return __builtin_cos(__x); }

  using ::cosh;

  inline float
  cosh(float __x)
  { return __builtin_coshf(__x); }

  inline long double
  cosh(long double __x)
  { return __builtin_coshl(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    cosh(_Tp __x)
    { return __builtin_cosh(__x); }

  using ::exp;

  inline float
  exp(float __x)
  { return __builtin_expf(__x); }

  inline long double
  exp(long double __x)
  { return __builtin_expl(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    exp(_Tp __x)
    { return __builtin_exp(__x); }

  using ::fabs;

  inline float
  fabs(float __x)
  { return __builtin_fabsf(__x); }

  inline long double
  fabs(long double __x)
  { return __builtin_fabsl(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    fabs(_Tp __x)
    { return __builtin_fabs(__x); }

  using ::floor;

  inline float
  floor(float __x)
  { return __builtin_floorf(__x); }

  inline long double
  floor(long double __x)
  { return __builtin_floorl(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    floor(_Tp __x)
    { return __builtin_floor(__x); }

  using ::fmod;

  inline float
  fmod(float __x, float __y)
  { return __builtin_fmodf(__x, __y); }

  inline long double
  fmod(long double __x, long double __y)
  { return __builtin_fmodl(__x, __y); }

  using ::frexp;

  inline float
  frexp(float __x, int* __exp)
  { return __builtin_frexpf(__x, __exp); }

  inline long double
  frexp(long double __x, int* __exp)
  { return __builtin_frexpl(__x, __exp); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    frexp(_Tp __x, int* __exp)
    { return __builtin_frexp(__x, __exp); }

  using ::ldexp;

  inline float
  ldexp(float __x, int __exp)
  { return __builtin_ldexpf(__x, __exp); }

  inline long double
  ldexp(long double __x, int __exp)
  { return __builtin_ldexpl(__x, __exp); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
  ldexp(_Tp __x, int __exp)
  { return __builtin_ldexp(__x, __exp); }

  using ::log;

  inline float
  log(float __x)
  { return __builtin_logf(__x); }

  inline long double
  log(long double __x)
  { return __builtin_logl(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    log(_Tp __x)
    { return __builtin_log(__x); }

  using ::log10;

  inline float
  log10(float __x)
  { return __builtin_log10f(__x); }

  inline long double
  log10(long double __x)
  { return __builtin_log10l(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    log10(_Tp __x)
    { return __builtin_log10(__x); }

  using ::modf;

  inline float
  modf(float __x, float* __iptr)
  { return __builtin_modff(__x, __iptr); }

  inline long double
  modf(long double __x, long double* __iptr)
  { return __builtin_modfl(__x, __iptr); }

  using ::pow;

  inline float
  pow(float __x, float __y)
  { return __builtin_powf(__x, __y); }

  inline long double
  pow(long double __x, long double __y)
  { return __builtin_powl(__x, __y); }




  inline double
  pow(double __x, int __i)
  { return __builtin_powi(__x, __i); }

  inline float
  pow(float __x, int __n)
  { return __builtin_powif(__x, __n); }

  inline long double
  pow(long double __x, int __n)
  { return __builtin_powil(__x, __n); }


  template<typename _Tp, typename _Up>
    inline
    typename __gnu_cxx::__promote_2<
    typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value
        && __is_arithmetic<_Up>::__value,
        _Tp>::__type, _Up>::__type
    pow(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return pow(__type(__x), __type(__y));
    }

  using ::sin;

  inline float
  sin(float __x)
  { return __builtin_sinf(__x); }

  inline long double
  sin(long double __x)
  { return __builtin_sinl(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    sin(_Tp __x)
    { return __builtin_sin(__x); }

  using ::sinh;

  inline float
  sinh(float __x)
  { return __builtin_sinhf(__x); }

  inline long double
  sinh(long double __x)
  { return __builtin_sinhl(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    sinh(_Tp __x)
    { return __builtin_sinh(__x); }

  using ::sqrt;

  inline float
  sqrt(float __x)
  { return __builtin_sqrtf(__x); }

  inline long double
  sqrt(long double __x)
  { return __builtin_sqrtl(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    sqrt(_Tp __x)
    { return __builtin_sqrt(__x); }

  using ::tan;

  inline float
  tan(float __x)
  { return __builtin_tanf(__x); }

  inline long double
  tan(long double __x)
  { return __builtin_tanl(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    tan(_Tp __x)
    { return __builtin_tan(__x); }

  using ::tanh;

  inline float
  tanh(float __x)
  { return __builtin_tanhf(__x); }

  inline long double
  tanh(long double __x)
  { return __builtin_tanhl(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    tanh(_Tp __x)
    { return __builtin_tanh(__x); }

}
# 497 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cmath" 3
namespace std {

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    fpclassify(_Tp __f)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_fpclassify(0x0100, (0x0100 | 0x0400), 0x0400,
      (0x0400 | 0x4000), 0x4000, __type(__f));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    isfinite(_Tp __f)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_isfinite(__type(__f));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    isinf(_Tp __f)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_isinf(__type(__f));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    isnan(_Tp __f)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_isnan(__type(__f));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    isnormal(_Tp __f)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_isnormal(__type(__f));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    signbit(_Tp __f)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_signbit(__type(__f));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    isgreater(_Tp __f1, _Tp __f2)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_isgreater(__type(__f1), __type(__f2));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    isgreaterequal(_Tp __f1, _Tp __f2)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_isgreaterequal(__type(__f1), __type(__f2));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    isless(_Tp __f1, _Tp __f2)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_isless(__type(__f1), __type(__f2));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    islessequal(_Tp __f1, _Tp __f2)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_islessequal(__type(__f1), __type(__f2));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    islessgreater(_Tp __f1, _Tp __f2)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_islessgreater(__type(__f1), __type(__f2));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    isunordered(_Tp __f1, _Tp __f2)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_isunordered(__type(__f1), __type(__f2));
    }

}






# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/cmath.tcc" 1 3
# 35 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/cmath.tcc" 3
namespace std {

  template<typename _Tp>
    inline _Tp
    __cmath_power(_Tp __x, unsigned int __n)
    {
      _Tp __y = __n % 2 ? __x : _Tp(1);

      while (__n >>= 1)
        {
          __x = __x * __x;
          if (__n % 2)
            __y = __y * __x;
        }

      return __y;
    }

}
# 615 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cmath" 2 3
# 3 "LSTM/rnn.cpp" 2
# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\string.h" 1 3








# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 9 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\string.h" 2 3



extern "C" {
# 36 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\string.h" 3
  __attribute__ ((__dllimport__)) void * _memccpy(void *_Dst,const void *_Src,int _Val,size_t _MaxCount);
                void * memchr(const void *_Buf ,int _Val,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int _memicmp(const void *_Buf1,const void *_Buf2,size_t _Size);
  __attribute__ ((__dllimport__)) int _memicmp_l(const void *_Buf1,const void *_Buf2,size_t _Size,_locale_t _Locale);
  int memcmp(const void *_Buf1,const void *_Buf2,size_t _Size);
  void * memcpy(void * __restrict__ _Dst,const void * __restrict__ _Src,size_t _Size) ;
  void * memset(void *_Dst,int _Val,size_t _Size);

  void * memccpy(void *_Dst,const void *_Src,int _Val,size_t _Size) ;
  int memicmp(const void *_Buf1,const void *_Buf2,size_t _Size) ;


  char * _strset(char *_Str,int _Val) ;
  char * _strset_l(char *_Str,int _Val,_locale_t _Locale) ;
  char * strcpy(char * __restrict__ _Dest,const char * __restrict__ _Source);
  char * strcat(char * __restrict__ _Dest,const char * __restrict__ _Source);
  int strcmp(const char *_Str1,const char *_Str2);
  size_t strlen(const char *_Str);
  size_t strnlen(const char *_Str,size_t _MaxCount);
  void * memmove(void *_Dst,const void *_Src,size_t _Size) ;
  __attribute__ ((__dllimport__)) char * _strdup(const char *_Src);
                char * strchr(const char *_Str,int _Val);
  __attribute__ ((__dllimport__)) int _stricmp(const char *_Str1,const char *_Str2);
  __attribute__ ((__dllimport__)) int _strcmpi(const char *_Str1,const char *_Str2);
  __attribute__ ((__dllimport__)) int _stricmp_l(const char *_Str1,const char *_Str2,_locale_t _Locale);
  int strcoll(const char *_Str1,const char *_Str2);
  __attribute__ ((__dllimport__)) int _strcoll_l(const char *_Str1,const char *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _stricoll(const char *_Str1,const char *_Str2);
  __attribute__ ((__dllimport__)) int _stricoll_l(const char *_Str1,const char *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _strncoll (const char *_Str1,const char *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int _strncoll_l(const char *_Str1,const char *_Str2,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _strnicoll (const char *_Str1,const char *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int _strnicoll_l(const char *_Str1,const char *_Str2,size_t _MaxCount,_locale_t _Locale);
  size_t strcspn(const char *_Str,const char *_Control);
  __attribute__ ((__dllimport__)) char * _strerror(const char *_ErrMsg) ;
  char * strerror(int) ;
  __attribute__ ((__dllimport__)) char * _strlwr(char *_String) ;
  char *strlwr_l(char *_String,_locale_t _Locale) ;
  char * strncat(char * __restrict__ _Dest,const char * __restrict__ _Source,size_t _Count) ;
  int strncmp(const char *_Str1,const char *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int _strnicmp(const char *_Str1,const char *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int _strnicmp_l(const char *_Str1,const char *_Str2,size_t _MaxCount,_locale_t _Locale);
  char *strncpy(char * __restrict__ _Dest,const char * __restrict__ _Source,size_t _Count) ;
  __attribute__ ((__dllimport__)) char * _strnset(char *_Str,int _Val,size_t _MaxCount) ;
  __attribute__ ((__dllimport__)) char * _strnset_l(char *str,int c,size_t count,_locale_t _Locale) ;
                char * strpbrk(const char *_Str,const char *_Control);
                char * strrchr(const char *_Str,int _Ch);
  __attribute__ ((__dllimport__)) char * _strrev(char *_Str);
  size_t strspn(const char *_Str,const char *_Control);
                char * strstr(const char *_Str,const char *_SubStr);
  char * strtok(char * __restrict__ _Str,const char * __restrict__ _Delim) ;
  __attribute__ ((__dllimport__)) char * _strupr(char *_String) ;
  __attribute__ ((__dllimport__)) char *_strupr_l(char *_String,_locale_t _Locale) ;
  size_t strxfrm(char * __restrict__ _Dst,const char * __restrict__ _Src,size_t _MaxCount);
  __attribute__ ((__dllimport__)) size_t _strxfrm_l(char * __restrict__ _Dst,const char * __restrict__ _Src,size_t _MaxCount,_locale_t _Locale);


  char * strdup(const char *_Src) ;
  int strcmpi(const char *_Str1,const char *_Str2) ;
  int stricmp(const char *_Str1,const char *_Str2) ;
  char * strlwr(char *_Str) ;
  int strnicmp(const char *_Str1,const char *_Str,size_t _MaxCount) ;
  int strncasecmp (const char *, const char *, size_t);
  int strcasecmp (const char *, const char *);







  char * strnset(char *_Str,int _Val,size_t _MaxCount) ;
  char * strrev(char *_Str) ;
  char * strset(char *_Str,int _Val) ;
  char * strupr(char *_Str) ;
# 172 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\string.h" 3
}



# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/string_s.h" 1 3








# 1 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\string.h" 1 3
# 9 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/string_s.h" 2 3
# 175 "E:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\string.h" 2 3
# 4 "LSTM/rnn.cpp" 2
# 1 "LSTM/rnn.h" 1
# 20 "LSTM/rnn.h"
void infer(float input[28 * 28], float res[5]);
# 5 "LSTM/rnn.cpp" 2
# 1 "LSTM/weight.h" 1








float Weight0_f[64][28 + 64] =
{


 {0.10138959,0.08885992,0.09944901,0.06679591,-0.0332485,-0.05800373,-0.08772852,0.03348873,-0.00829262,0.00573529,0.00883767,-0.03390322,-0.08591835,0.06699432,-0.05714576,0.13283631,0.06409929,0.0586641,0.0785922,-0.00146294,0.11973369,-0.081497,0.03542574,0.07677633,0.01509215,0.15400611,0.09696653,-0.0047228,-0.09979492,0.07369566,0.06615741,0.00786107,-0.01035255,-0.02577373,-0.11476718,-0.05998257,0.11364301,0.0643894,-0.01294776,-0.01235799,-0.08612936,-0.08916719,-0.06262595,0.12164244,0.0728395,-0.05451508,-0.05365437,0.06933007,-0.04376872,0.06286895,0.03746448,0.14827532,-0.00406891,-0.04519608,0.08210514,0.05559874,-0.00914654,0.10784284,-0.02232489,-0.05196609,0.06624111,0.04238247,0.09334783,0.15313646,0.13095093,0.03748635,-0.0673757,-0.03515279,0.06279722,0.07568647,0.15578197,0.10210469,-0.16088858,-0.0927328,-0.13917467,-0.07235547,0.02533565,0.05468155,-0.06317321,0.08467247,0.03068688,-0.06798117,-0.12480596,0.04249523,-0.00661008,0.07056135,0.04288515,-0.16859475,2.232e-05,-0.06366569,-0.08633962,-0.01547573},
 {-0.04856274,0.0362704,0.03715847,-0.02722113,0.05004454,0.15813802,0.09034874,-0.04403552,0.05083217,-0.02090462,0.04713285,0.17041302,0.04472239,0.07740121,-0.00142534,0.16349891,0.17664969,0.10106358,0.07577149,-0.04564153,0.13515012,0.08400235,-0.01905936,-0.05213957,-0.03154055,0.15334855,0.13796608,0.13703997,0.01069024,-0.00068711,-0.08934277,0.11268432,0.06265602,-0.07771589,-0.11809116,0.02725397,0.07107821,0.09518789,0.04586951,0.04928112,-0.04120098,0.00459264,-0.04367362,-0.06641826,0.01646911,0.03603546,0.05362869,-0.16473614,-0.13354427,-0.11776838,-0.01225428,-0.09400363,0.05806152,-0.02275604,-0.08625972,-0.15641719,-0.05225461,0.08032452,0.12270526,-0.03320467,-0.15546376,0.09097268,-0.05274824,0.09317221,0.05077,-0.09132666,-0.01257291,-0.11956092,0.17299223,-0.09494793,-0.07221784,0.16153495,-0.03684812,-0.05257864,-0.07488205,0.1328447,-0.05454076,-0.02346136,0.04614754,-0.06124199,-0.02889984,0.11393964,-0.0040581,0.08325961,-0.11053291,0.00950006,0.15888418,-0.01859702,-0.1002437,0.1137064,0.1438265,-0.17060441},
 {-0.04264828,0.11927073,-0.07427964,-0.07680773,0.08587758,-0.07436328,0.01720443,0.08697769,0.1158657,0.00325373,0.13081776,0.1383975,0.1431936,0.00498465,0.08654022,0.08994419,0.10391872,-0.02154992,0.00490977,0.11851175,-0.03213412,0.06998374,0.10150173,0.13853583,0.12595099,0.01101695,0.06547873,-0.04850958,-0.08442584,-0.15438962,0.01566126,0.08212125,-0.00936251,-0.05166189,0.04822525,0.06864337,0.08527933,0.04464322,-0.12050503,0.0499513,0.01430371,-0.11436921,0.11778212,0.06770374,-0.13402003,0.06029705,-0.01861961,-0.05947981,0.02542882,-0.02448265,-0.0346245,0.04665392,-0.03596054,-0.0913084,-0.05686004,0.08729117,0.04143915,-0.0885345,0.06927084,0.08425976,-0.10386077,-0.03867364,-0.06300934,-0.08728617,0.12079152,0.10233864,0.04723086,-0.0892336,0.13839087,-0.08418645,0.03483699,0.10374681,-0.07510563,-0.00360292,0.10018446,0.11793765,0.09970798,-0.07979856,0.08520627,0.0381093,-0.12768087,0.0936071,0.00998922,-0.0414029,0.01359544,-0.04585211,0.09206636,-0.04176526,-0.01351245,-0.09738134,-0.10070145,-0.06665397},
 {0.10005678,0.05796046,0.11446306,0.09472318,-0.02631912,0.08172622,0.04506093,0.06638532,0.14643502,0.11368053,0.08053476,0.0573093,0.14379962,0.14121595,-0.00522609,0.09052409,-0.04884505,0.06307575,0.01343333,0.08227105,-0.08156686,0.03339609,0.00879079,0.06045519,-0.07235922,-0.00198129,-0.00590101,-0.0495396,-0.14401154,-0.1051823,0.09170336,0.12914371,0.12559819,-0.00673112,-0.01748176,-0.03316665,-0.11192109,0.13600722,0.07629009,-0.07758921,0.10407346,-0.09553586,-0.00415981,0.05937365,0.01378819,0.00746042,0.10763753,0.04006943,-0.01734753,0.05138126,0.11783616,0.01307586,-0.04190655,-0.10270625,0.04162762,-0.05842688,0.08385842,-0.07491909,0.0623326,-0.09553017,0.02588875,-0.05962569,-0.04181864,-0.13022862,0.04398981,-0.0777366,-0.04111312,0.06364261,0.04990163,-0.06055158,0.00205214,0.08607722,-0.09478939,-0.01083575,-0.07397535,0.08956998,0.10487256,-0.04646775,0.02971809,0.01423488,-0.07521586,-0.01568395,-0.11309204,-0.12341201,-0.08405654,0.0915121,0.09745642,0.11911516,-0.04432743,-0.00176672,-0.10374662,-0.09945088},
 {-0.0546735,0.1353153,0.05663078,0.06374905,-0.04880244,0.03367258,-0.02688612,0.00163982,-0.02927604,-0.08006125,-0.02962951,-0.07394939,-0.04002177,0.07036714,0.13025871,0.13205224,0.11994278,0.05372336,0.07965922,0.01239457,-0.00575435,-0.08367635,-0.02408927,-0.03673569,0.10803816,0.01355641,-0.05557276,-0.06627459,-0.07499348,-0.03157268,0.03861156,0.12940061,0.08202434,0.12644182,-0.02220454,-0.06263574,0.0978648,-0.02673893,-0.04843226,0.01252532,0.10979772,-0.11876903,0.0959663,-0.03025807,-0.13309774,0.06453738,-0.01821022,0.05293214,0.06768266,-0.04594183,-0.101446,-0.01755581,-0.05907955,-0.06700914,0.12112538,-0.02990177,-0.13798563,0.04455133,0.116013,-0.08524248,0.04903793,-0.00161237,-0.01253085,-0.12046059,-0.01368477,0.05270273,0.06718055,0.06998056,0.03071631,-0.08754323,-0.10046511,-0.02036867,0.09742498,-0.08105384,-0.07256114,0.04853117,0.02979131,0.10674281,-0.02326499,0.01464815,0.04390843,0.12050171,0.00255978,0.10211264,-0.01604348,-0.07286964,0.10650469,0.01538363,-0.0584489,0.08915355,-0.03819068,-0.06629238},
 {0.05890807,-0.09857318,0.03158711,-0.05901042,-0.10033074,-0.00157675,-0.09748711,0.09309521,-0.08871358,0.0720494,-0.01638362,0.05278769,0.07029068,-0.14676915,-0.12990259,-0.15352519,0.06069117,0.06087515,-0.1131551,0.0154294,0.06674444,0.08172679,0.06396854,0.05127333,-0.0081931,-0.06063029,-0.04747465,-0.01398114,-0.06418928,0.03125279,0.01063583,-0.11455629,-0.0357969,0.04795307,-0.01040952,0.09362762,-0.1148038,-0.07861265,0.06075799,0.1218256,-0.13499956,0.11977944,-0.08792177,-0.13108386,0.09063929,0.14574951,-0.1396636,-0.03936334,0.04842558,-0.00788537,-0.08863797,0.08539095,-0.03462021,-0.11879505,-0.03004356,-0.07511979,-0.03483031,0.00360506,-0.08755139,0.09583803,-0.03735513,0.07903288,-0.14220236,-0.11009651,0.07615788,-0.06074652,-0.05585349,0.04302939,0.06158536,0.11217452,0.02569554,-0.08918627,-0.00718671,-0.0276478,0.13836497,0.08588498,0.02949016,-0.08745272,0.07214087,-0.07861345,-0.03418004,0.01115779,0.10543519,-0.10753009,-0.07520931,0.09132559,-0.01998843,-0.02376248,-0.02736219,-0.07859608,-0.03015317,-0.04510075},
 {0.00214067,0.00893893,0.06453842,-0.1161142,-0.01852068,-0.04119775,0.09175062,0.08057457,-0.05475773,-0.1049767,0.06895249,-0.12326839,0.03839598,0.05624277,-0.02148188,-0.12784217,-0.13686797,-0.02774834,-0.11020386,0.07283808,-0.07107106,-0.05852061,0.03339963,0.00286646,-0.10229753,-0.0670913,-0.01410553,0.0613707,0.02418484,0.01127248,-0.07385487,0.08352847,-0.03132622,0.09373645,0.03261426,0.04437394,-0.00645732,-0.11368927,0.00166529,0.02777078,0.00635661,-0.0797376,-0.0563114,-0.10842332,-0.02460976,-0.02701748,0.07951257,0.10947707,0.09121449,0.12110886,0.01994414,0.00463626,-0.08811167,-0.10895399,-0.11946543,-0.06485029,0.07888874,0.07730363,0.08894894,0.08272088,0.10483474,0.05275863,0.02208195,0.13216008,0.11483641,0.15298748,0.07603385,0.02799877,-0.0839224,0.0225406,-0.04639743,0.0652822,-0.06692643,-0.10385347,0.10246976,0.01744591,-0.0792897,-0.02994769,-0.08243454,-0.07292786,-0.00070193,0.05772644,-0.01901684,0.07105343,-0.00530237,-0.01959217,0.05764547,0.04543366,-0.0393231,-0.07884748,-0.06628013,0.0542503},
 {0.12960902,0.10926438,0.13951658,-0.01122232,0.1511505,0.18119545,0.06697127,0.03251136,-0.02842381,0.10299374,0.10470572,-0.03512558,0.14790301,0.05184774,0.15618145,0.11104009,-0.00211925,-0.01162635,0.0754488,-0.02234349,-0.02940225,0.15645614,0.16925743,0.07905029,0.03548431,0.12095612,-0.03217118,0.17562503,0.01689255,-0.15754315,-0.04094035,-0.03422614,0.01108054,0.00542463,0.01241235,-0.07321916,0.01543405,0.19445238,-0.06499504,-0.00497331,0.14287284,-0.07847639,0.001611,0.19076517,-0.08045832,-0.04861967,0.02289038,-0.05859244,0.01455229,-0.05637266,-0.05088469,0.14587995,-0.07685056,0.02947182,0.16223794,0.03579471,-0.06605845,-0.03372559,-0.03940979,0.00890271,0.04298611,0.07349261,0.18165278,0.01245393,0.06882092,-0.02781298,0.0075526,0.05828618,0.00307113,-0.08127815,-0.0200607,0.13188337,-0.20535989,0.02241744,-0.08318377,0.08524848,-0.08267875,0.17136641,-0.02318846,0.0152962,-0.0638127,0.17644404,-0.1753013,0.0033763,-0.17063254,-0.17141584,0.18143901,0.01323997,-0.19288473,0.08356203,0.13930574,0.01842697},
 {0.08614463,0.12985924,0.02640945,0.06103818,0.15498197,0.16345751,0.05422115,0.10782105,0.03222013,-0.01125171,0.00144055,0.06370481,0.13509873,-0.01513901,0.01981627,0.1388934,0.0861145,0.05444635,0.12618694,-0.02187475,0.07842609,-0.01426706,0.02139089,-0.04860082,-0.06501944,-0.0847142,0.00198443,0.01462187,-0.10209356,-0.02324292,-0.01180897,-0.06264108,0.12533012,0.08158951,0.00924549,-0.01099847,0.02223141,0.02848507,-0.05465108,-0.08933863,0.13462971,-0.09753317,0.01486911,0.12761211,0.03806041,0.04020196,-0.02321213,-0.07071496,0.0524074,-0.13770694,0.02864453,0.11612584,0.03563335,-0.0070978,0.10417576,0.06329772,0.0121332,-0.03528445,-0.06169982,0.0882845,-0.04795589,0.01551948,0.0664539,-0.03295489,-0.01713835,0.00239262,-0.05192532,0.05530564,-0.07527456,-0.04560275,0.13713495,-0.08266876,0.04310107,0.00725346,0.07512341,0.01641073,-0.11696396,0.10251655,0.02852004,0.08182716,-0.01243579,0.07207185,0.04747904,0.0018105,0.06347101,-0.10518997,0.08126349,-0.07116569,-0.03437537,0.01918057,-0.08001747,-0.00541643},
 {0.13772888,0.00532874,-0.06160668,0.05426465,-0.09189861,-0.01172584,0.06579873,0.00225754,0.02485689,0.11371409,-0.08846693,-0.0020975,0.02754209,0.07372781,0.08767306,-0.07944997,0.0544311,0.04587863,-0.02350183,0.08888861,0.10162824,0.15452513,-0.07358943,-0.07334759,0.01579139,0.08025194,0.00181679,0.03354297,0.0313029,-0.03540524,0.02977565,-0.01832065,0.14178246,-0.01372444,0.1298153,0.05325756,0.08014958,0.02808972,0.06087487,-0.07278221,0.14310156,0.02356859,0.01748652,0.03978056,-0.04033762,0.11956035,-0.02677241,0.03145945,-0.04735008,-0.10060079,0.11591499,0.05761804,0.04322918,0.11293077,-0.10358864,-0.08280476,-0.00943452,-0.05467319,-0.06992967,-0.05733104,0.03909358,0.04491751,-0.03689925,0.08413759,-0.03260963,-0.10896382,8.165e-05,0.01537748,0.1081558,-0.10246122,0.00014261,0.04590878,0.0586399,-0.12553687,-0.1382157,0.02514796,0.01169693,-0.0770269,-0.08819677,0.06619129,-0.0397508,-0.0706277,0.00581257,-0.11363648,-0.1185338,-0.08263641,0.12928063,0.11294953,0.09736832,0.01058132,-0.11616334,0.0594485},
 {0.00255546,0.08991157,-0.07990839,0.06870242,0.14934221,-0.01879748,0.11775098,-0.00531675,0.10021264,0.0559523,-0.02081068,-0.08068106,-0.05301938,-0.02193011,-0.05718955,0.1466767,-0.08163637,0.06647106,0.03911623,-0.00867437,0.12244179,-0.07614555,-0.05097712,0.03274285,-0.07280184,0.00478378,-0.015166,0.05107186,-0.04679892,-0.01266169,-0.10230859,0.08812304,0.05498639,0.09137639,-0.04888304,0.12041214,0.09768349,-0.02099342,0.06321512,0.08000509,0.13081165,-0.12316606,0.12790069,0.11946466,-0.05364849,0.04334234,-0.02260609,-0.04727286,-0.03169386,-0.00283697,0.06512474,0.08912263,-0.11390962,0.01470464,-0.05453974,0.09696368,0.07738993,0.07031985,0.12053642,0.14923728,0.07724328,0.10696395,0.0886873,0.1124339,0.11398458,0.08190445,-0.01412476,0.01273131,0.03682753,-0.07694105,-0.00127946,0.07615563,-0.12598531,-0.08488924,-0.02695166,0.08354091,-0.03412306,-0.05587376,0.03510385,0.15762617,-0.14600381,0.04084671,-0.1238442,0.11208759,-0.15117493,0.13907787,0.13694091,-0.03470294,-0.1395009,-0.07048488,-0.02670983,0.02660706},
 {-0.07596145,0.00201376,-0.01544494,0.06105923,0.13159539,0.11747438,0.11498676,0.06517114,0.04660166,-0.05844487,0.02860463,-0.0180042,0.13875872,0.070142,0.10858503,0.00133714,0.14963275,0.00502581,0.13372308,0.12445961,0.03418983,0.08072975,-0.0774053,0.08248851,0.11019579,-0.05278165,-0.07987893,-0.03138066,0.03563303,-0.05100639,-0.03524689,0.07449087,0.07303693,0.02468357,0.09174021,0.06700415,0.10006087,-0.014395,-0.11391071,0.01284384,-0.03661642,-0.13068235,0.10966071,0.04863166,0.07402507,-0.06124892,-0.02175641,-0.10614014,-0.03641857,-0.05796818,-0.02248945,0.07724708,-0.13401186,-0.03434402,-0.01652986,0.06597868,0.01427926,-0.04639645,-0.08000783,0.02499016,0.07551727,-0.07746707,0.04121817,0.00321104,0.03212538,0.10931829,0.10347089,-0.0328435,0.084463,0.00938233,0.09855022,-0.07751741,-0.13970336,-0.0393784,-0.0996135,0.08885133,-0.06955212,-0.08000959,-0.03917219,0.05610551,-0.01982393,0.08950432,-0.12393864,0.02143794,0.06256406,-0.02221812,-0.0624281,-0.04488247,0.00748339,0.06463713,0.1320106,0.00070534},
 {-0.09455247,0.0267495,0.12198111,0.11790806,0.06431842,0.00753754,0.06627921,-0.02948837,0.09727328,0.05394254,0.02325493,0.01684756,0.11770086,-0.07071377,0.0451949,0.01460844,-0.05219133,-0.04584029,0.06125623,0.03571831,-0.05352563,0.11492313,-0.0496687,-0.00777951,0.00671618,-0.04143013,0.12115826,0.02186204,0.06139983,-0.10479917,-0.04313821,-0.02359542,0.00481815,-0.05362761,-0.00039362,0.12819305,0.13516866,-0.10352691,-0.09792472,-0.07810884,0.04376889,-0.08908033,-0.01439065,0.11171639,-0.02512923,0.02626348,-0.11434563,0.10184704,-0.10650271,-0.02523388,-0.16267137,-0.03443209,0.00084651,-0.13139187,-0.10936496,0.04210979,-0.03105779,0.0033007,0.0180034,-0.02739034,-0.06951517,0.09994055,-0.09455656,-0.03578426,-0.0271669,0.08937249,0.0169496,0.04959029,0.08789878,-0.10883433,-0.07860623,0.10795689,0.11463898,-0.09022024,0.0404288,-0.09703474,0.05864612,0.03204995,0.07391603,-0.10007692,-0.13995515,0.02649546,-0.01265093,0.11167233,-0.02287587,0.12951308,-0.01634942,0.09121811,-0.04786198,0.01061538,-0.04578689,-0.02861868},
 {0.02933907,0.13607976,0.15789008,0.03082035,-0.02322551,0.0784895,0.03844633,0.05083015,-0.07852918,0.12734011,0.1032402,-0.05530922,-0.03306516,-0.06717768,0.05173089,0.14432934,0.04905199,-0.00969011,0.15346794,0.13003488,0.07646712,-0.01651656,-0.02376308,-0.00385613,-0.05614245,0.09579764,0.10857006,0.10179746,-0.13610956,0.01748228,0.00772285,-0.05984079,0.1136601,0.01123186,-0.05049208,-0.13904825,0.12147837,-0.04959407,-0.15698512,-0.02219793,0.01176257,-0.13768853,0.01719241,0.01564429,-0.01559011,-0.03887466,-0.02193815,-0.04445367,0.02578113,-0.03519694,0.05937398,-0.02496308,-0.07663152,0.05944916,0.180961,-0.11988295,0.0443628,-0.04137331,-0.01103582,0.10780909,-0.11453173,-0.01199704,0.06066794,-0.0692506,0.03398208,0.02723443,0.12878552,0.03761081,0.1325525,-0.11251729,-0.01633337,0.15661101,-0.09864365,-0.12400907,-0.12937039,-0.05378683,-0.1401528,-0.01696289,0.05838336,0.09080562,-0.00617968,0.1865939,-0.15759262,0.13344494,-0.08543469,0.05654704,0.17468613,0.05502259,-0.10554724,-0.03629213,0.00239844,-0.01917348},
 {0.04496691,0.01964215,0.07656813,0.00073602,0.09049047,0.0387727,-0.00170194,-0.06570742,-0.09716954,-0.00704839,-0.1258272,0.00811379,0.09403178,-0.04664475,-0.07061061,0.03083489,-0.08603143,-0.12545396,-0.11212829,-0.02857502,-0.11686616,-0.01247779,-0.09010486,0.09864184,-0.09340039,0.04550886,-0.05992191,-0.07714788,-0.07040507,0.16204605,-0.09620961,0.09076022,-0.12845755,-0.00034411,-0.04854722,0.14692274,-0.03660148,-0.07649704,-0.08854721,0.09426577,0.00453359,0.14719343,-0.1186346,0.08431157,0.01457722,0.14175978,0.1117392,-0.06923719,0.01956896,-0.07028005,-0.06801319,-0.07826059,0.13291629,0.08942294,0.00419167,0.08319208,0.10028972,0.0923902,-0.06345862,0.04831482,-0.09775705,0.06939644,0.09485303,-0.05997349,-0.00485939,0.01807734,-0.0033575,-0.0717651,-0.00178633,0.02575437,0.00602292,0.03987747,0.02693366,-0.0889805,0.00611444,-0.10332802,0.05469398,-0.04695812,0.04310848,-0.01673244,-0.00990381,-0.07873499,-0.01452519,-0.09209488,0.06116981,-0.04434992,-0.03819169,-0.10902065,-0.00066498,-0.00059867,-0.16086583,-0.02419989},
 {0.13442774,-0.03377429,0.07635549,0.0409673,-0.09878027,0.000295,0.0693016,0.10807812,-0.09522925,-0.03688949,-0.07630914,0.10334963,0.11759631,0.02287753,-0.02970256,0.02452271,0.01629778,-0.00891744,0.09086975,0.08621733,-0.00456917,-0.01893429,0.14414673,0.00148311,0.02133548,0.00527364,0.03338421,0.09005286,0.02521191,-0.03992329,-0.13780135,-0.0133985,-0.06181492,-0.07852417,-0.0263224,-0.07116794,0.12684806,0.05628411,-0.08280232,0.00315348,-0.00152442,-0.0711203,-0.09132578,0.01153765,0.09863072,-0.10633156,-0.0172878,-0.11419945,0.06655522,-0.03019093,-0.04329427,0.08900997,-0.03694902,0.03603628,-0.10995948,-0.00268676,0.00358734,-0.08319745,-0.02906612,0.06548688,0.09717116,0.03124847,-0.0619732,-0.03665875,0.12033537,-0.14202583,-0.03914789,-0.04969319,-0.06788959,-0.0242357,0.03582799,0.05282558,-0.04189869,0.10505521,0.03582495,0.06181324,-0.11479485,-0.00679828,0.06272674,-0.01013504,-0.12146292,0.01932454,-0.1403025,0.033948,0.08116412,0.01305649,0.00741807,-0.05732094,-0.04236745,-0.0829128,0.05781707,0.0560398},
 {0.1333335,-0.05338301,0.14406987,-0.00158694,-0.00616673,-0.00721007,-0.08822057,0.09219973,-0.01871892,0.00442065,-0.03651401,-0.00958282,-0.01165935,0.11354973,-0.02556202,-0.03978464,0.07836193,-0.07815634,0.10743823,-0.03074927,0.02627308,0.08666174,-0.07113118,0.06676145,-0.01760621,-0.07277712,0.08498977,-0.05646206,0.10062031,-0.03134157,-0.13949464,0.04981712,0.14218265,-0.09352545,0.08848295,-0.05236061,-0.10662875,0.05391774,-0.10761703,0.00545524,0.11707573,0.02274109,0.0271132,0.10167712,0.06084191,-0.07883854,-0.01126735,-0.12640683,-0.05831901,0.04656821,0.11512159,-0.13568099,0.01827608,0.09779,0.02371368,0.03233394,-0.0254305,-0.1134764,0.04554902,-0.07178698,-0.02179198,0.00434973,-0.08462275,-0.05953429,-0.05165214,-0.10606387,0.00756839,0.00710158,0.02975385,-0.06622648,-0.08947663,0.03800871,-0.1181601,0.0334658,-0.04680927,0.10151337,-0.09593777,0.06058384,-0.01276421,0.07355849,0.02071514,-0.00261888,-0.00432883,-0.00393018,-0.02221981,-0.09433269,-0.04008407,-0.00782829,-0.01574209,-0.09094422,-0.0067501,0.06800624},
 {-0.01737568,0.14831698,0.00535477,-0.07455636,0.04083978,-0.074667,0.00013718,0.04109356,0.07435654,0.05034058,0.0094463,-0.01664626,0.16807628,0.17231683,0.11811832,-0.06689624,-0.02414145,0.04251404,0.05570057,-0.00638214,0.17504416,0.14444554,0.06776013,0.14042935,0.14468136,-0.06506409,-0.0378159,0.00110621,-0.10260192,-0.09617254,0.07526422,-0.01726495,0.14689143,-0.01583897,-0.03105324,-0.13998292,0.14663287,0.1611833,-0.04011178,-0.02500158,0.09021454,-0.05414329,0.03638227,0.12561579,-0.05490111,-0.1229227,0.01818511,-0.10991605,0.08663283,-0.08296245,0.08345104,-0.08260041,0.07103715,-0.05832919,0.12702012,0.09219105,-0.11224063,0.16670057,0.11381805,0.10156611,-0.13896786,-0.01559856,-0.05503871,-0.00571945,0.08694251,-0.08863591,0.00976074,-0.11274371,0.00691275,0.07536789,0.02025389,0.06863719,0.00374356,-0.15067632,-0.03900778,-0.00711634,0.07412717,-0.00176629,-0.10081252,0.112318,-0.14887759,-0.06810622,-0.07445721,0.01331211,-0.12716703,-0.00071448,0.1254,0.07927524,-0.12615833,0.12717907,-0.04878454,-0.05631305},
 {0.01874091,0.05754224,-0.05838484,0.12172641,0.02289463,0.03782861,-0.07550598,-0.02143994,-0.10664379,-0.04472191,-0.10143936,-0.09816063,-0.08805972,0.06557567,0.10476141,-0.10474546,0.03300043,0.04475006,-0.095395,0.03580425,-0.08183278,0.10717975,0.0310568,-0.07793899,-0.04255006,-0.09886494,0.0475668,0.0517195,-0.01005152,-0.0937779,0.08400163,0.09594209,-0.00359302,-0.07917619,0.08116986,-0.03468017,-0.06802066,0.12648997,-0.02437207,0.01849167,-0.03939773,-0.00861786,0.06072538,-0.02864367,-0.07446358,-0.00345576,0.09462669,0.08457236,0.06096316,-0.07950105,-0.13707171,0.06643231,0.00577699,-0.053674,0.07692123,-0.06564673,-0.13050331,0.05339507,-0.01201855,0.05823374,-0.0536349,-0.03547082,-0.04442709,0.09691408,0.03027583,0.00583632,0.00594324,-0.0536209,0.05280486,-0.08372653,0.00633168,-0.02359253,-0.1411139,-0.00391679,-0.05033726,0.05656399,-0.07276599,0.0184487,0.070191,-0.08482095,-0.04051388,-0.10121949,0.07335553,-0.06906384,-0.10807701,-0.01722612,-0.00268131,-0.02641727,-0.01883302,0.02801481,0.08284899,-0.02384353},
 {-0.00374901,-0.04612343,-0.00372837,0.13697696,-0.00529522,0.04657441,-0.05508268,-0.04178547,0.15339756,0.04624924,0.10206936,-0.01016204,-0.06335019,0.0221315,-0.01174285,2.488e-05,-0.09143584,0.14954855,0.04299361,0.08318473,-0.08573579,0.09567032,-0.10199551,0.06985088,-0.02972405,0.09707728,0.06538156,-0.02538861,-0.06398252,-0.00668491,-0.09007844,-0.07499323,0.01827215,0.09760108,0.07102214,-0.10715264,-0.10343014,-0.04142586,-0.07061201,0.04286083,0.08886645,0.07260597,-0.05567664,0.07608838,-0.01443009,-0.01446339,0.09151214,0.00475192,-0.04955166,-0.13932331,0.01178629,0.09425031,-0.14282297,-0.10363407,0.06994587,0.01860481,0.00473115,-0.08365388,0.01341325,0.02390127,0.0183564,0.07296599,0.10354192,-0.07942072,-0.03443952,0.10116138,-0.06253056,-0.09930186,0.06039357,-0.10777538,-0.0545605,-0.0767267,-0.02707262,0.00407174,-0.09420557,0.14853494,-0.10286812,0.08089887,0.03139048,0.09361158,-0.16352867,0.12247059,-0.03132908,0.08213066,-0.1128378,0.14421429,-0.00801586,0.01016883,-0.09536839,-0.03835423,0.08987256,-0.03654864},
 {0.06632358,-0.080671,0.13498975,-0.02583653,0.04343371,0.11390417,0.12873113,0.13744894,0.12253537,-0.00356795,-0.07645194,-0.00092735,-0.03486377,0.08117881,0.03197476,-0.05264932,-0.04671695,0.08765274,0.04698511,0.01150741,-0.10645451,-0.06607729,-0.09939178,0.10078271,-0.02695139,-0.09655669,-0.09150396,0.12375513,0.02776787,0.08212068,0.06655687,-0.03399847,-0.0011132,0.01934703,-0.05203696,0.14242247,0.03027899,0.05151186,-0.15449949,0.01694266,-0.04697828,0.0827937,0.02924281,0.1503583,-0.10889301,0.05088455,-0.0689808,-0.14410754,0.00894846,-0.07924781,-0.03776383,0.04513121,0.00540596,-0.12852088,-0.04985854,0.01441075,0.05485212,-0.0102724,0.11000624,-0.00344334,-0.09628915,-0.07813244,0.06242095,0.00378526,-0.04245405,-0.0319101,-0.05162828,-0.09184609,-0.00976432,-0.05676604,0.12839463,0.12769434,0.00093259,0.05289995,0.00662092,-0.00863613,-0.0792048,0.07714306,-0.08225363,-0.0442009,-0.04898163,0.13295639,-0.06609984,-0.01373523,-0.09867253,-0.018226,0.02483871,-0.09234007,0.02937457,0.12711674,0.09913716,-0.12157776},
 {0.06351855,-0.00628178,-0.07392605,0.11726364,0.03673824,0.02244667,-0.0909017,0.1360301,0.02805552,-0.08851128,-0.03720464,0.05091845,0.10407808,0.05430887,-0.03697935,-0.06531027,-8.168e-05,0.12912583,-0.03033177,-0.04978111,0.04303261,-0.03116486,0.09633411,0.03545329,-0.05015197,0.07103653,0.07940074,0.01936458,-0.05590844,0.04851999,0.03021376,0.08491691,-0.08018967,-0.01075646,0.1038585,0.11663566,0.08599333,-0.08077581,-0.05621465,-0.06891152,0.04772172,-0.13435248,0.00998265,-0.05790317,0.00831537,0.02147173,0.01608917,-0.11042819,-0.00155261,0.01272499,0.01750781,0.07951428,-0.03311932,0.05227362,-0.09488206,-0.02664535,-0.00680086,0.07934592,0.04492708,0.00154068,-0.07923166,0.00402956,0.09066396,-0.08988783,0.05647123,0.08012948,0.03863483,-0.06632313,0.07908926,0.01179627,-0.00718947,0.0077246,-0.08918177,0.07328897,0.02210492,-0.00097981,-0.09011086,-0.02853348,-0.0119081,0.05532603,-0.14349198,0.02199042,-0.00223414,0.06018627,0.02740628,0.03617064,-0.07795971,0.0340488,0.0592056,-0.03001446,-0.13104425,-0.12107053},
 {0.09434311,0.0765494,0.03011449,-0.05842463,-0.05531508,-0.02880836,-0.04458538,0.14760397,0.05058771,0.11865393,0.04839804,0.05274912,0.02890123,0.10065114,-0.02335571,-0.07513667,0.03166765,0.02979989,0.09860427,0.08810686,0.05015809,0.0061677,-0.02815606,0.10888703,0.18068872,0.12598275,0.00499067,-0.02264854,0.00840245,0.08584583,-0.00780305,0.0126689,0.08263606,-0.08941338,-0.10317115,0.03082442,0.09292094,0.13352044,-0.06374049,0.02479502,0.06681921,0.07290888,-0.03875632,0.16377182,-0.03329484,-0.09728038,0.0594263,-0.18665066,0.02970859,0.01583016,0.06454325,-0.02445363,-0.16959623,-0.08751701,0.00585301,0.04238566,-0.05719544,0.1431945,0.09526554,0.12696055,-0.1023359,0.06587755,0.09445468,0.07133558,0.07778054,-0.03719176,0.09330414,-0.05631262,0.08000328,-0.15767242,-0.02130047,0.08520839,-0.11954258,0.04162544,-0.05900179,0.16638346,-0.01846712,0.04376483,0.05971882,-0.04328708,-0.13564813,-0.0104723,-0.15031046,-0.06568593,-0.04830715,-0.11028545,-0.00822832,0.04779108,0.00993445,0.08167755,-0.0335364,0.04182096},
 {-0.14870831,-0.11927783,0.06045642,-0.03399229,0.04547445,-0.03380812,0.03789178,-0.05120946,-0.00620536,-0.11699487,0.05791226,-0.12069201,0.03380775,0.08615953,-0.11974048,-0.10334778,0.04206176,0.02266439,0.11826389,0.07888595,0.08096152,0.0230516,-0.11573824,0.10278428,0.07502685,-0.07347177,-0.09938506,-0.03467993,0.05762983,0.05112803,0.08874029,-0.02019487,0.11190126,-0.12271422,-0.02047673,-0.04772675,0.08612197,-0.00726355,-0.12124495,0.0668591,-0.06716353,-0.08243,0.0804237,0.02684629,0.0397008,0.07016319,0.06999988,0.05370837,-0.13757484,-0.1031809,-0.01002575,-0.05581615,-0.03791555,0.08825526,0.08425172,-0.02002557,0.04304308,-0.06013065,0.15918034,0.07077848,-0.07878402,-0.04617867,0.12324564,0.01916247,0.00534103,0.04112675,-0.07547138,0.02164038,-0.05937239,-0.08882543,-0.05482114,0.09094796,-0.07226036,-0.03078227,0.00567156,0.06177931,-0.02332199,0.1408055,-0.03194533,-0.0564177,-0.07466494,0.09810272,-0.12990364,0.05467719,0.01361552,-0.14528486,0.08312067,-0.03650614,-0.02489227,-0.05523039,0.07246254,0.09809055},
 {0.14477994,0.14539468,0.15150623,-0.05329628,0.15238006,-0.04313346,-0.06452367,0.00354936,0.11142968,0.02839959,-0.04125697,-0.05972336,0.03486658,-0.07406734,0.10098252,-0.05346314,-0.0401501,-0.02603533,0.05121024,0.13557814,-0.0903488,0.07230549,0.01357244,0.13792418,-0.06797177,-0.00870103,-0.07160974,0.01430381,-0.13380358,0.03800826,-0.08716708,0.02861088,-0.08556221,-0.00625155,-0.00278641,-0.03782195,-0.03111106,0.08665816,-0.07676755,0.03048891,0.07607832,-0.10961941,-0.0630743,0.11124751,-0.11276492,-0.08446582,0.09014565,0.08874314,-0.00108821,0.07566825,0.01948332,0.09911515,0.07629158,-0.11283126,-0.04196284,0.03226526,-0.00529272,-0.00761285,0.10601081,0.03061062,-0.00898972,0.02198306,-0.12828267,0.04239962,0.01964522,0.078436,-0.00843578,0.05848171,-0.05175228,-0.07271768,-0.04995867,-0.10707335,-0.0782887,0.00090139,-0.08310384,0.02352781,0.09731208,-0.14154612,-0.02155018,-0.02576383,-0.02289768,0.03327095,0.08579022,-0.07035667,-0.04018157,0.075398,-0.07069886,0.13778791,-0.05184214,-0.08203273,0.08898421,-0.02250454},
 {0.04812965,-0.0312279,0.06670146,0.0182132,0.12382734,-0.0156466,0.05516055,-0.07269259,0.0450866,-0.01396495,-0.07135834,0.08038412,-0.05678396,0.01361556,-0.11031294,-0.11942049,-0.12730227,-0.02024215,-0.01713653,0.01934689,-0.10934026,-0.00689132,-0.03955182,0.10652366,-0.04865726,-0.05838942,0.12725484,0.05539801,0.08748731,0.12648416,-0.01678051,0.01099114,-0.06794874,-0.00642526,-0.00897376,0.00871006,-0.0491305,-0.07221687,-0.02783028,-0.1483294,0.03293725,-0.05640167,-0.03743799,-0.0698349,-0.1494751,-0.13209347,0.12118704,-0.1334877,-0.16115914,-0.10735804,-0.13692756,0.05334042,-0.15034589,0.03713911,0.03410234,-0.05969952,0.02043081,-0.03984741,0.09014045,-0.06345904,-0.05551021,0.16396731,0.13218184,-0.02902525,0.04185016,0.01283499,0.00262598,0.03718274,0.13416985,-0.00775252,0.12970082,-0.02476086,-0.03618413,0.08824999,0.08284511,-0.0031176,-0.14953895,0.18100627,0.10511647,0.0772332,0.00080862,0.02789142,-0.07623588,0.025051,0.06756285,-0.07374921,0.10152441,-0.14726113,-0.0068684,-0.0915378,-0.05248569,-0.13301572},
 {-0.08400834,-0.03456281,-0.02061825,-0.08414671,0.04704724,0.06513814,0.00357779,0.09104861,-0.0900488,0.04863595,-0.08191638,0.10044359,-0.0583336,-0.01585576,0.04445425,-0.06912827,1.33e-06,0.1320232,0.07299782,0.08547175,0.08511966,0.01642713,-0.00755263,0.12412317,0.04528007,-0.01232558,-0.00173338,-0.04076077,-0.03004752,0.0435825,0.04416333,-0.03644554,0.0786567,0.13367316,-0.0538588,-0.00402437,-0.0135395,0.05498707,-0.05274929,-0.02883082,0.14872992,-0.10872494,0.00094728,0.05380144,-0.052575,-0.09104697,-0.08967187,0.08166117,0.07912473,-0.13939036,-0.00606284,-0.00111212,0.07846997,-0.08642323,-0.00545499,-0.10896806,-0.09422617,0.00186656,0.14942327,-0.00965862,0.02466697,0.06312836,-0.02014141,0.11901707,-0.08508553,-0.01596512,0.04625415,-0.15026769,0.12603337,-0.14429702,0.13381462,0.05808956,-0.09939449,-0.10263276,0.02991243,-0.05944541,-0.07531266,-0.08230527,0.06129273,0.0105899,0.03065494,0.1209595,-0.07375243,0.05049387,-0.1499636,0.11665033,0.04878104,0.0038095,0.00677136,0.02967399,-0.07768141,0.02727905},
 {-0.01466433,0.04143704,0.1129593,0.1186374,0.06633144,0.15219514,0.10425854,-0.08023328,-0.03449348,-0.04543443,-0.00897419,0.02882252,-0.06761345,0.10296263,0.09220495,-0.05552499,-0.05732305,0.15223761,0.05926177,0.13651751,0.0947498,-0.05572398,0.00759713,0.02424545,-0.03525652,0.0007177,0.05465309,0.10147839,0.01036722,-0.05149566,0.06637565,0.10314382,0.08900863,-0.11951172,0.04114504,0.10248623,0.07421591,0.15108705,0.0612663,-0.07548656,-0.01411403,0.01973426,0.06272423,-0.00231646,-0.06233766,-0.1774317,-0.06649357,0.03226456,0.01738875,-0.06289446,-0.085497,-0.00879782,-0.08038202,-0.0118584,0.00619177,0.03618661,-0.06451847,0.02643038,0.05831497,0.05345601,0.07429004,0.03215457,0.00334675,0.03863146,0.03505052,-0.06839034,-0.0470145,0.04486248,0.03998607,-0.00240905,-0.00406667,-0.07967822,-0.05342107,0.04532444,0.02917878,-0.05160536,-0.08984264,0.10503888,-0.15780298,-0.04502878,-0.11401892,0.02865432,-0.03113122,-0.06439251,-0.14879942,-0.0315746,-0.01773916,0.01811423,-0.022334,0.09902944,0.05649016,-0.0738175},
 {-0.02212524,-0.0606421,-0.07509267,0.13124174,-0.08800752,0.02928583,0.12779783,0.07666606,-0.10628438,0.03085598,-0.05790989,0.06618202,-0.09642855,-0.0249591,-0.03708643,-0.05898314,-0.02835633,-0.02499034,0.09053531,-0.10260663,0.05469289,-0.06902379,-0.0805283,0.01260774,-0.10902603,-0.01987825,-0.00958696,-0.02334076,0.05030915,0.068408,-0.02331463,-0.05371091,0.16059105,-0.00264538,-0.11534658,0.09554631,-0.02725437,-0.02447433,0.08604114,-0.05267516,-0.00444996,-0.10492708,0.06358757,-0.09001505,0.08698887,-0.04233876,-0.00731622,-0.01014983,-0.0326766,0.05053599,-0.07674132,-0.07161311,0.04815301,-0.09530778,-0.03649237,-0.15489264,-0.10015999,0.00222079,0.02110439,0.096576,-0.02303228,0.1571289,0.07630083,0.06967366,0.06340235,0.09187842,0.12096994,0.0799156,-0.08921959,-0.0086669,0.10260095,0.05696752,-0.03031012,-0.08752941,-0.09690145,-0.0305505,0.09297772,0.10582785,-0.01127865,-0.0815955,0.0906262,0.05177318,-0.03562697,0.11865863,-0.04595401,-0.14434709,-0.00359513,-0.00143221,-0.02504353,0.12290985,0.0481636,0.01786249},
 {-0.07537266,-0.03565536,0.02739004,-0.09429307,-0.01021515,0.01211736,0.09497452,0.12396675,0.03282029,-0.04199515,0.08900414,0.12378354,0.1193366,-0.09649273,0.11999805,0.09463172,0.06950977,0.09555588,0.03231163,0.04487185,0.11742529,0.00041752,0.07740809,0.10467542,0.03334318,0.01663659,-0.11345142,-0.09523142,-0.10468108,0.01071872,-0.06602171,0.01747763,-0.01078681,-0.0180415,-0.07630463,0.08474377,-0.05919822,0.02384572,-0.03239083,0.02850325,0.0581168,-0.0914252,-0.04140469,0.04144094,-0.04992171,-0.09194426,0.05653859,-0.11103127,-0.05410369,-0.02034926,-0.00566214,0.02915703,0.06233798,-0.05178767,0.12658215,-0.00113828,0.0517377,0.10820913,-0.1074615,0.05214155,-0.04034285,-0.0090135,0.1229504,-0.08136103,-0.03114235,0.04453045,-0.0951849,-0.05015009,0.06509956,0.00953112,-0.04133964,0.03835886,0.04187443,0.10702004,0.0607617,0.03141262,-0.13993552,-0.06734623,-0.1174809,-0.05228718,-0.14862397,0.13447675,-0.04541237,-0.07151394,0.06523406,0.10745699,0.09297922,-0.0811554,0.02944417,-0.03366601,0.00381245,-0.03317676},
 {-0.08736324,0.11515912,0.00645394,0.09924035,-0.09786823,0.0799281,0.02461073,0.09610287,0.06599614,0.04258362,-0.07244899,0.04801274,0.1540678,-0.01100456,0.13773035,0.10734969,0.01465057,-0.03022583,0.12545682,-0.09898431,0.07083256,-0.06718202,0.04674527,-0.08393396,0.05818203,-0.03740378,0.04744264,0.05778862,0.05491523,0.03318347,0.00829186,0.04441043,-0.00158877,-0.0963252,-0.11421061,-0.14822018,0.01672961,0.02057076,-0.10801168,-0.04844785,0.07755876,-0.06520972,0.07451475,-0.106767,0.00029767,0.02545496,0.04222543,-0.02678501,-0.10554991,-0.00746342,-0.04446388,-0.04309937,-0.05306562,-0.14224996,0.08298884,0.1270602,0.06631748,-0.0731587,-0.10274298,-0.00034504,0.11027944,-0.07573117,0.09159175,-0.06865446,0.02662747,0.02744755,-0.00331044,-0.0771843,-0.09269349,-0.10812367,-0.10458601,0.08845026,0.03213216,-0.03116377,0.09581999,0.09829195,-0.0328732,-0.03809465,-0.07199404,0.09865499,0.03963876,0.12999785,-0.09013754,0.10366689,0.02386735,0.1288342,0.11697131,-0.08359648,0.08595201,-0.02450506,0.0208919,0.00575588},
 {-0.06187374,-0.12719037,0.02077293,-0.07599891,0.07957429,0.04663226,-0.03957546,0.12295168,-0.01401351,0.0472859,0.05323377,0.12720165,0.07384462,-0.09471326,-0.0472233,-0.00945852,-0.0687025,-0.00313997,-0.07588853,0.03656745,-0.10205437,0.08176929,0.03378383,-0.11433899,-0.08544006,0.07106087,-0.1269024,-0.06627505,0.06182449,-0.02753272,0.0821971,0.07846209,-0.05430509,0.08708547,-0.09190395,-0.17355354,-0.0888665,0.04122442,-0.01473124,0.11236796,-0.10849766,0.08606291,0.09216756,0.05369322,-0.10532364,0.08041129,-0.12078074,0.0509077,-0.00896013,0.08212883,0.04871657,0.07583863,-0.09967786,-0.07515155,0.05740444,-0.0354354,-0.00417389,-0.01506154,-0.11495902,-0.00633352,0.08566672,-0.03707242,0.09520608,0.08622289,0.00350724,-0.08087208,0.10190292,-0.05138759,0.08307714,0.01683526,-0.08598775,-0.08612834,0.09361227,-0.11711422,-0.11643319,0.04015471,-0.02755043,0.06083491,0.0383955,0.0190241,0.06812709,-0.12610358,-0.08632535,-0.09064106,0.12188316,-0.09408543,0.11133329,-0.05003178,0.07472563,-0.0535434,0.06136538,0.03885293},
 {0.05297153,-0.02729534,0.12225512,-0.03163937,0.05678454,0.08250764,0.0033846,-0.06238601,0.05062804,-0.046187,0.00427641,0.02575643,0.11601835,0.13100138,0.00943306,-0.08597651,-0.04911975,0.14143614,0.0282869,-0.03301319,-0.04889886,0.06683785,0.1459663,-0.01860081,0.14213572,-0.00958422,0.07331672,0.00274605,-0.06781739,0.0747506,-0.06869373,0.09318927,0.09324311,-0.06279858,-0.1406309,-0.04138194,0.13341947,0.01031168,-0.07238136,0.07950994,0.05871801,-0.16079745,-0.09505711,-0.04846676,0.04559021,0.06081757,0.04873095,0.0617884,-0.01658683,-0.09545552,-0.06256664,-0.10107157,-0.09535642,-0.08312968,0.09508827,0.03746942,0.05627903,0.00491148,0.03550171,-0.04716669,-0.0586106,-0.10350458,-0.07353594,0.01337296,-0.02800182,0.07290854,0.12065408,0.04466968,0.06199561,-0.00423409,0.0632311,-0.08699533,-0.10081664,-0.01695986,-0.085267,0.0718421,-0.0454153,-0.01918291,0.00768278,0.06861298,-0.02187135,-0.08700188,0.0373982,0.10926607,0.09643459,-0.00773334,0.13608077,0.07352564,-0.13372365,0.08394465,0.12281344,-0.09550167},
 {-0.13142143,-0.07829774,0.02216456,0.01192299,0.03741303,0.00500281,0.09826217,-0.12130759,-0.05760312,-0.01822128,-0.12750912,-0.08366573,0.01452605,-0.07060242,0.02396723,-0.12450016,-0.09122154,-0.02523114,0.08298408,0.11239026,0.11765952,0.05568144,-0.11998843,0.04625564,-0.0131238,-0.11956794,0.01492248,0.00697542,0.07361811,-0.03690598,0.11408836,-0.03224801,-0.07663634,-0.11558149,-0.07625915,-0.04452716,-0.00105638,-0.04577933,-0.10801493,0.07740125,0.06542736,-0.11485455,-0.12457761,-0.0796149,-0.09291694,0.08405851,-0.00499902,-0.07030267,0.05522292,-0.07654231,0.03170487,-0.08816817,-0.02645164,0.05220846,-0.06066685,0.04259314,0.01021598,0.09114085,0.05756335,-0.05256014,-0.07144408,-0.00245694,0.04307284,0.04099115,0.11867111,0.09806397,-0.02338359,0.0940391,-0.05964205,0.08261732,-0.0850908,-0.06653624,0.02380906,-0.00830986,-0.07116039,0.1014734,-0.15631561,0.08641908,0.03066623,-0.04505993,0.02175984,0.04204819,0.0644415,0.05152144,-0.08482876,-0.10979321,0.00598074,-0.05045808,-0.11096111,0.00976115,0.14256343,0.09966849},
 {0.09916739,0.11278526,0.13993411,0.04755468,0.05517232,-0.06617306,0.06781492,0.06078079,0.12163918,0.06143584,0.04085618,-0.05447322,-0.07034834,-0.05560916,0.05147751,0.06029832,0.09731785,-0.08826301,0.0956111,0.05913926,-0.04032994,-0.05943901,0.02555626,-0.03412535,0.05821402,-0.07199371,0.13129319,-0.03056019,0.03723275,-0.01643505,-0.0274565,0.10012021,0.02590197,0.05829718,-0.08461946,0.0596217,0.00148381,0.07124946,-0.08766213,-0.06837066,0.06773879,-0.03653228,-0.04732774,0.04333974,-0.08918445,0.00394381,0.09519686,-0.15198877,0.04594775,-0.00871891,-0.01836667,0.02763953,-0.11433669,0.01637868,-0.00626966,-0.16635613,-0.04147673,0.01867508,0.15587918,0.09650053,0.00059907,0.07879053,0.16380858,0.10350878,0.03098127,0.00564875,0.1471658,-0.14339344,0.07572624,-0.05176464,-0.02215904,-0.06908924,-0.09018563,-0.13504876,0.01045437,0.12601434,-0.10199545,-0.10011832,0.0486732,0.12984836,-0.01241109,0.10265394,0.06239881,-0.04486211,-0.06529198,-0.07136732,0.00989208,0.02641155,0.07284237,0.01580428,-0.04986599,-0.04450816},
 {-0.04268624,-0.11893933,0.02913232,-0.10707545,-0.01788682,-0.04535242,-0.08079311,-0.13157162,-0.09146582,0.01054941,-0.11179049,0.08337604,0.06653873,0.06281976,0.04523284,0.09521607,0.04358539,0.06713487,0.00311737,-0.0549828,-0.00194968,-0.08653636,0.05959226,0.03579231,-0.10366205,-0.0733242,0.08822767,-0.09413401,0.0598717,0.07343332,-0.01854445,0.06803441,-0.08776034,-0.06759518,0.01886222,0.00412136,-0.0862518,0.11330699,0.10351685,-0.09653468,0.09060085,-0.01430062,0.0459893,0.0813796,-0.00332782,0.08975481,-0.09737469,-0.02993667,0.01321159,-0.0997697,-0.04772797,0.02858389,0.05819784,-0.01020284,-0.08908226,0.00223907,-0.06455,0.03964339,-0.06172422,-0.10942893,-0.11110315,0.15008928,0.13859205,-0.09948522,-0.09604193,0.03183345,-0.02436618,0.07306912,-0.05846751,-0.13346551,0.00188389,0.03530052,-0.12410359,-0.01290462,-0.01069358,-0.07996158,-0.12226323,0.07019366,-0.14543468,0.03151501,0.10086863,-0.03763087,-0.11158641,0.11703398,-0.03987922,0.01952686,0.0329317,-0.02383021,-0.10357668,-0.10976899,0.129827,-0.05961642},
 {0.0716446,-0.08526439,-0.03090766,0.03214483,0.15747927,0.05872675,-0.044234,-0.01064586,-0.01757293,0.14594509,0.00118483,0.0404377,-0.06070472,0.00832613,-0.08168709,0.14923449,0.11855418,0.12913495,0.00547953,0.14749955,0.03865224,-0.07983144,-0.0087783,0.02362347,0.10916506,-0.06255462,-0.06022577,0.05413589,0.06737724,0.06013179,0.02924053,-0.06645767,0.03960783,0.129476,0.11226244,-0.08925031,0.06693938,0.00511823,-0.02980032,-0.14929828,0.13625942,-0.11964914,0.01218096,-0.01746883,-0.15213783,-0.00957981,-0.05152048,0.00426397,-0.04608615,0.02711163,0.07442128,-0.0748164,-0.14494324,-0.12334324,0.07691194,-0.00169922,-0.13642408,0.09865047,0.02377506,0.06428232,-0.13292392,0.05606821,0.06773397,-0.09638635,0.15914477,-0.02866651,-0.0129837,0.04905928,-0.08058479,-0.06865869,0.03618719,0.11469781,-0.05678343,-0.09406351,-0.05047757,-0.0755228,-0.11564685,0.03086192,0.11272628,-0.08732913,-0.13230976,0.04727964,-0.15033141,-0.08781286,-0.00391323,0.02301844,0.0370147,-0.00529848,-0.03609338,0.01176523,0.00110309,-0.09565321},
 {0.07558668,0.08824141,0.11838828,0.11635776,0.06797792,-0.06588479,-0.05871426,0.10131751,-0.12234647,0.03599105,-0.14131886,0.04879766,0.07620992,-0.1278051,0.01666069,-0.12388378,-0.10854676,-0.0452588,0.08161943,0.12393339,0.10189287,-0.02358664,0.10218402,-0.04891878,-0.04733079,-0.05079096,0.14737938,-0.02942683,0.07167774,0.15829171,-0.02619358,-0.12153108,0.13231674,-0.10295633,0.07141061,0.11216387,-0.00943084,-0.05267221,0.01086497,-0.05949363,-0.02057854,-0.11215656,0.05898359,-0.02669239,-0.01943832,0.0940519,-0.0487573,0.06174017,-0.1342018,-0.05279514,0.0646485,0.13739882,-0.1334929,0.02577781,0.06789304,-0.10296421,-0.0834888,0.06661423,0.05816577,-0.08569841,-0.11954714,0.06179369,-0.06283794,-0.04144849,-0.00753257,-0.01132811,0.16099802,0.09717288,0.08173504,0.02281826,0.02854136,-0.01728407,0.08433712,0.05732398,-0.14262724,-0.01257433,-0.03361438,0.01952667,-0.12075048,0.0340012,0.10013726,0.09175785,-0.02591692,0.08420287,-0.12503359,0.03421599,0.0397261,-0.04128937,-0.09764083,0.13242191,-0.03934659,0.04621807},
 {0.05514744,0.11602855,0.0644062,0.11703832,-0.03221607,0.06458239,0.14017323,0.089903,0.00869159,0.06077783,-0.10077544,-0.06662019,-0.06080803,-0.00349895,-0.07542346,0.04083758,0.00399328,0.01353029,0.09097262,0.0374962,0.04492638,-0.07856847,0.11036246,0.09732207,-0.08095962,0.06563658,-0.0898461,0.09290079,-0.09459049,-0.10076484,-0.11304054,0.05944045,-0.06619557,-0.00289505,-0.03441944,0.00435692,0.08729451,-0.09206844,0.03260109,-0.12304904,0.14779794,0.03404384,0.10757387,0.06722784,0.02841269,0.06139286,-0.058025,-0.12538949,-0.00373899,0.04394569,0.03850406,0.12523009,-0.08473628,0.05868292,0.00716711,-0.13894837,-0.13352613,0.12937585,0.05320741,0.10052492,0.08365559,-0.07314445,0.02258086,0.13097733,-0.02898538,-0.06039617,-0.06508515,0.00493033,-0.10687281,-0.1483463,0.0947642,-0.02992847,-0.03532524,-0.00325303,-0.06304158,-0.07266963,0.05688122,0.08754118,0.05099269,0.07422974,-0.11437,0.02684698,-0.09451241,-0.06658195,0.03931243,0.03880314,-0.00066706,-0.05368264,-0.11137369,0.1202232,-0.02185164,-0.00987255},
 {-0.11624185,-0.03692416,0.03481159,-0.1278963,0.07546668,-0.04848726,-0.0528238,-0.10763504,-0.02688946,0.04269209,-0.00760967,0.06833932,-0.05616743,-0.09929221,0.11080023,-0.03165068,-0.01702129,0.15828009,0.04907538,0.04525894,0.02056864,0.14304312,0.01155849,0.04170931,0.05727547,0.0533178,-0.00112499,0.11680486,-0.13504376,0.04849204,0.02246444,0.17168197,0.07297597,-0.03646103,0.03159652,-0.13496351,0.08700423,0.06133867,0.07654063,0.02175056,0.02631167,0.07835312,-0.04205723,0.12097344,-0.02212286,-0.05050419,-0.09203122,0.0804445,-0.15833774,0.02302068,0.10336788,0.00503843,-0.05826411,0.00928873,0.01908149,-0.03272069,0.04989232,-0.04918808,-0.07940982,0.10811734,0.06745554,-0.03801896,-0.05741384,0.14038944,-0.01648074,-0.02123689,-0.06599176,-0.13160217,0.01566905,-0.10792087,0.04988492,0.11805468,-0.11198152,0.02113337,-0.01720392,-0.062783,-0.1416345,0.04748425,-0.12011585,0.13628782,0.02237196,0.11667708,-0.15545714,0.16148785,-0.07757998,-0.09738121,-0.05415298,0.00500111,0.04783468,0.1577501,0.15458935,-0.04546342},
 {-0.03342622,0.16005012,-0.03400407,-0.00825487,-0.0096971,0.04158701,0.00466252,0.06454264,0.03332048,0.00982476,0.00331722,0.17679809,-0.04508879,-0.01026267,0.1561243,0.0817953,0.0576975,0.16776031,0.09891797,0.15684448,0.16178249,-0.06125998,0.13654613,-0.03541334,0.15190622,-0.03115631,0.13728023,0.04215303,-0.03528061,-0.10328493,0.07588199,-0.04675064,0.13705024,-0.01270334,0.11191082,0.01792924,-0.06868687,0.15289155,-0.08899906,-0.01188653,-0.07421918,-0.13474113,0.08625429,-0.05266574,-0.09302588,-0.00082718,-0.11628056,-0.09043723,-0.04601902,0.01411849,-0.07779045,-0.06516004,-0.00513342,-0.05124428,-0.06472951,-0.00474373,-0.04992168,0.06799123,0.142824,0.0140709,-0.08147942,0.04988998,0.03791612,0.06391862,-0.07826472,-0.06922544,0.00770599,0.08153553,-0.05581079,-0.01531359,0.0217454,0.11490561,0.02262287,0.06607702,-0.11423165,-0.07754543,-0.07908989,-0.11165823,0.07338542,0.12787719,-0.00966008,-0.08757881,-0.04553151,-0.00832111,0.09486498,0.08016704,0.07569192,-0.01359696,-0.03730299,0.1533641,0.05587133,0.04042466},
 {0.03850071,-0.08591457,-0.03318845,-0.05653189,0.10590786,-0.04265003,0.01122557,-0.0835432,0.05888756,0.02261762,0.03351548,-0.10170034,-0.09974524,-0.0310987,0.07054815,-0.10071633,0.12555318,0.05350942,0.01593617,0.11492023,0.07183702,-0.08765484,-0.11045,0.00598199,0.12055582,-0.03728101,0.0043692,0.07808658,0.03541971,-0.11651338,0.03866929,-0.05390505,0.10648575,0.08871344,-0.06566776,0.0107639,0.01702056,0.01648219,-0.11614639,0.02001814,-0.03105015,-0.01185983,-0.06161169,0.14941894,0.07493143,0.0104642,0.16082583,0.01645377,-0.04373326,-0.11351597,0.0896164,0.09578389,0.06692679,-0.10683399,0.12024657,-0.05731999,0.03909188,-0.00186158,0.01110732,0.09254999,-0.13013282,0.02650872,-0.00067654,0.08426033,-0.01941499,0.13330363,0.04116162,-0.0908023,0.1360045,-0.14194709,0.1231569,0.09211129,0.00923562,-0.1478513,-0.07812693,0.07633594,-0.09429784,-0.05754004,0.10205725,0.08989631,-0.09490971,-0.09456728,0.0476978,0.10105875,-0.09000395,-0.11219308,0.01240808,-0.0842554,-0.10925636,-0.01601833,0.06283521,-0.05704758},
 {0.1099485,0.05338383,0.15414846,-0.0342144,0.11111179,-0.00824077,0.05902492,0.1088429,-0.03730023,-0.0778627,0.14996076,0.15317555,0.02769811,0.14216654,-0.02961445,0.09995462,0.00509817,0.13685855,0.13971038,-0.08714812,0.11713237,-0.08144687,-0.05011187,0.10883547,0.1161522,0.03901092,-0.08948959,-0.04786892,-0.1577634,0.09677034,-0.04026966,0.01922818,0.14570937,0.08199413,-0.05720798,-0.04666388,0.0607072,0.06797439,-0.13406652,0.06879213,0.16445783,-0.0285302,-0.01422342,0.10791304,0.07829186,-0.00060936,0.12469879,-0.13212492,-0.07820486,0.05671956,-0.08416904,0.03164433,0.05513877,0.01681565,-0.0550503,0.06846631,-0.04446666,0.03776221,0.05983082,0.08598828,-0.04422201,-0.04988591,0.06435388,0.05426982,-0.01225939,-0.05949098,0.00485649,0.03964739,0.12937424,0.05597631,-0.0252655,0.05125999,-0.10651596,-0.05390066,-0.03901627,0.1512075,-0.04499809,-0.03787959,0.06619404,0.0263425,-0.00163735,0.03904782,-0.10577542,0.13176718,-0.0835378,-0.04592175,0.0681844,-0.15670674,-0.14203554,-0.08328234,-0.02488885,0.05369475},
 {-0.04121084,0.10170101,0.1126688,0.09182257,-0.01691602,0.08073211,-0.02406753,0.04841102,0.12319586,0.04943537,-2.294e-05,0.08077984,0.12207733,0.02083127,0.08967908,0.05082528,0.08716545,-0.00445544,-0.06636586,-0.05269671,-0.03929257,0.10033894,0.00121646,0.06674487,0.06569026,-0.02124511,0.08580849,0.02861504,0.05710173,0.04240328,0.09874997,-0.00581012,-0.06490132,0.06593786,0.0600614,0.05355499,-0.03152566,-0.08929118,-0.02231705,-0.0205905,-0.10259555,0.00896644,0.03837482,-0.00680423,0.01608071,-0.057421,0.08092867,0.04545175,0.04877992,0.08072278,0.00557801,-0.0488927,0.0786231,0.02590874,0.07527553,0.05372382,0.04511486,-0.06356724,0.14194351,0.1071463,-0.01473961,-0.09621799,0.00164811,-0.0056215,0.00288571,0.0735271,-0.04060979,-0.0907193,-0.0275583,0.07495539,0.12381878,0.11743613,-0.14388077,-0.07784117,-0.02849773,-0.08765907,-0.0887422,0.02693255,0.07038964,-0.08138851,-0.00446938,0.01875356,-0.11213552,-0.11517736,-0.10351954,0.01122158,-0.10080662,-0.09584053,-0.02279501,-0.01620609,-0.02967903,-0.06197402},
 {-0.03528786,-0.01286816,-0.05360482,-0.06594559,0.10427091,-0.05134839,-0.0990224,0.08379786,0.05327466,-0.0381602,0.00558641,0.13938811,0.01349545,0.07431661,0.11049148,0.04753765,0.12383237,-0.04297152,0.08323389,0.12768182,0.0791911,0.13428132,-0.01468442,-0.09141661,0.11385682,0.05601466,0.13231716,-0.08444735,-0.11992272,0.04418335,-0.08793268,0.01992415,0.03067855,-0.03651718,0.02048611,-0.07440412,0.04616502,-0.07693274,0.03729916,-0.0236244,0.01612956,0.03829338,-0.08810168,0.12705773,0.07944696,-0.1372673,0.14097667,-0.03487725,-0.01159061,0.00648747,0.05292962,0.08885735,-0.09980159,0.0044104,0.11065643,0.07785431,-0.11422855,0.16872051,0.15318747,0.10395548,-0.05527526,0.11296912,-0.0036006,0.10389896,-0.01456132,0.07872418,0.02815072,-0.06914975,-0.09567209,0.04700656,-0.05252274,0.04482961,0.00979954,0.07772952,0.02897526,-0.07207463,0.07464878,0.0609096,-0.07364079,-0.07605327,0.07896067,0.01802355,-0.05136546,0.08370133,-0.11350769,0.01082555,0.1498561,0.01525052,-0.00820066,0.00960289,0.00871071,0.05659021},
 {-0.05459075,0.00734058,0.01948061,0.08022628,0.03764111,0.11305804,0.08715236,0.03341967,0.06901909,0.11146709,-0.07902491,-0.03658095,0.08469748,-0.00841538,0.12081365,-0.07515688,0.11793189,0.03245112,-0.06187398,-0.06750251,-0.05976482,-0.05244441,-0.08503598,-0.08328136,0.02206124,-0.02503845,0.12902053,0.10463437,-0.00744992,0.03664016,-0.06401794,0.1377862,-0.04944338,-0.08727722,0.11279361,0.07484891,-0.08789106,0.124032,0.09010201,0.01834564,0.06005247,0.08418564,0.12304359,0.00325732,-0.02489259,0.07891849,0.08951019,-0.00064314,-0.00486034,0.07460751,-0.09539234,-0.13027592,0.08750462,-0.09440197,0.07553919,-0.01517547,-0.00876657,-0.06365876,0.14682218,0.12752475,-0.10813387,-0.02584997,-0.04735454,-0.00221265,0.05283283,0.05084816,0.01730297,-0.07267738,0.07371845,-0.10074227,0.06573766,0.01788872,0.07361916,-0.14963053,0.08503617,0.09461145,0.04555089,-0.13097423,0.02764531,0.09147706,-0.0170527,0.01534184,0.06146515,-0.04107232,-0.15264657,-0.09030982,0.14210396,-0.04099188,-0.14723916,-0.05414056,0.08405361,0.09118511},
 {-0.02903189,-0.02382082,0.03081111,0.12560567,0.06161308,-0.02205629,0.13162093,0.07194428,0.04004084,0.04697901,-0.03655955,-0.07229405,-0.05567547,0.09115198,0.16090155,0.07720372,0.13840032,0.0282476,0.09473851,0.05138937,0.11445579,-0.07856666,0.15315814,-0.02179792,-0.0277382,0.02289089,-0.0631858,-0.01931194,0.00645365,-0.1130442,0.06422833,0.08203875,0.08882905,-0.07853491,0.06657468,-0.0274333,0.14334784,0.0912822,0.04671139,-0.03999542,-0.06035967,-0.040402,0.03140701,-0.01423798,-0.07372258,0.03140811,-0.07523044,-0.07411311,-0.14352986,-0.11990944,-0.12494627,-0.10932019,-0.02264099,-0.15912676,0.05453975,0.09570239,-0.14073794,0.11984998,-0.02686806,0.05707609,0.06863415,0.11519443,0.07954359,0.03508838,-0.01441869,0.08017948,0.06018566,-0.11028054,0.06428643,0.05964884,0.07901887,0.15109809,-0.11870008,-0.05989561,-0.03652199,0.12389266,0.02981743,-0.13111773,0.0611105,0.00120118,0.03128698,-0.05401601,-0.02213628,0.05780789,0.00126963,-0.02529724,-0.00010204,-0.13297202,-0.14404422,-0.04661832,-0.07661501,-0.11979667},
 {0.00918312,-0.01172292,0.146566,-0.05817688,0.08196262,0.06211247,0.01901561,-0.02931337,0.05651796,-0.03417794,0.11074245,0.0080731,-0.08513171,0.10627988,0.01393298,0.08174022,0.10295096,0.01181792,0.10654216,0.10754117,-0.06960069,0.12327144,0.03221112,-0.02968801,0.103255,-0.08798435,0.04785112,0.07033095,-0.06687097,-0.01834826,-0.0355221,0.14095406,-0.03556389,-0.03057293,0.05504064,0.03809437,-0.01772005,0.04690602,-0.07501677,0.04485217,0.133014,0.05433581,0.06814143,0.05533174,0.06602305,-0.10310598,-0.0005869,0.06996091,-0.09168833,-0.06088018,0.00673687,0.00645926,0.00855199,-0.04488217,0.00817756,0.03513223,-0.02598267,-0.04295025,-0.07107347,0.12379489,0.0664985,-0.05005496,0.05940499,-0.0848367,-0.08884078,0.04838799,0.07344365,0.066232,0.13086176,-0.08059719,0.0127354,0.01828757,-0.03292047,-0.12797242,-0.11838004,0.13785812,-0.0663979,0.01028544,0.01130908,0.13271402,-0.03962996,-0.0158486,-0.05836549,0.08758554,-0.12570503,-0.09178335,-0.10081099,-0.00091349,0.0106866,0.0397172,-0.02387085,0.08259893},
 {0.06109269,0.0315992,-0.06433462,0.0072176,0.09800852,0.09781467,0.05932138,-0.12162587,0.07239972,-0.1072936,-0.14676553,0.09260705,-0.04402938,0.0292275,-0.11153628,0.06462362,-0.05204017,0.07157015,-0.04811817,0.09657173,0.0875771,-0.04921687,-0.00444133,-0.0974934,-0.09865,-0.00250411,-0.08115006,-0.1083993,-0.07987268,-0.08731727,0.11466547,-0.03992934,-0.05734476,-0.02589338,0.10046066,-0.03786586,-0.05039844,0.07664089,0.13739595,0.1326915,-0.0148882,-0.02718414,0.09487669,-0.058053,-0.09570275,0.00241447,0.0575644,-0.05287904,-0.02021562,0.01356729,0.11966358,0.0606499,0.1393049,0.16462049,0.05333314,0.09319904,0.01049773,-0.10814562,0.05622693,-0.08770532,-0.10655639,-0.0711268,0.09680337,-0.01589397,-0.04421212,0.03276138,-0.10287083,-0.00425554,-0.06419528,-0.02524256,0.03361917,0.04906195,-0.02731184,0.06647554,-0.09241384,-0.08411623,0.05125319,0.08049353,-0.02140391,0.09479244,0.05049384,-0.05578385,0.09718884,0.09616823,-0.00912974,0.04882172,0.01200463,-0.00477438,0.08157378,-0.06711517,0.06291229,0.07658952},
 {0.08454758,0.00884668,-0.01186745,-0.01588025,0.07477889,0.06006724,-0.06752952,0.05337247,-0.07834119,-0.14348558,0.0143491,-0.12722823,-0.0635483,-0.06052994,0.03050137,-0.0899064,-0.07277727,-0.10369677,0.03077319,0.08048154,0.07241702,0.01327714,0.02437592,0.0726988,0.07269747,0.0822653,-0.01386765,-0.02703662,0.08439059,-0.0042737,0.09619498,-0.11230494,0.09816902,-0.00244182,0.02019551,-0.00401329,-0.02217031,0.03470172,-0.11050673,0.00428696,-0.11289571,-0.05709483,0.05353164,-0.07126861,-0.06816847,-0.06987006,0.03873181,-0.08233402,0.00289333,-0.00582349,-0.02594405,-0.09128057,-0.08308724,-0.07262902,-0.01240777,0.09121983,-0.10365215,0.00294719,0.04259979,-0.12270968,-0.03820962,0.07258124,0.00429206,0.10674356,0.0217412,-0.00666952,-0.01647638,-0.00812415,-0.0074972,0.105937,0.05470393,-0.11057004,-0.08748153,-0.0870373,0.02106038,-0.12136222,-0.06700848,-0.05922681,-0.10345667,-0.0867907,-0.06600241,-0.04759327,-0.00124368,0.03369587,0.06155457,-0.12717272,-0.06983204,0.06452166,0.00494739,0.03289869,0.07671613,0.09415234},
 {0.06436808,0.05393199,0.13802898,0.01804583,0.13144206,0.02038609,-0.04543577,-0.0576511,-0.00564162,-0.07341198,-0.04564136,0.09221683,0.00580238,0.04516609,-0.09496439,-0.00257398,0.10930141,0.02044686,-0.00636302,0.14694665,0.02104234,-0.04354117,-0.0620091,0.04767208,-0.01329704,-0.05578347,0.05667349,0.02426202,-0.04638156,-0.03925125,0.05946359,0.06449113,0.11958279,-0.13818394,-0.16018972,0.02869293,0.15918066,-0.02349606,-0.03773015,0.01827897,0.1461496,-0.0734297,0.05950871,0.03835265,-0.10536031,-0.08001214,-0.01313484,-0.03209294,0.01496651,-0.11987652,-0.09156713,0.1008612,0.07944784,-0.0928435,0.11966316,0.0079303,0.05032365,0.01982231,0.0681513,0.10705296,0.01923016,0.08148067,0.11112254,0.04195478,-0.06730342,0.14870927,0.09197973,-0.08052567,0.12634711,-0.02291734,0.11699862,0.01528387,-0.116389,-0.00520265,0.06931421,-0.0539809,0.05812816,0.10444251,0.08936973,-0.09505337,-0.10674524,0.02651652,-0.0815329,0.06511352,-0.04908868,-0.11445042,0.03684041,-0.08857676,-0.13412708,-0.03390928,-0.05182097,-0.14047506},
 {-0.09162331,0.03471126,-0.09194079,0.0037623,0.03594495,-0.08042809,-0.09354966,0.08450764,0.10811553,0.06292308,0.0934391,0.05213041,0.11872602,-0.08935081,-0.07499034,0.01089184,0.03614243,0.08153408,-0.07659331,0.11866277,0.04352211,0.03899968,-0.0395727,-0.14560749,0.01331402,-0.12229226,0.06838766,-0.07237011,-0.05094641,-0.11756273,-0.07703016,-0.08549286,-0.00121201,0.08391549,-0.06306046,-0.17118303,-0.13900557,-0.0419917,0.06488797,0.08275368,-0.07086567,0.07520936,0.04053995,-0.07735967,0.01792795,0.05491038,-0.12132232,0.02405514,0.07010286,-0.05211441,0.18348876,0.02023763,0.04857257,-0.00836792,-0.03518727,0.10901019,-0.06574793,-0.04628815,0.03342213,-0.03754371,0.10279264,0.11432906,-0.0441485,-0.02578292,-0.13384435,-0.16512291,0.11606979,-0.06310924,0.0121147,-0.06568832,0.0073622,-0.01690161,0.07860982,0.00469833,0.11962498,-0.05047961,-0.017274,0.03089285,0.04366795,-0.0873719,0.16890343,-0.03754983,0.06866612,0.07958674,0.12893368,0.09780364,0.08863524,-0.01327114,-0.03657674,-0.03253355,0.07490833,0.10595628},
 {0.0096065,-0.02940295,0.03529329,0.06515531,0.14445378,0.04603289,-0.05821023,0.1185623,0.09675921,-0.00050623,0.09788504,0.13395628,-0.05241342,0.02156742,-0.01043612,0.1532197,-0.03072421,0.06363931,0.13776131,0.09588446,0.10998709,0.11741982,0.02245998,0.06059545,0.1886227,0.07842676,0.04803595,0.11710808,-0.16263157,-0.02849429,-0.166863,0.17089932,0.11873209,-0.0242168,-0.05859206,-0.05454525,0.1575197,0.07869384,-0.1029866,-0.08323991,0.03587908,-0.06660093,0.1671189,0.1760346,0.03855482,-0.06782879,0.06857983,0.0510603,-0.14912239,-0.05560038,-0.15864585,-0.08178079,0.00086237,0.00304283,0.03820628,-0.00306197,-0.11118774,0.10477498,0.13921557,0.07233165,-0.01550918,-0.01654677,0.04174858,0.07838926,0.0217346,-0.07917159,-0.06685589,-0.03085658,0.02410559,-0.0295573,-0.06254296,-0.03401358,-0.0477068,-0.152059,-0.08339604,-0.06722501,0.05587885,0.08410326,0.10249481,-0.01116335,-0.1580628,-0.05723291,0.04767178,0.01901245,-0.15564436,-0.09103412,-0.01752156,0.07698876,-0.15463243,0.13939254,-0.09795795,-0.02034252},
 {0.03005497,0.1075036,-0.08439626,-0.07480951,-0.01225548,0.11164375,-0.06265073,-0.01680705,-0.05070946,0.08877228,-0.00720016,-0.01552598,0.0552413,0.07309313,-0.04959562,-0.01235244,-0.06583728,0.03841402,0.12178842,0.08835578,0.01353411,0.04874139,-0.08786406,0.05908974,0.07255833,-0.10876677,-0.05783528,0.09736504,0.04943087,-0.10003822,-0.12368904,0.00020097,0.03333005,0.02264952,0.03493534,0.03798537,0.01010956,0.10129207,0.00407521,0.09316152,-0.06250267,-0.05764167,0.01845773,0.06010976,-0.10550906,-0.09349129,0.08483872,-0.11939926,-0.07244914,-0.05030336,-0.13904136,-0.08697893,-0.06430887,0.0553392,-0.0223273,0.06338397,-0.01544302,-0.02744338,-0.08332486,-0.01972466,-0.06953363,0.04462372,0.14387386,-0.06837226,-0.07052789,0.11028572,-0.06910267,-0.1009952,0.05011484,0.00916794,0.01130641,-0.0514609,-0.12196315,0.06003961,-0.06920259,-0.05323006,-0.12924466,-0.06597773,0.02198,-0.0588739,-0.0620427,-0.10412293,0.11117259,0.04004933,-0.02308056,-0.13160795,-0.02390817,-0.0512393,0.06103221,-0.04294813,0.09568276,0.01814671},
 {0.13636437,0.01677653,0.04476615,0.13371465,-0.06347133,0.00180441,0.12117333,0.07218196,-0.01121018,-0.02767912,0.05064863,-0.01722632,-0.08778045,-0.1004627,0.13913265,-0.03911459,-0.09275353,-0.00460009,-0.01523376,0.01469566,0.12474996,0.11426996,0.15470563,0.1037279,0.0823707,0.1540094,-0.04644867,-0.06555586,-0.10430405,0.02317977,-0.09540172,0.09618139,0.02897457,0.02746,-0.02090961,0.08859106,-0.02229583,-0.03728514,-0.10501554,-0.03455041,-0.01796687,0.0123729,-0.051294,0.13442549,0.0020007,0.0475574,-0.06460724,0.06039379,0.01109863,0.07967801,0.03130726,-0.09596165,0.02154294,0.04056076,0.08277215,-0.09181106,-0.02653678,0.08532454,0.03953301,0.09733577,-0.0685107,0.07302822,0.08124763,-0.05295116,0.06500143,0.12700838,-0.00445181,-0.02726858,-0.01902594,-0.06737485,0.09890268,-0.02770426,0.00194578,0.10153642,-0.08695979,-0.01755067,-0.14575431,0.00999013,-0.01179162,0.13571677,-0.16115612,-0.01239238,0.09806301,0.07797984,-0.0741175,-0.06415886,0.10169426,-0.01162978,-0.11402594,0.03821984,0.09941,0.06839098},
 {-0.0548934,0.08948714,-0.10890529,0.11152986,0.07909196,0.12538868,-0.06674151,-0.07421915,0.13919358,0.13151263,-0.091075,-0.05085361,0.00464487,0.08260186,0.12001093,-0.02510296,0.14201334,-0.01983504,-0.06204645,-0.03578861,0.13791126,0.00969707,0.06408621,0.03629298,0.03010413,-0.05350822,0.04195965,0.10768048,-0.00868285,-0.07599035,-0.02984843,0.0984703,0.01779494,0.03914768,0.0745208,-0.06007631,0.03218583,0.11955421,-0.05574116,-0.07677511,-0.00853471,-0.00084973,0.05023563,-0.07792777,-0.03444593,-0.14847553,-0.07142107,-0.05772107,-0.00509359,0.0472687,0.02023675,0.09225382,-0.01323787,-0.11793364,-0.05376687,-0.12011148,-0.10893769,0.16702464,-0.07849777,0.06027097,-0.06260484,0.09188163,0.12427589,-0.01498672,-0.04776383,0.08809926,-0.01053284,-0.10337792,0.10855091,-0.04799587,0.06850524,0.06004815,-0.03324484,-0.11836721,-0.07655523,-0.0380196,0.06556287,0.10340782,-0.00987755,0.09533432,0.01023985,0.0261569,-0.04397288,-0.07600866,-0.00131679,-0.08879859,-0.05365934,-0.0416764,-0.06373303,-0.05883021,-0.01223964,0.01827268},
 {0.04309921,-0.01401036,0.00525506,0.07773925,-0.08032544,-0.06819292,0.01885578,0.01707751,0.02201613,-0.0001532,0.07170483,0.05376302,-0.05574964,0.02533472,0.01485334,-0.07632916,-0.00500394,0.11982786,-0.00026079,0.1359997,0.07094391,0.05327915,0.12643437,-0.04068487,-0.01991991,0.04678307,-0.01560558,-0.03356267,-0.12373371,-0.1318215,0.02912485,-0.02695316,-0.08025534,-0.05570957,-0.12375545,0.00524291,-0.04870314,0.13811627,-0.04968354,0.01322487,0.13424134,-0.13436684,0.08840633,-0.06308632,-0.1048229,-0.15730032,-0.00609218,-0.10506716,-0.12157741,0.03114773,-0.0668255,-0.09840022,0.02004585,-0.156523,0.13328964,-0.03681046,-0.1512654,-0.07860518,0.06547375,-0.05547924,-0.06227141,0.06844422,0.08485335,0.00272176,0.07518811,-0.05201429,0.06317862,-0.02965001,0.08814378,0.08627669,-0.04921797,-0.01064225,0.04816898,0.01863268,0.04869387,-0.07410013,-0.1630979,0.10978619,-0.01391107,0.14150192,-0.10248198,0.02581138,0.04095785,0.12894668,0.06770311,-0.11035132,0.15074635,0.05987459,-0.1509575,0.00032489,0.074202,-0.08543859},
 {0.07120996,-0.07491031,0.0021071,-0.13249214,0.05080041,0.10102616,-0.08347817,0.08317165,0.06450681,-0.11372872,-0.06063519,0.08657239,0.09469261,-0.01058003,-0.11966544,0.03460372,-0.00373477,-0.00286067,-0.07380943,0.06471598,-0.00796604,0.1158625,0.10039413,-0.00966074,-0.02257521,-0.08725855,0.0679956,0.04255922,0.09841122,0.01258878,-0.02953603,0.03579388,0.1249987,0.02950293,0.09070124,-0.07468089,-0.09163483,-0.08370242,0.06542359,0.01700919,-0.115727,0.0182987,0.04499131,-0.0257305,-0.05147053,0.00148188,0.10761311,0.12055351,0.01970156,-0.05225527,0.11615553,0.04283113,0.10879662,0.13358055,-0.12581691,0.0385849,0.06949046,-0.01632877,0.06983753,0.10714142,0.09106595,0.097172,0.03920346,-0.04891722,-0.12030768,-0.06654675,-0.0542264,-0.03448649,-0.0777768,-0.03718324,0.11155884,0.10168705,-0.08163133,0.10884994,-0.11049853,0.00984509,-0.12185927,0.05328323,-0.04793302,-0.11496133,0.12234996,-0.00253614,-0.06827864,0.07584019,-0.10874677,-0.14433257,-0.04225017,-0.09448718,-0.00359589,-0.12603702,0.14336659,0.01105527},
 {0.02111527,-0.04997604,-0.06720207,-0.03350221,-0.03236895,-0.04962767,-0.03478919,0.05798683,0.11709385,-0.01196394,0.08372683,0.1283282,-0.04829662,-0.05359247,0.07283249,0.09550024,0.12114603,-0.0111821,-0.01821123,0.10573425,0.02451305,-0.05268219,0.02741867,0.12387393,-0.03446327,0.13195686,0.02838294,-0.02604794,-0.13225946,-0.06388552,0.08064291,0.11198761,-0.01186617,0.04911345,-0.09653593,0.04682432,-0.00909782,-0.04571806,0.06661727,-0.00667665,-0.00455471,-0.09700051,0.00515036,0.11547181,-0.02553994,0.07626542,0.04843658,-0.07167897,-0.12189891,0.0743674,-0.10242419,0.01026686,-0.04108984,-0.12925439,0.06153507,-0.08991727,0.0426691,-0.06412461,0.13640238,0.04524613,0.07715452,0.1109774,-0.06908159,-0.05595173,-0.07679722,0.06314126,0.00692559,0.04842599,0.00484348,0.00272877,0.04272613,0.0992812,-0.06938688,0.05829285,-0.06261479,0.06954736,-0.11250492,-0.07426409,-0.06649273,-0.00815047,-0.00592637,-0.04583295,0.06825603,0.1271982,0.00513068,-0.00082987,0.13514397,0.09072996,-0.07862452,0.03873999,-0.09012663,-0.02141645},
 {0.01006908,0.11149266,0.02937456,-0.08251695,0.02075363,-0.10702191,0.04939314,0.1164884,-0.00031377,0.0641709,0.01558607,0.13541901,0.10899357,0.12300871,-0.07142298,-0.00129738,0.06215182,-0.11166267,0.02010053,-0.07862454,0.13108617,0.03012936,0.13675752,-0.00740401,-0.07963768,0.0803512,-0.02988199,0.05814787,-0.1335135,0.1262821,0.05825232,0.10576545,-0.06140888,0.01845055,0.0629455,-0.05916541,0.10806195,0.00773867,-0.08217834,0.00411094,0.07844704,0.03254556,0.08631925,-0.03863851,-0.01449916,-0.11770228,0.07811783,-0.03386316,-0.05730442,-0.11207882,-0.01388277,0.17717606,-0.16288517,0.01113039,-0.07560655,-0.00357732,0.02903225,0.09558007,0.04590672,0.05662367,0.08365935,0.03141697,-0.03352486,0.01447263,-0.08145882,-0.06196393,0.13621232,-0.08706744,-0.00789337,-0.02085271,-0.04702233,0.15302221,0.02502497,0.04322691,-0.07310713,0.01771568,-0.02922614,0.06678157,-0.12906326,-0.08572657,-0.02345738,0.02019311,0.04303023,0.1319042,-0.07559238,0.06164765,0.03466273,-0.00507885,0.03739003,0.1272812,0.11142571,-0.08275535},
 {0.00373268,-0.07987208,-0.00886606,-0.0742684,-0.02025325,0.11866692,-0.09791189,-0.08039986,-0.05201819,-0.07917283,0.00130944,-0.05501977,0.09153321,-0.08775836,-0.06624755,0.03449829,0.06149294,-0.00391238,-0.04832741,0.09277834,0.09641001,-0.09662862,-0.0118383,-0.04245403,0.02937507,0.10652407,0.00751503,-0.05117887,-0.07498218,0.08777733,0.06200204,-0.08841515,0.00705588,0.05205933,-0.08100152,-0.07472863,0.02556054,-0.06625107,-0.1304966,0.00013983,-0.01906118,-0.04071356,0.01279892,0.06266186,-0.01951371,-0.11999326,0.07037242,-0.08841331,-0.06103167,-0.14457361,-0.01370886,-0.04668089,0.00494238,-0.02310176,0.05200439,-0.00395406,-0.03225194,0.05540552,0.02540655,-0.04928906,0.05145005,-0.03079673,-0.06092624,0.06960825,0.1455112,-0.09394891,-0.05609911,-0.10828868,-0.00689143,0.04819277,-0.01781104,-0.02389047,0.0193086,0.09490559,0.07575752,0.04471837,-0.06669787,0.0779077,0.05864251,0.07713251,0.04503182,0.02179202,0.02509688,-0.0682224,-0.07073978,-0.0197524,0.10466846,0.02087557,-0.14144588,0.10837094,-0.00653122,-0.03759356},
 {-0.02563548,0.03757732,0.02461024,0.03694313,0.11376069,0.07090533,0.06538229,0.09198081,-0.0862738,-0.02993864,-0.0028881,0.05486763,0.02097965,0.08500351,-0.02342221,0.05145141,0.04262141,0.05162951,-0.00868104,0.10592506,0.06274827,0.13550308,-0.00971559,0.14651215,0.15651177,-0.07797921,-0.0316693,0.13143037,-0.05305385,-0.03591757,-0.1521015,0.07845526,-0.00456611,0.1369106,0.00334081,0.1246825,-0.04669397,-0.01716831,-0.06129575,-0.03858174,0.1083291,-0.00726793,-0.05062055,0.09972604,-0.06613515,-0.03201716,0.02041908,0.08938951,0.01588317,-0.0033577,0.05455038,0.1325351,0.08987436,-0.03291351,0.15618907,-0.08624479,-0.10287765,0.00968884,-0.00308762,-0.08501902,-0.02775845,0.01773034,0.16043814,0.0094046,0.04047214,-0.05628511,-0.02589033,-0.13186288,-0.06184387,0.08551966,0.07838397,0.04852017,-0.13148303,0.09011948,-0.1556305,0.1127309,-0.1566582,0.10272559,-0.08048417,-0.04126176,0.02322859,-0.01127895,-0.07884014,-0.06677897,-0.03422232,-0.06523848,0.02040792,-0.11053863,-0.04081992,0.11774929,0.10846923,0.02103243},
 {0.00191349,0.13084659,0.14227061,0.10703588,0.13385426,0.13878125,0.14246392,-0.04234309,0.00442822,-0.04632181,0.06775282,0.12850179,0.1551255,-0.07128305,-0.04003675,-0.04309087,0.13021636,0.11129217,0.10757095,-0.01729408,0.1318469,0.13571456,0.08660471,-0.04178695,0.13736796,0.01433846,-0.08664471,0.09924476,-0.10831429,-0.00254052,-0.0792871,0.10452568,0.04318133,-0.0778446,0.01143583,0.0430649,0.17957816,-0.0381902,-0.11284795,-0.13240841,0.02563421,-0.14947875,0.12249621,-0.02485489,-0.12887692,0.004096,-0.02137758,-0.13021274,-0.07071213,-0.01754034,0.01811494,0.04376316,0.06072578,0.05019873,-0.03665651,0.05355242,-0.08963455,0.05135597,-0.03152624,-0.01306077,0.04601172,0.01515515,0.15910845,0.0994419,0.08221259,-0.0542949,0.11324441,-0.12522295,0.03344502,-0.1192453,0.0546561,0.10316185,-0.05728905,0.04882775,-0.00481545,0.10094867,0.06347677,0.15717351,-0.15403698,0.10569002,0.01717127,0.01123542,-0.15206644,0.05109309,-0.1475489,-0.14903049,0.02820114,-0.02441433,-0.06249112,0.08929565,0.06887279,0.06732397},
 {-0.02908524,-0.06089364,0.08259198,0.08304121,-0.09508723,-0.00572465,-0.05969944,0.02025114,0.14129405,0.07908563,0.1036762,0.10130928,0.0327921,0.04752772,0.07080948,-0.08900996,0.01000651,0.02507289,-0.07132826,0.12791768,-0.05253736,-0.04192872,0.03467541,0.11071247,0.01745979,-0.1100347,-0.06984007,0.12032052,0.08815648,0.07505788,-0.07368413,-0.00098793,0.1235269,-0.06354496,0.11989783,0.01498042,-0.05551196,0.05065606,0.03286162,-0.0766542,0.11116157,0.08865529,-0.03868654,-0.10146399,-0.09922189,0.05495616,0.07108343,-0.11537278,0.00329921,-0.04621117,-0.07867235,0.09025369,-0.07659332,-0.14175539,0.05600348,-0.05354966,0.04710599,0.08879213,0.02290614,-0.06507602,0.0236656,-0.05550674,-0.01459427,-0.12965831,-0.02758434,-0.1384681,-0.07111683,-0.02506806,0.03390625,0.07879642,-0.11462367,0.12697421,-0.06414606,0.04805113,-0.07692046,0.0843467,0.14309001,-0.06864344,-0.00555752,0.12876351,-0.13862982,0.12302577,0.08166929,-0.05347506,-0.03552211,0.14462562,0.06709891,0.08521666,-0.05625897,0.098385,-0.05168935,0.06319585}

};

float Bias0_f[64] =
{
  -0.05858141,0.11074711,-0.01529471,0.26259902,0.0400513,-0.00224605,-0.0118914,0.10865071,0.10330461,-0.0111251,0.19488316,0.20950972,0.00105819,0.10535697,0.06152548,0.1879822,-0.04734243,0.1367103,0.05917784,0.09537355,0.15450209,-0.08628462,0.14199119,0.01412746,-0.05511399,-0.13578312,-0.03383139,-0.06122979,0.16046418,-0.08446079,0.04566038,-0.1215915,-0.00714819,0.19665055,0.0220305,0.00358165000000001,0.07771,0.03499299,-0.11028881,0.07882933,0.07148283,-0.05283156,0.1555,0.02107289,0.23432818,0.1198196,0.2308075,0.14550934,-0.21077827,-0.08564912,-0.00590683,0.01555396,-0.07547954,0.00672986,0.04962942,0.11591625,0.08840818,-0.25106966,0.08186884,0.22597441,-0.11218613,0.21189567,-0.16712056,-0.07490243
};




float Weight0_i[64][28 + 64] =
{

  {-0.04258388,-0.04076924,0.03028708,-0.03964362,0.05878483,-0.08234287,-0.08931281,0.0619772,0.08427346,-0.08626273,-0.09078688,-0.03698669,0.03821722,0.1161118,-0.00670168,-0.08158803,-0.05808703,0.01146771,0.08817054,0.06411147,0.06359969,-0.07293037,0.06427405,0.12223294,-0.05232678,-0.01417808,-0.0175572,-0.04991179,-0.15955296,0.09982717,0.07788669,-0.09048069,-0.06262479,-0.07098066,-0.15230455,0.05747971,-0.01017169,0.05704541,0.03935267,-0.10134608,-0.08672217,0.0058102,-0.00156001,0.01223296,-0.05455579,-0.10332944,-0.06685245,-0.1266984,0.03938676,0.03528817,-0.01954301,0.126925,0.08716021,-0.05118788,0.06749593,-0.10102391,0.05604864,-0.01799949,0.07672011,0.00049951,0.08179426,0.04611216,-0.04883562,-0.07617741,0.03816781,0.01095406,-0.04926619,-0.07086063,0.11000214,-0.02977233,-0.01958299,0.16089234,-0.00194642,0.00419496,-0.09745139,0.05654037,-0.04637818,0.03368973,-0.06231586,0.04613842,0.0517941,0.03485407,-0.00297272,0.00993749,-0.12860648,0.11184419,-0.01491907,0.00313091,-0.05325308,0.09482789,0.09075005,-0.12111095},
  {0.06378382,-0.03857405,-0.06717168,0.12409751,0.03612162,0.13680282,-0.01122177,0.05563949,-0.03376926,0.03658202,0.17931844,-0.04267427,0.0973736,0.13003428,-0.00221944,0.1830051,0.1705466,0.07432265,0.1565819,0.10196233,-0.05480648,-0.01312827,0.03542017,-0.05387662,0.05123371,-0.05311979,0.13981108,-0.04814088,-0.16685012,-0.06193575,-0.14537649,0.08733336,0.0175178,0.09788538,0.04800668,-0.11612154,-0.04628638,0.16669749,0.06499214,-0.13382813,-0.01011514,-0.01297307,0.04415218,0.07282447,-0.17482783,-0.05408581,0.10627839,-0.13836557,-0.08996638,0.05947924,0.11458841,0.02526386,-0.08749504,-0.001567,-0.02421197,-0.01055703,0.00639465,0.08370074,0.03485674,0.08703362,0.01099445,0.04510235,-0.08236772,0.12339136,-0.03612963,-0.0872651,-0.04814644,-0.04650055,0.08741661,0.07441995,-0.02180473,0.02945843,-0.13488628,-0.11570881,-0.10855991,0.17356387,-0.06545225,0.05906265,0.02653622,0.06153812,-0.03947501,0.12584564,-0.02655978,-0.00369624,-0.01384948,-0.06543278,-0.02289052,-0.1305554,0.02411008,0.1687733,-0.01842854,-0.03886851},
  {0.09726695,-0.01928587,0.16742843,-0.07045652,0.15409024,-0.04314424,0.03058973,0.12030904,-0.06215563,0.02814135,0.08556451,-0.01890547,0.0762543,0.01733993,0.04465656,0.02939544,-0.03542574,0.14990713,0.04320406,-0.02041051,0.1163824,-0.00581433,0.06032325,-0.04388737,-0.0268057,-0.05306706,0.04425926,0.00084066,-0.07273944,0.0506831,0.00015902,0.04532888,0.01808987,-0.03700391,0.05807506,0.08989141,0.08284378,0.00492111,-0.12219752,0.06682894,0.10760919,0.08122469,0.13745062,-0.03733559,0.0057451,0.00692533,0.07382473,-0.08909645,-0.0414938,-0.1327559,0.00237814,0.06715933,-0.05308551,0.01137351,-0.10121641,0.03586041,0.12086922,-0.09906397,-0.06391466,0.12692367,-0.03605481,0.04818545,-0.07005648,0.11374718,-0.08108236,0.00672219,-0.03557336,0.03583326,0.06819218,0.03759602,-0.01408767,0.07824546,-0.04820695,-0.06546799,-0.05227794,0.10951749,-0.14023247,-0.11166413,0.00456479,0.02572875,-0.08611057,-0.08769909,-0.1171467,0.11425032,-0.13463171,-0.02074218,-0.08495552,0.00614178,-0.02589243,0.06095282,-0.12091058,0.00684322},
  {-0.05828565,0.12555046,-0.04727831,0.14500391,0.02250838,-0.06773429,0.11036896,-0.00255653,0.12704213,0.02384138,0.08304957,-0.00828303,0.14236149,0.15300882,0.1379908,0.17811236,-0.05095545,0.11728749,0.15948138,-0.05161793,0.00706874,0.07329272,0.01366606,0.05152744,0.02896374,0.00781994,0.02735355,-0.00262605,-0.07423988,0.03222872,0.07375036,0.01270574,0.17190064,-0.05485065,-0.10335929,0.01232003,0.08570514,0.06005967,0.06161505,-0.101806,-0.07741638,0.05908709,-0.07815522,0.04569691,-0.10145091,0.02938849,-0.08841227,-0.03465698,0.08009034,-0.12736562,0.03438271,-0.09759437,0.02415062,0.05242919,-0.03275479,-0.11967885,-0.10328828,0.09759718,-0.05066968,0.03086303,-0.06339765,0.04536514,-0.024301,-0.12204038,-0.03949109,0.01729205,0.0702197,0.03440654,0.14177461,-0.02310225,-0.0881855,0.0088373,-0.13195825,-0.14995898,0.03638241,-0.07327047,0.01707222,-0.01432874,-0.04909054,-0.02091331,-0.1775847,0.11075827,-0.00689407,0.06015924,-0.1364589,-0.0267237,0.04396124,0.10630713,-0.07315756,-0.06751126,0.02230169,-0.16407597},
  {0.12286545,-0.0195269,0.06073645,0.04216989,0.02176294,0.11618539,0.04252702,0.01139926,0.12625873,0.1592065,0.15125386,-0.01513834,-0.05274528,-0.00589965,-0.00944709,0.120514,0.01254215,-0.05839958,0.04918959,-0.05128729,-0.02210704,0.12604631,0.1158777,-0.07546569,0.00150586,-0.05765952,0.08299661,-0.0014389,-0.08500539,-0.00893291,-0.01357904,-0.05462246,-0.0709166,0.07874924,0.03633666,-0.12309664,-0.01287871,-0.04756334,-0.14139514,-0.0559644,0.1316261,-0.0258397,0.13371792,0.13017821,0.06993588,-0.03204499,-0.00136523,0.03692444,0.08247451,0.00812362,-0.07227407,-0.06716882,0.02730712,-0.02723502,0.04130444,0.05038291,-0.02436542,0.04222004,-0.03479842,0.05880162,-0.1293207,-0.09476669,0.03409654,0.0588809,-0.0649135,-0.05504717,0.14596273,0.06919741,0.05723321,0.03569917,0.11328041,0.04875615,-0.06623422,0.00661741,0.01187727,0.13970216,0.02508495,-0.09110867,-0.00697393,-0.04344768,-0.00993557,-0.06005564,0.04673045,-0.08333351,-0.11008118,0.03685624,-0.0047556,-0.03911173,0.08231073,0.07971527,0.03004483,0.00565252},
  {0.08701912,0.04211321,-0.11238486,-0.07981125,-0.07016443,-0.02260586,-0.09587045,0.09719852,-0.04453327,0.03045924,-0.1074238,-0.11363287,-0.03854145,0.0134508,-0.06629552,0.10034506,0.0768958,-0.11746649,0.02639344,0.04883201,0.02150626,0.09311147,-0.10286905,-0.06342254,-0.09381162,-0.01560019,0.06269903,-0.04554086,0.11263932,0.16985592,0.09098928,-0.0935466,0.06551427,-0.13559017,0.05686023,0.04652747,-0.10306964,-0.12866136,-0.00191895,0.08381718,0.04698215,0.05933695,-0.05574068,-0.07903725,0.03961695,0.07632251,0.05623205,0.10697077,0.02472524,0.10898858,0.0268853,0.06828533,-0.10519562,-0.00610876,0.00020543,-0.04620862,-0.0080834,0.07033359,-0.0983764,0.00851214,0.02953433,0.0500255,-0.05757472,0.06091328,0.02094382,-0.07076683,-0.05021134,-0.08867525,-0.11422066,0.08596339,0.06853091,-0.03664814,-0.11376693,-0.04759082,0.09227251,0.0010597,-0.07137132,0.08342523,0.01455665,0.13844745,0.10916867,0.074889,0.02366305,-0.09618944,0.09238941,0.10449341,0.08081553,-0.005985,-0.08519146,0.03746003,-0.137503,0.02149293},
  {0.09104569,-0.07183655,-0.0875162,-0.10393468,0.0635405,0.09401251,-0.02603269,-0.12906748,-0.00278237,0.08702702,-0.11978413,0.01024759,-0.0196522,-0.0474017,-0.13476643,0.07994958,-0.13156597,-0.06782839,-0.07978092,-0.05377039,-0.03377372,-0.03708171,-0.11582495,-0.05122462,0.03361312,0.13480344,0.09106898,-0.08012494,0.11190334,-0.04063093,0.10340904,-0.01015237,-0.01423969,-0.13833858,0.0187725,-0.06714647,0.11340231,-0.04175212,-0.01098876,-0.04125765,0.00955266,-0.00449145,-0.03214158,-0.09396776,0.04317842,0.11434135,0.15587117,0.05114827,0.04305912,0.09453382,0.04768413,0.15445359,-0.08770773,-0.09296802,-0.10370623,-0.02119337,-0.1568319,-0.06053289,-0.03449548,-0.00379618,-0.07253017,-0.00670147,0.01998693,0.01076189,-0.0765069,0.12361532,-0.06273551,-0.09184948,-0.03915599,0.06995596,-0.06897195,-0.04122433,-0.04759254,0.09628069,0.07097197,-0.09494205,0.01080242,-0.08609924,0.07261635,0.01587804,0.12489789,0.06176933,0.01299796,0.05708276,-0.08081508,0.01655305,0.06071039,0.05625763,-0.08394828,0.12662579,-0.03796192,0.04967449},
  {0.15470032,0.14355966,0.1549996,0.1008926,0.16003188,0.14489383,-0.03445917,0.02777417,0.14060979,0.0085071,0.13097884,0.10389299,0.13875857,0.0399094,0.09634918,0.06585386,0.15998471,-0.04584924,-0.00672318,0.0755855,0.08923998,0.01137688,0.08805794,0.02363786,0.14082807,-0.02151088,0.0574711,0.12657695,-0.1695938,-0.0464551,-0.19330314,0.09557483,0.05359557,0.01696844,-0.07298496,-0.11837146,0.17264886,0.12980066,-0.0477693,0.00281584,-0.03342595,-0.10140122,0.12221537,0.09458584,-0.14796986,-0.16436547,0.04384068,-0.13252293,-0.19438222,-0.10090435,-0.10605695,0.08421423,-0.04048337,-0.09404052,0.11272219,-0.01242681,-0.19289418,0.12335131,0.0604187,0.01874267,0.04583549,-0.04373815,0.10999612,0.13641723,0.18763748,0.05834792,0.02742793,0.02413011,0.10056813,-0.20709163,0.1684471,0.17373607,-0.06558108,-0.01150646,-0.18176812,0.13740458,-0.10079414,0.00869603,0.02635168,-0.01194709,0.04607584,-0.04598719,-0.01764416,0.07656752,-0.18717104,0.06349034,-0.02357526,-0.01881078,0.00174093,0.18874261,0.09715341,0.01989768},
  {0.08961902,0.12052538,-0.0812986,0.09452192,0.01992104,0.17191644,0.05701315,0.16020985,0.02196254,0.05174434,0.01023874,0.02432141,-0.01778117,-0.06659162,0.01648585,0.06716871,0.15376464,0.06504116,-0.01276792,0.08595598,-0.01428977,-0.02947595,0.08424731,0.08451463,0.03508446,-0.03863883,-0.10208856,0.10806703,-0.08789598,-0.08717807,-0.04512323,-0.02291886,-0.06405588,-0.14233647,-0.10480585,-0.08213961,0.07538762,0.08781246,0.09356351,-0.04011583,0.09608974,-0.02444037,0.00904026,0.13090603,-0.0345405,-0.12582399,0.14885868,-0.02939299,-0.13543235,-0.05904258,-0.04167635,-0.07906264,-0.03914783,-0.00137116,0.03261625,-0.1256749,0.052314,0.03317636,0.00558156,0.03804909,-0.15501101,-0.06832947,-0.01181972,-0.05496749,-0.05444661,0.00805562,-0.01906619,-0.10307071,-0.09078529,0.02286462,0.07931221,0.013098,-0.01230158,-0.01397268,-0.01553203,0.13249955,-0.12624577,-0.07380708,-0.03062506,-0.0693094,0.04095092,0.10922939,-0.11691691,0.09670079,-0.09014438,0.04611036,0.0288451,-0.0823971,-0.04614069,0.02327743,-0.00836292,0.07118776},
  {0.16061151,-0.02482389,-0.01456591,0.16695864,0.0991915,0.04071905,-0.04352124,-0.02844356,0.08179028,-0.0699436,-0.06583759,0.13301128,-0.05655815,-0.05978613,0.10387471,0.00710638,0.05504626,0.12326234,-0.00748922,0.05539403,0.05789015,0.09027477,0.03342661,-0.0254485,0.01222984,-0.05136792,0.07841907,0.1369355,-0.05589761,0.0145052,-0.12980969,0.03613321,0.01477918,-0.02298496,-0.04780781,-0.11973555,0.14354861,-0.0623622,0.05456878,0.06752188,0.00087406,-0.16426657,0.0232124,0.09343967,0.07887335,-0.09856017,0.03138513,-0.12557337,-0.04695706,-0.10015249,-0.03624993,-0.13496284,0.07382346,-0.05993957,0.11249968,0.11238363,0.12051882,-0.07635131,-0.05818987,0.04244795,0.09779909,0.04085016,-0.03128517,0.02858523,0.03777217,-0.14067656,0.09359647,-0.101342,-0.09159707,-0.11973136,0.03477194,0.08511804,0.07141458,0.08278307,0.0510219,-0.07533841,0.04236438,0.0374002,0.05992014,-0.05878121,-0.19513938,-0.00848468,-0.11789706,-0.0778791,-0.07964948,-0.04257079,0.10614862,0.06109362,0.07617831,-0.03262204,-0.05560513,0.07698337},
  {0.04103709,0.0745841,0.15969613,0.04249574,-0.03679788,-0.03455813,0.10155993,-0.09446219,0.08770454,0.04408571,-0.03951594,0.04744008,0.07376175,-0.05535116,0.12714183,0.0726595,-0.04858161,0.15026148,0.12604184,0.13064976,0.13241556,0.12332665,-0.08033343,0.08120068,0.06166961,-0.04606191,-0.0037755,-0.00072027,-0.07181019,-0.0326281,-0.03934762,-0.0729323,0.00439501,0.06668998,-0.03219838,-0.04342652,0.02721445,-0.00404763,-0.1432134,-0.07935166,0.01708204,0.06327603,-0.05315204,0.07939733,0.07842848,0.01789358,0.04675736,-0.02422099,0.02708393,-0.0576865,0.028988,-0.10911603,0.02883014,0.08451845,0.03017664,0.04899003,-0.04401002,-0.01911893,0.01242021,-0.03476313,-0.12841345,-0.04691125,0.0327565,-0.12044594,0.04136504,0.16336192,0.12202794,-0.11309814,0.00078407,-0.13096426,-0.0731082,-0.00944195,0.00659324,-0.01609424,-0.04391781,0.1242639,0.03190574,-0.13417727,0.11140177,0.15052514,0.08713139,0.15434954,-0.15838006,-0.05575729,-0.15508763,0.06600537,-0.04824035,0.09080738,-0.1441403,0.05691319,0.10257915,0.02056016},
  {0.00098532,0.06591761,0.12795009,-0.01598305,0.10608748,-0.00837961,-0.05437571,-0.06836171,-0.03578549,-0.02791715,-0.01892855,0.07323641,-0.00799029,0.15007336,0.12855878,-0.07725825,0.09214579,-0.05477294,-0.04942285,0.1003243,0.12737511,0.02169595,0.08113832,0.02629264,-0.00574336,-0.03833604,0.05016556,0.05440109,-0.12294059,-0.14628157,-0.08866914,0.07113007,0.00929518,0.09998182,-0.02968024,0.09036574,0.051929,0.00859673,-0.05857901,-0.0214506,0.14695652,-0.10353965,-0.03229987,-0.01758515,0.04316131,0.01763475,0.14199124,-0.10553757,-0.13110404,-0.15080567,-0.14942183,0.0559358,-0.02879972,-0.177315,0.1286457,-0.16180903,-0.01010518,0.09537066,0.14984107,0.00188672,-0.09662323,0.1347558,0.13932505,0.02396307,-0.07234001,0.00534758,0.00259465,-0.09178098,0.14633892,-0.01712535,0.06860998,-0.06958622,-0.1541305,0.00418833,-0.10335868,-0.06194349,0.07729313,-0.00114859,-0.05410302,0.00836422,-0.06655526,0.03122421,-0.16574879,-0.10602711,0.02479468,0.02252687,0.02995682,0.06990082,-0.02797435,0.06794888,0.05729982,-0.00147025},
  {-0.04073057,0.02360703,-0.09295044,0.11333138,0.1011726,0.00448988,0.10163044,0.04203784,-0.00861975,0.05632276,-0.06594048,-0.08246992,0.1368963,0.08891347,0.01986513,0.05723685,0.14717558,-0.01610075,0.11774182,-0.08869325,0.04896506,-0.02769898,-0.06622251,0.02800873,-0.01104095,0.00998359,-0.07888382,0.00741348,-0.10349052,0.00183238,0.02366499,-0.00780713,0.10488626,0.12974638,-0.04548212,0.16031697,0.11200027,0.07915425,-0.08015341,0.10506508,-0.01641764,-0.15332301,-0.08063961,0.13387235,-0.1140056,0.03794054,0.12072358,0.06201591,-0.05195732,0.09480595,-0.03240119,0.02456404,-0.12549385,-0.1610368,-0.02398764,-0.119854,-0.11161708,0.0245034,0.06346665,-0.07726936,0.06997223,-0.11341179,-0.10960471,0.03216585,0.09127676,-0.07578637,-0.02955015,-0.01194444,0.08812562,-0.10422548,-0.01010426,-0.08027016,-0.04507066,0.03825156,-0.0430119,-0.10160113,0.04178809,0.01569248,0.08770519,0.10642233,0.0480762,-0.00567556,0.04596917,-0.12683883,0.0339531,-0.03815489,-0.05724515,-0.00424596,0.08763954,-0.06599357,0.09702896,-0.1185924},
  {0.15736985,0.05131118,0.09560186,0.00442692,-0.0328203,-0.00695501,0.03813198,0.06634332,0.10231265,0.01722791,0.17027012,0.14826186,0.13694432,0.05274438,-0.0155589,-0.04746706,0.00202592,0.03755366,0.04116585,0.12932232,0.01121047,-0.02662185,0.10722689,-0.02023511,0.16197082,0.08127144,0.01197936,0.11172285,-0.08642088,0.04015147,0.02700635,-0.04061924,0.02987066,0.06768339,0.06162391,-0.00273051,0.1388189,0.06627654,0.01986453,-0.00780807,0.09172284,-0.07802868,0.08004072,0.00890026,-0.14651589,-0.11322469,-0.05700013,0.05380757,-0.0164848,0.01686758,0.11662085,0.00702518,0.03936534,-0.06177241,0.06530452,0.01146938,-0.06384707,0.08569463,0.07006035,0.11129311,0.03274412,-0.0492199,0.01981035,0.13170925,-0.00448885,0.14322482,0.17784771,-0.09899978,0.01179973,0.04694789,-0.01097917,0.08678363,-0.02645545,-0.17186847,0.04364269,0.06205771,0.00898125,-0.01839066,-0.03177122,0.16834448,-0.05099559,0.02667028,-0.16307661,-0.06532275,-0.04415056,0.0217223,-0.05129116,-0.03696963,0.02365819,0.14357717,0.07853483,-0.07577082},
  {0.00068585,0.07794837,0.09785203,-0.09341808,0.08230449,-0.0189466,-0.08260506,-0.10740977,0.0868168,0.08126248,-0.12231602,-0.01051377,-0.04073204,0.03731232,-0.10972402,0.01548999,0.10751141,-0.04303113,0.10402902,0.08772014,-0.00313745,-0.0883203,-0.10317099,0.02509686,-0.01207359,-0.00657411,0.05881492,0.05905003,0.06193801,0.16857658,0.10341467,0.02212461,0.00752911,-0.08685217,-0.06763014,0.05166513,0.03796423,0.03776063,0.10381969,-0.05082076,-0.09335061,0.12650436,0.04804095,-0.01266833,-0.07565086,0.03785728,-0.09142507,-0.09230699,-0.06413934,0.04351692,-0.1069005,-0.0206533,-0.04052556,0.04902152,-0.09142607,-0.04826258,-0.04822373,0.03363207,-0.06577759,-0.07675717,0.08912954,0.07662912,0.06729115,-0.03794388,-0.02822093,0.11224989,0.07611047,0.14256407,-0.05802648,-0.05554036,-0.01249452,0.01398986,0.09001177,-0.00163087,0.02008113,-0.13592857,0.00397477,-0.07978048,-0.12223381,-0.04986952,-0.05371961,0.0486532,0.03730174,0.01462399,-0.05946411,0.03765432,0.00962651,-0.08993394,-0.0470763,0.08443002,-0.15400255,0.11549318},
  {-0.08087413,0.13397016,-0.02825141,-0.00415056,0.1308706,0.14085935,0.10717562,-0.03309048,-0.08724531,0.01482081,0.11899234,0.0537553,0.0869863,-0.00913468,0.04955961,0.0965165,0.04580296,-0.02751126,0.11975709,0.15673956,-0.01678655,0.00330753,0.04736366,0.03992223,-0.03019802,-0.0794133,-0.0296742,0.02320722,-0.11409105,0.03862053,-0.14499626,0.13748218,0.08415127,0.04221752,0.10166738,-0.00444967,-0.06320523,-0.03776993,-0.00098471,-0.06867075,0.07915223,-0.11987606,-0.07787005,-0.00159116,-0.13525513,-0.08419803,0.08044823,-0.01801345,0.1055811,0.10282336,0.08545084,0.04083395,-0.13811375,0.03492256,-0.10984882,0.09827615,0.07817388,-0.02197904,-0.05936868,0.08697357,0.02582524,0.0079912,-0.10698196,0.08561636,0.07665242,0.03560545,0.08449545,-0.11257462,0.02182612,0.03971278,0.00209496,-0.10568938,-0.07158528,-0.10132704,-0.07864741,0.05341213,-0.00730536,-0.03896916,-0.05079049,0.00511108,0.01840185,-0.01766059,-0.11682028,-0.02529957,0.06938341,0.08675805,-0.08888049,0.07469442,0.07547419,0.03796123,0.05602486,-0.0517405},
  {0.09940862,0.03520745,0.13088599,0.1518858,0.12861767,0.0043567,0.12869479,0.00112921,0.14514066,-0.01972904,-0.02778206,-0.05255738,-0.01586972,-0.00881771,0.01147693,0.08577263,-0.0394858,0.13947502,-0.00415675,0.03214329,0.0546416,-0.06603646,0.05710328,0.14451987,0.13401017,0.03976858,0.09727484,-0.0898571,0.09164488,0.08081501,-0.05503938,0.09922321,-0.04011296,0.15546604,0.1214997,-0.08535497,-0.07798614,-0.0379928,-0.05721973,-0.05907938,0.14860284,-0.07241761,0.04676308,0.10717244,-0.03935639,-0.04536028,0.02863361,0.00142788,-0.00880411,0.02232972,0.02604727,-0.08763825,-0.07562593,-0.10109603,0.09367724,0.07189628,-0.08764225,-0.01819265,-0.08674991,-0.03699081,-0.01311148,0.09496129,0.0128104,-0.0001747,0.05088172,0.05618804,-0.006973,-0.05920151,0.04303804,0.04347787,-0.11858879,-0.03955132,-0.09274221,-0.08849262,0.00150168,0.09720813,-0.11252615,-0.12309055,-0.05964977,0.10035297,-0.04778767,-0.03835927,0.00504372,-0.06440123,-0.00222423,-0.02061992,0.03557212,0.13116877,-0.13164751,0.10613029,-0.04331918,-0.10118683},
  {-0.05594797,-0.00105959,0.16018537,0.16610764,-0.06590693,0.01031194,0.04194441,0.00849799,0.00972206,0.14538975,0.12481882,0.11633176,0.0730814,0.04311896,0.1337139,0.09061022,0.05044784,0.00529907,0.07498976,-0.04368036,-0.00648458,0.00023044,0.0512854,0.11949693,-0.03286673,0.18501198,-0.02308526,0.08341151,-0.0936036,-0.10062443,-0.12409772,0.07581688,-0.05941037,0.03054587,0.03654267,-0.05943397,0.12140583,0.04009572,-0.12220787,-0.10006492,0.14595829,0.03709446,0.15176587,-0.05040462,-0.09192181,-0.06191516,0.01787281,-0.02989782,-0.13077796,-0.16732027,0.04754532,-0.05690571,-0.03191951,0.01572924,0.16601287,-0.07775317,-0.09238762,0.04427675,0.13699591,-0.06679153,-0.06108876,0.1390431,0.02318459,0.05548413,0.01214859,0.02397204,0.07952089,-0.07958972,0.06329677,-0.07135326,0.10745324,0.1227142,0.03628935,-0.17802094,0.0055809,0.12157003,0.00908751,0.00601396,0.11169588,-0.04585397,0.00560152,-0.05506761,-0.12079176,0.07269518,-0.05818319,-0.12046275,0.11828747,-0.12361673,-0.03868054,-0.0644768,0.01746351,0.02624149},
  {-0.09177209,-0.02098463,-0.09220889,-0.04780456,0.09478967,-0.11028859,-0.07241425,-0.02908351,0.05609782,0.01219018,-0.11582124,-0.09711305,-0.07207801,0.08429152,-0.03477481,0.04536598,-0.06782193,-0.13626054,0.06135767,0.07862215,0.00061523,-0.01147918,-0.01298922,0.07621573,0.05593181,0.14906354,0.04839275,0.10927428,-0.00328501,-0.05743155,-0.08726502,-0.05559034,-0.09533503,0.05716294,-0.14795339,-0.00653526,0.12922634,0.05660795,-0.02431746,-0.13619515,-0.00202266,0.08547925,0.00021734,0.10639526,-0.03253952,0.08454122,0.05381846,-0.11614756,-0.10200274,-0.0866538,-0.16984658,0.04953105,0.05672693,-0.05669009,0.11606688,0.01145409,0.03879751,0.05324898,0.10328546,0.07121696,-0.11456884,-0.05783645,0.1182287,0.04816556,0.11405768,-0.00431805,0.00079905,0.07319583,-0.05792844,0.00169585,-0.03561152,-0.10053967,-0.09500416,0.0293527,-0.05577268,0.11092361,-0.15578644,0.12502208,-0.1243306,0.00559323,-0.06786786,-0.00080695,0.09742061,0.09421815,-0.13882904,0.01549436,-0.09333824,-0.07238079,-0.07817181,0.03695616,-0.09806026,-0.1003759},
  {0.09464966,0.09067785,0.13690247,-0.0553869,0.1276074,-0.03600037,0.0941053,0.03327429,0.02887393,0.09701683,0.14505415,-0.02222439,0.14920354,0.10534703,0.12443271,0.01946197,0.05397388,-0.04799708,0.13782169,-0.06847964,0.14799392,0.05525935,0.00604801,-0.03653754,0.00568568,0.0550889,0.01776478,-0.09384171,0.05442216,-0.02475102,-0.07635541,-0.02612172,0.12759694,-0.02812527,0.1393281,0.10873144,0.00746984,-0.00450134,0.10407342,-0.02147736,0.10869285,-0.11257357,0.04928629,0.01866664,-0.0703636,0.07431896,0.07052114,0.02367266,0.09044383,-0.09501402,0.00694877,-0.13377985,-0.02945792,-0.04590128,-0.00171985,-0.09955078,0.06641261,-0.11777242,0.08304693,0.0861356,0.06407233,-0.01027968,-0.00010364,0.07519224,-0.05299843,-0.11179688,-0.04154145,-0.11465219,-0.06465577,0.02073766,0.06340189,0.11215004,-0.07977638,-0.03005338,0.05562174,0.03796323,-0.02167086,0.01192482,0.10555939,0.00384797,-0.13673554,-0.0831518,-0.08161145,-0.05141061,-0.03112808,0.06050221,-0.00717127,0.00586959,-0.01801869,-0.03347474,-0.12776366,-0.0272459},
  {-0.09663527,0.04265632,0.04870919,-0.00620128,-0.07149075,0.08323661,-0.00580028,-0.10179453,0.04469693,-0.10136991,-0.10338491,0.00829534,-0.07068394,-0.10482352,-0.04914689,-0.08447701,-0.06407987,0.09255999,-0.04574287,0.07192707,0.06415507,0.13018334,0.06385528,0.12730163,-0.06287529,-0.09573687,0.04967893,0.11027618,-0.02928946,-0.08087205,-0.03931597,-0.00706057,0.09480184,-0.0770579,0.00796986,0.01053092,-0.04809219,0.15576077,-0.103563,0.04890819,-0.01224722,0.09527748,0.15131667,0.00672888,-0.13239442,0.06197891,0.07847614,-0.0104837,-0.13813213,0.05422873,-0.00114141,0.00601602,-0.11366457,-0.00183995,0.00584268,-0.13378458,-0.15513048,-0.03399668,-0.09070721,0.04105735,-0.09704831,0.13727789,0.05814805,0.0348428,0.16039155,0.01315056,-0.01416123,-0.04614625,-0.069475,0.06681822,0.02178082,-0.03977162,0.00708293,0.05568871,0.04120182,0.06304242,-0.04287711,0.01002311,0.03241798,0.0168562,-0.00817149,0.1271986,-0.1418903,0.13322872,0.06666674,-0.00855546,-0.06390274,0.0193886,-0.02783991,0.10640842,-0.03696357,-0.00963017},
  {-0.04610389,0.02113848,0.14372963,0.06322749,-0.07567992,0.04548518,0.07770564,-0.07250772,0.13000554,-0.00826714,0.12870659,-0.05736171,0.03913433,0.12938298,0.01914599,-0.04142374,0.06123281,0.03261577,0.08169909,0.06682492,-0.10349908,0.00362949,0.08926711,0.11440751,-0.06708556,0.0162984,0.0481047,0.01945514,0.02567303,0.12872101,-0.05852734,0.10766534,0.03085741,0.08002051,-0.11447078,0.06745429,0.08080623,-0.08022924,0.05649056,-0.08037037,-0.01140696,-0.06702196,0.13303715,-0.09198434,-0.05526644,-0.02167629,0.04483738,0.05531298,-0.06574083,-0.12337597,-0.06002761,-0.09965122,-0.10701104,-0.00989009,-0.07131916,0.0819528,-0.0367595,0.00715273,-0.10249905,0.08684454,-0.12776434,0.0727792,-0.05328782,-0.04231782,-0.06129019,-0.07849955,0.03635454,0.07122608,0.06839158,-0.10172569,0.09608453,0.05829194,0.05259939,0.03887754,0.07619866,0.02728,0.01088237,0.08688623,0.0960511,0.08882453,-0.15496966,0.00911596,-0.00651954,-0.04797388,0.04979859,0.07332916,0.10945477,0.06562009,0.04022669,0.06225724,-0.02171964,-0.11382956},
  {0.11062016,0.03711493,0.18218644,0.15588482,-0.02922162,0.167473,0.15462321,-0.00039087,0.01449967,-0.04264932,0.06259258,0.00299502,0.05770661,0.04420581,-0.00086924,-0.07343757,0.0851985,0.04346099,0.0435798,0.03351023,0.05858818,-0.05128643,-0.06331216,-0.02629976,-0.02799367,-0.01818254,0.02766952,0.02160469,-0.00242544,0.07844599,0.0074453,0.08908021,-0.09943844,0.00811323,-0.08750624,0.02333861,0.02332176,0.05672411,0.0115739,0.05336374,0.16919714,0.04938268,0.03679502,0.09620071,-0.01686751,0.07440114,0.09820756,0.00386583,0.03025102,-0.04033943,-0.0202539,-0.07258569,0.06541895,-0.06378716,0.10852934,-0.02688158,-0.13798945,-0.05416062,0.09056549,0.0996046,0.06741927,0.06263732,0.10320821,0.04886298,-0.04040094,0.0325812,0.04254465,0.03926213,0.16138735,-0.03170743,0.07941404,0.09778913,-0.13968645,-0.01996878,-0.0345377,0.07932238,-0.02066015,-0.07328348,0.07627385,0.06986466,0.09535091,0.13025251,0.05091316,0.10044165,-0.01527888,0.03311135,0.05156695,0.0550731,-0.15314849,0.09956039,-0.06793337,-0.15165308},
  {-0.1315809,0.08474143,0.0354855,0.02322682,0.06955114,-0.10519485,0.02060116,0.10281061,0.12498763,-0.01837999,0.09055696,0.09988678,-0.02878459,0.09519466,0.10972804,0.08931049,0.02497971,0.00190239,0.03967327,0.03713851,0.06535973,0.06586826,0.10496835,0.08627876,-0.10526146,-0.0216492,-0.08120494,0.0236541,0.08189916,-0.10937642,-0.10588792,-0.00451213,-0.04228405,0.0175064,-0.1497998,0.02622646,-0.02318494,0.12352765,0.04130613,0.03513642,0.10683732,0.00998251,-0.04874381,0.0126618,-0.11202438,0.05042761,-0.0710454,-0.03845363,0.01027691,0.01224903,0.0199184,-0.03025191,0.04533873,0.00603502,0.07070473,0.05574758,-0.04814095,0.14030358,-0.05479169,-0.00811851,-0.14512292,-0.00565392,-0.08533354,0.089588,0.07638946,0.04813572,-0.01215172,-0.0333452,-0.02190782,-0.15157478,0.01679628,0.00816681,-0.14975479,-0.02608559,-0.1255305,-0.03909491,-0.133757,-0.05687316,-0.04142582,-0.10675853,0.00607307,-0.03974745,-0.11246701,0.0451412,-0.03412688,0.0826882,0.04021868,0.01994736,0.01483813,-0.03072585,0.06970393,-0.11956966},
  {0.09712825,0.01847868,0.14757113,0.01260917,0.11448506,-0.02355595,0.01594708,-0.08060749,0.00520725,-0.06375404,0.06062897,0.05878573,0.15394579,-0.01651941,0.0870028,0.04927847,0.01312909,-0.00487499,0.07507352,0.1481031,0.01379039,0.07647084,-0.08053912,0.02643994,-0.07822685,-0.02854185,-0.03689566,0.01673885,0.02109973,-0.11069655,-0.04907046,0.1283741,-0.02753626,-0.04123146,0.10263176,-0.04752061,0.05411294,-0.0421498,0.06188977,0.0127421,0.12702526,-0.05636671,0.12377719,-0.04534208,0.00497004,0.01536137,-0.13388388,-0.14438774,0.07155042,-0.14368626,0.00149354,0.09061599,0.02432209,-0.03547068,0.10463831,-0.07832805,-0.00758846,0.12461553,0.01840618,-0.07283533,-0.11427393,-0.01865319,-0.05040726,0.01545304,0.03516622,-0.1279788,-0.05145449,0.01411792,0.02069575,0.04115687,0.00265293,0.05428397,0.00809627,-0.1320113,0.01189276,0.04849351,0.14507917,-0.12959902,0.05515047,-0.01952091,-0.1355897,0.07910423,0.09504298,0.01468249,0.09015083,0.07257717,0.0475481,-0.0307543,0.03503036,-0.02486305,-0.0444654,0.05911136},
  {-0.0696247,0.1368174,-0.08937593,-0.07311428,0.10650206,0.10583852,0.00595449,0.06306875,-0.10802237,0.04895455,0.0968321,-0.1045948,-0.09529659,0.11054568,-0.00855151,-0.08074496,-0.09600774,-0.07641168,0.09561378,0.03869932,0.06889486,0.12036126,-0.1179218,-0.08577964,-0.06629724,0.13356994,0.04206957,0.07334948,-0.12412342,0.07918218,-0.03382689,-0.05682664,0.03596524,-0.04545065,-0.04429261,-0.08329597,-0.01517435,0.05726802,0.01778852,0.00442652,0.1287757,0.00979371,-0.04315402,0.15345801,-0.02325051,-0.12105947,-0.0359271,-0.05168958,0.01682457,0.03317674,-0.01285448,0.08711258,0.03265172,0.10243381,-0.01911193,-0.03814272,-0.13710637,-0.00866713,0.09923549,0.06481441,-0.13108103,-0.07174258,-0.07260303,0.12330136,-0.01049104,0.02126933,0.14671247,0.03929544,-0.07523274,-0.11433018,-0.0162637,-0.06405248,-0.08072136,0.09638046,-0.07491898,0.01854459,-0.01855258,-0.03689648,0.08852097,0.13113871,-0.08030748,0.14018105,-0.06124807,0.06480145,-0.12913865,0.07305048,0.11528064,-0.14099237,0.01033791,-0.02627123,-0.09073822,0.06670877},
  {0.09280235,-0.05194222,-0.06826521,0.03576144,-0.03134239,0.09708595,-0.02513244,0.02633296,0.13352484,0.13982843,0.02959492,0.1290568,-0.06769217,0.0526922,0.13905445,0.02766145,0.05151841,0.12156039,0.126965,0.09194297,0.09211168,0.00933034,-0.00359637,0.06449842,0.1417659,-0.04934539,0.15277416,0.12823465,-0.14757755,0.03819751,-0.15440309,0.14243577,0.00324811,-0.08543104,-0.07250519,0.0486474,0.10107681,0.00164504,-0.02845568,-0.02478966,0.09746058,-0.15299787,0.14338726,0.11285157,-0.10854866,-0.14785352,-0.07561836,-0.12558772,-0.06269313,-0.00253491,0.0307356,-0.0048555,-0.11377639,-0.11497913,0.05007726,-0.10345244,-0.12483037,-0.08407368,-0.04195569,0.04015143,0.05041318,-0.10509935,0.11417929,-0.00382114,0.11712163,0.01770396,0.06734008,-0.00308169,0.05998093,-0.0237685,0.11904815,0.10726748,-0.11565936,-0.09152136,-0.07237037,-0.0783178,-0.10438212,-0.0596024,0.02566277,0.12861137,-0.0558276,-0.0303591,0.07880833,0.06516074,-0.10847916,0.03340572,-0.02427768,-0.07879755,-0.08703177,-0.04155792,-0.06772223,0.01652224},
  {-0.03364439,0.16098253,-0.06847258,-0.07771666,0.03724721,0.12587914,-0.03908801,0.1159047,0.12620974,0.10422552,-0.05019449,-0.00033623,0.04208084,-0.10297309,0.05726717,0.06512599,-0.06985465,-0.07212666,-0.02525459,0.05699011,0.00355227,0.17246106,-0.01770406,0.17798948,0.13435718,0.12225949,0.10265411,0.14697416,0.08781594,0.05864092,-0.12212066,0.06092538,-0.03586267,0.0270607,-0.14716333,0.13879901,0.12170257,-0.04103975,-0.06326084,-0.06061771,0.04754986,0.01904923,0.0573596,0.08315777,-0.05863645,-0.08381644,0.17615224,-0.06564489,0.07603043,-0.069259,0.0044863,0.11321717,-0.16724265,-0.07949501,0.11709545,-0.05548147,0.04903006,-0.04559113,0.00250646,0.09038504,0.06571194,0.10737202,0.11711422,0.13063549,0.02246275,0.04551693,0.1168711,0.02726717,0.02429006,0.06127692,0.10532764,-0.09364517,-0.05227643,-0.03837483,-0.08274817,-0.04365948,0.02687279,0.07310829,0.00112996,0.08127715,-0.0475507,0.02112426,-0.0910423,-0.00190829,-0.02077033,-0.14235403,0.05587356,-0.11079559,-0.06544619,-0.00864801,0.13858156,-0.14067467},
  {-0.11001962,0.08107653,0.05738825,-0.10684938,0.08743758,0.10702758,0.04532276,0.01186748,-0.05073935,-0.06247229,-0.0038484,-0.03655649,0.06372007,0.09289061,0.00192889,0.01303538,0.09692495,-0.09934399,0.13119397,0.09662582,-0.05760726,0.07086997,0.08409147,0.08908413,0.1020745,-0.05623491,0.05992781,-0.09380116,-0.05412395,-0.11236086,-0.11607641,-0.00935579,0.05027494,0.0193118,-0.12564334,-0.0077181,0.05211736,-0.08084898,0.05003327,0.00381041,-0.07932089,0.0750451,-0.05667649,0.03688268,-0.01008482,-0.01160603,0.03948711,0.06953341,-0.08723152,-0.11377834,-0.03089841,0.04894704,0.03298927,-0.08614281,0.06366501,0.01690179,-0.11148009,-0.02500485,-0.02542259,-0.10341723,-0.135703,0.00845067,0.04482175,0.08376799,0.02609225,-0.09654783,0.15216167,-0.04003457,-0.04143455,0.07902189,0.06194456,-0.06851078,0.05671057,0.102042,-0.06835333,0.08659826,-0.03120527,-0.02571181,-0.04244101,0.0876819,-0.05608848,-0.01136924,0.03670536,-0.03982609,-0.0975795,-0.11857288,0.08376203,0.04924409,0.09982248,0.10787106,0.05545119,0.09740522},
  {-0.09747075,0.06039684,-0.06584033,0.11645664,-0.03916537,0.05590311,-0.0012075,-0.05153175,0.11331947,0.03735818,-0.03026488,-0.04856451,6.045e-05,0.00324866,0.14499459,0.09488445,-0.0687808,-0.0319859,0.1561451,0.105954,0.05527634,0.06345103,-0.03346714,-0.07014143,-0.00791357,0.10656945,0.01931556,0.05575694,-0.12808508,0.01313837,-0.0671566,-0.07241817,0.16142936,0.04903319,-0.00208943,-0.05086512,0.17114255,0.04256077,0.02828464,-0.10121664,-0.04578185,-0.10755886,0.02789184,-0.07885697,-0.06404113,-0.08362996,0.14453621,-0.14181551,-0.1227401,0.02429929,-0.00327825,0.1229122,0.072352,-0.00010798,0.02246576,-0.01202429,-0.08040048,0.05214689,0.03361265,-0.09965516,0.01129351,0.08718561,-0.04224031,0.1361772,-0.06506111,0.10491264,0.09409384,0.04794301,0.0882287,-0.00496235,0.06373903,0.02308591,-0.06565821,-0.07968836,-0.0616384,-0.06044753,0.09565558,-0.03405386,-0.15202512,-0.05790981,0.02441838,-0.07206535,-0.12452057,0.1188849,0.02634654,-0.02373875,0.055464,-0.12399179,0.03354033,0.14728856,0.0857465,-0.11635939},
  {-0.09592464,-0.06787631,-0.0841258,0.07380985,0.01877736,0.03279768,0.07255672,-0.06245421,0.05863919,0.11497886,-0.00609501,0.0094681,0.06733008,-0.09334265,-0.0497187,0.10357794,0.1248152,0.1393631,-0.10368555,-0.10358831,0.10752348,0.00480201,0.0527482,0.09123273,0.04598315,-0.01785942,0.03578593,-0.05915223,0.11077741,0.08044849,-0.03439182,-0.01304143,0.01962384,-0.07028589,-0.09900615,-0.13218372,-0.10475596,0.04468299,-0.02726421,-0.022229,-0.0917924,-0.02906173,0.11577391,0.07165699,-0.09790755,0.03472438,0.00967813,-0.01838582,0.03715683,0.00816771,0.05036525,-0.11928006,-0.04380883,-0.05106965,0.05217585,-0.05275477,0.09584732,-0.0215506,0.01800731,0.11138307,-0.04212724,-0.01282167,0.11679596,-0.05920608,-0.0849482,-0.081029,0.04625996,-0.06198061,-0.03938577,0.09110415,0.02489657,0.04629248,-0.00281744,0.03968331,-0.11321125,-0.00754061,-0.00213091,0.08263942,-0.0451624,-0.0578205,0.0604497,-0.06340638,-0.09295226,-0.03774006,0.09833521,0.13722973,0.06647228,0.06150112,0.00451463,-0.115097,0.11386235,-0.07910123},
  {-0.15841468,0.02475423,-0.10974324,0.05123558,0.08103979,-0.09090928,0.01150716,-0.0032379,0.10169261,-0.05864446,-0.10028134,0.03310592,0.13468195,0.02606618,0.09156249,-0.09844635,0.02146945,0.12518735,-0.1042119,0.05940918,0.00429392,0.01326979,0.02654345,-0.13016315,-0.01390144,0.01265254,0.00013207,0.02885712,-0.0791903,0.07535355,0.0431065,-0.11253445,0.097253,-0.05088303,0.09501477,-0.00186767,0.09704334,0.00552347,-0.04362652,0.06921609,0.0848996,-0.10403786,0.00077118,0.0024827,0.051471,0.06483486,0.04882971,-0.02965572,0.10797339,0.11065202,-0.06719511,0.08077435,-0.07644877,0.05901465,-0.10475645,0.08160076,-0.10167499,-0.0553391,-0.05433553,-0.12131996,0.11632847,0.11126083,-0.04778473,0.00660507,-0.11561209,-0.01389289,0.0127354,-0.11654866,0.0964391,0.06067399,-0.06385443,-0.01867868,0.10887573,0.12236017,-0.10416987,-0.0414944,0.1166264,-0.04101247,0.08588506,0.07754211,0.04437873,0.08720025,0.00078849,0.09404322,0.07328292,0.11771765,-0.05755641,-0.11434358,0.02530062,0.04189941,0.14739424,0.06770964},
  {-0.01370163,-0.02379542,0.14946015,0.16395396,0.05327676,0.01846711,-0.04247101,0.06830908,0.0459546,0.10906447,-0.06105578,0.00011668,-0.07735639,0.03747461,-0.07551949,-0.09390783,0.0786474,0.11997615,0.06005505,-0.0594436,-0.06982964,0.00669635,0.04521741,0.0858692,0.16127315,0.05474628,0.12420107,0.13231112,-0.03298611,-0.00655521,0.03706368,-0.0645956,0.04142378,0.07050426,-0.06139058,0.01628671,0.08691343,0.14297506,-0.02903683,-0.05876949,-0.07555827,-0.15680733,0.05520943,0.06769944,0.00380506,-0.08854452,-0.07511684,-0.00381767,-0.11999144,0.07317223,-0.1334853,0.09798366,-0.10780877,-0.02318794,-0.06981219,0.01055402,-0.13078627,-0.03684421,0.01104087,0.12919807,0.02402091,-0.06149883,0.02937916,-0.02379838,0.02453273,-0.02791437,-0.05399432,-0.07778037,-0.05277294,0.08696909,0.04460125,-0.02581129,-0.11564297,0.02026431,-0.12838577,0.01599915,-0.07214891,-0.07739728,0.06560721,0.02458288,-0.11161248,0.06509253,0.0562,0.09731366,0.03638262,-0.08855886,0.08656925,-0.03415348,-0.10432024,-0.07044993,-0.07359723,0.05842084},
  {0.11147538,-0.0633024,0.06412842,-0.0301598,0.05383993,0.09384239,-0.09894532,-0.06906529,-0.10470964,-0.09352076,-0.00763579,0.03254972,-0.01930104,-0.10227599,0.04296812,-0.07288144,-0.1117499,0.05367548,0.04114589,-0.01756438,0.05945442,0.08987451,0.07252831,-0.05413963,-0.07555589,0.04249009,-0.11647171,-0.0231176,-0.05453101,0.03322653,0.04418689,0.0110906,0.06766333,-0.05828027,-0.0514163,-0.02751187,0.05129855,0.04962706,-0.04844973,-0.04765873,0.05044861,-0.01266772,0.03902054,0.06219237,0.08000831,0.05504648,0.08172978,-0.05295669,-0.03994606,-0.08937782,0.11280878,0.09194856,0.00760803,0.10687808,0.06822103,-0.13417459,0.0876831,0.08079471,0.04175602,-0.00962499,-0.09859031,0.14223985,0.09670223,0.11265959,-0.06599396,0.0315362,0.01938822,0.01482872,-0.03377541,-0.13250647,-0.04663412,-0.0568951,0.00672892,-0.10059049,0.04528253,-0.071954,-0.0084013,-0.02082303,-0.11720283,0.00081835,-0.0171173,0.06707635,0.04369541,0.03150918,0.01649559,0.02378758,0.03388821,-0.07135274,0.05448133,0.11936338,0.00824316,0.0749001},
  {0.15172666,-0.06769689,0.07270691,0.04854188,0.1284401,0.13030143,0.07205257,0.14749451,0.04341492,-0.02684312,-0.00962321,0.15999825,-0.06857567,0.02918361,-0.01381674,0.01076288,-0.04360554,-0.0126129,-0.07788289,0.13020706,0.06150837,0.08938265,0.03198242,-0.07306141,0.1513833,0.1409724,0.10225676,0.00659615,-0.13578855,0.05043615,-0.10570256,0.04687584,-0.06932098,0.09576792,-0.05537104,-0.05884069,0.11535592,0.00015143,-0.05235087,0.0412672,0.08697199,-0.0514407,0.12035663,-0.0437852,0.07253116,-0.11802321,0.07175742,0.07837406,-0.07500986,0.00532037,-0.01332982,0.06946355,0.0050311,-0.01617683,0.05656004,0.01570152,0.05031899,0.14972958,0.04209033,0.0395923,-0.06462073,0.14838234,0.14918627,0.15401141,0.09919088,0.0512591,0.1318936,-0.03658901,0.11530109,0.06822349,0.08747069,0.10926397,-0.02962331,-0.10824934,-0.12382816,0.07847317,0.06483601,0.13179578,0.06886556,-0.03370252,0.03799487,0.09633186,-0.0664214,-0.09190442,-0.08971493,0.02087406,-0.07229267,-0.14453669,-0.1647342,-0.0375559,0.11130778,0.03265274},
  {-0.12819222,-0.12867773,0.05427198,-0.1101916,-0.08329941,-0.06751137,0.09456022,0.08086541,-0.07786646,-0.14193627,0.06856979,0.01565768,-0.08339185,-0.03629865,0.03051729,-0.04397313,-0.06960767,0.06236529,0.00806288,-0.05766606,-0.0374516,-0.09696376,0.04772171,-0.00724182,0.02201939,0.00118041,0.00891334,-0.08930729,0.07950947,0.01958025,0.07120589,-0.05659951,0.04138612,-0.14172496,-0.02526328,-0.03903104,0.05443585,0.02199158,0.11616848,0.05686035,0.09200001,-0.00801701,-0.08742271,-0.08489577,-0.02113092,-0.00357529,-0.01102752,-0.05677812,0.03505665,0.09953518,0.00802225,0.01630733,-0.03294414,0.03360582,-0.11583798,-0.01582268,-0.09055652,-0.08335128,0.09134173,-0.0151375,-0.08414875,-0.00298852,-0.02341046,-0.08177231,0.02862952,0.03868878,0.12046265,-0.04247646,-0.01667888,-0.12183239,0.09301095,0.10829759,0.00030201,0.00365055,0.12662274,-0.13121387,0.10457993,-0.08560149,-0.02023436,-0.11706027,-0.03275065,-0.01461336,-0.0606944,0.02720251,-0.05686894,0.08357853,-0.10534052,-0.00210715,0.06561949,-0.11039434,0.12449346,0.11905252},
  {-0.0136367,-0.05568208,0.08770942,-0.09287705,0.04724756,0.16390288,0.01078329,-0.02576344,0.02139687,0.15937996,0.06620022,-0.06050086,-0.06077466,0.10384699,0.11888371,0.13191922,0.14363775,0.06337836,0.06944045,-0.04981288,-0.00052595,-0.04232044,-0.01474186,-0.08532029,0.00710132,0.0506924,0.09298621,0.06866512,0.0767573,-0.01841411,0.07035854,0.07084829,0.06411117,0.11542626,0.09896474,-0.06905583,-0.03685494,0.03369355,0.07622632,0.05413674,-0.04533562,-0.05949379,0.05734304,-0.02008749,-0.03837073,-0.1252742,-0.0941053,0.0543626,0.0860844,-0.05583481,-0.13665766,0.0619847,0.08568022,-0.15035717,0.11211485,-0.04402083,-0.11770121,0.1335959,-0.01583971,0.13413914,-0.14680366,-0.01084376,0.1318748,0.10646862,0.15220478,-0.03524193,0.02021391,0.05899229,-0.05723328,-0.04789435,0.00656786,0.04669665,0.03204321,-0.15051357,-0.10965896,0.038461,-0.09229965,0.06547514,-0.01517545,0.09730256,-0.15680785,0.14013968,-0.09438118,0.10121174,-0.00477738,0.04442918,0.07429776,0.04472035,0.03917293,0.08133511,0.05573889,-0.03919543},
  {0.08067624,0.0973091,0.05292013,0.05142869,-0.07688367,-0.11341356,0.11674252,0.07661979,0.02281609,0.02087535,0.00229466,-0.00490013,-0.05831899,-0.04504463,0.01301146,0.052903,-0.09701646,0.0882569,-0.10243382,0.02121517,-0.10723656,-0.09578449,0.01004856,-0.01032435,0.03425098,0.0290531,0.140194,-0.03770225,0.01850213,-0.05260179,0.01869946,0.12432366,0.0032166,0.09112041,-0.1262492,-0.00338758,0.1443613,0.00562065,-0.10930827,-0.06661414,-0.07449763,0.00984263,0.02128897,0.1250207,0.0956206,-0.05884482,0.06606895,0.09608401,-0.04922396,-0.1236921,0.06766731,0.04313318,-0.0094264,-0.06946032,0.0715519,-0.07759856,0.01743333,-0.00317287,0.08604292,-0.03951193,0.10662571,-0.07507313,-0.06770858,-0.02358279,-0.02992498,0.1293117,-0.02758322,-0.05263912,-0.11651897,-0.0576745,-0.03882363,-0.05438311,-0.02578057,0.03429782,-0.06150322,0.1301806,-0.11730268,-0.00196582,-0.12047159,-0.01547541,-0.10301924,-0.07574625,0.1049417,-0.09556413,0.01825065,0.02816258,0.03806669,-0.00600449,-0.0110101,0.05727511,0.0956891,0.03282325},
  {0.08486347,0.12023638,0.06249003,0.12666357,0.0503432,-0.04101538,0.03455894,-0.0526946,0.00211285,0.00631659,0.05620851,0.03566445,0.08353196,-0.02273071,0.13761096,0.01872726,0.12854221,-0.0588675,-0.07481546,0.10481326,0.00479167,-0.06680932,-0.00814941,0.01192043,-0.05640554,0.13577639,-0.09576513,0.05027239,-0.00533301,0.0673527,-0.08362418,0.12290403,0.084079,0.04601888,-0.05977788,-0.08996994,-0.00985718,0.0315729,-0.08785026,0.00353469,-0.02892587,-0.05291051,0.10537263,0.14781956,-0.12718537,-0.01453332,0.05109937,0.03789948,-0.0457833,-0.12737545,-0.06407037,-0.05349981,-0.14361456,-0.04309591,0.10196653,0.04173448,-0.1082224,0.02245773,-0.0191117,0.01695761,-0.13598649,0.15713462,-0.05025102,-0.06648985,0.00239491,-0.06520186,0.0991936,-0.0665032,-0.10119656,-0.12018096,0.11371922,0.13350467,0.02921182,-0.05384922,0.03858275,0.01804734,-0.07532703,0.11466713,-0.09939618,0.07020496,0.05151442,-0.08983742,-0.1319257,-0.00935396,-0.12295261,-0.09819648,0.12630577,-0.01322819,-0.069783,0.10495168,0.05322436,-0.07249378},
  {0.01244398,-0.03659641,0.12754908,0.13441356,-0.09652248,0.02847887,0.09563519,0.04094047,0.1438926,-0.00856786,0.02433388,-0.05215559,0.11183783,-0.01044613,0.16579829,0.03619819,0.04382233,-0.01128941,0.11754827,0.13962372,0.04781273,0.11256287,-0.00416975,-0.06150025,-0.04149476,0.12758847,0.04821096,-0.05965147,-0.07435968,-0.16106915,-0.05684583,0.02444098,0.04961843,0.05037753,-0.01917959,-0.19806738,0.08661496,0.00110685,0.00744473,-0.15131694,0.14438207,0.01200662,0.04296489,0.04228419,-0.00614639,-0.16899733,0.02624013,-0.05877837,0.04711397,-0.10498665,-0.00792183,-0.05903424,-0.00453229,-0.08787377,0.10539401,-0.05863849,0.04587685,0.10950771,0.1541239,-0.05577053,-0.04750524,0.09516694,-0.01798377,-0.04492801,0.02473487,0.04135253,-0.04319941,-0.04477795,0.05514289,0.01346881,0.12399624,0.11507948,-0.15264527,0.01473621,0.02486009,0.13834423,-0.01282048,0.02110652,0.00892511,0.09426885,0.0561005,0.0568425,-0.0301178,0.04109428,-0.05374695,-0.12883633,-0.05010025,-0.06469186,0.02546252,0.16742107,-0.01288278,-0.03530465},
  {-0.02452485,0.11555696,0.01888071,0.1515226,0.05651954,-0.05183604,0.14384866,0.15507549,-0.0157805,0.07341582,0.162149,0.08992066,-0.01817,-0.05640318,0.11354845,-0.02952423,0.14086941,0.15051515,-0.03483459,-0.07068222,0.17432575,0.0710752,-0.01379783,-0.01922449,0.03646545,0.06898201,0.05941371,-0.08106998,-0.04834612,-0.11834791,0.04755881,0.11143528,0.00961035,0.11406245,0.07343364,-0.12730776,0.02332861,-0.00796879,0.07373004,-0.08019419,-0.05563976,-0.12692837,-0.03283855,-0.07122338,0.01752033,-0.14337496,-0.00679551,0.00170785,-0.05637321,-0.00996574,0.0977807,-0.11823123,-0.09928835,-0.02743226,0.08314972,-0.01671016,-0.11059317,0.1373539,0.0490013,-0.01442239,-0.03598422,0.09702551,-0.05805022,-0.08978844,-0.07649636,0.10241472,-0.06575634,-0.0557321,0.14538532,0.10060472,0.07846677,0.00901848,-0.05730733,-0.12135942,-0.13923223,0.08991068,-0.12140269,0.05918453,0.02088042,-0.07698432,-0.07999967,0.07908798,-0.06757159,-0.02565659,0.03486181,0.13402356,-0.02717423,-0.09642346,-0.00397789,0.01708281,0.12000639,-0.1572497},
  {0.05280786,0.02165357,0.09603458,0.0250168,-0.03197784,-0.07096527,-0.08186398,0.10450299,0.12378861,-0.00574753,-0.0069213,0.04645362,0.13833436,-0.10129651,-0.05984315,0.06131852,-0.0932188,-0.00291676,0.1472111,-0.04606599,0.05801127,0.12783241,0.11172762,0.10744197,-0.04170856,0.08463059,0.01214104,0.01247677,-0.06943174,0.08447314,-0.07398445,0.01512116,0.15261544,-0.07488691,-0.12930715,0.08649601,0.05414875,0.12361013,-0.0746798,-0.13392046,-0.01502606,-0.04748482,-0.04098824,0.05749089,-0.05580135,0.02736049,0.10061453,-0.00949127,-0.11441927,-0.05445886,-0.08587832,-0.05067148,-0.07329065,0.05177287,-0.01179447,-0.07069553,-0.15109004,-0.04611854,0.04455151,-0.01956372,-0.07546666,-0.07627402,0.01943258,-0.03979318,-0.01272392,-0.04891532,0.09154642,-0.0488381,0.06759131,0.03369793,-0.05655479,0.07152473,0.0770055,-0.0505716,-0.06849901,0.12317188,0.03329791,-0.07097556,-0.02624252,-0.03528092,-0.03634636,0.09139096,-0.0573204,0.05610115,-0.15262473,-0.02472901,0.04803437,-0.14495964,0.02185954,0.12063974,0.15448245,-0.12337463},
  {0.05311698,0.04263247,-0.0479635,0.12388925,0.15225641,0.12913862,0.00848044,0.03921563,0.11667027,-0.01549371,0.05274423,0.13719104,0.00960778,0.09481774,0.14827494,0.04910162,-0.03776799,-0.07808271,0.03445837,0.0037932,-0.0716317,0.05671694,0.06701528,0.09568948,-0.08783447,0.13825536,0.09459122,0.08116885,-0.12405258,0.05628788,-0.03815619,0.04540449,-0.01110762,-0.12839288,0.00625939,-0.03471483,-0.0541916,0.01171385,0.01850907,-0.09618483,0.00483752,-0.15105525,0.03691934,-0.05789016,-0.04808696,-0.11177126,0.05096893,-0.11618052,0.03727564,-0.14692965,-0.05202346,-0.07312384,-0.11015776,0.02535626,0.13396348,0.06678401,-0.12268022,0.08127236,0.04405713,-0.04790184,-0.06399395,0.03633694,0.13003173,0.04306599,0.04359356,0.08093307,0.00077845,-0.0838109,0.01509921,-0.02643395,0.16117212,0.16360359,-0.15387228,-0.12363289,-0.0504867,0.03362401,-0.07725298,0.0451872,-0.08967766,0.05229609,-0.10711429,0.11114497,-0.03388372,-0.06259354,-0.06122799,0.05300576,0.16456826,-0.1467041,-0.07083791,-0.04203292,-0.00721477,0.03353394},
  {-0.0463231,0.12471655,0.08229219,-0.0642131,0.12475374,0.06843395,0.00602126,-0.05252919,-0.07009075,0.11539592,-0.11523846,0.08214021,0.06585694,-0.10257216,0.00443332,0.10514312,-0.11270835,0.05611445,0.04786393,-0.09208119,-0.01590769,0.12384222,0.09652477,0.11919753,-0.08135557,-0.08594248,0.12004426,0.14091189,-0.09677082,0.10706893,-0.09815149,0.06530214,-0.02717135,-0.03016858,-0.07137718,-0.00872278,0.05586649,-0.08682083,-0.01663328,-0.00390894,0.14041372,0.0646406,0.05130334,0.03114842,-0.00241181,0.10045869,0.1189025,0.05245584,-0.06677057,-0.05428894,-0.11479355,-0.08453368,-0.00342064,-0.04066205,0.03070218,0.00499346,-0.1031009,0.08252396,-0.06533445,0.0177126,0.04896935,-0.09366401,0.01301653,0.04093461,0.10593881,0.11351492,-0.0580893,-0.08767572,0.10767876,-0.11264177,-0.0736287,0.13771002,-0.04594022,0.06938609,0.01703889,-0.00929006,-0.02440296,-0.02731401,-0.11909124,0.09310808,-0.13003816,-0.05961239,-0.12397561,0.0629966,-0.14470996,-0.03086482,0.06892,-0.01940762,-0.1048299,-0.03401253,-0.14326115,0.02251403},
  {0.04471772,0.13598225,0.13214442,-0.1003107,-0.04000249,-0.04840931,0.09689491,0.05781365,0.12561928,-0.01304719,-0.06674454,0.03279895,0.13542302,-0.02347336,0.02887079,-0.07803888,0.10150953,-0.04616624,0.09513761,-0.08990567,0.10837529,-0.00041252,0.02367346,-0.07399374,-0.00994269,-0.0824297,0.11019763,0.01348744,-0.02738336,-0.05772194,-0.04519906,0.03110672,-0.05140637,0.02209388,-0.06457796,-0.1309522,-0.00248554,0.05205765,-0.01041462,0.05402197,0.06190567,-0.11730345,-0.00083629,0.14467694,0.03283788,0.04116238,0.06064297,-0.11199934,-0.08579727,-0.09368823,-0.11583277,0.03599635,-0.08152312,-0.1456684,0.11004657,-0.0834104,-0.17436725,0.02584174,0.16228652,0.13780987,0.05335485,0.06220427,-0.04620482,0.05460856,-0.05220245,0.10556567,0.13256653,-0.1350805,0.04174516,-0.04322079,0.1685909,0.02196123,-0.15455236,-0.08476411,0.07413558,-0.05299665,0.01597633,-0.04867099,-0.14070366,0.09895264,-0.12527144,0.11703208,-0.05991589,0.06088307,-0.11246301,-0.112865,0.12392365,-0.05035994,-0.07172872,0.0949669,-0.04389414,-0.14248735},
  {-0.00382476,0.06505437,-0.01643885,0.11765264,0.00830405,0.15188271,0.05918102,-0.0259555,0.0273521,0.14279065,0.01700059,-0.08543098,0.11787035,-0.07149052,0.1490273,0.04539992,-0.06878113,-0.06905179,0.06911162,0.08080614,0.01596167,-0.05038596,0.02341251,-0.09417119,-0.05696703,0.07864431,0.01529607,-0.07673463,-0.11028674,0.07398145,-0.04245556,0.14595859,0.10701283,0.0893311,-0.05734297,0.09404983,0.12517785,-0.02123601,-0.1080363,0.02546088,-0.06644575,-0.00973606,0.08304583,0.10163335,0.030696,0.00691818,0.09672343,0.01900178,-0.08796415,-0.0865647,-0.00961511,-0.04183098,0.06868711,0.03297836,0.13444209,-0.01448303,-0.00883928,-0.05412016,0.08981576,-0.00732814,-0.1418771,0.09991124,0.13105941,0.01157215,0.12533692,0.0844433,-0.08500402,-0.01560581,-0.0666127,-0.04204716,-0.04080425,-0.05558813,0.01432755,-0.1026118,-0.09749267,0.10400981,-0.02106314,-0.05003866,-0.07165165,-0.0068277,0.01146998,0.07541495,-0.13320214,-0.0654954,0.03406378,0.07738186,0.04719504,0.08498118,0.0673297,-0.00733046,0.031518,0.04535428},
  {0.07160903,0.01571867,-0.0609925,0.09704413,-0.00581267,-0.01516552,0.08829805,-0.04509746,-0.0204135,0.02982285,0.16377136,0.06876698,-0.06105376,-0.07221033,-0.07536502,0.12374561,-0.01749242,0.15449111,-0.06490161,0.04856113,0.1500473,0.12251081,0.05166909,-0.07490634,-0.07011617,-0.03074741,0.10318657,-0.08205398,-0.0896797,-0.11935827,-0.00136867,-0.00616849,0.06882189,-0.02062645,0.07840924,-0.01919656,-0.04297645,-0.02290774,0.03082087,-0.0112564,-0.04154922,-0.06540801,0.11300067,0.13392857,-0.06870651,-0.09149617,-0.09034134,-0.10210074,0.03677469,-0.06671809,0.01755296,0.10008403,-0.06895206,0.02699642,-0.03078834,-0.04023672,0.06607329,-0.05730351,0.15546426,0.09946018,-0.06983382,-0.02279856,-0.03807694,0.07879815,0.16013847,-0.01473298,0.15041934,-0.17555782,-0.0643741,-0.02200525,-0.08933441,-0.03437305,0.08240804,-0.03471262,-0.14686202,-0.02922353,-0.05964197,-0.11217045,-0.03132239,0.05371612,0.05072311,0.14039773,0.03996219,0.12466714,-0.04923615,-0.09047458,0.00192638,-0.00391103,-0.14864232,0.1187318,-0.07428543,-0.15444626},
  {-0.06905594,0.04467281,0.0548401,-0.09314192,-0.07280913,0.11758311,-0.00495935,0.07930417,-0.02305403,-0.04563563,0.1665258,-0.00670749,0.11643878,0.16092086,0.08811897,0.03258858,-0.07170093,-0.0520861,0.01344609,0.01708697,-0.05681947,-0.02496405,0.1336205,-0.04340174,-0.05471942,0.05457008,0.06857298,-0.05354146,0.0199549,0.03149187,0.05461387,0.08980139,0.03627726,0.0384159,0.02274759,-0.15243016,0.12713565,0.08106234,-0.14112356,-0.0676299,0.04458759,0.04126978,0.00720993,-0.07032413,-0.01291336,-0.00456145,-0.03328274,-0.07572788,0.08999328,0.03296612,0.08058877,-0.00731769,-0.08782045,-0.04590588,0.0561465,0.06358677,0.00065238,0.10830662,0.07101397,0.14113379,-0.12609681,-0.07271032,-0.02496231,-0.05763065,0.01403564,-0.03238841,0.0887957,-0.00224106,-0.07284513,-0.01715618,0.04715052,0.1212021,-0.05278964,0.03148426,0.00345046,-0.00652191,-0.04460135,-0.09878524,0.08951232,0.09380451,0.01878748,0.07566547,0.0484391,-0.06175921,0.01435246,0.04638903,-0.0543622,-0.09794845,0.06501403,0.00539745,0.13718565,-0.10833623},
  {-0.05688424,0.00017447,0.03897433,-0.03814493,-0.08055314,-0.07006177,-0.06242107,-0.09290593,0.06884082,-0.05046538,-0.13570614,0.03278645,0.0737398,0.03074555,-0.13452478,0.02088531,0.05909108,0.05190617,-0.05782535,-0.10901202,-0.1189478,-0.04286592,0.0197896,-0.07871243,0.08774327,-0.01181051,0.10361569,0.09484882,-0.10318746,0.05228831,-0.07936224,-0.05221838,-0.06592946,-0.01146292,0.09697436,0.15416627,-0.08448905,0.08892468,-0.03172896,0.02174743,-0.03129719,0.14054576,0.0382071,0.01449072,0.07730351,0.04848816,-0.04340963,0.06777995,0.06489124,0.09857626,-0.00164101,0.13591146,-0.0969168,-0.08517302,0.08820275,-0.01845304,0.06057552,0.06723584,-0.1301529,-0.05692244,-0.09161891,-0.02745133,0.01827438,-0.07067934,0.07936783,0.10882442,-0.10837719,-0.04666009,-0.05531301,0.1204187,0.06760706,0.0891716,0.0460954,0.02009961,-0.02875833,0.00613059,0.11935587,0.03990117,-0.09323351,-0.09921624,0.13689393,-0.07524034,0.13277332,-0.07987279,-0.07488886,0.02266222,-0.1238484,0.06057629,0.06498067,0.07418875,-0.00937249,0.02847313},
  {0.10858492,0.06518035,-0.09230055,0.01300115,0.07910962,-0.07043473,0.06364758,0.08023889,0.06872357,-0.10536435,-0.0243166,-0.13255048,-0.01827356,0.02507616,-0.08689485,0.04174046,-0.06746843,0.04161131,-0.13768314,-0.0878313,0.02259107,-0.00054762,0.02231521,-0.11392422,0.02142776,-0.0203132,-0.0314367,0.05150659,-0.08588686,0.01304605,0.02020388,0.03012033,-0.06985199,-0.07197956,-0.10732177,-0.04401303,-0.06012808,0.03498489,-0.04073256,0.08313622,0.01552239,-0.06094951,0.02217166,0.08426619,0.10933199,0.1101573,-0.09283935,0.08399421,0.04654572,-0.04822434,0.061246,0.13860953,0.05896957,-0.05298109,-0.0372191,-0.14989758,0.08714753,-0.00302286,-0.04334824,0.05380776,0.12405928,0.12569281,-0.05133057,0.13365127,-0.08059697,-0.06148001,0.13867632,0.10214253,-0.0887953,0.04406201,-0.05173929,-0.05129329,-0.08074562,0.06485602,-0.06819281,0.02869276,-0.08548186,-0.07910267,-0.0469818,0.08053078,0.05365102,0.1132249,0.01605043,0.0241571,0.12812726,0.03081377,-0.01647662,-0.11894502,0.07375418,0.11472564,-0.0232625,0.07783888},
  {-0.08358911,0.04886777,-0.01851657,-0.02397025,-0.03329443,0.02136165,0.10952816,0.13841492,-0.05200483,0.12072714,0.11200417,0.02298887,-0.07476857,0.06555711,0.1287181,-0.05104709,0.0725209,0.10020825,0.0541356,0.0769255,-0.04465593,0.10204514,-0.0565936,-0.0103618,-0.04209177,-0.00631429,0.01334265,-0.0090822,-0.16247222,0.04237233,-0.07049003,0.10185179,0.15494663,-0.06666365,0.02410013,-0.08137485,0.15314005,0.04758475,-0.00024605,0.01323352,0.13336435,-0.00939444,0.11713176,0.12424725,-0.08715934,-0.02050726,0.15184103,0.00109372,-0.12605949,-0.00852068,-0.13410586,0.15301687,-0.08969341,0.00900887,0.06176655,-0.07011723,-0.15217014,0.09279022,0.01492343,0.09472867,0.00201779,0.09516204,-0.0385286,0.11098632,0.11953092,0.10243051,-0.02680943,-0.07006727,0.04065001,-0.0512592,0.12737264,0.05740284,-0.12625258,0.04855593,0.04877366,0.13834915,0.04516206,-0.07688416,-0.03737496,-0.0573285,-0.05633364,0.16001989,-0.15108518,0.10193333,0.00442043,-0.03009816,0.14267787,-0.16270624,0.0358635,0.06039492,0.07230124,0.07246049},
  {0.10134019,0.07411774,-0.02870571,0.00956666,-0.13336633,-0.11687805,0.09623381,-0.00444268,-0.07695499,-0.00034981,-0.03438043,-0.09819077,-0.02163674,0.09458271,-0.04825233,0.09354641,0.02158226,0.10095818,0.07104772,0.07728215,0.08211596,-0.09163237,0.10938162,0.00549508,-0.0735634,0.09751563,0.04611933,-0.04738321,-0.03093995,-0.05092989,-0.00757382,-0.11314947,-0.06132906,0.03663902,0.01142193,-0.1335326,0.07710558,0.03389711,0.0871267,0.10374314,-0.05135679,0.04987095,0.04364412,-0.1280915,0.13361928,-0.11894286,0.00076227,-0.02383957,-0.05407251,0.07477485,-0.04358771,0.1397086,0.10111998,-0.01047182,-0.02782502,-0.13038754,0.0014979,-0.02649811,-0.09761044,0.12682374,0.10043651,-0.0450973,-0.00951725,-0.08535745,-0.12221743,0.08500355,0.00671628,0.0244947,0.0991198,0.00683787,0.07532637,0.10049807,-0.02409359,-0.07348553,0.09650487,0.00051022,0.01614204,0.00981612,0.07770334,-0.03855715,0.17786904,0.06155363,0.05613275,0.05448845,-0.10751744,-0.03840861,-0.02870081,0.09281241,-0.00464703,0.10410312,-0.03170601,-0.08266927},
  {0.15317558,0.02313361,0.01153327,-0.01390495,0.16982888,-0.02572219,0.18177141,0.10698855,0.1275587,0.082352,0.07491969,-0.03037561,0.10053363,0.07556859,0.15531924,0.02818789,-0.05135437,-0.04660228,0.03358581,0.10014698,0.19042745,0.01534267,0.17327014,0.16451982,0.15200578,0.01305913,0.06713863,0.17635983,-0.08392306,0.03843016,-0.05388365,0.00909648,-0.01573813,0.01879589,0.08370389,0.02693712,0.14576356,-0.0038158,-0.1536986,-0.16686168,0.12937051,-0.05798503,-0.06198234,0.1824015,-0.02904508,-0.03500659,0.01323264,-0.06487317,0.0784878,-0.12900704,0.03223358,0.14213505,-0.06620454,-0.04464799,0.15546194,-0.1109529,0.01969592,0.09381516,0.13581234,0.11637793,-0.05753379,0.14751406,-0.03803858,0.08075678,0.174545,0.03819656,0.1542994,-0.13193405,-0.00912169,-0.10192648,0.02643203,-0.04625976,0.02604675,0.03177162,-0.09887594,0.16463254,-0.05091311,0.1031091,-0.03025336,0.04923542,-0.1371638,0.03026973,0.02720458,0.01302942,0.03140347,0.06752431,-0.00058401,0.07322343,-0.0693031,-0.06138691,-0.12252527,-0.18188398},
  {-0.05782544,0.03533712,0.0163078,0.05838892,0.02117962,0.07339838,0.09859626,0.12381842,-0.04130186,-0.03446474,-0.07157018,-0.09626038,-0.00785592,-0.06047957,0.08998204,0.06160621,-0.03000533,0.10813849,-0.00140591,0.06905311,-0.00856508,0.01227161,0.08628364,-0.01194103,0.0601649,-0.05508027,0.11588731,0.03427001,-0.10403167,0.03878179,-0.06827971,0.11071656,0.06413101,-0.10856241,-0.10776747,0.03119629,-0.07125084,-0.03383083,0.02473924,0.02020421,-0.01528459,-0.04489797,0.02836598,0.11755138,0.08034133,0.10197669,0.0917897,0.10517161,0.07100526,0.08398356,-0.07600376,0.12188292,0.10703184,-0.07741504,0.06012315,0.00943413,0.03587258,0.12224387,0.01853028,0.13120161,0.11554593,0.13915719,0.04637104,0.1487285,0.1236757,0.08297981,0.13955782,-0.10149788,-0.0005519,-0.07456552,-0.06055099,0.08037447,0.02924642,-0.1010818,-0.08014809,0.02431746,0.05997007,0.07500315,-0.11980222,0.043667,0.01467703,-0.08834967,-0.06975964,-0.00595257,-0.12033539,-0.12768489,0.10035172,-0.04233513,0.0349577,-0.04799047,-0.00779043,0.04791138},
  {0.00918689,0.11749136,-0.05180689,0.11294267,0.08844288,0.00707581,-0.08078837,-0.09164643,0.04510441,0.13807507,0.0002126,0.11180329,-0.08546332,-0.01264294,0.03543401,-0.04158885,0.09151898,0.07061171,0.10912149,-0.01631888,-0.01379308,0.1420864,-0.06328935,0.06785246,-0.05042845,-0.00785221,0.06293818,-0.01807975,-0.11457309,0.06805827,-0.15324706,0.11419827,-0.05968762,0.0649847,-0.05672331,0.04320143,0.01178189,0.05042375,-0.12178492,-0.04592147,0.08259255,0.04259455,-0.02919372,0.05503668,-0.11571109,-0.12247056,0.09194934,-0.10131413,0.04170812,0.07605233,-0.05526176,-0.01293578,0.00642265,0.08036623,-0.05128695,-0.15435237,-0.02724704,0.10564786,-0.04599456,-0.02319405,-0.09997129,-0.12078881,-0.07957727,0.08714228,0.1186693,0.08888512,-0.09912319,0.00860332,0.00171715,0.08734866,-0.05772185,0.12056223,-0.102236,0.02142175,-0.08289053,0.05450406,-0.0102211,0.04247948,-0.05255219,0.04965592,-0.16583931,0.03957184,-0.04509056,-0.09340861,0.05588793,0.08733732,0.12123036,0.01851853,0.08104874,-0.06138197,0.00907837,-0.0497559},
  {0.06628837,0.10228724,-0.01989436,-0.10051056,0.03478729,0.09393094,-0.01392344,0.11232205,0.1481681,-0.00591976,0.0653352,0.0937399,0.1298562,0.05901571,0.09119749,-0.08917725,-0.08965084,0.01253435,0.01740085,0.01549905,-0.0247366,0.04569513,-0.08788694,-0.09564663,0.09585194,0.07647759,0.05422084,0.06877877,-0.00153044,0.07886131,0.06942039,-0.03409167,0.12317099,0.07834506,0.02919133,0.01183133,0.1061129,-0.09972086,0.04247929,-0.12584193,0.00664221,-0.11256201,-0.01767932,0.14679857,-0.03003745,-0.13237447,0.1007564,0.09984737,-0.08644815,0.04318138,-0.0862373,0.08395351,0.09834276,0.01140692,0.13489817,-0.08388886,-0.16186613,0.1426044,0.12733732,0.10031454,0.04517608,0.14910537,-0.07370441,0.04274639,-0.03980448,0.00045351,0.05411572,-0.01996443,0.15793124,0.05262547,-0.01519284,-0.03883836,-0.01015657,-0.04138484,0.07673398,-0.06465944,-0.0279233,0.05265195,-0.1645146,-0.09838309,0.06277536,0.12030723,-0.10830209,0.01459643,0.06467965,-0.09904616,0.07692678,-0.1276944,-0.01415552,0.1373166,0.12353648,-0.05695182},
  {-0.00397941,-0.00766559,0.05437539,0.06826483,0.13255185,0.14415872,0.03387061,0.07513272,0.09620792,-0.05728678,0.0221155,-0.04686382,-0.04522266,0.06269275,0.01416558,-0.07724445,0.00736358,-0.06388917,0.06499815,0.10946116,0.1414869,0.01246557,-0.0081486,0.1266248,-0.04809989,0.12126605,0.0103664,0.05880027,0.05572991,0.04250498,0.05410719,-0.0180328,-0.08155351,-0.09583659,0.03879346,0.07211062,0.06191717,0.03384596,0.05375923,-0.11339328,-0.01517475,0.05666411,0.16143301,0.14589825,-0.09849399,-0.1465312,0.03687151,-0.00927905,-0.14041382,0.07496716,-0.08156565,-0.0679448,-0.0782443,0.05682474,0.05156885,-0.11901625,-0.00782032,-0.05416882,0.07368913,0.14161399,-0.01734,0.05920173,0.09458316,0.10608913,0.08105046,0.10905013,0.13857523,0.00899938,-0.00653504,0.00302439,0.0264426,0.10477453,-0.15714756,-0.12364461,-0.07181363,0.00031881,-0.11657397,0.09476388,-0.04525208,0.09424721,-0.01826597,0.15574642,0.05837575,0.04436414,0.03501863,0.05125598,0.09656043,-0.1352669,0.0002305,-0.02717197,0.06225076,-0.09711656},
  {0.01304029,0.05045532,-0.09414729,0.06088905,0.08129078,0.06770818,-0.07364223,-0.06324407,-0.13468972,-0.07075952,-0.05122432,0.03346006,0.07537778,-0.11672951,-0.04916043,0.07608228,0.06562778,0.0774202,-0.12372229,0.03660067,0.04275462,0.05484755,0.05291773,0.09248904,0.07008009,-0.06333834,0.00544901,-0.02142714,0.09574456,0.0270157,-0.05696335,0.07363752,-0.08633268,-0.06246479,-0.00777055,0.0503461,-0.11672939,-0.00153884,0.04050165,0.02752294,-0.09731454,-0.07177549,-0.01161338,0.04032107,-0.10969914,0.08382075,0.01962822,0.10320891,-0.00623211,-0.07893676,0.0171479,0.01061569,-0.04244081,0.13034697,-0.00728699,0.06768569,0.07052112,0.13021764,0.06817006,-0.06699894,0.04388924,-0.05001312,-0.09964021,0.13812698,-0.01313697,0.02563734,-0.03745856,0.08306924,0.03394355,-0.03451699,0.10369015,0.03358304,-0.1153897,0.05100333,0.06730118,0.08568934,-0.00836355,0.12882805,0.07117502,-0.1048708,0.11718313,-0.04417201,-0.02052698,0.04717214,-0.01836067,-0.07781079,-0.0019263,-0.04754332,-0.06996166,-0.08994975,-0.05499228,-0.04954228},
  {-0.090165,0.02760339,0.09742635,0.04459744,0.03314853,0.13796586,0.13842037,0.08182482,-0.0209031,0.1685159,0.07535072,-0.01814718,-0.03990483,-0.06198125,-0.07914934,0.12682287,0.01174731,0.12284582,0.12614827,0.01984324,0.06109389,-0.0089693,-0.02800845,-0.08971599,0.13532649,0.0837028,0.13700055,-0.09848754,0.00786209,-0.05594231,-0.04518688,0.11430156,0.01510182,0.06421962,0.00033461,-0.15377899,0.07411759,0.05778235,0.07788911,-0.11884376,0.07657652,-0.10421887,0.13723941,-0.06847072,-0.06346489,0.10063869,-0.01281473,-0.01792189,-0.10905206,-0.01741607,0.0141473,-0.03184254,-0.02216761,-0.04818533,0.10398138,0.11346953,-0.00231905,-0.04107996,0.09693087,-0.01521301,-0.06598662,0.02508463,-0.00954213,-0.04146594,0.03699846,-0.05465139,-0.00396587,0.03550578,0.03551824,-0.00024313,-0.05654954,0.14655335,-0.0851698,-0.08595955,-0.16695404,0.00819858,-0.12901878,0.09545471,-0.07652545,0.05752928,-0.04325473,0.0188113,0.02608777,-0.01101311,-0.10954846,-0.08317615,-0.00186549,-0.06105941,-0.04750377,0.04753547,0.12106268,0.00437835},
  {0.12089701,0.0106157,0.01273942,0.10957604,-0.06260084,0.00121383,0.02384526,0.12136409,-0.00955525,0.09666328,0.10312636,-0.02144096,-0.02388679,-0.09995315,0.06278723,0.01847259,-0.09450263,0.03062553,0.06143272,0.10941283,-0.05829155,-0.05960336,-0.02696142,0.04717617,0.04606593,0.06059472,0.05881471,0.07119276,0.05373178,0.01887902,-0.01030637,-0.05890264,0.04673249,-0.16431038,-0.05158437,-0.15535176,0.08709938,0.0093439,-0.05970632,0.00152653,0.09946557,0.07470971,-0.02506342,0.02569272,-0.08885677,0.01935877,0.05114998,0.04477804,-0.01245833,-0.10143555,-0.01762857,0.06887189,-0.11493323,-0.15203683,-0.06045838,-0.10242749,-0.01263468,0.07346798,0.02502337,0.01623705,-0.04765476,0.04607919,0.01931148,0.10107204,-0.06263106,0.0699423,0.13727877,0.03038503,-0.10191919,-0.14840308,0.16656817,0.13175726,0.06078162,0.07381201,0.06095878,-0.07637095,-0.10747634,-0.08146679,0.02842045,0.00296675,0.04372349,-0.06549015,0.01413323,0.0058646,0.04601069,-0.13514546,-0.03367375,-0.17266004,-0.12412918,0.09870718,0.11060868,-0.06604633},
  {0.02590852,-0.0423714,-0.01614631,-0.06854725,-0.06318492,-0.09023634,-0.08422501,-0.01035384,-0.07650284,0.01501742,0.13979645,-0.0442615,0.00443217,0.1128221,-0.05253117,-0.02394481,-0.06417701,-0.09367444,0.09100679,0.09706503,0.05831399,-0.07809454,-0.04669892,-0.09404942,0.02398036,-0.01847809,-0.0159883,0.08411244,-0.08023632,-0.10488123,0.11208209,0.05093436,-0.08890837,0.0558642,0.02662322,-0.18264668,-0.02226251,-0.08545792,-0.07807182,-0.04016192,-0.00072119,-0.08733682,0.06860355,0.10839374,-0.11573987,0.01589479,0.10498073,-0.09381632,-0.00890199,0.03581953,-0.04192167,-0.10174214,-0.02533887,-0.13899426,-0.01053046,-0.0482592,-0.09696457,-0.03186371,-0.05499369,-0.07959737,-0.00840452,-0.04954433,0.1177182,-0.04057881,0.10437837,-0.02060858,-0.04971727,-0.1644264,0.04791952,-0.15568982,0.07536397,-0.03278787,0.08067928,-0.04349508,-0.0384388,0.1160528,0.05424864,0.06320032,0.04276306,-0.00166996,0.11983389,-0.07550246,0.00561477,0.11632795,-0.0108166,0.07027788,-0.02934949,0.02585856,-0.05302242,0.06644268,0.04668627,-0.1395831},
  {-0.01342365,-0.08124115,0.11918695,-0.05662054,-0.02674615,0.09542524,-0.01337986,0.14024684,-0.08384631,-0.03705382,0.05333886,0.09951288,-0.09070614,0.13879643,-0.05717968,0.07453816,-0.06467181,0.05429005,0.060521,0.06955706,0.07591753,-0.04831644,0.08031461,0.01576002,0.13427576,-0.0423472,0.03133525,0.14222918,-0.12925917,0.0895884,0.08835705,0.00676472,0.13609293,-0.03775609,-0.11135266,0.10933058,0.00332134,0.11383443,-0.11924241,-0.06316286,0.13406669,-0.03410852,0.1323619,0.08596016,-0.11470248,-0.1612354,-0.03103725,-0.1263843,-0.06854656,-0.00566967,-0.02723338,-0.03886506,-0.01940173,-0.01666557,0.01232706,0.00645981,-0.13460018,-0.05668095,0.00021846,-0.04108563,0.05087986,0.14126688,-0.0370308,-0.05780837,-0.03563363,0.12429959,0.02833776,0.02963467,0.06895585,-0.04591123,0.14086728,0.14377397,-0.09893346,0.0239894,-0.09114254,-0.03251521,-0.03881521,-0.00208175,-0.01954135,0.15332507,-0.01378774,0.03741011,0.06878535,0.05189303,-0.05746147,-0.00149026,0.1617582,-0.02341078,0.00481581,0.04521339,-0.01633615,0.05854752},
  {0.08987355,0.1359759,0.1068436,-0.08273962,0.07669402,0.15294608,0.03083455,0.12757902,0.14019977,0.16424684,0.07044954,0.02216985,0.08876637,0.06366239,-0.03977786,0.04168163,0.15027364,0.04317334,-0.03173955,0.08618694,0.16885433,-0.06565892,0.0564819,0.05642937,-0.02597456,0.09802024,-0.0081811,-0.00783935,0.03975509,0.05892998,-0.02883956,0.06467526,0.04587402,-0.00907724,-0.05378568,-0.049548,-0.00439233,-0.03304584,-0.04045971,-0.10447919,0.03851044,-0.13803212,0.09171457,0.13741243,0.03046548,0.02202632,0.02227099,-0.1441152,-0.17191853,0.02493998,-0.03750542,-0.01852607,0.03757383,-0.1230935,0.12088145,-0.16451693,-0.04698706,0.15729006,0.07583097,0.1276807,0.03623786,0.05090259,0.05019201,0.0088918,0.13470146,0.11673836,0.01785845,0.05864608,0.02585391,-0.17085429,0.11151656,0.00401987,-0.07177152,0.0260229,-0.06072888,0.01809079,-0.16708498,-0.03114369,0.04294219,0.15279095,0.04210671,0.07847051,-0.1468164,0.11716541,-0.03815566,-0.03683831,0.16518162,-0.13115227,-0.06211956,0.01087528,0.06169462,0.0311262},
  {0.07356959,0.0753943,0.09134105,-0.09519106,-0.06544957,-0.02303647,0.14026941,0.06381142,0.12909769,0.04566176,0.13501617,0.05832955,-0.03493346,0.03432336,0.09424947,0.00050653,-0.07999001,0.13725889,-0.02060829,0.14642054,0.13433461,-0.01315484,-0.03630766,-0.07792746,-0.11140386,-0.03512975,-0.07841144,-0.03423928,0.00887955,-0.0428286,-0.04165539,0.07006244,0.12340459,0.02502293,0.10125478,-0.10620433,-0.07031877,-0.10466765,0.04786405,-0.04771863,-0.06020086,0.06093172,0.0233355,-0.03607835,-0.02158851,0.0943811,-0.07967503,0.1015791,0.11872383,-0.1218565,-0.01438463,-0.01479804,-0.03558422,0.05070467,0.10481799,0.01361879,-0.08872578,-0.00778751,-0.09916564,-0.0321273,-0.08928695,-0.0201415,0.06502476,0.06957342,-0.08416775,0.01251562,-0.01435664,0.00689016,0.01916527,0.04442117,0.1163223,0.00179132,0.02620701,-0.01987842,0.00579062,0.03783934,0.12497333,-0.10322995,0.0939424,0.1147417,-0.14457399,0.10811659,-0.01583408,-0.05232511,-0.12613778,-0.00749591,-0.01301526,-0.04499287,-0.05631598,0.05052493,-0.00558214,-0.07659004}

};

float Bias0_i[64] =
{
  -0.02643798,0.14661325,0.06915456,0.00323855,-0.02200666,-0.05228782,0.0238114,0.02001959,-0.02076572,-0.15231415,-0.01182689,-0.08711568,0.19306815,0.08993546,0.05596296,0.01164455,0.17009229,0.25973831,0.13246611,-0.02876842,0.0743944,-0.06622974,0.00874409,-0.11092862,0.16444837,0.19096845,-0.01798113,-0.0783491,0.04639985,-0.07132243,0.09655523,0.04108234,0.15159306,0.20598548,-0.00691405,0.17811811,0.06440575,0.15600476,-0.00046537,-0.07083614,-0.10118185,0.09282895,0.06019537,0.2203726,-0.01977164,0.17232974,0.06851021,0.01599844,-0.08994797,0.00182823,-0.04692,-0.15895493,0.19579738,0.08948581,-0.16650357,-0.05323966,0.09259756,0.16096935,0.19270582,0.02987073,0.10885272,0.09095018,0.09362936,-0.05269367
};




float Weight0_c[64][28 + 64] =
{
  {-0.00368229,-0.08601598,0.05856947,-0.02723394,0.0195976,-0.13025491,-0.11623017,0.03719193,-0.0822759,-0.08104597,-0.09130123,-0.06233622,-0.12371261,0.00262668,-0.03190086,0.00119068,-0.00208478,0.01354633,0.04473691,-0.00986168,-0.10074733,0.08401727,-0.14354752,0.01771608,0.08430005,-0.10733768,-0.00566083,0.04721696,-0.05557415,0.14271112,0.03201344,0.08367597,-0.00773507,0.10013364,-0.03110931,0.02647768,-0.11188355,0.06923638,-0.00396714,-0.00551685,0.00560933,-0.02732967,-0.02246043,-0.15362315,0.03607688,-0.05607444,-0.06217946,0.11078672,-0.04696074,-0.03920236,0.06001244,-0.02098259,0.16176745,0.0283533,-0.0254314,0.06846474,0.08229101,-0.0134534,-0.06756605,-0.02641569,0.13296087,0.02891396,-0.14689791,-0.12797676,-0.06941066,-0.1765838,0.06121019,0.1442067,-0.14389175,0.12910326,-0.05036353,-0.08609903,0.02973362,0.05205549,0.13456462,-0.09398466,-0.0521374,0.05496382,-0.08036558,-0.14382523,0.11889288,0.05649798,-0.07555944,0.09188631,0.14601532,0.00348067,-0.07849504,0.03568668,-0.07368878,-0.05916106,0.04152374,-0.07256684},
  {-0.04718627,0.05307021,0.05569671,0.07299172,-0.12538564,-0.09457462,-0.05662085,-0.01885741,-0.13211657,-0.01010221,0.0286185,-0.0353361,-0.05701873,-0.00751777,-0.13602525,-0.13537087,0.00144471,-0.02010126,0.01211971,-0.11285502,-0.1283114,-0.12455991,-0.02588944,0.0807282,-0.048569,0.13667512,0.0844507,0.02363476,-0.10515311,0.08174005,0.02674259,-0.1269242,0.06486588,0.05574131,-0.07771775,-0.04694841,-0.07211173,-0.10597545,-0.01773218,0.00290248,-0.05093526,-0.0390966,0.0140315,0.13079493,-0.01647651,-0.09015419,0.0607921,0.02110994,-0.1287935,0.07144586,-0.12335188,-0.07584976,-0.10282805,-0.11052798,-0.01978836,-0.0327535,-0.0700976,0.0858037,-0.08211255,0.026036,-0.08460375,0.00550502,0.02944767,0.04274323,-0.01251711,0.08213787,-0.01640979,-0.06492001,-0.08618155,0.02476687,0.05964849,0.08852609,-0.07549717,0.00823779,0.08830862,-0.03550285,-0.02661036,0.0801298,0.00782033,0.00273188,-0.07206528,-0.0647006,-0.06448061,-0.0957505,0.07986262,-0.04040559,-0.01493415,-0.06758671,-0.01641865,-0.01556305,-0.00412481,0.05876762},
  {-0.12094648,-0.05944325,-0.05465507,0.06798149,-0.1267052,-0.13008554,-0.11290015,-0.01882159,-0.08781976,0.00378668,-0.11673607,-0.05109724,0.01819332,-0.01722021,-0.01328772,0.09841691,-0.12175766,-0.03801496,0.10347569,0.04873209,-0.00892166,-0.14126049,0.02304231,0.09412673,0.06327222,0.02059152,0.0888762,0.03534752,0.05123825,-0.05376371,0.01310042,0.07039183,-0.10718438,-0.03886613,-0.08290903,0.02091409,0.01540582,-0.10458997,0.03194385,0.03216401,0.001847,0.11334106,0.0741557,-0.09131498,0.13569877,-0.01736746,-0.05762411,-0.0585738,-0.08012531,-0.0764323,-0.07692236,0.12076082,0.09393014,0.10635661,0.11567638,0.00841315,0.07896236,0.06411061,0.01620284,0.04188836,0.11870733,0.00617026,0.03593461,0.02016948,0.0787302,-0.01016692,0.09290363,0.04364675,-0.01508434,0.10475619,-0.00091338,-0.06912407,0.07072067,0.01725875,0.06352936,0.11260551,-0.09516674,0.08548011,0.11277418,-0.09774015,0.1712022,0.09422254,0.01545624,0.11974449,0.0372693,-0.0020767,0.05218017,-0.05589875,0.0665598,-0.00276618,0.00423098,0.01380468},
  {0.1059666,-0.05549606,0.00369192,0.10334347,0.02676611,-0.0218868,0.14344107,0.14524001,-0.02311824,0.01106667,0.08989017,0.13302062,0.07527608,0.02288439,0.12020606,0.15166447,-0.08424719,0.02569799,0.13777481,-0.07182675,0.05739595,-0.07518786,-0.03007561,0.12336644,0.06453908,0.11450482,0.02363616,0.03295712,-0.04894606,-0.0771118,-0.06306639,-0.05451071,0.1232822,-0.07735072,-0.06813265,-0.02514382,0.01804646,0.1065971,0.10609639,0.08897094,-0.00366709,0.09535955,0.01095007,-0.09499089,-0.03453575,-0.08248943,-0.0266082,-0.0906413,0.08600219,-0.06206464,-0.00956103,-0.13794485,-0.09212419,-0.02392947,0.00308036,-0.05210407,-0.03317419,-0.05944708,-0.00821793,-0.083357,-0.08105098,0.01185047,-0.05343374,-0.0150755,-0.00260956,-0.06314326,0.02638992,-0.05125996,0.08352961,0.10884915,-0.08356302,-0.05853017,0.05315823,0.04247739,-0.0265051,-0.08429103,0.06941974,0.02104393,0.07987771,-0.04186447,-0.0874209,-0.03155249,-0.03787468,-0.08933059,-0.01057194,-0.08166178,-0.06719882,-0.01789029,-0.05847915,0.00463326,0.05888809,0.08963313},
  {0.04026169,-0.04914496,0.00898962,0.06223718,-0.06641661,0.11129615,-0.09980626,-0.0280202,-0.08076964,-0.0858771,0.04125974,0.05012761,0.1281524,0.04468945,0.02966692,0.09790281,0.03800126,0.1136279,0.02329201,0.01343738,-0.01005377,0.0226369,0.13484263,0.1177176,0.0468338,0.09510388,-0.03074771,0.10967059,-0.03231724,-0.05003932,-0.10587309,0.00639477,0.04758696,0.12912862,0.10141943,-0.08713946,-0.10176563,0.00566464,-0.14057456,0.10486319,-0.05797007,0.02610463,0.10658885,-0.07640734,-0.08944587,-0.00607821,-0.1370427,-0.04793894,-0.06432677,0.00712672,0.08655094,0.10002053,-0.12970906,0.08852859,-0.10520915,-0.03894093,-0.06798285,-0.08023787,0.11387791,-0.07178924,-0.1216802,-0.05108554,-0.04446277,-0.12794843,-0.03827766,-0.14859362,-0.06673975,-0.07492644,0.08134963,0.08433378,-0.09635314,-0.05963511,-0.04187976,0.02637203,0.05856246,-0.05968316,0.12896162,-0.01577503,0.01841308,0.10993335,-0.13622864,0.01178726,-0.05935201,0.00474902,-0.03262363,0.04024522,-0.00871452,-0.05569679,-0.07079317,0.11345548,0.00383273,0.02812687},
  {-0.10518523,0.03774511,-0.08133011,0.00557163,0.11292814,-0.00493563,0.07480196,-0.10845134,0.01984187,0.11763907,-0.01376105,-0.09665973,0.05086719,-0.01274578,0.05709233,-0.04808182,-0.09585354,0.08787264,0.05695583,-0.06263763,0.0429896,0.07101142,-0.02886101,-0.05297614,0.02570354,0.05231756,-0.00739995,-0.03154126,-0.01048086,0.03417657,0.07170136,-0.04558577,0.04944823,-0.05819214,-0.04490653,-0.10128185,0.02142593,0.07586042,-0.04020744,-0.06137804,0.05647767,-0.0416446,-0.04815977,-0.02991839,-0.00964244,0.10685997,-0.13290566,0.04800123,-0.05527005,-0.02624784,0.0080299,0.02076007,0.10882878,-0.01305967,-0.01452376,-0.04882308,-0.0666816,0.03067842,-0.01665919,0.0068408,0.05986919,0.05754305,0.00412013,-0.02211281,0.10552942,-0.08858901,-0.11198591,-0.0192105,0.07510708,0.10307012,0.04547638,0.01457753,0.11565495,0.05999155,0.1173337,-0.06139699,0.04237676,-0.07881889,-0.07460121,-0.07158095,0.11015578,0.0948567,-0.07949279,0.01916701,0.00555736,-0.03702223,-0.04666436,0.13534789,0.06813478,0.01911969,0.00764608,0.13073069},
  {-0.0752786,0.01535654,-0.15248044,-0.02813501,0.0695447,0.0374836,0.01116501,-0.02587548,0.01185395,-0.11339308,-0.09007096,-0.11785848,-0.05551554,0.09397564,-0.00723872,-0.07323282,0.05319855,0.01407296,-0.05381461,-0.1302827,-0.08764176,0.07000406,0.07429677,-0.14521194,0.0730501,0.05160101,0.04075257,-0.10719686,0.02941941,0.06047554,-0.05920653,-0.12164845,0.0399581,0.09711718,-0.0311394,-0.05728202,-0.07597828,0.02483907,0.12772575,0.11978123,0.05007628,-0.07182933,0.03849803,-0.04893548,0.13402608,0.0063995,-0.14860888,-0.03258992,-0.0742013,0.07421926,0.00244271,-0.01873225,-0.0325711,0.06503377,0.06180504,-0.06786685,0.1166314,-0.12063172,-0.05327678,0.07748558,-0.00835999,0.03425918,-0.09889919,0.01604227,-0.13170366,-0.11423778,-0.12952575,0.0007633,0.02534477,0.05859281,0.05084421,-0.00839539,0.0587714,0.08940712,0.06955239,0.05059228,0.10588722,0.06686024,0.01271284,-0.08091685,-0.01527236,-0.12987065,0.04395198,-0.05508796,0.17212081,0.05423977,-0.10032092,-0.08640146,0.1360155,-0.10474426,0.08407687,-0.05683175},
  {0.05791229,0.06685199,0.05376485,0.02153232,0.14625014,0.10753853,-0.03636365,-0.0616314,-0.05855617,-0.0772768,-0.11654743,0.0743921,0.08535612,0.05666164,-0.07337881,-0.10381591,-0.03536539,-0.11795049,-0.02135289,-0.11667382,0.00791881,0.04706807,0.0765456,-0.00151858,0.05418434,-0.03771029,-0.0047683,0.05399681,-0.0061992,0.04162306,0.06471392,0.09167818,0.0844261,-0.08456706,-0.03140554,-0.00335692,-0.05895859,0.04612264,-0.0911308,-0.12075046,-0.10534058,-0.09503644,0.09119763,0.02707215,-0.02138649,0.06487737,0.10250515,0.02324548,0.08285993,-0.05852496,0.04647388,-0.06528532,0.10864417,0.08798805,0.06839888,0.0071414,0.07508437,-0.09297279,-0.07532837,-0.10225442,0.00968183,-0.09949364,-0.10737388,-0.00151951,-0.11879895,0.01819516,-0.01399068,0.0795477,0.10093359,-0.00638489,-0.05262033,-0.03112595,-0.07769862,-0.03137998,0.05684058,0.10819954,0.02218432,0.02419103,-0.02539896,-0.04095523,-0.14670834,0.06825576,-0.07168782,-0.04197296,0.05173642,0.06993306,-0.04252074,-0.05749231,-0.05365773,-0.0087452,-0.0877156,0.06097623},
  {0.00924641,0.00954619,0.07449696,0.08587495,0.0604164,-0.09534233,0.08220243,0.07548536,-0.08857381,0.09809771,-0.05655513,0.06784866,-0.06810199,0.01159489,-0.03749743,0.10969312,0.00950422,-0.04103393,-0.0341144,-0.03461767,-0.05684015,0.03124612,0.06848625,-0.08003408,0.05792756,-0.11439528,-0.12198167,-0.01315573,0.04567543,-0.10565168,0.07776905,0.07486568,-0.05627739,0.05639677,0.07923005,0.09080604,0.04376632,-0.04663185,-0.05987091,0.08249196,0.13692197,0.05434076,0.00409152,0.05361184,-0.01058381,0.02770899,0.02574548,-0.06939279,-0.06029493,0.01977533,0.06941077,-0.0436184,-0.04791413,-0.16773936,0.07662818,0.04836801,-0.07395257,0.09479729,-0.03342007,-0.0606683,0.09956407,-0.04801522,-0.11458042,-0.08017483,0.05177351,0.06287127,0.11579482,0.108767,0.09458055,0.02645782,0.09978224,0.00485174,-0.04726162,-0.01618868,0.01471862,0.00171092,0.12559488,-0.08838946,-0.08980533,-0.03114392,-0.17380047,-0.06934831,-0.04086284,-0.04313418,0.11739933,0.13582245,-0.0143017,0.02501144,-0.01170214,-0.11187498,-0.00629725,-0.06358044},
  {0.07790122,0.13254716,-0.05354922,0.03521855,0.03150363,-0.06420942,-0.06260698,-0.00563758,-0.09927609,-0.0788912,0.04413787,0.05365201,-0.09358368,0.06315348,0.09702107,0.11426048,0.01289638,0.10315282,0.13829048,-0.07502621,0.1257127,-0.00217635,0.07207792,-0.03827668,0.00735995,0.06874913,0.14209546,0.05754646,0.02020963,-0.10547341,0.05686212,0.01195488,0.11208808,0.07286012,-0.00630928,-0.00583051,-0.06075619,0.05444373,-0.03675672,-0.10534486,0.02999244,0.06945378,0.02963142,0.07728637,-0.11187904,-0.07329567,-0.10252246,0.0326204,-0.00533584,0.01943037,0.01140521,0.08308338,-0.03139804,-0.13352995,0.07690218,-0.098858,0.13743332,-0.127075,0.03242829,-0.08000641,-0.07839255,-0.05219892,0.11056068,-0.00741912,0.03895655,-0.02136323,-0.00530441,0.08546044,-0.0272959,-0.05434541,0.07127383,0.02326968,0.12122378,-0.1313568,0.0466793,0.13638029,-0.04084363,-0.08704831,0.11910719,-0.0348914,-0.08338553,0.0678033,0.0818712,-0.15535367,0.06883188,0.12282093,-0.01215298,0.11438307,0.1096312,-0.02368391,-0.04900056,-0.06112955},
  {-0.03839276,-0.01295649,0.00876805,0.07591588,-0.09341171,-0.04246968,-0.09532279,-0.13983694,-0.11963954,0.08538952,-0.04652022,0.0753262,0.05570102,-0.09852391,-0.02391499,-0.12802662,-0.02113573,-0.09281951,-0.12911479,-0.03886045,0.01484654,0.06385077,0.08521032,-0.02794744,-0.0262404,0.04524509,-0.1523289,-0.00144875,0.12931873,-0.02219422,-0.08228134,-0.09466444,-0.08581252,-0.04217826,0.07359596,-0.05002468,-0.01338139,-0.14828789,0.125229,-0.06322744,-0.06842452,0.07371158,-0.10627515,-0.06862088,-0.07922541,0.06220789,0.07539883,0.08641375,0.02233312,0.06505843,0.07493164,0.05127463,0.15206458,0.03349242,-0.07881591,0.05947806,0.05234623,-0.06545068,0.05094841,0.08274932,0.03032907,-0.11386931,-0.08264064,-0.06765811,-0.10536167,0.01365235,0.04549712,0.00079019,0.09080575,0.1246495,-0.12708683,-0.03587301,0.09006472,0.11611325,0.00331712,0.0319283,-0.03632543,-0.07965857,-0.05697811,-0.10530844,0.0108653,-0.09749853,0.11180381,-0.08401056,0.10055567,0.07793812,-0.06432359,0.03186382,0.13856502,-0.08101144,0.09093813,0.03618427},
  {-0.07154808,-0.01603465,-0.14462784,0.03375725,-0.10377534,-0.13035175,0.08754068,0.01473871,-0.00895976,-0.14085028,-0.050816,-0.00753843,0.03154923,0.08044876,-0.13557103,0.09020424,-0.1480735,-0.04831516,-0.0673948,0.06620259,0.00753084,0.07393926,-0.11082774,-0.13690053,0.01791718,0.05285367,-0.04472979,-0.06726373,0.13640594,0.09943414,-0.01078518,-0.0725806,-0.03450219,-0.02747536,0.10240449,0.10620014,-0.04536737,-0.08440439,-0.05950475,0.10825644,-0.1209587,0.10969476,-0.02635336,0.04859274,-0.081268,-0.07165607,0.07587706,0.156589,0.07895,0.08891901,0.06943437,0.1207104,0.07416775,0.00913608,0.00642483,0.00014976,-0.01506154,0.00794251,-0.11250922,-0.12032796,0.03543442,-0.03174137,-0.14482199,-0.05191179,-0.12172731,-0.04589403,0.10801573,0.06627992,-0.14640853,0.11363924,-0.07097454,-0.10917643,-0.00033005,0.12734513,0.13696569,-0.11204801,-0.03597946,0.06138264,-0.02593608,-0.02580702,-0.03557437,0.01342813,-0.08847831,0.02806542,-0.05015531,-0.04678276,0.03365951,0.10946677,0.04002164,-0.04393829,0.09930573,0.01687699},
  {0.10530671,0.05362144,0.08501899,0.08172329,0.13623297,0.05729692,0.05269071,0.1112083,-0.09628742,0.05446183,-0.00413058,0.13824855,0.02031685,-0.04834632,-0.00075656,-0.05815255,0.11486707,0.12900202,0.02663027,0.07238644,0.09288437,-0.02779714,0.07337794,-0.00062432,0.0110702,0.02703715,-0.08977041,-0.01085291,-0.06523358,-0.08229978,-0.07401475,-0.07542079,-0.06850325,0.11616881,0.00464581,0.03302444,-0.08316882,0.1340095,-0.06293126,0.07953115,0.01654994,0.00227821,-0.03033747,-0.04582888,0.05469752,0.11949743,-0.00992054,-0.11595684,0.04712657,0.0949693,0.07017352,0.05109838,0.07088977,-0.06455767,0.0201648,-0.11263367,-0.03765686,0.091084,0.05445469,-0.10666086,-0.05722942,-0.09555239,-0.10130702,-0.14636242,-0.08117536,0.0108253,-0.04310181,-0.05372426,-0.10086796,0.10520468,-0.02381534,0.05663826,0.09827226,-0.10113255,0.13272016,0.10736556,-0.00406891,0.03066527,-0.08844672,0.04274719,-0.09801865,-0.0268577,0.07019562,0.0667104,-0.0433451,-0.00509937,0.08361256,-0.10461545,-0.1259986,0.06933926,0.00326396,-0.10354518},
  {-0.12139751,-0.0827494,-0.00663445,0.0586686,-0.0743347,-0.03664971,-0.1049726,0.01550577,-0.00612046,0.10990009,-0.11954109,-0.12267499,0.02512383,-0.02486387,-0.14012548,-0.12766969,0.08706423,-0.10355937,-0.11220153,-0.11569963,-0.05050134,-0.05268177,0.03776146,-0.11079698,-0.06731074,-0.13732041,0.07383815,-0.07126518,-0.04297262,0.06509584,0.01054446,-0.15661518,-0.17547712,-0.02548573,-0.05162591,-0.03256274,-0.04037997,-0.13210273,0.1173833,0.04373692,-0.06347296,-0.04314734,0.03346919,-0.06798383,-0.05335829,0.1192274,0.09829201,-0.09844045,-0.13932334,-0.0152759,-0.02346756,0.02706261,0.073266,-0.16378039,-0.02338169,-0.0656689,-0.10431001,0.04163188,0.09241096,-0.04599068,-0.10138708,0.0539781,0.12948295,0.09833847,-0.02831038,-0.00535566,0.03469441,-0.01996949,-0.0816346,-0.10942921,0.10853732,0.00043674,-0.14090882,-0.05150732,-0.06289411,-0.11045616,-0.04080531,0.14967208,-0.02787976,0.08122098,0.14428516,-0.12422066,0.03292143,0.12568769,0.05373943,0.05118466,0.04664817,0.00097815,0.03604222,0.0117484,-0.1087231,-0.08175982},
  {0.12831461,0.06433579,0.0343005,-0.02481175,0.02855276,-0.06044808,0.09854166,-0.11119312,0.01212979,0.10838345,-0.01509483,0.10102253,0.11233862,0.06471255,0.05089509,0.01353815,-0.10118515,-0.06210374,0.07675255,-0.06748417,0.0981686,0.0184323,-0.03230406,0.02336342,-0.08065277,0.07985891,0.03823864,-0.08835679,0.01023713,-0.02390228,-0.00966106,0.05044482,-0.05884539,-0.02676154,-0.01859392,-0.02637622,0.12120476,-0.05131337,-0.05427601,-0.04325282,0.05922507,-0.03191465,0.06730267,0.04339076,-0.11611942,-0.08743489,0.15010525,-0.09415578,-0.03489837,-0.0556209,0.03441921,0.02865055,-0.0082115,-0.13114555,0.11873257,-0.0308679,-0.00390315,0.01858589,-0.01691679,0.07290765,-0.12343956,-0.03225574,0.14114904,0.04761271,-0.06039354,0.05609087,-0.06183052,-0.04105243,-0.02914881,0.08700775,0.02660085,0.04564891,-0.02937553,0.09147543,-0.08100805,0.04597238,-0.06003816,0.09341843,0.01849566,0.03186829,-0.05694755,-0.04671067,-0.09670959,-0.01128946,0.09255096,-0.07614182,-0.05424703,-0.01233495,-0.09529637,-0.03179574,-0.03685562,-0.03149674},
  {0.0477303,0.12898345,0.02007777,-0.10161479,0.07091948,0.06181461,0.11735207,0.00371398,-0.06687633,-0.01176182,-0.07559021,-0.04570293,0.13476023,-0.01767535,-0.06695647,0.08428314,-0.095512,0.13385354,-0.00888713,-0.00582914,-0.07301327,0.10390706,0.03524118,0.11344257,-0.05147076,-0.08208378,-0.04173538,-0.05156758,-0.05533658,-0.10829723,-0.01254212,0.06900141,0.0727956,0.06082571,-0.04799851,0.05353559,0.11947506,-0.01076927,-0.02744649,0.06755216,-0.01955688,0.07473329,-0.09642011,0.12430982,-0.01681012,-0.07037925,-0.00565687,-0.04876125,-0.03541584,-0.101826,0.03792961,0.08186148,-0.08598429,-0.00724719,0.06650981,-0.04085796,0.03926993,-0.00751328,0.05351224,0.01546968,-0.08309288,-0.13161778,0.03189864,0.05678691,-0.03900718,-0.00400854,0.02919462,-0.12817174,0.12504482,0.11586004,0.08376827,0.10040917,-0.07375587,-0.10955871,-0.08218309,0.07188382,-0.01668657,-0.09847852,-0.07711758,0.00602378,0.02874163,0.10484081,-0.06703451,-0.05493465,0.05451882,-0.02300892,-0.10861465,0.05784732,0.08578202,-0.09544866,-0.0116776,-0.13755961},
  {0.01838403,-0.13338797,0.02743859,0.07080889,-0.05979655,0.01021209,-0.09096237,-0.0710175,0.01125026,-0.13472886,-0.09032669,0.09445949,-0.05302321,0.0592592,-0.00199606,-0.12535968,0.03597045,-0.11372682,-0.09999526,0.05223158,-0.03308605,0.09248418,0.06073371,-0.1447433,0.02010652,-0.06931318,-0.08567235,-0.02073501,-0.07711512,-0.03135333,0.02382445,-0.01555061,0.02898004,-0.10407729,0.07284343,0.01726596,0.08184271,-0.06420148,-0.07687405,-0.03613212,-0.0533157,0.14943855,0.06038939,0.02881733,0.05016129,-0.01786322,0.12642713,-0.04429446,-0.09913373,0.05731225,-0.10350918,-0.041611,0.08345468,0.10210065,0.02556713,0.03798462,0.00679938,-0.10810736,0.07979982,0.03731678,0.05093478,-0.06722122,0.04120537,0.03327167,-0.08253112,0.00525841,-0.05782853,0.08769248,-0.0678187,-0.09737395,-0.08243373,-0.06510097,-0.01129914,0.03640576,0.05199718,-0.02665003,0.05072584,-0.02006227,-0.02704849,-0.00021389,0.05282411,-0.03399548,-0.04922689,-0.04882924,0.09126749,0.06736043,0.02098708,-0.11827978,-0.11202071,0.08025018,0.1033312,0.08120789},
  {-0.02187983,-0.0596034,0.1089423,0.11815335,0.08249888,0.0018673,0.00851297,0.09510742,-0.06625803,-0.1353854,-0.0736318,-0.05459985,-0.01985984,-0.1111073,-0.05692814,0.07640263,-0.11956323,0.06710263,0.07719538,-0.04492683,-0.09993018,0.06520054,-0.00025723,-0.1205517,-0.05367068,-0.05576875,-0.10365707,-0.11330078,0.0938726,0.05333907,-0.04646843,0.07381684,-0.00140835,0.00533981,-0.10957712,0.04423973,-0.03973076,-0.09906375,0.01839964,0.02393006,0.04545263,0.06591029,0.10063059,-0.0102457,0.10577095,-0.03371799,0.0879084,-0.06668206,-0.06672906,-0.08053239,-0.08200741,0.05077253,-0.0110054,-0.0732073,0.03170855,-0.07364856,0.00980486,-0.02665645,0.02733392,-0.11514983,-0.0468152,-0.03263343,0.08143809,0.1271277,-0.13229364,0.02244331,0.05420259,0.0892387,0.04844007,-0.10477699,0.10562802,-0.11263286,-0.05130275,-0.09218511,0.05968463,-0.0480806,0.03088333,-0.00592913,0.03211465,0.06346648,0.03005052,-0.04249614,0.09946532,-0.06899605,-0.10430732,-0.13862081,-0.05547278,-0.0854168,-0.00258569,0.06138927,-0.13984746,0.09779494},
  {0.10474136,0.12033921,0.02784148,0.04812277,0.01070419,0.02302478,-0.05405393,-0.02636305,-0.08161464,-0.07212494,-0.08513365,-0.09140694,-0.00089147,-0.02763865,0.00501356,0.09521683,-0.04531589,-0.03632684,-0.10711467,0.11330755,-0.11612687,-0.08900097,-0.04450722,-0.0904001,0.13369629,0.09247246,0.05427148,-0.00319056,0.00884102,0.00629511,-0.06034906,0.04669142,-0.10797732,0.10869641,0.02167841,0.20134576,-0.07154126,0.03679824,-0.01886434,0.07225485,-0.02252807,-0.09168988,0.03806878,-0.06791097,-0.1311124,0.11398476,-0.03071904,0.01591114,-0.0123156,-0.05103783,0.0040732,0.09488723,-0.09809197,-0.06030656,0.09927729,0.0770868,-0.02763453,-0.0980923,0.0778782,-0.07258625,-0.12216976,0.0609826,0.116125,0.08026846,-0.0549698,-0.06407104,-0.03440433,-0.11360829,-0.07414711,-0.10048411,-0.10515011,0.02654506,0.11650653,-0.12324992,0.06233945,-0.1131271,-0.11662191,-0.03857448,-0.08482153,-0.03187836,-0.0050613,-0.00966344,-0.07778366,0.07871012,-0.1117046,-0.00024401,-0.05615584,-0.10746562,0.06385036,0.04953675,0.02235033,-0.08418468},
  {-0.13369559,0.00429742,-0.03251731,-0.01246422,-0.13397628,-0.0376918,-0.14425412,-0.1472637,0.00527448,-0.12163673,-0.12705535,-0.10912445,-0.06795517,0.06132752,-0.09850119,0.03128548,-0.00303972,-0.13674267,0.05068351,-0.08998453,0.08647998,-0.13894013,-0.06211349,0.04903278,0.05092264,-0.00348911,0.03943575,-0.08457477,0.03164657,-0.02859342,0.03186299,0.05015923,-0.05654699,0.08051958,-0.06401785,0.06550382,0.04388255,-0.10209495,-0.05956356,0.13208835,-0.0204143,-0.06256966,-0.00064102,0.01410574,0.10195174,-0.08206837,-0.05379658,0.00965035,-0.10961431,-0.0739176,-0.10573959,0.04927989,-0.05158586,0.12291965,-0.08249441,-0.13960777,-0.05848534,-0.11430618,-0.08969355,-0.05903448,0.02018264,-0.02154196,-0.0164868,-0.02201346,-0.09365731,0.10102102,-0.0231864,0.00937412,-0.03567528,0.0076902,-0.07550834,0.07681171,0.02195112,0.01914221,0.10617239,-0.1339447,0.04268994,0.05111256,-0.02933818,0.04170064,-0.0531565,-0.07529929,-0.05354955,0.02954414,-0.01602508,-0.14477308,0.04303734,-0.0782428,0.13947298,0.07813758,-0.06866292,-0.03576319},
  {-0.07621063,0.06711099,0.05915353,-0.09435101,0.05513064,0.00526874,-0.0119588,-0.03033587,-0.10010359,0.08984183,-0.0958548,0.05113652,0.05540135,2.365e-05,0.03861655,0.00516147,0.00491692,-0.07268531,0.01425063,-0.06178775,-0.02355168,0.01618499,0.04533763,-0.09430857,-0.10666873,0.00238235,0.07372674,-0.04670891,0.05850878,0.1460056,0.16373429,-0.14097758,9.767e-05,0.07395573,0.00574174,0.01664393,-0.1183704,-0.06565586,0.1187264,0.15430482,-0.17322527,-0.05708245,-0.03281198,-0.08281293,0.1632244,-0.03729457,-0.0444029,0.14008631,-0.04081468,-0.01194323,-0.03031537,-0.05722712,0.03793929,-0.01748202,-0.02673728,-0.00698111,-0.05644331,-0.05119513,-0.09307067,-0.15950873,0.08174196,0.01301987,-0.09756117,-0.09415394,0.04921741,-0.13979392,-0.01565244,-0.01619378,0.01913709,0.05296966,-0.15827943,-0.0935858,0.05836097,-0.06843545,0.06966839,0.04461965,-0.05563688,1.966e-05,0.08984421,-0.02324902,0.00102159,-0.06705741,0.07580452,0.04549389,0.06377107,-0.08254057,-0.0203578,-0.01043973,0.14791217,-0.13380244,-0.031805,0.07811134},
  {0.03570249,0.03908954,-0.15496778,0.01086539,0.08142409,-0.06422551,0.01764378,-0.07426502,-0.00839604,0.03095539,0.00671812,-0.13663138,-0.13308245,-0.10395537,0.08509918,-0.1147538,0.01232209,-0.06997198,0.00710065,0.06323879,-0.12951346,-0.02466513,-0.14444402,0.07971802,-0.12324175,-0.0605686,0.03427273,0.01851563,0.05587031,-0.04648669,-0.00964539,0.0025964,-0.1119782,-0.11974628,0.05383618,-0.20409591,0.02906995,-0.11832273,0.12663803,-0.0767445,0.04248163,0.08067445,-0.02437468,-0.09006222,0.11920989,-0.123899,0.06223109,0.03210189,-0.0329069,-0.05422023,-0.06343815,0.07975122,0.13367788,0.0912445,0.10283057,-0.05311933,-0.06274193,0.10016715,-0.11151662,-0.03986034,-0.10288795,0.09326424,-0.0951273,-0.00982235,-0.08983188,-0.11337487,0.01782357,-0.05414183,0.0645313,-0.00755133,-0.02203396,-0.10307983,0.06077642,-0.08634578,-0.03531192,-0.01841624,0.06928754,0.06255148,-0.08757476,-0.04808019,0.12402708,0.07540558,0.03888939,-0.01413621,-0.08215059,0.05492561,0.06113948,0.11668994,-0.00270917,-0.08963209,0.11435647,0.02541063},
  {-0.12251668,0.01787017,0.02116383,-0.05781937,0.10048553,0.02280275,-0.10142111,0.02232744,0.04070273,-0.02153264,-0.03639139,-0.09818915,0.05805415,0.14852545,0.00343177,0.03305871,0.10277033,0.06258681,0.03978383,0.08311493,0.079731,-0.05763781,0.01761492,-0.11784183,0.04426925,0.02292418,0.03805904,-0.08687231,0.06723938,-0.08216522,0.07263682,-0.03935887,0.03672672,0.10283983,-0.10393902,-0.10527349,-0.00620409,-0.07658315,-0.00800805,-0.08247822,-0.01722842,0.0419987,-0.06271737,0.01978284,0.05907091,-0.00254138,-0.14810164,-0.05738511,0.06231102,0.10403659,0.13032559,0.02348817,-0.11205629,0.13393,0.10602269,0.09066159,-0.03429897,-0.10560252,-0.05876391,0.01932766,-0.10335924,-0.01254684,-0.0947452,-0.11399562,-0.01807193,-0.06802004,0.05803606,0.0691482,0.10372198,-0.12341662,0.04785978,0.08887763,0.00021792,-0.00923075,0.02665881,0.07905075,0.01309674,-0.13007896,-0.01863343,0.09060285,0.04343857,0.06920879,0.0503706,-0.11145539,0.12146813,0.02069654,0.022723,0.00718757,-0.05097594,0.01717016,-0.00886905,-0.08197897},
  {0.13432926,-0.01062041,-0.02508812,0.0877727,0.03487889,0.08441707,-0.08803558,0.02768498,0.08721676,-0.06776683,0.02682182,-0.03508392,-0.08782549,-0.0673601,0.09882419,-0.03109147,0.12413996,0.07998216,0.13528517,0.06497889,0.00705713,-0.07885213,-0.05708562,0.02050878,-0.01629,-0.09692766,0.07882899,0.03260902,-0.13990651,0.05301452,-0.11850226,0.13393848,-0.03150015,-0.02071744,-0.08280136,0.02918452,-0.02186003,0.09892286,0.04509617,-0.1547796,0.03595333,-0.10509427,0.04904769,-0.05205425,0.04520347,-0.13424565,0.0211179,-0.04719571,-0.12874077,0.03742278,0.03919407,-0.09583277,-0.05723241,-0.09049928,0.15672316,-0.06734911,-0.09619978,0.10478636,0.08138897,0.04141456,0.00261964,-0.00204175,-0.05346141,0.10022441,0.1533623,0.02480914,0.1279066,-0.16635397,-0.08441095,-0.12945041,0.08302293,0.1481005,-0.05816421,0.05650413,-0.1379051,0.10838352,0.02481945,0.04153636,0.0775219,-0.00780404,0.04336492,0.04042401,-0.06138249,-0.00400124,-0.01985972,-0.0012532,-0.07127285,0.07776957,-0.0614248,0.10122431,0.08127508,0.07210892},
  {-0.05111301,-0.11309297,-0.08254346,-0.03030615,-0.09625367,0.10447869,-0.02794155,0.03818489,-0.06736415,-0.11467852,0.05564726,-0.04424255,0.05999476,-0.06119008,-0.106652,-0.04070174,0.06098367,-0.10048918,-0.12300975,0.0149255,0.04598478,-0.07537028,-0.07784033,-0.0208359,-0.09617857,0.11559657,0.03801249,-0.03848159,-0.00391238,0.10464632,-0.02516201,0.0240405,-0.12041438,-0.13445525,-0.13947754,-0.14098905,-0.12069558,0.02733672,-0.12497622,0.07487632,-0.10956734,0.03068545,0.06540161,-0.07875824,-0.10910568,0.04333006,0.09162179,-0.05847859,0.02183996,0.04332282,0.04418846,0.14053357,-0.00398327,-0.04901787,-0.02436548,-0.14569472,-0.06237789,-0.0542074,-0.05995099,0.08531754,0.05690001,-0.03663312,-0.07736102,0.02363796,-0.03588717,-0.00728388,-0.06135355,-0.0014318,-0.07101315,-0.05659039,0.08923078,0.05385253,-0.10118769,0.10119135,0.07959283,-0.00071573,0.08767155,-0.05418319,0.09326728,-0.00952097,0.01961898,-0.0108531,0.02631886,0.1741855,0.01047046,0.01388875,-0.1147036,-0.04301674,0.10527677,-0.03448846,0.16088775,0.02889457},
  {-0.11022383,0.10422496,0.03645502,-0.11342395,-0.11536981,0.08892956,-0.05041325,-0.08769701,-0.04146338,0.01149981,0.062906,0.13517682,-0.02398516,0.16238406,0.0050465,-0.03071203,-0.03701177,0.0937458,-0.04643352,-0.07333554,0.07930139,-0.07548682,0.04770421,0.09623796,0.09762658,0.11039991,-0.00125164,0.00939047,0.01576707,-0.05132274,0.04104187,0.03530701,0.07747004,-0.04865222,0.04251033,-0.10321017,0.08234769,0.04696672,0.12301476,0.0192376,0.04340748,-0.10161521,0.02427384,-0.03742674,0.02858198,-0.03182619,-0.00792513,0.0301161,-0.05697773,-0.05616372,0.1527767,0.07466692,0.10774013,0.06634778,0.02379978,-0.06484276,-0.07637241,0.04919016,-0.00134422,0.0464973,-0.07072069,0.10936565,-0.07618635,-0.04278762,-0.11633919,-0.14779699,0.02951835,-0.1531836,-0.01797504,0.06696433,-0.04802996,-0.05271405,0.01810433,-0.12455996,0.07442436,0.05585407,-0.07794428,0.0445461,0.02929867,-0.06385586,-0.10625494,-0.07380712,-0.04786997,-0.0625714,0.10911515,0.0043072,-0.0894921,0.01915921,0.09078594,0.09020889,0.09716848,-0.11355662},
  {-0.07927892,-0.05093196,0.12274643,-0.09841117,-0.08104625,0.13803735,0.11354966,-0.07415009,-0.07648574,0.11828076,0.06153845,-0.09323807,0.1414512,-0.04742165,0.01339338,0.07442825,-0.08355416,-0.08788406,0.02267358,0.01856912,0.03479743,0.01805424,0.0416798,-0.0263147,0.08493342,-0.01517494,-0.04371322,0.07025181,-0.108938,-0.15421236,0.01911457,-0.04543857,0.02750763,0.14143048,0.08467758,-0.16653115,0.03734548,-0.03439008,-0.04113943,-0.10273688,-0.06860877,0.07642738,0.10937402,-0.04051676,-0.09957922,-0.15086621,-0.03031848,-0.12678711,-0.07930711,0.01273352,0.0853548,-0.13107003,-0.11129166,-0.04140595,0.11527789,-0.05789011,0.09814135,-0.10854425,-0.07624118,-0.0153741,-0.02085356,-0.01001155,0.02286722,0.02699778,-0.05394451,-0.05237843,-0.06761577,-0.06907485,-0.0191053,-0.12243146,0.0051662,-0.01929259,-0.13190715,0.04518862,0.0146923,0.0864486,0.05170578,0.0082083,0.0977909,0.00772238,0.07406016,-0.07454405,-0.05966014,7.493e-05,-0.05591774,-0.06190979,-0.02642128,-0.06512243,-0.12318471,0.0741647,-0.03741367,-0.01436594},
  {-0.11922367,-0.07136766,-0.06215795,-0.08322398,0.08074962,-0.0027032,0.0478555,-0.13172264,-0.10946062,0.01706482,-0.11591391,-0.11311991,0.01401564,0.05134733,0.02537677,-0.02952095,0.08182463,-0.00167845,0.06129263,-0.023915,-0.01391615,-0.0578628,0.08851521,-0.08602687,-0.07217526,-0.09578922,-0.05556134,-0.07064384,0.1308864,0.12745294,0.04289029,-0.10714144,-0.10448555,0.01644323,0.04527314,-0.16088751,-0.07905818,-0.14444585,-0.0402422,0.07754073,-0.1083211,-0.02878603,0.079018,-0.13816686,-0.0169236,0.12165558,0.02111076,-0.10546184,-0.10423253,-0.03879934,-0.07558624,0.13509811,-0.0371918,-0.10648236,0.0925445,-0.08378425,0.10725144,0.01119524,0.04411366,-0.06683333,-0.08035157,0.0434596,-0.11533688,0.09996578,-0.07531808,-0.05842391,-0.07210334,0.01077659,0.00201123,0.0865606,0.00951971,0.0469171,0.01769067,0.08822168,0.07241022,0.09899121,-0.03990678,0.10472463,-0.09622313,0.03069225,0.10568636,-0.0520107,-0.08098597,0.03178899,0.00049996,0.07247814,0.09338837,-0.01574318,-0.0518446,0.0966934,-0.05277663,-0.00020769},
  {-0.0177854,0.01110668,0.09202592,0.09219816,-0.06077364,-0.03509839,0.04323156,0.07224223,-0.03699211,0.06361557,-0.08026574,-0.14590938,0.08243696,0.0896077,-0.07582185,0.09510884,-0.02398478,0.01627501,-0.11604441,-0.03577434,0.06877217,-0.04726587,-0.06803152,-0.06881915,-0.02222463,0.09464227,-0.04521754,0.05801464,-0.08961302,-0.03448818,0.15054809,-0.09462374,-0.17487866,-0.0791303,0.10860725,-0.0636476,-0.0254814,-0.0458885,0.1067134,-0.00268147,-0.05197773,0.10710284,-0.07338838,0.03934961,0.03975253,0.04639367,0.0767002,0.04868015,0.09391271,0.05331322,-0.04725057,-0.08296883,0.06621456,0.0841606,-0.07821973,0.02756384,-0.07048007,-0.03836274,-0.05217269,0.04566148,0.05675836,0.08958738,-0.02921879,0.00125887,0.04486362,0.04505299,-0.12062581,-0.04661816,0.02189148,-0.00916059,-0.01664172,0.07309185,-0.05213878,-0.06195708,-0.03486535,-0.08378161,0.04010865,-0.02344341,0.06808998,-0.02049409,0.09120977,-0.05005274,-0.05920397,0.05492406,-0.02166754,-0.00533663,-0.111761,-0.05159187,0.02682267,-0.08521439,-0.13024591,0.09722079},
  {0.02607919,-0.00594273,-0.0107493,0.00121092,0.08956531,0.03230413,0.0394666,-0.02708275,-0.01081486,0.04777743,0.05738546,-0.10319641,0.08500688,-0.02567603,-0.00230506,0.14270878,0.09631529,0.02247247,-0.02283525,0.05495894,-0.06159702,-0.01302643,-0.04035941,-0.00792549,0.04139182,-0.03649737,-0.07266337,-0.02125247,0.0071842,-0.04612594,-0.00136316,0.04436615,0.14744562,-0.09540115,0.1153885,-0.00439499,-0.11711319,0.023103,-0.06688399,0.07965913,0.13365309,-0.10587054,-0.01643919,0.10523769,0.0893016,0.05712714,0.08833816,-0.04597427,-0.07567698,-0.05939114,0.08488642,0.03503666,-0.01072519,-0.04713603,-0.00163676,0.09231418,0.0171428,0.04662052,-0.08916029,-0.09276383,-0.07947433,-0.01037663,-0.08966605,-0.07627747,-0.02583717,0.01921149,0.1228524,0.08339917,0.07782538,-0.01674232,0.03255574,-0.02162846,-0.06726105,0.01628502,0.04261415,0.14467916,0.08709233,-0.107062,-0.01440959,-0.07898822,0.08856256,0.0818821,-0.10735016,-0.11085963,0.0741837,0.10256799,-0.04966281,-0.02231285,-0.06447417,-0.00950679,-0.04261205,-0.02472221},
  {0.04455263,0.03525525,0.07680308,-0.09433891,0.01947672,-0.02305344,0.11160059,0.106405,0.0261908,0.08047032,-0.00299803,0.02493109,0.11416311,-0.07556285,-0.02052025,0.02269987,0.02398329,0.00292332,0.07076716,0.06566702,-0.02977717,-0.08734176,-0.02210556,-0.07933213,0.07762303,0.02306923,-0.02959281,-0.05076533,-0.12126071,0.03882773,0.02168972,0.02419476,0.0004516,0.07975061,-0.112591,-0.16898528,0.08705758,-0.09288312,0.00023248,0.06743962,-0.03081963,0.06296862,0.06847686,0.02085235,0.08990433,-0.02506554,-0.08535371,0.00819251,0.07792072,-0.02152407,-0.09454739,0.07909315,-0.12356456,-0.00166896,0.07340924,-0.04703907,-0.07342675,0.03647904,-0.07130823,-0.09929641,-0.08625742,0.0101548,-0.05404887,-0.03919025,-0.10984059,0.04789739,-0.07181279,-0.05045699,-0.09732845,-0.09343236,0.07894451,0.05913246,-0.07978076,-0.01935975,0.03414912,-0.03525487,0.126628,-0.05924217,0.02411074,0.08635971,-0.13484122,0.07266103,0.05998182,0.05901304,-0.04489499,0.10317661,0.13308935,-0.00205002,-0.12222718,-0.01951445,0.07124921,-0.02602628},
  {0.08137578,-0.07929743,-0.0987917,0.11157674,0.00249705,0.1199633,0.12981094,-0.07784377,-0.07148454,-0.00966615,-0.03278264,0.12178873,-0.0793255,0.0070017,0.03454886,0.07390894,0.02411438,0.08309694,0.00965018,0.02540766,-0.07067524,0.03775262,0.07883422,0.10118241,0.0619347,-0.12750071,0.03600233,-0.00421074,0.02285103,0.07148485,0.00528345,-0.04317904,-0.0117651,0.03835366,0.09018476,-0.15108293,0.04635932,0.10347181,-0.01609847,-0.02483031,0.00168213,-0.06721459,-0.06254751,0.03057303,-0.06849252,-0.11407126,0.03315525,-0.05147335,-0.09781634,-0.10464022,0.02135817,-0.04838631,0.10029461,-0.13156004,-0.00987594,0.05799947,-0.13642749,-0.07475212,0.1074225,0.12675849,-0.08823187,0.12587953,0.13529415,0.03400644,0.02148441,-0.12656718,-0.02515012,0.06653119,0.03679655,-0.10496873,0.11763632,0.14056918,0.00340258,-0.10147476,0.07060569,0.03892762,0.05456199,-0.10971117,-0.10927202,0.00828515,-0.06085181,0.08674613,0.07155438,0.13942531,0.02509358,0.11223581,0.02421556,0.08922924,0.08287843,-0.0788639,-0.07464635,0.01312269},
  {-0.02440442,0.06660677,-0.13448639,-0.06077363,-0.1329988,0.06977832,0.05747506,-0.01052376,-0.03919546,-0.025452,-0.02786796,-0.11977743,-0.1133479,0.0224906,-0.04211212,-0.14376253,-0.10741474,-0.02332549,0.07001709,0.04984292,-0.02864411,-0.02201088,0.02063761,-0.13828409,0.08942832,-0.03327288,-0.12938808,0.09238888,0.07697419,0.11620554,0.10351476,-0.15839328,0.09209728,-0.12723745,-0.13665164,0.04125102,0.08920129,0.10253055,0.01398115,0.09701709,0.04547312,0.06064678,-0.02343641,-0.03172551,0.08152021,0.12927786,0.03714919,-0.03887329,-0.10690918,0.11429725,-0.06931952,0.03517776,0.05484109,-0.14112571,-0.00998781,0.14744064,-0.12761389,-0.08118489,0.0786719,0.01161549,-0.00828546,0.08490124,0.07252639,0.05341964,-0.08968602,-0.07625533,0.02865003,-0.14137235,-0.05064861,0.03412435,-0.08023894,-0.08654093,-0.09830794,0.02032927,0.02230556,-0.01277438,-0.02382207,0.05939651,0.15352938,0.00568039,-0.00600169,0.0586748,0.019283,0.01293075,-0.04965565,-0.1419281,-0.09030242,-0.04635306,-0.11432583,-0.10001419,0.02179549,0.02216088},
  {0.00615447,0.00437625,-0.06818396,0.02762,0.09139223,-0.05856537,-0.08036453,-0.04869929,0.00043088,0.00233927,0.10446814,0.09815113,0.01935562,0.01748134,0.07319381,0.09165289,-0.07159782,0.09100777,0.02416568,0.03379603,0.10584096,0.08260145,0.00650593,0.0853945,-0.05342447,0.117343,-0.04530812,-0.08637057,0.02671579,-0.1561209,-0.04203379,-0.08044932,-0.04242712,-0.09159264,-0.05635715,-0.13915512,0.09428588,0.0187346,-0.02078209,0.02620749,0.08100542,-0.02577988,0.00685047,-0.0240617,0.02966148,0.04135526,-0.0079972,-0.1507879,0.05833906,-0.00099968,0.04616952,-0.0068082,-0.04143874,-0.08166783,-0.02610943,0.09889913,-0.13125756,0.05164044,0.04028641,-0.07231824,0.01149725,-0.00172783,0.1404595,0.06633064,0.0282232,-0.05508059,0.11709849,0.02236981,0.1138697,0.01828917,-0.02733889,0.04693152,0.09851164,-0.00451341,0.07717743,0.1059031,-0.08415656,-0.01378844,0.08104819,0.07908504,0.08594689,0.08147431,-0.10645165,0.10528174,-0.03969348,-0.06782506,-0.00745744,-0.07232171,-0.13411166,0.00389698,0.1548517,-0.04390675},
  {-0.01788925,0.06588732,-0.00749602,0.03250895,0.04492932,-0.07381436,0.1284282,0.06245419,-0.0207018,0.0821665,0.06586595,0.02143263,0.15413645,-0.08221489,0.00659945,0.03894239,-0.08256475,-0.00394568,0.00381688,0.07954369,-0.08152424,0.07199241,-0.01946486,-0.02372269,-0.01995734,0.05885404,-0.05141286,0.14997719,-0.03853507,-0.04663615,-0.11424619,-0.04539249,-0.00753131,0.08272809,-0.11325579,0.03632294,-0.06007891,-0.06104247,-0.01638444,-0.03678565,-0.04127703,-0.13230896,0.14450537,0.11264485,-0.0337116,0.00832451,0.05066116,-0.04472786,0.00802409,-0.03003175,-0.05446737,-0.07790134,-0.0794685,0.05545673,0.02005927,-0.09382227,0.00152339,-0.04390831,-0.05769122,-0.03007345,-0.15472373,-0.03850516,0.05393525,-0.10945994,0.14001575,0.10411932,0.10887198,-0.06379561,0.04906614,-0.15284649,0.07137871,0.06306501,-0.05761112,-0.04484469,-0.16750555,-0.00670248,-0.13310322,0.04882689,0.10988814,0.11375576,-0.02038602,-0.063468,0.03315483,0.03723933,0.00918881,0.12761468,-0.06515006,-0.1266947,-0.03654498,0.07521837,0.00577831,0.00281108},
  {-0.05832701,-0.09847367,-0.04134212,0.00780505,0.02939814,0.09206837,-0.03380019,-0.0468209,-0.00248773,-0.1050612,0.04637179,-0.1065252,0.10193899,-0.10623275,0.05045346,-0.11095683,0.11328942,0.05141568,0.01328282,-0.0359608,-0.0984908,0.03320467,0.01844454,-0.00303142,0.08832414,0.01220139,0.11727595,-0.04235126,-0.01747228,-0.04132919,-0.09132934,-0.03690233,0.03095836,0.01451327,-0.0468393,0.1551038,-0.02315424,0.12987664,-0.08313023,-0.0106476,0.12051275,0.08646902,0.07499389,-0.0857037,-0.09587055,0.02100088,0.00487398,-0.11654644,-0.10713052,-0.11617662,-0.11124224,0.04176461,-0.0195875,0.11031019,0.04667254,0.02178649,-0.08388169,0.05610144,-0.06700261,0.01446754,-0.06236855,-0.05487261,0.11684976,0.08745235,0.0857462,-0.07485833,0.06788417,0.05368604,-0.09386624,0.05365934,0.08520369,-0.07969951,-0.09059454,-0.00792912,-0.09436266,0.03945192,-0.02720192,0.05350484,-0.02147624,-0.10819942,-0.12180971,0.06614739,-0.06220314,-0.05667612,0.03410637,0.05604983,-0.0849537,0.09266882,-0.11182479,0.01298875,-0.03212072,0.02390638},
  {-0.05717771,0.07542097,0.13876623,-0.04797015,0.13608395,0.09882516,0.11173397,-0.04407674,-0.08037255,0.09009557,0.11601354,0.06193154,0.01962845,0.09372178,0.02496596,-0.0904688,-0.08218006,0.1522288,0.0302818,-0.05634562,0.08833573,0.0428615,0.12879968,0.11498579,0.01480812,-0.06144137,-0.02216092,0.07360119,0.07701695,-0.06470887,-0.00190147,-0.03478722,0.03246869,0.08774927,0.09726433,-0.12110503,-0.10149841,-0.02355696,-0.06461634,0.06543955,0.0132643,-0.07217,-0.01517411,0.14024992,-0.01954728,-0.03470142,-0.02925419,-0.06336076,-0.09474176,-0.14222547,0.02134615,0.05467628,-0.08108581,-0.05637487,0.0432913,-0.06411114,-0.06242789,-0.02571858,-0.02312878,0.09459954,-0.01859466,-0.07718347,-0.05117364,-0.11040192,0.06682718,-0.03855682,0.02675386,0.05895906,0.03259772,0.07783841,0.0213627,0.04435375,-0.01427687,-0.1477523,0.02643296,0.15746166,0.00853847,0.09913545,0.06380494,-0.07635712,-0.15876673,0.01766006,0.05438634,0.07597081,-0.0816,-0.09027075,-0.00020549,-0.02018544,0.07953435,0.06975697,-0.06303073,0.07121038},
  {0.03213017,-0.06855299,0.1122584,0.04103826,0.00356298,-0.01872114,0.06020302,0.08170122,-0.08223125,0.02318464,-0.13687357,-0.07881977,0.07898989,-0.05407729,-0.0412264,-0.05043986,-0.15190281,-0.12391415,-0.09879988,0.07316013,0.08818278,0.02918886,-0.03254613,-0.0514532,-0.04183879,-0.02582816,0.0298758,0.14059931,-0.07289972,0.10947499,-0.00670985,-0.00645719,-0.12952906,-0.12475336,-0.02460674,0.16990282,-0.10205489,-0.02056118,-0.03335022,-0.11490072,0.08096353,-0.00836868,-0.12383714,-0.08893574,-0.0935851,0.04934149,0.04208343,0.11323537,-0.00530509,-0.09067645,-0.03477114,0.10603973,-0.02996048,-0.08713944,0.00658372,-0.01412482,-0.01825704,0.04907391,-0.04433397,-0.04860877,-0.10992,-0.00089083,-0.08039571,0.14014556,0.01289838,-0.05336018,-0.03480913,-0.09288357,-0.12111543,0.09207334,-0.0700056,0.01540505,-0.06782025,0.05729218,-0.11186834,0.07031976,0.00487302,0.00317193,-0.06625407,0.06803831,0.12290733,-0.13407324,0.1257632,0.07604383,-0.08945014,-0.07633016,-0.01175998,-0.04891646,0.05257935,0.02985709,-0.04982382,-0.08510382},
  {-0.04148852,0.14097176,-0.03858895,0.00070878,0.08302648,-0.03613351,0.03584175,0.1400205,0.07162425,-0.03388472,0.08519812,0.14895654,0.00127832,0.14559384,-0.03938696,0.07775121,0.14339562,-0.09300859,-0.07671396,0.07046059,-0.0286353,-0.09781873,0.07940143,0.00743602,-0.02131845,0.11281077,-0.02019129,-0.08479566,-0.14669308,0.06230142,-0.16313583,0.00877188,0.12432069,-0.01387308,-0.07153173,-0.09205697,-0.00504462,-0.00125204,-0.00384635,-0.15755959,0.06770282,-0.14197305,-0.09117947,0.02834148,-0.00801476,-0.06173229,0.01132902,-0.02241457,0.00186998,-0.02955594,-0.15687595,0.07361537,-0.11606188,-0.00343802,-0.03257425,0.05979902,0.02101448,0.02276728,-0.04616891,0.10935295,-0.11607045,0.00771376,0.14090495,-0.09662426,0.12581685,-0.09227635,0.09151768,-0.0719264,0.03083409,0.05688561,0.11103876,-0.08119269,0.01572731,0.08048508,0.02077093,-0.05532805,-0.08400983,0.01057507,-0.05212575,0.12046815,-0.0850297,0.1277363,-0.03542644,-0.09241347,0.07527053,-0.02663007,-0.01341998,-0.12572865,-0.08065849,-0.0848261,-0.08504581,-0.04208214},
  {0.03146201,0.05299992,0.03473333,0.02458389,0.11779518,0.13265345,-0.08507306,-0.02321179,0.02743865,-0.05227965,-0.01667521,-0.04406878,-0.00058789,0.02775449,0.03160419,0.1108952,0.08552483,-0.05314729,-0.04591029,0.10602362,-0.1074058,-0.1020347,-0.07274961,0.00308592,-0.02541591,0.00739592,0.12009027,-0.02471512,-0.10882015,0.07991038,0.03203383,0.06237612,0.02378208,-0.07500554,0.0611836,0.01831382,0.14340732,-0.07224058,0.01662275,0.03338419,0.0067312,-0.07561956,-0.00812416,-0.07442406,-0.01292399,0.06591443,-0.08822003,0.02485041,-0.09276108,-0.0712753,-0.07161069,-0.08750466,-0.05740885,-0.15691242,-0.11833133,0.08720622,0.04691689,-0.1169412,-0.0419422,0.11771962,-0.08212989,-0.1441483,0.09361596,0.07305407,-0.0538582,0.14371985,0.03600368,0.05758417,0.03136996,-0.03485379,-0.07747226,0.00335352,0.00474862,0.06942914,0.04406132,-0.07958595,0.11056023,0.00584058,-0.06777868,-0.09593292,-0.08912749,-0.07050951,0.01654889,0.05434604,0.04662644,-0.08110145,0.06377737,-0.07939607,0.05909496,-0.02448042,-0.09978161,-0.02203842},
  {0.07337199,0.03576249,0.06026965,0.1036726,-0.07195662,-0.05971048,0.08970287,0.06053757,0.1342601,0.00014061,0.08183897,-0.05858825,0.14325996,0.03167712,0.00524538,0.07831467,0.06848837,-0.04243848,0.11355034,0.01158201,-0.00993953,0.01136502,0.0994664,0.08191582,-0.09615242,0.13577816,0.11984181,0.12037609,0.12839961,-0.15663865,0.03369825,-0.0595306,-0.05367144,0.1156086,-0.10565973,-0.00499171,0.02419701,-0.12074646,0.09038257,-0.01351824,-0.06507657,-0.03466805,0.13138454,0.02706571,0.02750164,-0.09848694,-0.13746113,-0.06688696,0.07756357,0.06518042,0.03335403,-0.00454565,-0.07363681,-0.01810078,0.02743037,0.08166343,-0.05447055,0.09481379,0.0444917,0.08856223,-0.10051434,-0.11484224,-0.08802798,-0.1452898,-0.00361233,-0.01904619,0.08185209,-0.01009733,0.05308028,-0.07758606,-0.03161459,0.1204946,0.07636637,-0.00045088,0.01451196,0.1281435,0.11951824,0.04769382,-0.07628892,0.10098135,-0.01861621,0.10979387,-0.10095613,0.03012142,-0.03902562,0.01654067,-0.11404649,0.02947986,-0.03473712,0.02992677,0.07273982,-0.08902826},
  {0.05057979,-0.01385856,-0.10758273,0.08016243,-0.13263075,0.09248091,-0.06142046,-0.14372551,0.08410077,-0.01006739,0.02374111,0.01488058,-0.02073035,-0.12626639,-0.09463077,-0.05778757,-0.15517,-0.00600834,0.05105217,-0.14707424,0.00295936,-0.11543475,-0.02704204,0.09549914,0.01060021,-0.0442979,-0.07331152,0.0209819,0.03576106,-0.04512414,0.0205918,-0.08717091,0.00749957,0.01143869,-0.06657197,-0.07488773,-0.04976245,-0.06924332,0.12408504,0.11011142,-0.04393507,0.04696612,-0.0793056,-0.12449192,0.15297924,0.02136519,-0.06851204,-0.00525111,0.12953623,0.07389556,0.06641337,-0.11094145,0.05627754,0.07336809,-0.00281464,-0.1085382,-0.06523129,-0.02219509,0.05210418,0.03399564,-0.06004058,-0.0102604,-0.01359853,0.07908421,-0.06304587,0.04103402,-0.01166781,0.07053734,-0.13648859,0.13227275,-0.09126374,0.08978597,0.13847698,-0.01335019,0.05844393,-0.14038366,-0.02782677,-0.10107025,-0.02954517,-0.03240324,-0.05924014,-0.0497806,-0.0284505,-0.05848031,0.00514475,0.01479551,-0.09599464,0.01208235,0.12475257,0.05861396,0.07324878,0.11118303},
  {-0.0267556,0.03973054,-0.09261926,0.13945307,-0.06844414,0.11136747,0.01167129,0.02317776,-0.04825862,0.05729712,0.00687148,-0.08091548,0.1080639,-0.08336677,0.11505903,0.09411413,-0.04148822,0.04876032,0.02053664,0.01867112,0.13643469,-0.00259549,0.08229797,-0.06115934,-0.08521625,0.07408877,0.04723803,-0.01341008,-0.13286631,-0.06191555,0.02629129,-0.06142465,-0.03044972,0.07563578,0.02603561,-0.13297932,0.09306933,0.15272419,-0.14452167,0.01772278,0.11536802,-0.07259744,-0.03194104,0.0645172,-0.07218851,0.02415446,-0.02673919,0.01682188,0.01483244,-0.02113085,-0.11664331,0.02386743,-0.15384687,0.03380565,0.16005068,0.09051251,0.05026395,0.00291465,-0.10165518,0.14616968,-0.05833275,0.08773724,0.04343203,0.00264584,-0.06331608,-0.00878315,-0.02147433,0.05840201,0.06019028,-0.02562924,0.06250754,0.00222777,-0.06826857,0.03149798,-0.02750345,0.06194726,-0.06994735,0.10509098,-0.09173579,-0.02089022,0.01820575,0.04204695,0.01557526,-0.06493136,-0.15220982,0.03026182,0.03170208,-0.0561857,0.00965654,0.13051698,0.14650168,-0.13433656},
  {0.09784698,0.00240118,0.02810072,0.01966562,-0.07043885,0.01752398,-0.0953549,0.02779249,-0.01345241,-0.08323418,-0.00151129,0.14539546,0.10045803,0.10385092,0.07995774,0.1098299,0.12440315,0.1125885,0.12256223,-0.0767454,-0.00350795,-0.02468153,-0.01237137,0.15559919,0.14376295,-0.0881421,-0.01768811,-0.04220133,-0.14313804,-0.13802601,-0.08457711,0.0302771,-0.09120745,0.07234725,-0.00440128,-0.08266342,0.0054068,0.09471875,-0.12361297,-0.08600938,-0.04397999,-0.11697119,-0.01632561,0.00801787,0.05129898,-0.1045128,0.0954726,-0.14746149,-0.07441263,0.08618382,-0.02344048,0.10517722,-0.1422422,-0.08708202,0.08865917,-0.0002354,-0.11282963,0.08048444,0.0870406,-0.01512988,-0.09532262,-0.10332484,0.15366246,0.01565148,-0.00295316,0.1144012,0.13906114,-0.07741688,0.09312592,-0.09938812,-0.01048316,-0.07488225,0.06130433,-0.11878603,0.04306358,0.03916613,-0.07949065,-0.04988093,-0.07841939,0.09955745,0.07860474,0.12229535,-0.02268249,0.00324469,0.04852803,-0.02067309,0.03077506,0.02728789,-0.02896494,-0.00829443,0.10862326,-0.06974867},
  {0.01855913,0.01140772,-0.06672794,-0.06565348,0.0181719,-0.04981736,0.04771364,-0.11633722,0.03712718,-0.02442524,-0.04962765,-0.06264324,0.00847637,-0.06280369,-0.10732289,-0.04123468,-0.03617201,0.06943363,-0.09453782,0.0157483,0.05225748,-0.01069192,0.0215971,-0.00183623,-0.11522831,-0.11700468,-0.13855024,0.01062385,0.03737472,0.04407012,0.01809602,0.01128333,-0.12240981,0.08467387,-0.02172671,0.07705931,0.01397666,0.03028138,0.05207396,-0.06113061,-0.066993,0.00797072,-0.06863633,-0.03346348,0.13200174,0.0398736,-0.05603286,0.00510973,0.09147773,0.12171666,0.07521337,-0.02357342,0.07386306,-0.05484888,-0.14477898,0.06982429,-0.05307028,-0.14900099,-0.15646115,0.06745123,0.12433434,-0.12217245,-0.07186989,-0.09878759,-0.07319068,0.0402492,0.07931732,0.07383876,0.01627027,0.06617244,0.00643903,0.0748654,0.04392253,-0.01868548,-0.02743058,0.05734126,0.11965028,0.08081393,0.04858122,-0.14150861,-0.01028965,-0.15447932,0.069432,0.05234715,-0.00839951,0.04681598,0.0473565,0.10667624,-0.03019171,0.00685007,0.03308224,0.15471736},
  {-0.03320552,-0.11646806,-0.00904042,-0.08697267,0.05538919,0.09234171,-0.12684456,-0.0727303,0.09828822,-0.14034566,-0.04675759,-0.1408219,-0.06235218,0.01542996,0.00513269,-0.12737197,-0.09532906,-0.03942135,0.04052099,-0.01473616,-0.01770317,-0.01209323,-0.03334,0.06479854,-0.14028382,-0.04086548,0.01296471,0.03548431,-0.02490679,-0.06822401,0.08417282,0.01017196,-0.08464032,0.05962848,-0.05055625,0.00621012,-0.07890817,-0.09323159,0.07660384,-0.0086267,-0.08644742,0.1140062,-0.1412606,-0.05880139,-0.09019015,0.09377923,-0.00050562,-0.04412974,0.06626666,0.08826379,0.07701731,0.03445398,-0.03634023,0.06128462,-0.13049679,0.04230128,0.11877818,-0.07754713,-0.1274914,-0.00383611,0.10511564,0.0937642,-0.13118124,-0.0516382,-0.07201075,-0.03630643,0.03596133,-0.00984129,-0.12866539,-0.04721088,-0.04593065,-0.10606467,0.08596256,-0.03979373,0.05432928,-0.00216139,-0.09043243,-0.02051519,0.08089387,-0.01605703,0.13988774,0.09010934,0.05408386,-0.05350034,0.13959055,-0.01034416,-0.14928505,-0.12674831,0.14489013,-0.14906919,-0.02213481,0.0995901},
  {0.02606491,0.00958718,0.02603491,0.01049673,0.08217762,0.03452688,-0.06189554,-0.06706811,0.03037916,-0.15985434,-0.13128032,-0.11652149,-0.08716482,-0.11186379,-0.06771522,0.06834666,-0.00833063,0.01564758,-0.03593801,-0.0239064,0.01501396,-0.12788232,-0.00751314,0.05099992,0.01980514,-0.06757721,0.09543701,-0.11607505,0.07343486,0.06039802,0.12430268,0.05194351,0.03088513,-0.07961042,0.10619177,-0.01086467,-0.09750427,-0.1247732,-0.060204,-0.00729311,-0.02688737,0.10335895,0.00298373,-0.06736439,-0.07115187,-0.02038199,0.00013389,0.00306746,0.00393589,0.1456409,0.06752685,0.02095783,-0.02520269,0.01495942,-0.09676025,0.09371742,0.04484748,0.02001435,-0.15837114,-0.12807363,0.06598131,0.03264078,-0.12896988,0.00551886,0.05503663,0.06306927,0.03083167,-0.06264429,-0.15257968,0.08390405,0.03919089,0.0228057,0.02121434,0.03317343,-0.03119271,-0.14874208,0.11399814,0.1017663,-0.06278771,0.03323298,0.03999429,-0.13269384,0.15204199,0.09453195,0.14752251,-0.07658742,-0.12532012,-0.02603713,0.08236562,0.05726646,0.010553,0.05848086},
  {0.06456309,-0.09419608,0.0546123,-0.06921642,-0.00693422,0.0573721,0.04063814,0.02680073,-0.09497017,-0.0716107,-0.04256126,0.13454649,0.05595928,0.14385672,0.02640713,0.1424125,0.07982475,0.10110185,0.0486348,-0.00453306,-0.06405324,0.03073891,0.12813407,0.02974682,-0.04999559,-0.04323793,0.00232273,-0.07235463,-0.05807693,-0.1418011,-0.0843553,-0.05407132,-0.10143151,0.07385501,0.03289065,-0.15898423,-0.00549799,-0.04248331,0.01532973,-0.0147585,0.07274355,0.06014764,-0.02040718,-0.05785615,0.00376245,0.08774819,0.00406944,-0.124286,0.03965322,-0.1362162,0.02243001,-0.09638162,-0.02562173,0.07626733,0.04613803,-0.0348924,0.10411834,0.07469648,0.04708777,-0.07623605,0.11557557,-0.06418407,-0.0277493,-0.06905198,0.01390307,-0.03838063,-0.07485225,-0.02732243,0.09244082,-0.01610279,-0.01517975,0.03061182,-0.05359137,-0.07732228,0.11941161,0.04948775,0.03344225,0.01315421,-0.03892797,0.10012121,-0.0179549,0.04676441,0.10311364,-0.05914091,-0.0366258,-0.05721356,-0.05084521,0.06096283,-0.04197209,0.10266192,0.04024895,0.00606166},
  {-0.12549044,-0.03684901,0.07495051,0.06522223,-0.13574919,-0.06612211,-0.00946447,0.0518133,0.03119683,0.11589011,0.01384583,0.08013088,0.02804724,0.11347336,-0.09121962,0.00733489,0.11382645,-0.06337839,0.06542335,0.07815632,-0.13032292,-0.09661343,0.05123968,-0.08869089,-0.05848622,-0.08021466,-0.10474266,0.08867655,0.13026579,0.07493247,0.07964211,0.10696497,0.00641367,-0.04506394,-0.01947322,0.05181339,-0.11711886,-0.08405811,0.11121296,0.01695792,0.0584497,0.04356643,-0.14070357,-0.01657384,0.1196719,0.00270782,0.00852204,0.06660248,0.09073767,-0.07809363,0.01330042,-0.09189148,-0.03225799,-0.09586586,0.13406284,-0.0758577,-0.06880449,0.10796225,0.09640787,0.06723383,0.11975039,0.05541877,0.06597863,0.02972818,-0.0355406,0.02220416,0.0900167,0.12898956,-0.11966848,-0.08892374,0.04295292,0.1017299,-0.01504043,0.08386748,-0.05916112,-0.0533581,0.09354348,-0.05338727,0.00222288,-0.09989823,-0.06602096,-0.02339308,-0.00443914,0.06538296,0.00246459,0.04428136,0.09627525,0.01787271,0.11533277,0.06038405,-0.06169155,0.00757602},
  {0.00976727,0.10910819,0.06975716,-0.07173635,0.04052487,-0.04630714,-0.08239625,0.07519988,0.04942493,-0.06192173,-0.07426179,0.02181748,-0.11169304,0.12287136,-0.10373958,-0.05974203,0.00438298,0.00353974,-0.07647651,0.01708328,0.08574562,0.09950045,-0.05673891,0.02839048,-0.07030134,0.0755126,-0.08798916,-0.02454139,0.03064153,0.00742794,0.04274667,0.13351645,0.06419323,-0.00114787,-0.11953368,0.03666368,0.00095166,0.14477243,0.03294401,-0.01453422,0.1313346,0.08678997,0.12303963,0.08045009,0.08996532,-0.06800256,-0.00925496,0.00543433,0.04820354,-0.00604887,0.05435202,-0.12152267,0.03611519,0.05710773,-0.01035801,0.09315678,-0.014262,0.07311876,0.10623863,-0.00836505,0.07362303,-0.02792454,0.02517518,0.05406343,0.094245,0.12784053,0.03290204,0.10260069,0.15140526,-0.03411772,-0.0811476,-0.06412602,-0.0151177,-0.10827244,0.07399184,-0.00466318,-0.0834091,0.08517335,-0.09221824,-0.00013328,-0.03853794,-0.07429439,0.03037969,-0.00450141,-0.13339831,-0.08628682,-0.01448643,-0.08895546,-0.13931218,0.13691045,-0.05964497,0.02451352},
  {-0.02406617,-0.150708,-0.14042208,0.04603542,-0.08492359,0.08947759,0.08400927,-0.11171027,0.0622723,0.09292283,0.04481226,-0.12675361,-0.05336482,-0.08635837,0.05277009,0.08419422,0.00972139,0.08200581,-0.11212761,0.03482464,-0.13875273,0.01049519,0.05985248,-0.05801787,0.08319125,-0.03328194,0.05882595,0.06823224,0.01346286,0.12247819,0.11164264,0.05265604,-0.04099837,-0.00432347,0.10233434,-0.19835784,-0.10087058,-0.13086776,-0.05511833,-0.09375236,0.03803698,0.1279495,-0.05411306,-0.00100019,-0.02826828,0.10134027,0.02194577,-0.01710038,-0.01669204,-0.07239864,-0.0700315,-0.07724492,0.13710785,0.10556872,-0.05630515,0.1106309,0.0720965,0.00570398,-0.02067929,0.04704206,-0.0228929,0.12328538,0.13043322,0.06087441,-0.07941352,0.10327242,-0.03821982,-0.07027637,-0.09933072,0.05214896,-0.03733973,0.09632451,-0.02614149,0.0076359,-0.09821353,0.10321592,0.07631833,-0.04953136,0.11514149,0.06749976,0.1757586,-0.00900272,0.06290331,0.06588155,-0.02118412,-0.05396876,0.01487802,0.0783223,-0.11492786,-0.08126696,-0.07535257,0.13445991},
  {0.02976686,-0.06040898,0.10453482,0.06284569,0.04663757,0.08550251,-0.07615156,0.0424344,-0.0286469,-0.0092285,0.10966656,0.04769024,0.1066267,0.09166525,-0.02681402,-0.12725009,-0.02556446,-0.08356954,0.10322616,-0.06678466,-0.04730709,-0.00316231,-0.05227819,0.06845341,0.0998757,-0.09648633,0.07923716,-0.04727269,-0.03855498,0.01463317,-0.03200409,-0.1257043,-0.03547402,-0.09895943,-0.04826313,0.01247247,-0.02736052,-0.01436972,0.00050196,0.00950087,0.08451705,0.09142891,-0.07241844,-0.00049605,-0.00643809,-0.16716297,0.03323775,-0.06012294,-0.13413405,0.00855,0.13539653,0.01394852,-0.03641745,0.11934979,-0.00416072,0.06217888,0.07144082,-0.01471197,0.07328045,0.02533323,-0.0140466,-0.03150808,0.10866879,0.03839351,-0.10728729,-0.1160784,-0.01412988,-0.05158443,0.03738491,0.01085304,0.1505185,0.0103583,-0.14157435,0.03190838,-0.04365646,-0.05647481,-0.1394129,-0.05651405,0.04571249,-0.12442645,-0.01365524,0.10370868,-0.06479375,0.09200303,-0.00301028,0.03234285,0.11326321,-0.11247279,-0.03371482,0.08231971,0.07025025,-0.07264111},
  {-0.1005334,-0.1595555,0.06535371,0.04005046,-0.09231844,-0.11071278,-0.00418751,-0.07561382,0.11333011,-0.08905839,-0.06453528,0.09981743,-0.11326089,0.08162225,-0.04598157,0.01640493,-0.11697531,0.03152936,-0.11979336,-0.08934063,0.07412048,0.0958032,-0.14091277,0.08137475,-0.04941038,-0.10328018,-0.04008114,-0.02050469,-0.02416545,-0.03421342,0.04969941,0.08234141,0.07885805,0.10720088,-0.13299885,0.01993757,-0.02941274,-0.10414929,0.02615094,-0.05914928,-0.12486324,-0.08547545,-0.12840194,-0.08538102,0.07254797,-0.01807364,0.10888283,0.04681996,-0.11467235,0.11828159,-0.01998319,0.02443106,0.00773177,0.07006044,0.09712715,0.02506926,-0.11981692,0.04057265,-0.08725176,0.03534368,0.07129747,0.14501575,0.02941036,-0.079144,0.05376337,0.05292591,-0.09844478,-0.14247413,0.05796911,-0.12515208,-0.01913181,-0.04914703,0.0347209,0.04705207,-0.10812913,0.05871194,0.09430075,0.05343556,-0.02216316,-0.00759098,-0.00122106,-0.07541695,-0.05104722,0.11929605,0.04501972,-0.00156517,0.07827577,0.05319745,-0.04971281,-0.01835399,0.11156777,0.06509872},
  {0.1203376,0.02682924,-0.07908441,0.04122004,-0.04289123,-0.06520312,0.11627103,0.03552285,0.07040045,0.07117058,0.04558712,0.11452211,-0.00017839,0.08273663,0.02835841,0.01542062,0.09468355,-0.01536131,-0.01207942,0.13575658,-0.03497215,0.07436097,-0.07455556,0.11258172,0.04444414,-0.07066009,-0.11987182,0.08977482,-0.03217111,0.00418862,-0.02375843,-0.06935378,0.01749518,0.0046914,0.06979374,-0.0801226,-0.02865402,0.0044207,-0.0796404,-0.06803696,0.13459556,-0.04818687,-0.00053105,-0.02314984,-0.10851976,-0.15466905,0.13264365,-0.07266094,0.0542,-0.10357634,-0.02404151,-0.04239995,-0.10433155,0.01331875,0.03964224,-0.06105257,-0.00459832,0.15497337,0.06742837,0.1099166,0.02942624,0.07363287,0.0379424,0.10637904,0.096558,0.05334906,-0.01260729,-0.1212118,-0.00541796,-0.08968849,0.0246293,0.0274998,0.02745275,-0.11768847,0.04158603,0.13367066,-0.11960281,0.13370079,-0.02458985,-0.09162454,0.00013065,-0.09809557,-0.09575062,0.1101178,-0.03774046,0.01814057,0.08832976,0.02881096,0.08813699,0.01566971,0.11410557,-0.10865169},
  {0.05519151,0.06063897,-0.12900744,0.09941734,-0.01484048,-0.11205193,0.10207665,-0.02667499,0.04435594,-0.01122366,-0.03841155,0.01847566,0.08517002,-0.02946988,-0.01049318,0.00272511,-0.07077847,-0.01432526,0.01502603,-0.0844998,-0.12521845,0.09560425,-0.12628117,0.08975084,-0.08301374,-0.14232874,-0.09956671,-0.02126507,0.06801288,0.12010179,-0.02963659,-0.11385334,-0.10354114,0.091561,-0.03194651,-0.09759415,-0.07521874,-0.07135216,0.09735261,-0.03106292,-0.08095849,0.1010504,-0.06625909,-0.06350443,-0.06804013,-0.09742455,-0.01785603,-0.0116674,-0.13976029,-0.10582215,0.05398598,-0.11331042,-0.07151989,-0.08605727,-0.0160859,0.1219493,-0.10583285,0.09802393,0.10772233,-0.01706679,-0.05258325,0.0650716,0.04146247,-0.08773752,0.04040142,0.07786685,-0.00041961,-0.09987672,0.00121074,0.01444698,0.04460565,-0.06073907,0.01892972,0.11681126,-0.00138534,0.10781471,-0.08543377,0.04450106,-0.04967288,-0.0918045,-0.01543471,0.00222796,0.07742179,0.08046764,0.11802879,-0.0449883,0.05917295,0.08056395,-0.0946943,-0.11524218,0.07682918,0.08206217},
  {0.01202099,-0.10261823,0.01596465,-0.04331844,0.00557935,0.118601,-0.11505961,0.11410607,-0.04429906,0.10659188,-0.11686872,-0.09357443,-0.0637277,0.06986719,-0.06084625,0.02380363,0.03848648,0.0055533,0.05199481,-0.0618292,0.00090644,-0.09850816,-0.06891097,0.06893733,0.00782968,-0.06064197,-0.10402899,-0.0229325,-0.02027501,-0.14993896,0.07882345,0.05080399,-0.00143895,0.10427509,0.04846352,-0.11823845,-0.10846244,0.0491103,-0.11639258,-0.11242915,0.06613462,-0.09116933,-0.08581258,0.02450314,-0.09423696,-0.02225323,-0.11457668,0.01926306,0.01241856,0.08220815,-0.01797486,0.02868103,-0.08217511,0.10065684,-0.04509492,-0.02504022,-0.08378541,0.05576829,-0.03275126,-0.06119915,-0.02490247,0.04173379,-0.02157382,-0.00760061,0.08642078,0.04532735,0.00364605,0.07561549,0.02239155,-0.11267705,0.09307559,-0.11674711,0.05710872,-0.04701446,0.0232444,0.07291525,-0.08713049,-0.11772866,-0.13433006,0.03693913,-0.01092356,0.00179286,-0.11627968,-0.01498295,0.00534732,-0.08694405,-0.11710384,0.05223254,0.04695361,0.08662561,0.05522046,0.03788639},
  {0.08888185,-0.13291985,-0.03219562,-0.00748073,-0.0956999,-0.0889959,0.0618691,0.04955098,0.05523139,0.00990639,0.02981173,-0.05452707,-0.1362147,-0.09750742,-0.09010433,-0.04470393,-0.10057753,0.08968192,0.06382696,-0.03076596,0.03019865,-0.07677844,-0.0198889,-0.13700165,-0.01314133,-0.13106713,-0.10254826,0.01990184,0.08592476,0.10651309,-0.09163306,-0.00659239,-0.06220043,0.05066654,0.00748716,0.12445899,0.03253792,-0.08479763,0.13926959,0.13570316,-0.00655133,0.03577638,-0.01239298,0.06626242,0.07951216,0.11558668,0.01039775,0.0439938,0.01493616,-0.07590535,0.13105603,-0.10955498,-0.07063946,0.14834383,-0.04713812,-0.04446915,-0.00024573,-0.1386091,-0.00331625,-0.03021964,0.07927096,-0.07377186,0.07401434,-0.06173918,0.04930259,-0.02371862,0.04535832,-0.08950451,0.03349794,-0.02305656,0.00785921,0.00798863,0.07816137,0.09086201,0.13201956,-0.06829774,0.16003618,0.06875603,-0.08348782,-0.10453178,0.09086337,-0.1442696,0.03534032,0.02514768,0.09882355,0.03387036,-0.11445596,0.13337077,-0.06798491,-0.05602727,0.03137542,0.05968376},
  {-0.11018295,0.06659503,0.1011897,0.00594606,-0.06712787,0.02364869,-0.07772285,0.04663483,0.06518696,0.09773708,0.03557737,0.01571416,-0.11381823,0.04314514,0.06278527,-0.05194064,-0.08965902,0.04533081,0.03943471,-0.04415708,0.0076994,-0.12043855,-0.14463963,-0.05710163,-0.10538515,0.06044876,0.08114737,-0.01519986,0.05148483,-0.02615798,0.01233172,-0.02028347,-0.10157388,-0.12746292,-0.08379986,-0.00374926,0.119411,-0.01721555,0.10550673,0.01892552,-0.02372546,0.13074245,-0.04402547,-0.02485765,-0.0424136,0.1657632,-0.07973064,-0.08047989,-0.07760467,0.01933882,-0.06501184,0.04378582,0.13967334,-0.00593089,0.02959261,-0.0314521,0.0714576,0.07586148,-0.00474266,-0.02096966,-0.00455169,-0.10628408,0.01112208,0.08630712,0.02679905,0.00098267,0.07350267,-0.01374353,0.00047413,0.0600736,0.06241845,0.01947921,-0.11058328,-0.08655778,0.08180123,-0.01350819,0.11381669,0.00332146,-0.08421819,-0.06137084,-0.06101004,-0.07123785,-0.04492563,0.06614124,0.09250333,0.05864926,-0.09122704,-0.08415519,0.12074682,-0.05770628,0.02486733,0.0699266},
  {-0.0140974,-0.07468617,-0.08868853,0.08310753,0.03886368,-0.00390476,0.05604523,0.07060134,0.05694839,-0.02959658,0.0211549,0.12807578,0.01492812,0.10952652,0.1436164,0.04632671,0.05968501,0.03950886,0.04081603,0.06931525,0.0902344,0.12033813,0.04487894,-0.06943945,0.01849364,-0.05697661,-0.06774777,0.1015363,0.04450006,-0.15098363,-0.01473459,0.03211118,-0.08631447,-0.0721114,-0.01700423,-0.15348099,-0.03220214,0.05043847,-0.02956956,-0.0530328,-0.0135452,-0.02813036,-0.03604349,0.07924639,-0.03223955,-0.05467584,-0.03332115,-0.04113811,-0.02966302,-0.0820901,-0.09551121,0.11713047,0.06873298,0.01810552,0.06849238,0.06735869,-0.03402265,-0.01745212,0.01030992,0.01372505,-0.13871805,-0.03049578,-0.00727624,-0.11301415,-0.01021215,-0.03922445,0.02241964,-0.02519691,-0.02493265,0.04065192,-0.00408766,-0.00112595,0.1022936,0.01383326,-0.00451741,0.08983583,0.01517523,0.03916972,0.09160422,0.06951568,0.07506441,0.07038654,0.09137151,-0.05697798,-0.06826444,0.12334967,0.04821992,0.00790109,-0.11650266,-0.05372546,0.01972983,-0.11834416},
  {-0.04844538,0.01263591,-0.04914646,-0.09630165,0.00649245,-0.03735583,-0.05796961,-0.09251544,0.02529605,0.06675171,-0.14752518,0.08691736,-0.09506556,0.0170651,0.07485777,-0.1347793,0.0975787,0.04047814,0.02049694,-0.06611371,-0.05336139,-0.00165138,-0.05465658,-0.03086601,-0.03124668,0.08234481,0.08593349,-0.0626971,0.14086291,0.09916965,0.08690032,-0.15566221,-0.12371941,0.04063161,0.00291493,0.06964274,-0.09352079,-0.13955115,-0.03973524,0.08094176,-0.03212125,0.06837767,-0.11660467,-0.13887085,-0.06374877,0.17101452,-0.03221763,-0.03831773,-0.029147,0.12520717,0.19295745,-0.02908592,0.14975552,-0.04321525,-0.06853846,0.04257793,-0.06763952,-0.04283058,-0.07366383,0.05301574,-0.03637445,-0.05174157,-0.05877144,-0.03280605,-0.05768594,-0.10963269,0.06522407,0.05854929,0.07228656,-0.06145999,-0.13529521,-0.03193159,0.15726535,-0.03117963,0.07853535,-0.08550012,0.12648779,0.07828974,0.07934462,0.05088865,-0.04572793,-0.11800279,0.01024184,-0.09950011,0.05247519,0.081572,-0.03006632,-0.04689023,0.17127945,-0.00649696,0.01350052,0.08158972},
  {-0.10897982,-0.05208896,0.00624673,0.05385807,-0.05161075,-0.00651539,-0.12076502,0.02947326,0.01986098,0.0016628,-0.12788667,-0.02044441,-0.11590441,-0.07198521,0.03266708,0.05431977,-0.09399448,0.04829428,-0.14144227,0.08248051,-0.08273174,-0.06536292,-0.01651069,-0.06633414,0.06489546,0.05330582,-0.0562271,-0.00757722,-0.01625414,0.12010123,-0.08951144,-0.07398344,-0.09789351,0.07290822,0.12878492,-0.00458176,-0.03840024,0.01254778,0.12870902,0.02722683,-0.15230456,0.04397358,0.06080043,0.07258412,0.06713688,-0.01314893,-0.04975779,-0.00500939,0.09855657,-0.02665177,-0.08142488,0.04212607,0.14948994,0.09344755,-0.04823525,0.08625605,0.0685081,-0.13515584,0.05876231,-0.03174205,0.11578816,0.07841674,-0.1400554,0.00197732,-0.15392323,-0.06323922,-0.07801082,0.09412458,-0.04568941,-0.00990154,0.0021431,-0.06265148,0.12696712,0.0247471,0.08560937,-0.09095307,0.10553479,-0.10251138,0.05319364,-0.03827849,0.0945004,-0.088629,-0.08160891,0.11122324,-0.00074147,0.03372115,-0.02985489,0.08511426,0.05679822,-0.14305516,0.10253601,0.04308962},
  {0.05745116,0.09769175,-0.07633153,0.14137189,0.1431205,-0.06370059,0.13065192,-0.00810192,0.01187912,0.03657414,-0.01022465,0.11695243,0.13677739,0.10018205,0.11636279,-0.09180287,0.12388107,-0.06139684,-0.02869557,0.00447608,0.11549731,0.07732861,0.01486943,0.13775072,-0.05392892,0.03964169,-0.08457985,-0.05120628,-0.12553439,-0.07980788,-0.01694409,-0.07050065,0.03036124,0.08212945,-0.06776139,0.08979765,-0.0791986,0.12852585,-0.05529465,0.04046459,-0.07445546,0.04085394,0.08656618,0.10174705,-0.14496826,-0.03847176,-0.05947836,0.02061392,-0.06360546,-0.07592124,-0.13179722,0.00950864,0.03302619,-0.0829735,0.09968641,-0.12131714,0.05673934,-0.07799313,-0.08506437,-0.00512068,-0.01431288,-0.01015457,0.09083898,0.0028755,-0.01002357,0.10600977,0.13624397,0.02724927,-0.02731849,-0.13672711,-0.00860643,-0.0343992,-0.06393424,-0.15557875,0.05152104,-0.01775164,0.07708938,-0.08059803,0.11807905,0.09448236,0.03053558,0.05974398,-0.08318699,0.10828876,-0.03747056,0.13504244,0.11995854,-0.12120494,-0.11515775,0.12280884,0.07950622,-0.03487356},
  {-0.00571463,-0.08713361,-0.02878276,0.09380475,0.01398504,-0.06608929,0.02425794,-0.07740375,0.01535635,0.01796098,0.05038932,-0.02580349,-0.00419686,0.11952862,0.01921772,0.06606191,0.06747927,-0.00405644,0.03009586,0.03022418,-0.03668895,0.05335556,0.0683983,0.10501586,-0.03213978,-0.04458165,-0.09028075,-0.0093823,-0.04885301,-0.13267194,-0.12502788,0.11494636,-0.03349398,0.07432512,0.06973168,-0.1469586,-0.0065543,-0.0450274,0.0167166,0.06616567,0.0292714,-0.04937901,-0.05374772,0.13434865,0.03577229,0.03442862,-0.01935154,-0.10995378,0.11700434,0.0960812,0.13494755,0.03264191,0.00249192,-0.04565994,0.04262684,-0.04400452,0.0634743,-0.07368688,0.11237664,0.02300755,-0.03997384,0.0438637,0.02867293,0.04060623,-0.00475706,-0.12102088,-0.0171454,0.01970063,0.09760481,0.02397898,-0.11796966,-0.03167332,0.10539836,0.01884649,0.09416698,0.07147215,-0.03057788,0.05170071,0.05996852,-0.01153523,-0.15919499,0.09871624,-0.1234374,0.04797371,0.02031517,-0.09057228,0.07100303,0.13188665,0.0774976,-0.1083113,0.01197089,-0.04264469},
  {0.08569469,0.0231816,-0.13245454,-0.13583359,-0.11350334,0.05082049,-0.13980103,-0.13157304,-0.00675896,-0.052233,-0.00052976,-0.1128258,0.07193974,-0.15055382,0.03697554,-0.01960301,-0.08195653,0.01648831,0.03215827,-0.07454681,-0.03882703,0.10115785,-0.01749794,0.02983241,-0.02560989,0.10944586,-0.1135468,0.0629147,0.02446205,-0.02923817,0.08984779,0.02170924,0.04098553,0.02227534,0.01884514,0.0959608,0.0077867,0.00338713,-0.01266288,0.0796061,-0.05133642,0.04578737,0.10894238,0.00474522,0.10065391,0.01872592,0.13725217,0.11216625,-0.14217712,0.10054046,-0.00810637,0.10645143,-0.00977828,0.02052401,-0.06016633,0.03535941,0.07313823,-0.08466958,0.11059835,-0.08578565,0.00752692,0.03372937,-0.01889752,0.11441971,0.0276474,0.1084513,-0.07707952,0.0404225,0.01664292,-0.02109846,0.09199771,-0.08140681,-0.06308814,0.06019057,-0.01326562,-0.11936627,0.00328457,-0.09386329,0.09505181,-0.04277655,-0.01553845,-0.08330003,0.07243806,-0.08748129,-0.00779741,-0.00128244,0.08169366,-0.03391974,-0.06460978,0.10076525,0.10286601,0.03417538}
};

float Bias0_c[64] =
{
  -0.18567174,-0.00117594,-0.01997193,0.01087338,-0.11300508,-0.04421686,0.00358062,0.00121022,0.14909609,0.19211934,-0.16818221,-0.00816649,-0.01915022,0.00332260000000001,0.0106528,0.20099001,-0.11888047,0.00508641,0.0870127,-0.1953192,-0.1845399,-0.18265371,-0.19116506,-0.04633326,0.08650117,-0.13161677,0.25749426,0.16704352,-0.20440676,0.07585747,-0.03384806,0.08289592,0.13661481,0.00975446,0.17227538,-0.01025963,0.03127088,0.03729307,0.01430005,0.06955168,-0.1440602,-0.03383682,0.06542199,0.0815222,-0.02317868,-0.06497924,-0.12581092,0.1010178,0.00406738999999999,0.03320805,0.171207,-0.0487901,0.10271731,-0.11743396,0.12919589,-0.13559217,-0.23205472,0.03434298,0.08999596,-0.12301437,-0.05548402,0.16367529,0.11251301,-0.17798548
};




float Weight0_o[64][28 + 64] =
{
  {0.04141025,0.05595494,-0.02885086,0.07418853,0.0180096,-0.03460855,0.02861313,-0.00284052,0.0245436,0.06138792,0.10313727,0.02857258,-0.11271808,-0.09491404,0.06311768,-0.0277562,0.09825651,0.1013048,-0.08671296,-0.03692412,-0.06426752,-0.01844745,-0.04155396,0.06289687,-0.06484342,-0.08329379,0.00676789,0.13782156,-0.00382988,0.04930211,0.07192867,0.02065386,0.09471989,0.11758536,-0.07129785,-0.10552267,0.03906981,-0.0808808,0.08103112,-0.15378052,0.00029943,-0.13745977,-0.00450182,0.10864804,-0.04861301,0.09085748,0.13629933,0.0368101,0.06428378,-0.07467287,0.08856662,-0.06804883,-0.11125314,0.03286871,0.08109465,0.01181668,-0.03521249,0.12047984,-0.03921132,-0.09051874,-0.11272001,0.00419213,0.01357478,-0.06866146,0.01331301,0.0123475,-0.05002658,-0.13868019,0.08062714,-0.0933293,0.11686628,0.1122224,-0.07492349,0.01858373,0.08313663,0.0913414,0.01485731,0.11798815,-0.02928418,0.01097819,0.09824344,-0.09420662,-0.01740697,-0.08971076,-0.10287077,0.0570632,-0.03507232,-0.03346322,-0.03856172,0.10016861,0.06895023,-0.05266345},
  {0.03561706,0.09060244,-0.00777319,0.02531816,0.12560798,0.09942052,-0.04431413,0.17250109,-0.04794129,0.11695257,0.15695731,0.02298632,-0.00128544,0.14920184,-0.0244068,0.0005464,-0.00224883,0.02078455,-0.05432774,0.13116163,0.12010769,0.1465718,0.05047658,0.06105342,0.09503721,0.00270564,0.05929536,0.05711458,0.0060896,-0.0819755,-0.04233972,0.02515879,0.09856393,-0.09010192,0.04996474,-0.09463581,0.04447832,-0.02927562,0.0154545,-0.00996136,0.1780803,0.02029545,-0.05221782,0.11469575,-0.09816355,-0.07990328,-0.02484449,-0.0552181,-0.01605193,-0.13377525,0.00176656,0.14948764,-0.16418207,0.03928145,0.14665568,-0.01642833,-0.03827251,0.03606128,0.18365175,0.00954893,0.05256029,0.17301609,0.06505336,0.05438573,0.18073359,0.0644176,0.18543068,-0.08619144,0.12946522,-0.04250789,0.08249334,-0.03881096,-0.06130935,0.02082115,0.03755938,0.14758651,-0.01460326,0.09137585,-0.02692986,0.11335339,-0.03631181,0.18405665,-0.03175336,0.05615936,-0.13048995,0.08470879,0.12160429,-0.06731125,-0.14474738,0.1210463,0.04020558,-0.0820443},
  {0.01498281,0.1291108,0.02655221,0.17917578,0.05299064,0.06028406,0.02938629,-0.04217684,0.12804142,-0.03470542,0.0094794,-0.00445895,0.015792,0.04055683,0.10588574,-0.04847587,-0.01314305,-0.00091973,0.16650344,-0.07086461,-0.02699729,0.08407969,-0.05907057,-0.01113938,0.17011712,0.05897054,0.1671287,0.05322536,-0.05162368,-0.01560971,0.00861282,0.17711458,0.09293999,-0.00924991,0.02691524,0.18262479,0.08180243,-0.03063715,-0.11757267,0.0357717,-0.01594616,-0.10693253,0.01174308,0.03314579,0.01773919,0.043985,0.16112603,-0.03756946,-0.13266753,0.00590639,-0.0284063,0.10222252,0.02910351,-0.06170224,-0.04376927,-0.18328519,-0.04380822,-0.07468614,-0.04545421,-0.01533115,-0.05200259,-0.0522055,-0.02741391,-0.06814729,-0.02851131,-0.07358859,-0.04435329,-0.07074288,-0.00838478,-0.08363494,-0.03086515,-0.0632212,0.06225889,-0.11797842,0.04686669,0.07729547,-0.1284237,-0.06920188,-0.14442322,-0.03801588,-0.12954582,-0.06311438,-0.16138747,0.12125285,0.07745199,0.04189105,0.05936347,-0.00645324,0.05857657,0.1440353,-0.07258445,0.06334402},
  {0.12019678,-0.0126998,-0.06479093,0.06535462,0.0652933,0.10756058,0.17492825,0.00560721,0.11235552,-0.03299801,-0.02187269,-0.03252434,0.11496592,0.01069591,0.17706591,0.03887131,0.03307443,0.09822387,-0.06945144,0.10150054,0.11909958,-0.00708629,0.00485903,0.03449572,-0.08738735,-0.02774537,0.11886802,0.07395135,-0.06360899,0.0230926,-0.14327617,0.09060598,-0.04920195,0.01473002,-0.1211404,0.01283338,-0.01813434,0.12399466,-0.0465161,-0.05040708,-0.04134369,-0.06621858,0.12848477,-0.06934317,0.05805221,-0.14358781,-0.05175269,-0.12489996,-0.14970998,-0.1077918,0.08394217,-0.00133945,-0.17411412,-0.0382429,-0.02649492,-0.06271717,0.01288964,0.0224655,-0.01697272,0.03392714,-0.06324682,-0.05209325,0.13484508,0.11558332,-0.06814227,0.03226557,-0.00432739,-0.06386632,0.06900717,0.03034547,0.01350537,0.00667986,-0.15940696,-0.08365231,-0.17717713,-0.06365159,0.11263561,-0.1068387,-0.06331694,0.15448003,-0.1949528,-0.05227622,0.03356347,0.04975796,-0.14153895,0.00983824,0.1116087,0.05639277,-0.17263897,0.16630493,0.01623853,0.02565505},
  {0.01411356,-0.02097644,0.0913258,0.08935288,0.11959956,-0.05613448,-0.03108722,0.04253894,0.0726334,0.03201659,-0.00052405,0.07521474,-0.00946082,0.0350926,0.16632488,0.10684841,0.15321493,-0.03469831,-0.042077,-0.02564636,-0.00133865,-0.06709338,-0.05990563,0.04085009,0.01127402,-0.01224882,0.11368962,-0.10790291,-0.16828904,-0.11023927,-0.15497294,0.0028742,0.12428896,-0.12426519,0.0032427,-0.02719441,0.07916211,-0.00576541,0.01150275,-0.13053967,0.1342768,-0.11223751,-0.00530062,0.07381231,-0.10644937,-0.08592252,0.11745641,0.05115673,-0.0861731,-0.09403408,-0.03579023,0.01343013,-0.0250628,-0.11124186,0.06145815,-0.03300104,-0.11493225,-0.04038786,0.03589159,0.10429072,0.03303868,0.13752474,0.06730078,0.10492965,0.13456945,0.05112254,0.02427905,-0.18500133,0.04100535,0.05868875,0.07379486,-0.01143656,-0.13750121,-0.13812412,-0.1556048,0.08594433,-0.04717625,-0.10303213,-0.12045164,-0.00487833,-0.00864756,-0.06623991,-0.02614613,-0.0322389,-0.16065611,0.02424572,-0.00576454,0.00163013,0.02666325,0.06369312,0.10672036,-0.0465465},
  {0.03492815,0.02703194,0.01474445,-0.13488309,0.0953712,-0.06933636,-0.06639008,0.06641383,-0.10773171,-0.1236373,-0.08146734,0.07975264,-0.02762973,0.09059387,0.0367342,-0.07241585,-0.00390117,-0.04102888,-0.11727423,-0.12241224,-0.13678887,-0.12330481,-0.11706991,0.03710461,-0.04726233,0.05145382,0.10496758,-0.01313533,-0.0843444,-0.01375453,0.12369904,-0.12149073,-0.05901369,-0.00704825,-0.10179035,0.01861782,-0.10827968,-0.14530613,-0.02688013,0.06930866,-0.12200169,0.0707579,-0.05407154,0.06980409,-0.02560441,0.02567776,0.01079425,-0.08280168,0.09314047,-0.07701713,-0.03084663,0.10717259,0.1012658,0.11565012,-0.04002259,0.12925561,0.02386545,-0.1070812,-0.01602845,0.07453714,-0.05152525,-0.06985037,-0.09951276,0.07404584,0.08295907,-0.04274599,-0.09203452,0.11355512,-0.1301247,-0.0864125,0.04697469,-0.05860755,-0.03595592,-0.04002762,-0.02290029,-0.0479293,-0.01601464,-0.11603647,-0.09167723,-0.03285266,-0.02494476,0.08753057,0.06271892,-0.12440928,-0.03716793,0.09977904,-0.14245181,0.09277333,-0.09668326,0.03568881,-0.16890052,-0.07978913},
  {0.02887841,-0.0771683,0.01267956,0.10868216,-0.04689795,0.11225795,-0.11534076,-0.11463486,0.08307932,0.0577152,-0.10403927,-0.01112072,0.04330536,-0.07332098,-0.06136467,-0.08280759,0.09168943,-0.0112065,0.03436818,0.09987164,-0.05192579,-0.00874693,-0.02367016,0.09903766,-0.06176319,0.10590549,0.12909576,0.0974583,0.10402298,-0.04800753,0.01749105,0.00966853,-0.06862973,0.01334784,-0.14239793,0.0833912,-0.08670688,-0.06829616,-0.12686405,0.02017105,-0.03163605,-0.01384112,0.05520768,0.07134058,-0.07815338,0.08799454,0.082732,-0.123958,-0.02750881,-0.03533117,0.04586897,0.12544602,-0.11028274,-0.05073241,0.01856332,-0.03764649,-0.09728453,0.12024396,-0.08009037,0.10672169,0.05100255,-0.08419991,0.09250962,0.11648268,0.06789986,-0.04195763,0.06459693,0.10076907,0.09045491,-0.03923623,-0.0769313,-0.0914152,-0.04281296,0.10466239,-0.12929077,-0.10030867,-0.10173119,-0.01758703,-0.0737013,-0.04089666,-0.04482959,-0.03228631,-0.04936482,-0.0316941,-0.00873549,-0.06487138,0.00273812,0.03882287,-0.11237285,0.0184153,-0.03900313,0.01198668},
  {-0.04144966,0.03594482,0.02700799,0.21042033,0.12820478,-0.02771089,0.02819862,0.05187866,0.06004563,0.09776874,0.09799593,0.21855062,0.02236766,0.04514381,0.20299749,0.10109343,0.11257099,0.02513878,0.183404,0.04008868,0.15963097,0.07016685,0.16306175,0.01068519,0.12490347,0.02445426,0.10213156,-0.03030905,-0.02179835,-0.18344004,-0.05055643,0.16314808,0.00545122,-0.16665898,-0.11702298,-0.06457054,0.1732753,0.08006425,-0.07347859,-0.00323618,0.1663653,-0.03785349,0.15903175,-0.00947059,-0.0610755,-0.11060991,0.02793727,-0.17713411,-0.20186897,-0.18562461,-0.03246671,0.20647249,0.01274238,-0.10930845,0.09162247,-0.03826578,-0.1334571,0.0880061,0.20973833,0.02991609,0.03117811,0.00548065,0.16408062,0.05985746,0.0630716,0.07857851,0.08847788,-0.09411401,0.13878916,-0.07556689,0.10278413,0.15111005,0.01490984,-0.02896676,-0.01334108,0.0753047,-0.17175427,0.07751503,-0.07068026,0.18966149,-0.10818472,0.05157647,-0.08038595,0.17622674,0.00091398,-0.16399302,0.06936982,-0.16057312,-0.04763183,0.15404887,0.08607164,-0.05698605},
  {0.16576204,0.05617862,0.12815425,-0.0760187,0.01715977,0.15434748,-0.03960467,0.06864098,0.10909799,0.02452027,0.07500698,-0.01355334,0.07117397,0.04620189,0.0222183,0.07946952,-0.02736208,0.1314439,-0.04064667,0.01247317,0.10375477,0.13930944,0.01181991,0.06376433,0.07193778,0.11769409,-0.09072216,0.01072,0.04874747,0.05032521,-0.14996429,0.1380778,0.0451731,0.06124681,-0.11552624,0.07118545,0.17277166,0.03410713,0.03712454,-0.16391234,0.1684143,-0.082908,0.15103431,-0.05493925,-0.04708796,-0.03081715,-0.03181833,-0.1212741,0.05908301,-0.09720428,0.05853028,0.10295896,-0.12460032,-0.10856696,0.08851674,-0.1512071,0.00106591,-0.01919143,0.06239337,0.03169325,-0.05576636,0.11019911,-0.06672443,0.03928711,-0.02706356,0.05557451,-0.01698328,0.06558921,-0.07279203,-0.08969615,-0.04929467,0.08323312,0.04169616,-0.073103,-0.05655066,-0.00820377,-0.02613795,0.1412238,0.01333994,-0.07770373,-0.02822774,-0.06486069,-0.01764355,0.01829438,0.04161845,0.07519881,0.04445572,-0.04590691,0.07946376,0.12218753,-0.06960911,0.06328237},
  {-0.00163022,0.01588331,-0.04487703,-0.00146792,0.11476072,-0.07810999,0.0935078,0.10592256,0.14122295,0.13966614,0.01919344,0.05441877,-0.00344218,0.09636342,0.11316882,-0.05823385,0.00439313,-0.03701583,0.13469078,0.06513744,0.1458294,0.01381175,-0.02550055,0.08808181,0.17797376,0.03845689,0.12675464,0.04742109,-0.07502317,-0.13063587,0.04770273,-0.02649608,0.09178468,0.03578281,0.10697137,-0.04238863,0.045054,0.08728077,-0.05221002,-0.05121026,0.16147132,0.04774047,0.00554704,-0.05862845,0.00038262,-0.04995631,-0.01735586,-0.06882624,-0.08154813,-0.07487991,0.03896612,-0.04299778,0.03291042,-0.13016823,0.08757954,-0.05134183,-0.05103199,0.064771,-0.00284753,0.12951785,0.02914337,-0.11398146,0.06270216,0.04019056,-0.04208521,0.01528104,0.09493946,-0.08263988,0.04298629,0.09706228,0.12678277,-0.09252708,-0.07433336,-0.0593943,-0.02530332,-0.06651215,-0.06359973,0.09192177,-0.01098433,0.02057641,0.025741,0.02158034,-0.08657023,0.03745164,-0.05693093,-0.09131043,0.05429691,-0.08608492,-0.02763245,-0.02505252,0.1105444,-0.07219359},
  {0.12210457,0.00631018,0.03168089,0.07562623,-0.01837872,0.15511036,0.10323638,-0.07212117,0.08497906,0.04009576,0.11634095,-0.06550571,0.01632194,0.13099045,0.0517428,0.1236858,-0.05918124,-0.03851614,0.12898414,0.02527991,0.12236811,-0.05929999,-0.08759403,0.04113316,0.08594495,-0.08541199,0.14220484,0.10119581,-0.093054,0.10312024,0.06294098,0.03489547,0.01250043,-0.08762617,-0.13826534,0.02674124,0.13687713,0.07730613,0.05748262,0.08227916,0.10135183,0.01177645,0.14466769,0.12823011,0.01711284,-0.06752569,-0.02907201,-0.04206685,0.04453418,-0.11126873,0.01413581,0.1132242,-0.07573611,-0.05187224,0.05869479,-0.03230621,-0.00728363,0.08810388,-0.00398979,0.09541447,0.06258815,0.13844812,-0.062521,0.03356187,-0.03814581,0.14964588,0.1289688,0.05389182,-0.06465918,-0.14364001,-0.06744131,0.10921811,-0.02458064,0.02409243,-0.11310647,0.05919623,-0.10786806,0.07914201,0.08363585,0.13425274,-0.10036806,0.05684466,-0.11733887,0.08917883,0.01321924,-0.00226528,-0.03490869,-0.11898594,-0.09955636,0.15141979,-0.09460144,-0.04432324},
  {-0.03804784,0.0897728,0.0510377,0.02297984,-0.01951492,-0.05551619,-0.00424443,-0.00432556,0.04689858,-0.03415405,0.06189274,0.06328057,-0.07153331,-0.04820373,0.06414739,-0.02776275,-0.05469473,-0.07662249,0.12348045,-0.06296097,-0.00619899,0.09615186,0.09620127,0.03158565,-0.02121079,0.01446265,0.05013949,0.04822548,-0.13807887,-0.13650009,-0.00293851,0.12398221,-0.02712772,0.00667963,0.06746639,-0.09950537,0.11214627,-0.05329792,-0.09531032,-0.04038286,0.17175806,-0.11442003,0.07205079,0.11541695,0.03838288,0.01155213,0.03582401,-0.16189755,-0.03114959,0.03005178,-0.04482958,0.03212923,-0.01744271,-0.16748165,0.10984906,-0.15821496,-0.05433368,0.08623427,0.17269897,0.02804156,0.03865545,-0.07787445,0.10258678,0.08321448,0.15746816,-0.01026547,0.040056,-0.01281267,0.14073119,0.05913137,0.12768303,0.0790734,-0.13179035,-0.10846908,-0.10430975,0.13191685,0.04152944,0.02487312,-0.09919519,0.12956779,0.00427639,0.05528142,0.05770199,-0.11083211,-0.00325617,0.1113327,0.10706382,-0.07200102,-0.08720122,0.10411157,-0.03667511,-0.05750681},
  {0.04738399,-0.03275396,0.10983057,0.0315831,-0.01331307,0.16716935,0.10274837,0.09263851,-0.04805189,-0.02016613,-0.03428312,-0.04764096,0.00637798,0.0708348,-0.02785236,-0.03840066,0.04180677,-0.00348879,0.02777517,0.04006168,0.1512683,0.15568861,0.11653385,0.14901718,0.0721637,0.07118408,0.04647561,0.10585577,-0.08303516,-0.03990381,0.01175108,-0.06576403,-0.05356732,-0.07934605,0.02969267,0.01080124,0.13696878,0.05903754,-0.08060694,-0.05305726,0.09319673,-0.01786624,-0.04208463,0.09351286,-0.0458608,-0.06580424,0.15179318,-0.11391042,-0.01788574,-0.15238102,0.05604083,-0.111924,-0.13179024,-0.11163914,0.0017223,-0.01407302,-0.02636451,0.06121961,0.10119291,0.06743322,0.07586485,-0.1193911,-0.06694557,-0.10194481,0.14219202,0.09283885,0.06688317,0.09758423,0.12767366,-0.08454623,0.07968501,0.13316533,0.04069046,-0.14417328,0.09525532,0.0856955,0.08822332,0.04387305,-0.11775659,-0.04650021,-0.17870167,-0.07416646,-0.07418959,0.12373594,0.07312793,-0.09750222,-0.03578814,0.03371459,-0.00874237,-0.04734771,-0.00105141,0.00263854},
  {0.03256322,-0.06071789,0.09475823,0.07844178,0.16052262,0.11505207,0.02866601,0.01221651,-0.06094839,0.16368702,-0.06078793,0.01507452,0.14993802,0.17571439,-0.04097885,-0.06983916,0.07912605,-0.0464275,-0.01637506,-0.04316545,0.02485918,0.01961945,-0.0399252,0.12477283,0.14498195,0.1058887,0.03967532,-0.03541916,-0.11372551,-0.11057737,-0.19408187,0.07202044,0.13576438,-0.09745687,0.01739232,0.04703605,0.15466504,0.06267279,-0.08204129,-0.0268621,0.0852836,0.05777011,0.12040708,0.11196664,-0.019447,-0.14149532,0.11104279,-0.00724222,-0.01601109,-0.08139704,-0.05116219,-0.05426854,-0.13912968,-0.00413644,-0.04729277,0.0259451,-0.00750016,0.13711439,0.00869494,0.14330745,-0.14833303,0.05735227,0.01150091,-0.08114076,0.17980388,0.0517958,0.06605479,-0.20600757,0.15940987,0.04635802,0.15261754,0.1872579,0.0308741,-0.08819512,-0.08115765,-0.03974819,-0.1490626,-0.03008948,0.00272349,0.03475717,-0.09088008,0.16719116,-0.17945482,0.14279808,-0.15131497,0.01887969,0.13922215,0.03192842,-0.12732387,0.18149075,-0.05383071,0.05269971},
  {-0.11156543,-0.00971519,0.01305843,0.1034678,0.0289064,-0.12712297,-0.03438597,0.0158165,0.0295169,-0.10726646,0.03965647,0.00586225,-0.0733686,0.02506813,0.06370217,-0.03395121,0.10546514,-0.01115509,-0.12970391,-0.10179555,-0.06098513,-0.03935209,-0.00016758,0.09142045,-0.10311422,-0.02463792,-0.01860122,-0.0402129,0.03138035,-0.03578524,0.11797994,-0.04200623,0.02801033,-0.03781589,-0.08235137,0.14685544,0.06817937,0.03549651,-0.03863127,0.10429805,-0.00910215,-0.09570023,-0.08732777,-0.05284853,0.08806443,0.13833444,0.0033157,0.1250713,0.05177137,0.12299012,0.07070389,-0.06003697,-0.02872478,0.03401312,0.12278967,-0.10437086,-0.12596436,-0.10973343,0.04232777,-0.0758763,-0.01723039,0.03919279,0.11674985,-0.06147938,-0.02911385,-0.08200867,0.05008384,-0.08665514,0.06978999,0.03976556,0.10996929,-0.00759705,-0.0548179,-0.04842132,0.12755215,-0.04546485,-0.03257715,-0.06123846,0.09100233,0.02072751,-0.04577484,-0.11719899,0.09405757,0.07648934,0.07559644,-0.00477127,-0.08011158,0.05318414,-0.03065396,-0.10419612,-0.12208661,0.07640532},
  {-0.02595816,0.14690505,-0.01304898,0.08553714,0.09275111,0.00697488,-0.07777142,6.864e-05,-0.05169258,0.05024477,0.02198363,0.04827848,0.05316638,-0.06917042,-0.07302054,0.13530497,-0.0081322,0.11547863,0.02891818,0.12057214,0.12143532,0.07636537,0.01832921,0.15335403,0.02079388,0.05630166,-0.03566635,-0.07823443,-0.11734,-0.08698365,-0.00454936,0.16325103,0.18566874,0.06475131,0.09510686,-0.03277598,0.07750522,0.06943543,0.08679697,0.03986205,0.02980901,-0.05655966,-0.05066123,0.05941286,-0.01372752,-0.1489444,0.06482728,-0.11650357,-0.02270914,-0.02715649,-0.06763929,-0.00900774,0.06988768,0.07498115,0.05755601,0.01552581,0.02837281,0.02928918,0.10298703,-0.03188428,0.02584637,0.05052591,-0.01497152,-0.04983683,0.15059966,0.05787095,0.10354919,-0.02391467,-0.04156087,-0.12120436,0.14893131,0.07015933,-0.11328191,-0.0906446,0.02763474,0.06131006,0.04803823,-0.01067901,-0.0691609,0.11546651,-0.01723086,-0.02603925,-0.06465669,0.04138825,-0.07583223,-0.02428488,-0.00541522,0.0470356,-0.01408116,0.03871222,0.2003029,0.07083058},
  {0.15169236,0.08491152,-0.01490231,0.10365499,0.16518217,0.14770904,-0.05690684,0.07541882,0.06233061,0.11588198,0.07418305,0.13324459,-0.06560425,-0.07681671,-0.02666398,-0.04483885,0.08058063,0.04808081,-0.07750736,0.01371681,0.06349732,0.04299372,0.16675565,-0.00099806,0.13048059,0.13264237,0.12966965,0.1213867,-0.12517156,0.00548852,-0.1659474,0.14796188,0.07818719,0.05906301,-0.09070215,-0.09241878,0.13865183,0.13302483,-0.12738048,-0.01585161,0.09926677,-0.02757475,0.00267048,0.12155759,-0.01580319,-0.0503015,0.09350512,0.05486467,-0.10766099,0.00307972,0.0875576,-0.06288361,-0.06791788,0.10329134,-0.03034923,0.03297847,-0.04693513,-0.03801297,0.11687081,0.03676574,-0.13833286,-0.04164973,-0.03004857,0.00703712,-0.04774151,0.09158237,0.03747514,-0.12937571,-0.07499739,-0.11895569,-0.06653508,0.03918966,-0.11860832,0.00100106,-0.00408912,0.00413999,-0.11751982,-0.02980755,-0.11460645,-0.00543923,-0.19737318,0.06816535,-0.10105209,-0.05110991,0.05793573,0.09149303,-0.07463434,0.01110406,-0.03413171,0.02743877,-0.09015115,-0.08638632},
  {-0.01093243,0.10897852,-0.0038092,0.14032966,0.16164549,-0.030426,0.14405674,0.12437315,0.18504317,0.09073752,0.12695067,0.0920395,0.13388908,0.0776292,0.08963972,0.03380837,-0.00744777,0.03902958,0.17743807,0.01820422,0.07723506,0.00053305,0.04686923,0.13798994,0.13832808,-0.0161971,0.20211162,0.15064238,-0.07585093,-0.0163178,-0.18892525,0.15139775,0.11108539,0.02278235,-0.06745489,-0.1018884,0.00288796,0.12265099,-0.18550593,-0.14164385,0.1531394,-0.11331288,0.19353062,0.10562928,-0.15823422,-0.01929247,0.00717991,-0.15430064,-0.18884043,-0.09409713,0.03214617,0.08843737,0.00325981,0.06640616,-0.0212315,-0.17862676,-0.02083713,-0.03495948,0.03972776,0.1166231,0.04237031,0.05743574,0.12616938,0.15915065,0.03093004,0.06030336,0.09183829,-0.15715434,0.12993288,0.00799321,0.06325474,0.05429085,-0.07249224,0.0064417,-0.13263519,0.19605094,-0.13619205,0.02092849,-0.03171475,0.09521763,-0.05025548,0.04543429,-0.03754909,0.03691552,-0.01262103,-0.15568529,0.01780759,-0.09796079,0.01812171,0.0782257,-0.03635443,-0.02239554},
  {0.0032032,0.13638207,0.14707848,0.08458562,0.07761525,0.12351038,0.1003197,0.10251617,-0.09312321,0.08061101,0.07499077,0.07700413,-0.03154102,-0.08469308,-0.1194488,-0.05330038,-0.11995105,-0.07447197,-0.10857175,0.03133885,-0.04390937,0.05609264,0.13128614,0.08421514,0.07884403,-0.05407384,0.0878448,-0.06831255,-0.12441736,-0.0244216,-0.00649551,-0.07725532,0.04596132,-0.09540325,-0.135582,0.07360231,0.1580092,0.02649881,-0.11953231,-0.07149976,0.09178032,-0.06807462,-0.01441528,0.08155351,0.06336583,-0.0176616,-0.07137945,-0.12363474,-0.04760735,0.07166962,-0.18095113,0.01033659,-0.07991494,-0.14123164,-0.04438846,-0.11945202,0.02951968,0.05772282,-0.07414544,-0.09379967,0.01899277,0.10079065,-0.0070741,-0.0624536,0.1133038,0.15327251,0.07372129,-0.02660941,0.05822744,-0.03838661,0.00785371,0.00466456,-0.15130754,-0.09281742,-0.04659038,-0.09954041,-0.04764618,0.0638079,-0.04519029,-0.00940782,-0.10477482,-0.09065221,-0.01517498,0.05180893,0.08905426,0.07588556,0.06309553,-0.04363511,0.03922247,-0.04045869,-0.06730256,-0.05553286},
  {0.02270645,0.08073017,-0.04917507,0.10890955,-0.01799817,-0.02852276,0.01758188,0.10246038,-0.04029697,-0.01411031,0.09026845,0.14054908,0.07191481,0.09886834,0.00241189,-0.07050212,-0.02852113,0.03567913,0.07238483,0.15385297,0.13640933,0.1252995,-0.0353202,0.02802353,-0.09657162,-0.02950403,0.04181363,-0.03334811,-0.00403723,-0.09200022,-0.07050469,0.15932055,-0.07123521,-0.09494121,-0.02205706,0.02311873,0.07841399,-0.07768604,-0.04783564,-0.12192055,0.11747137,-0.0200371,0.1371287,-0.00599117,-0.04863268,-0.01327729,0.07866593,-0.14944066,-0.08413621,-0.06214172,0.02773369,0.01721655,-0.05861309,-0.17081565,0.14925016,-0.12641957,0.10223714,-0.02514306,-0.01426266,0.11441918,-0.14994833,0.01526757,-0.0664958,-0.12054905,-0.01348113,-0.07515918,-0.05477292,-0.07490238,-0.06149707,-0.07148899,-0.05858979,-0.08121177,0.07364954,-0.10609952,-0.05550672,-0.02211684,0.05873483,0.07128249,-0.05096533,-0.08224256,-0.14624059,-0.03785812,-0.06687374,0.02401468,-0.05515202,0.07483051,0.02541035,0.06159856,-0.10455316,0.08266062,0.06478455,-0.01247533},
  {-0.0541384,-0.04760474,0.04499135,0.07176241,-0.01721718,0.09249586,-0.10880525,0.11096504,-0.0291674,0.11125004,-0.11731938,-0.09144796,-0.12905785,0.00567914,-0.09898355,-0.13028586,-0.05996332,-0.05854094,0.0500556,0.04250195,0.02022555,0.02801823,0.08829587,-0.06283519,0.0517875,0.02057113,-0.02047668,-0.08410013,-0.03109073,-0.01796862,-0.01175632,0.01031508,-0.0799676,0.09575153,-0.0036019,0.04474786,0.08199701,-0.01568595,-0.06164329,-0.07573318,-0.04864055,0.09065437,0.00105039,-0.05764182,-0.01585389,-0.02002579,-0.00305399,-0.10744472,0.06025074,0.04470126,-0.00424361,0.04986505,0.06578492,-0.11084479,-0.01002071,-0.13607848,0.03538118,0.1391192,-0.04577782,-0.03087367,0.03890622,0.11344584,0.10522558,0.05998336,-0.08538985,0.02214773,0.12641829,0.01182228,-0.09230196,-0.10274445,0.16340975,-0.05142622,-0.15100923,-0.0614562,-0.09519257,0.13019256,0.00183984,0.13953006,0.0462299,-0.01602261,-0.07656849,-0.04120967,0.02999893,0.10041957,0.05095505,0.04576918,0.13896196,-0.07318394,0.03404567,0.04174144,-0.0106667,-0.00850935},
  {0.01438655,0.05090278,-0.05195035,0.03437679,0.02122409,0.06373052,0.03179429,-0.08247008,0.04366519,0.11659862,-0.08440804,0.13484685,-0.0252719,0.07779168,-0.02107273,-0.04800052,-0.04953938,0.06821959,0.15500093,0.10554931,0.02513097,-0.08237518,0.17007156,0.07076954,0.07241756,-0.0061779,-0.02276672,0.04265124,-0.05826388,-0.002106,-0.01149531,-0.07156974,-0.00695464,0.01484209,0.10866107,-0.00891646,0.02206934,0.09393431,-0.08888355,-0.13950212,0.00188884,0.01789774,-0.01564092,0.13043348,-0.00987992,-0.06560045,0.07204582,0.03476679,0.02444609,-0.074941,-0.00719105,-0.04698813,-0.03016374,-0.13242106,0.01373064,0.05885572,0.08011549,-0.02109019,0.02456851,0.10808638,-0.07177602,-0.05612813,-0.01731931,0.05923676,0.06419352,-0.05208628,-0.09382503,0.05686472,0.05370945,0.06604951,0.00288227,-0.07232922,-0.04967052,-0.1171611,-0.00031297,-0.0799263,-0.13390426,0.03258608,0.02460116,0.11270343,-0.14881212,0.09033794,0.06336252,-0.06116904,-0.01023692,0.07165292,-0.04940651,-0.12800092,0.02335912,0.02951697,-0.12922291,-0.08724479},
  {0.00397059,0.15618517,0.04703811,-0.00838634,-0.02473046,-0.02513377,0.07723409,0.01172779,0.17069419,0.05877442,0.06803664,0.05296914,0.02730234,0.09846178,0.06453511,0.14646307,0.12451818,0.02093442,0.13464278,0.14039153,0.13302484,0.12508695,0.1832707,0.09259,0.12639225,-0.02612294,-0.00048683,0.12158585,0.05114388,-0.12859756,-0.12103961,0.04078942,-0.00321658,0.02382642,0.01226551,0.03644935,0.10997981,0.05255101,-0.16093871,0.03107972,0.09408331,0.05190149,0.16663525,0.11595462,0.01774907,-0.12827618,-0.01827374,-0.01814578,0.05872361,-0.17064187,-0.04851569,0.1511801,0.01624549,-0.07613759,0.14029102,-0.12137072,-0.13429126,-0.04674695,-0.04588163,0.08389895,-0.15762635,-0.02567834,0.18516232,-0.01089398,-0.0344955,0.12113477,-0.07193733,0.06731825,0.12003846,0.0356883,0.07787346,0.08235601,0.03572335,0.05009267,-0.17325073,0.1822532,-0.10791745,-0.01501323,-0.08822986,0.17231081,-0.01541432,0.03955608,-0.14800765,0.03612686,-0.09531303,0.07110669,0.07422169,-0.13643374,-0.08160804,0.09015011,0.01653799,-0.02489367},
  {0.0347265,-0.06765977,0.02168548,-0.01938715,-0.08318404,-0.08921897,0.07577084,-0.13467333,0.09960876,-0.07075085,0.07113867,-0.00272898,0.02542422,-0.09004112,0.08452607,-0.01341773,0.01993312,-0.01223352,0.11316114,-0.03071134,0.01779874,0.06330123,-0.11109161,-0.03322332,-0.0409627,-0.00464984,-0.10901122,0.10355335,-0.02943903,-0.00328665,0.08534676,0.10994527,0.01187467,-0.10581587,-0.12512766,-0.02243394,0.10369356,-0.11279069,0.05446934,0.09537178,0.06040256,0.08907435,0.10624179,0.07850944,0.11345012,0.00756343,-0.10193443,-0.00160431,0.07412926,-0.000321,0.02569506,0.13958968,0.06263258,0.15229772,0.09325004,0.00093491,-0.02599037,-0.08720692,0.1506651,-0.00967347,0.03770082,-0.04234359,0.09578741,0.10996448,0.12119401,0.01864056,0.14020255,-0.00780272,-0.08964901,-0.08183756,0.07322937,-0.00085425,0.08741947,-0.0231907,0.07399059,0.11395479,-0.1382284,-0.02897411,-0.06312802,-0.0961575,-0.06438652,-0.10023024,0.08138695,0.05976207,0.02582733,0.04131725,0.1324858,-0.13671947,-0.13271168,0.10052586,0.18474703,-0.0669575},
  {0.15266907,0.15908697,0.14224368,0.01053679,0.16377172,0.05747939,0.12267883,-0.01301716,0.08292495,0.06267569,0.01434508,0.08712273,-0.0341869,0.09049041,0.12014944,0.02468004,-0.07293728,0.10105091,0.10607689,-0.03154098,-0.05400216,0.06615601,0.04220975,-0.05823855,0.01544953,0.09258655,-0.04249215,0.05371112,-0.02813585,0.01881031,-0.06117869,0.05290682,-0.06808941,-0.09385721,-0.0361406,0.09378701,0.08652949,0.0813741,-0.0292397,-0.14057586,0.03199075,-0.06337342,0.03441594,-0.01571358,-0.10015579,0.11152431,0.08221203,0.0435984,0.12203503,0.07851607,0.03696888,-0.09358858,0.0130781,-0.13919735,-0.10865449,0.03751126,-0.0014918,0.05479612,0.0195586,0.11092886,0.06398217,0.00134158,0.07920294,0.10766169,0.09255135,0.01649084,0.04628418,0.08039249,0.03212382,-0.08655253,-0.00640721,-0.04245837,-0.08929698,-0.0695341,-0.14875594,-0.0882621,0.01887842,-0.09111312,-0.12075414,-0.05582303,-0.05365494,-0.08891498,-0.12209313,-0.02150966,0.08299386,-0.06670235,0.14605786,0.03530135,0.01096107,0.10031638,-0.07859737,0.03512375},
  {0.05445283,-0.04402584,0.14482476,0.14676046,0.13496974,0.08652335,0.02244622,0.01874717,0.13826759,0.04085867,-0.09605189,0.03341781,-0.07310261,-0.10615815,0.08011346,0.07675472,-0.03581656,0.0755616,0.08543752,-0.05316382,0.02739381,0.13908301,-0.03106499,-0.02718231,0.07130879,0.1211406,0.06299276,-0.00615106,-0.00383787,-0.05551623,-0.09971216,-0.12292381,0.10305455,-0.05725432,-0.027716,-0.0888766,-0.01557938,0.05678724,-0.11060807,0.05479091,0.15592882,-0.02884133,0.13225995,-0.05273802,0.00901963,-0.09317911,0.12429852,-0.05574495,-0.06472697,-0.15273407,-0.00596576,0.02990513,-0.12947814,-0.03116973,0.07851395,-0.15834495,-0.13067473,0.00664337,0.03173601,0.10227084,-0.04673941,-0.0341964,0.15256968,0.01814594,0.03610237,0.02241438,0.02351536,0.00751174,0.06688687,-0.15356189,-0.02960614,-0.05909958,-0.02274303,-0.00742659,-0.13820839,-0.00736684,0.05648033,0.03336731,-0.00641285,0.1636676,0.05752557,0.13822341,-0.10793367,0.1559282,-0.1289852,0.00563015,-0.07633145,-0.1431815,-0.01506298,0.11101205,0.08295175,-0.13466853},
  {-0.06735656,0.1170526,-0.04141191,0.1523045,0.09424176,0.13526565,0.03410046,-0.03160538,-0.03455814,-0.02541741,-0.01294825,-0.02419081,0.08830579,0.08099353,0.15944357,0.04750907,0.01861783,-0.03497354,0.07409871,0.16461545,0.02560821,0.03577248,0.01438319,0.02761665,0.03226356,-0.06623803,0.14260922,-0.05871153,-0.02695457,0.0440652,-0.12220368,-0.02774609,-0.0618961,0.07178605,-0.12138434,-0.06202136,0.1246442,0.10192126,0.0722199,-0.09357176,0.00158239,-0.12888506,0.12702577,0.12540226,-0.04835964,-0.01491675,-0.02144222,-0.09058455,-0.12866065,0.0751944,0.01320819,0.09603139,0.04008807,-0.03162856,0.03294818,0.04319043,-0.1503858,0.0756696,0.15423949,-0.05419268,-0.032641,-0.00881079,-0.03787474,0.04200853,0.09196529,0.11521905,0.01687533,-0.12329023,0.1462003,0.05835599,0.05176459,0.15181759,-0.08204473,0.06899095,-0.07829323,0.15247996,0.07938075,-0.04226907,0.0238218,-0.03452787,0.02842868,0.13357694,0.02781348,0.08634559,-0.13490213,0.06348176,0.16158092,-0.15788373,0.01957384,-0.06965739,0.1404757,-0.0080987},
  {-0.02314689,0.15959449,-0.04926454,0.06296053,0.13044958,-0.05943387,0.06221843,0.13114868,0.05470615,0.06965733,0.02383549,0.1358499,-0.06088799,0.08833627,0.12173027,-0.00293742,0.13861327,0.0944091,0.07850938,0.10521372,0.11142443,-0.01871609,0.00851438,0.04860361,0.06997544,-0.01543279,0.04446866,0.14156565,-0.11331879,0.02762247,-0.1495179,0.16492985,-0.02298895,0.00911243,-0.18003382,0.08360564,0.03637387,-0.05821631,-0.00272238,-0.07678837,0.09658614,-0.14515439,0.14304058,0.00788242,-0.18337952,-0.03948501,-0.01862706,-0.16601035,-0.08286738,-0.1205876,-0.09258068,0.00063125,-0.0093688,0.05119285,0.10065085,-0.2111963,-0.06463914,0.14850084,0.15315875,0.05516084,-0.08640095,0.12112682,0.01958193,-0.00855733,0.04076312,-0.0759898,0.03326968,-0.16241089,-0.04912117,-0.08687189,0.07707434,0.09637418,-0.03779842,0.02758684,-0.06011543,0.09215616,-0.03625911,0.17114648,0.00606834,-0.04398407,-0.00042088,0.06400779,-0.16981071,-0.04147801,-0.07825183,-0.00861368,-0.00038328,-0.19041234,-0.01898055,0.08781255,0.1658523,-0.13303445},
  {0.00052754,0.01695725,-0.02963173,-0.10996382,0.09472747,-0.00047917,-0.01444513,0.01906115,0.00340805,0.13294828,0.02862122,-0.0398334,-0.07625295,-0.02194459,0.11961393,-0.00901305,0.13007806,0.08479816,-0.04594017,0.07417139,-0.11439165,-0.04880619,0.0471252,-0.11859192,-0.02548486,0.01901424,-0.08267099,-0.09146878,-0.07875457,0.04497288,-0.05049489,0.04920903,0.07447419,-0.01460537,-0.00584174,-0.03146813,-0.04846504,-0.05128952,-0.00071179,0.09351713,0.13301773,0.1014749,-0.00146719,0.06872043,0.04443486,-0.08924519,0.05526535,0.07536312,0.03282511,-0.03323788,0.0063927,-0.00309449,0.10287913,-0.03890063,-0.03310225,-0.13481618,-0.03024246,0.10493989,0.0372764,0.05316272,-0.04690185,0.06577159,0.06064034,0.15146017,-0.10327319,0.08198991,-0.03300066,-0.05899649,0.08841206,-0.13547681,0.0627123,0.02724109,-0.0572759,-0.10619188,-0.05102445,-0.10604221,-0.10721371,0.08636556,0.0767019,-0.10808863,-0.02305309,0.022353,0.11051802,-0.05300662,-0.12137265,-0.10076316,0.1006351,-0.04006209,-0.00615033,0.05996135,0.13467759,-0.10634173},
  {-0.02484326,-0.04547508,-0.01491217,-0.05523729,-0.06161085,-0.04010909,0.02536366,-0.06519669,0.04106413,0.14910054,0.06691942,0.00425658,-0.05840191,-0.0143277,-0.06127761,-0.04053787,0.1246727,-0.04156516,0.05200326,0.08046384,-0.00085046,-0.06502242,0.12940611,0.07890715,0.04772235,-0.07395522,0.08820209,-0.03849239,-0.14154345,0.02931045,-0.01304983,-0.03859975,0.02353707,-0.10969055,-0.03312919,0.02178207,0.05543955,0.03401947,-0.02446627,0.01977172,0.17012055,0.02455742,0.08996692,0.07365542,-0.13679862,-0.00545372,0.01249777,-0.06371717,-0.15669154,0.05927943,0.05386601,0.02915468,-0.05518763,-0.01654319,0.16391963,-0.06397728,-0.07937239,0.06727634,-0.05308846,-0.05689459,-0.02073504,0.14093134,-0.02811226,-0.03417357,-0.02909175,-0.02940051,0.02696385,-0.02336064,0.08835494,-0.0378916,-0.04090378,-0.08648293,0.05002274,-0.01458795,-0.11192562,0.10230388,-0.07570557,0.02493359,-0.06591356,-0.00377843,0.06747643,0.1497334,0.02012717,0.16887832,-0.11152568,-0.09754897,0.11892616,-0.0815214,0.02052707,-0.04005873,0.02012767,-0.00223017},
  {-0.08690533,0.02102806,0.02300176,0.09117971,0.07810607,-0.07574267,0.12677707,-0.06992772,0.13875839,0.11099072,-0.03862987,-0.00320047,-0.09285107,-0.07909417,-0.08516937,-0.04320468,-0.10471612,0.11939742,-0.06770222,-0.07362204,-0.05291849,0.01834718,-0.04858706,-0.08723542,-0.1098451,-0.14675108,-0.00967274,0.02905726,-0.0890843,-0.14194249,0.09065967,0.04119244,0.05984992,0.10340397,0.00979613,-0.1340075,0.12841418,-0.0272952,-0.05282005,-0.05569893,-0.06520893,-0.04577173,-0.00365427,-0.05087697,-0.11419462,-0.07849745,-0.0339433,0.08905839,-0.12798467,0.02654768,-0.08227679,0.01574197,0.05770611,0.03073597,-0.00228674,-0.00748704,-0.08642936,0.11266074,0.09131528,0.05124265,-0.09447651,0.14260092,-0.05440948,-0.07404265,0.04290218,-0.14406982,0.02789066,0.03977365,-0.06896541,-0.11980654,0.02154542,0.04839019,0.0639651,0.1041103,0.07893084,-0.03944762,-0.01340001,-0.02054519,0.02545581,0.05442224,-0.05666775,-0.07044733,0.07944807,0.1037449,0.05370651,0.04995048,0.12654632,-0.03629766,0.04176158,-0.033921,0.08144863,-0.06907815},
  {-0.04563472,0.06999388,0.03547795,0.07517388,0.0647653,-0.11157909,-0.04289334,0.00967249,-0.11335862,0.11042171,0.07141218,-0.09366837,0.13517624,0.1324133,-0.10393994,-0.00064269,0.10186806,0.1167421,-0.04282025,-0.06540149,-0.02488051,0.09983224,-0.08275763,-0.1017127,0.00881048,0.04449347,-0.09701739,-0.05039133,-0.09795643,0.08460137,-0.06153538,0.01942926,0.10275601,0.09998291,0.03551827,-0.15812626,-0.10484722,0.05204913,-0.08409652,-0.07658223,-0.06501727,-0.0331428,0.12570308,-0.04222487,0.1173908,0.09435996,0.0531555,0.03529957,0.1119873,0.09200803,0.09020238,0.01770264,0.08596931,-0.05203233,-0.1031809,-0.08656541,-0.13901627,-0.0925725,0.01177319,-0.09059029,-0.09236021,0.04437349,-0.02974836,0.01959571,-0.00308036,0.08519209,-0.09377792,-0.05713293,0.0833815,0.10701775,0.00506465,0.02572141,-0.04219934,-0.00923543,-0.03900205,0.06207856,0.13221928,-0.02671475,-0.03567586,-0.06901019,0.12539484,-0.02185802,-0.02294519,0.1222251,0.05145713,-0.07373329,-0.09523936,0.09243276,-0.10778854,0.06810469,0.02135871,-0.12289298},
  {0.08513054,0.01991169,0.05397678,-0.03591035,0.01483252,-0.06978636,0.16253638,-0.03006077,0.10376791,0.10945725,0.15929835,0.00706877,-0.04799474,0.10838332,0.03032089,0.00843205,-0.04680959,0.01339982,0.15620379,0.05538744,0.10735607,0.17650618,0.10484926,-0.03157103,0.10713951,0.09592354,0.14994858,-0.04566713,-0.02660029,0.0710436,-0.02755404,0.13632853,0.18051997,-0.06473646,0.00091486,0.05357587,-0.08970353,0.09907961,-0.03885016,-0.02981717,0.16075495,0.02938525,-0.01848959,-0.05764233,-0.11926462,-0.10531492,-0.00232443,-0.09245804,0.02334552,-0.04428054,-0.01231156,-0.01794322,0.01700411,0.10124957,-0.08279046,-0.1398755,-0.15915604,-0.08417937,0.1246051,-0.01759244,-0.15744254,0.09168041,0.02785514,0.09472802,0.08677606,-0.06145881,0.11922071,-0.10627708,0.10139298,-0.06839711,0.12905397,0.00640842,-0.12649325,-0.00080424,0.08264723,0.12023077,-0.1280012,0.10096148,-0.07252507,0.13531208,-0.01151067,0.13748078,-0.07687929,0.0462191,-0.14962879,-0.11098052,0.05001162,-0.04844113,-0.15040857,0.1090156,-0.07318965,-0.05546033},
  {-0.11752805,-0.08777881,0.08920448,0.03929145,-0.01142045,0.03936908,0.01124641,0.03847392,0.06171305,-0.0380723,-0.04254047,-0.06381114,-0.06307683,0.08832074,-0.07869569,0.09074605,0.07911161,-0.12372057,0.10540302,-0.06507969,0.05487998,0.01523236,0.00195165,0.0665815,-0.03873235,-0.11401667,-0.09764921,0.01427905,-0.06508334,-0.08582757,0.08642615,0.06334542,-0.07083897,0.05078285,-0.09275917,-0.02510287,0.0390856,0.12139211,0.01167712,0.11274185,-0.05935368,0.08494474,0.0428627,-0.01698127,-0.12789038,-0.10025138,0.09853999,0.04461901,0.05374603,-0.00062412,0.06060537,-0.00628348,0.04520245,0.01230926,0.03765061,0.05257461,-0.12868749,0.0450186,-0.05421248,-0.04435752,-0.08783987,0.13585441,0.03045265,0.11248297,0.13060777,-0.0652811,0.11847855,0.01466926,0.05732717,0.07879974,-0.0713269,0.07018586,-0.03561985,0.05754286,-0.11054906,-0.11102368,-0.13716733,0.08760705,0.10495342,-0.04649867,0.11470026,0.06218302,-0.01309946,-0.00232933,0.07950991,-0.05249124,0.05235223,-0.0007029,0.00845942,-0.10542429,-0.0278383,-0.09875436},
  {-0.05687189,0.06115269,-0.03355603,-0.02922999,-0.09691084,0.0806846,-0.0672563,-0.04468497,-0.0699489,0.06043486,-0.07655919,0.00624109,0.02944156,0.0902027,0.05037841,-0.08264706,-0.05388618,0.11787903,0.13288456,-0.08020056,-0.09370386,0.04416944,0.04192176,0.06858245,0.06795707,-0.06586121,0.04396537,-0.04218604,-0.1182437,-0.13381505,0.01697019,-0.02941661,0.04729675,0.08604505,0.03019815,-0.12050846,-0.04578817,0.03788669,0.02064883,-0.03236923,0.09097642,-0.09140867,0.07779338,-0.02624441,-0.11832789,-0.05256882,0.01801382,-0.06247524,-0.05365554,0.02651332,0.03557106,0.04828498,0.06476458,-0.03230204,-0.07365232,0.01154247,-0.12397109,0.15057313,0.01897999,0.11788826,0.05000544,-0.06169634,-0.03924965,0.06658796,0.06032419,-0.08456546,-0.05932748,0.02605939,0.04068655,-0.11618322,0.06368621,0.02976624,-0.04184607,0.00732446,-0.11394315,0.0212647,-0.15396069,0.12388421,-0.02289291,0.01069424,-0.11245413,-0.02851484,-0.00594716,0.1709633,-0.07628181,-0.02016842,-0.04154755,-0.00338041,0.02869208,0.149298,-0.03639701,-0.07934164},
  {-0.0235285,0.06555845,0.01144754,0.10170864,0.07461686,0.11164609,-0.09948564,-0.01174399,0.08508953,0.07985862,-0.06696203,-0.00589722,-0.02837192,-0.07501553,-0.09830097,0.09937834,0.00375527,-0.0145973,0.0363739,-0.10720936,0.00946681,-0.10480641,-0.10409986,-0.05674012,-0.07341911,-0.10108414,-0.05249261,-0.0919924,0.10092571,-0.05810699,0.02392849,-0.09531362,0.07396898,-0.0912607,-0.07970071,0.1748533,0.13538136,-0.04876101,-0.08479007,-0.05205807,0.05146736,0.04848811,-0.08074715,-0.05115608,0.0093833,-0.07373212,-0.06628529,-0.03885047,-0.02947871,0.0698809,-0.07147013,0.09825946,0.02993704,-0.10569759,0.06586465,-0.03761897,0.03292877,0.0442256,-0.03622681,0.00057481,0.07203323,-0.0138301,0.09046458,0.14365087,-0.09267689,-0.05205542,0.01023562,-0.07261147,0.05103652,-0.08564555,0.0075885,0.03821203,0.02996231,0.0486938,0.00522325,0.02089459,-0.07158908,-0.00482076,-0.09686889,0.04017356,-0.06264748,0.04783082,0.09915396,-0.03308581,-0.07945137,-0.12096692,0.00736157,0.01353176,-0.03107688,-0.0408592,0.1132677,-0.0885203},
  {0.04524432,-0.03618751,-0.03745949,0.06271822,0.06143953,0.15406273,0.13164534,0.10767558,0.06311733,0.14145754,0.01051144,0.13986453,0.01342519,0.13488327,0.06853405,0.01010306,0.09149478,0.05576847,0.05648097,0.06465334,0.10522987,-4.021e-05,0.09949744,-0.00772886,-0.09043846,-0.04457555,0.08209986,0.01796186,-0.11266894,-0.15387495,0.04095949,0.08987693,0.04944418,0.13144289,-0.13316652,-0.18825865,0.01415076,-0.07284537,0.01353065,-0.09873115,0.16073228,-0.15656854,-0.05211095,-0.07230663,0.0848045,-0.10195956,-0.05720548,-0.05070107,0.02795149,-0.09477962,-0.08855607,-0.05061092,-0.11263485,-0.10914129,0.09312561,0.01686066,0.04680559,0.05061604,0.05803925,-0.00687909,0.06117031,0.04128881,0.12462039,-0.05153077,-0.07338645,0.02676248,0.02875153,-0.02976719,0.05522067,-0.00324365,0.1149253,-0.03105469,-0.11862727,-0.1512959,-0.13423833,-0.01284703,0.10463417,0.08508661,0.02940805,-0.04048983,0.01023119,0.06854627,-0.10157726,-0.04811187,0.02098027,0.14794108,0.1621549,-0.06318871,0.06353386,0.0976667,0.02587026,-0.01872129},
  {0.10541998,0.12343284,-0.07852481,0.10937711,0.05606373,0.00041256,0.112142,0.05586657,0.01879101,0.0433064,0.05438812,-0.09995392,-0.11518263,-0.12599471,-0.01007444,0.04720455,0.03609324,-0.04059689,0.05112946,-0.11030833,0.01647792,0.03044282,0.1234585,0.00616942,-0.05633199,0.13836084,0.09310275,-0.00536139,-0.03839806,0.03073087,-0.08344952,-0.06233862,0.07679694,-0.1561305,-0.11476699,0.09136575,0.07120322,0.11866162,-0.02039095,-0.09432039,-0.04598003,0.02954196,-0.04008933,0.00652836,-0.14121243,0.08764716,-0.08177516,0.05356609,-0.0182283,0.01055561,-0.0235945,0.02819169,-0.06957936,0.00429882,0.13885237,-0.13110813,-0.12110507,-0.07396586,0.12091917,0.06460112,-0.07173634,0.10128775,0.15995775,0.0717345,-0.01922102,0.06091812,0.16227654,-0.10093386,0.06068687,-0.02895198,0.01724563,-0.08985183,-0.08346386,-0.12967053,-0.10409644,-0.02481115,0.00492809,0.038385,0.02541379,0.12176066,-0.08450148,0.00994859,-0.01508958,0.02857392,-0.05328146,0.00130261,-0.00250412,0.04962809,-0.08136801,-0.03145227,-0.05201705,0.09265538},
  {0.14664641,0.08574353,0.10275189,0.03506031,0.08259068,-0.07874501,0.08725125,-0.01954934,0.10890099,0.06062133,0.14039285,0.14925905,0.0696482,0.08724112,-0.02139657,0.00889601,0.14779937,-0.00200707,0.1198244,0.01295968,-0.01767188,0.030813,0.10308705,-0.08251359,0.0916319,-0.03632729,-0.00418791,0.06617657,-0.11649091,-0.11296824,-0.05710374,0.10995921,-0.07720968,0.06998622,-0.04917768,0.04719201,-0.00434403,0.10217743,-0.12844141,0.05238313,0.00498817,0.01276059,0.03039195,0.05359169,0.02454623,0.09120189,0.15822178,-0.03887719,-0.05026328,0.03650733,-0.05261778,0.15257907,-0.09903414,-0.1620661,0.08580123,-0.03665987,0.07916979,0.05655012,0.09796194,0.10345285,-0.13132192,-0.06030535,0.1018016,-0.05886239,0.03181609,0.00183164,0.1695835,0.10038213,0.01855985,-0.0677316,0.10074601,0.10902969,0.02203123,0.07537996,0.06516571,0.12201578,-0.1221875,0.01115988,0.03640537,-0.09291783,-0.19025536,0.03319773,-0.09360845,0.10914133,-0.0494992,-0.11148256,0.03112942,-0.02053829,-0.11911365,-0.06472082,-0.05446513,0.00472781},
  {0.06893404,-0.04830727,-0.01408207,-0.06285636,-0.11235226,0.11982503,0.07950513,-0.06533598,0.11911134,0.05440191,-0.0072633,-0.0248295,0.04909787,0.02873412,0.12687966,0.03714543,-0.05374184,0.128379,0.047904,-0.0277535,0.12981561,0.00863878,0.14198183,-0.05667177,0.0161432,0.09679209,-0.01121072,0.1211288,-0.09896623,-0.04821037,-0.00379188,0.02074886,0.10450847,-0.04382246,0.03308979,-0.10324961,-0.0791276,0.07713752,-0.05764591,-0.03450565,0.08851165,-0.03504481,-0.03179344,0.06559862,0.00674174,-0.15698272,0.05092165,0.06626821,-0.10358181,-0.0095535,-0.03972702,0.16665906,0.02925822,-0.06442996,0.11817589,0.05003724,-0.08683819,0.07788204,0.13954742,0.14541928,-0.05789882,0.00145539,-0.00516721,-0.00755494,-0.02385809,-0.01737436,-0.00089263,-0.0326921,0.1309191,-0.16742495,0.03793692,-0.06293269,-0.17143495,-0.0745322,0.00340793,-0.03352745,-0.12525935,0.14059225,-0.0916919,0.06770107,0.0800752,0.17677815,-0.13875513,0.09327825,-0.14062883,-0.05968067,-0.03273284,-0.09994327,0.00195118,-0.03915763,-0.01925177,-0.0345315},
  {0.1552834,-0.06286015,0.00536343,0.09994769,-0.0479094,-0.06068529,0.17023566,0.07688001,0.16836081,-0.00844115,0.02726283,-0.02419026,0.00202418,-0.00518911,0.16548537,0.07076686,0.03938417,0.11663145,0.10992827,0.04134921,0.10978648,0.07395821,0.04113613,-0.01333599,0.13083984,0.06339477,-0.01085087,-0.03799319,-0.15684491,0.03700977,-0.01307381,0.00681545,0.06469185,-0.00914844,-0.06514717,0.0066532,-0.02681525,-0.00916504,0.00402235,0.03491399,0.11235007,-0.16538028,-0.08284103,0.00769104,-0.00794552,0.07719859,0.12911595,-0.09883035,0.08099039,0.05859758,-0.04512124,0.10307297,0.04558283,0.0095899,0.11721345,-0.01250911,-0.0809435,0.06194404,0.10528588,0.16303591,-0.13554156,-0.08417804,0.11904984,0.00859855,0.03243499,0.03549592,-0.03742592,-0.03636209,0.00843012,-0.02646,-0.07118347,0.12410342,-0.0370893,-0.13697994,-0.07140781,0.03592845,0.03573345,0.04328694,0.07852504,0.02504429,-0.11948363,0.15980725,-0.01706128,0.09812997,0.05791655,0.0966429,0.15627825,-0.07266761,-0.08732586,0.16203317,0.16316834,-0.0793791},
  {0.05238546,-0.02492262,-0.06033155,0.09497938,0.08441659,0.14796667,0.10468556,-0.04772913,0.01266015,0.07940097,-0.06609542,0.1077911,0.09714067,0.03326393,-0.0620436,-0.03531912,0.14558521,0.11944231,0.10151082,0.12602668,0.05129693,-0.05813406,-0.02500461,0.04112708,-0.06380147,-0.06775869,-0.09806534,0.07673275,-0.12110735,0.0574248,-0.14262988,-0.01451619,0.03004191,-0.08140231,-0.0682343,-0.05732732,-0.01311877,0.02199091,-0.11581321,0.04566782,0.01636563,0.0535688,0.0297735,0.03791807,0.00138812,-0.12332124,-0.00100927,-0.15400012,-0.16009681,-0.07396832,-0.0172646,0.11732762,0.08121345,-0.04595517,0.14071846,-0.12397972,-0.11607983,0.1126671,0.06828222,0.10969011,-0.1360686,0.05880686,0.15471129,0.10105194,0.04468613,0.01961157,-0.04887035,0.04266702,0.07692309,-0.15486115,0.15187292,0.15596505,-0.02154091,0.03058827,-0.01521421,-0.02078932,0.09161068,0.14688747,0.09663761,-0.00664133,-0.03961492,0.07780254,0.03295031,0.15470578,-0.00799732,0.02960795,0.04893688,-0.04303772,-0.08535134,-0.08128048,-0.02550546,-0.11148857},
  {-0.13329236,-0.06945879,-0.00405095,-0.07489922,-0.02583125,0.09521368,-0.09705262,0.06782688,-0.0360982,0.00551674,0.03367727,-0.02748299,0.03600704,-0.08962373,-0.12733708,-0.08591307,0.05607084,0.0694757,0.06828336,-0.07443882,-0.03648427,0.06530691,-0.10948998,-0.08538939,-0.05424346,0.08246765,0.0617442,-0.01487968,-0.0886163,0.08731706,-0.08667424,-0.00089727,0.06262684,0.03419717,0.00972334,-0.15395817,-0.07326026,0.00240848,-0.07251363,0.08819059,0.00607908,0.12436098,0.14376226,0.06085128,0.11196298,-0.01247043,0.10222525,-0.06687699,0.04408623,0.03906357,0.00098115,-0.10610013,-0.04302722,-0.02925394,0.10784268,-0.05148438,-0.07458811,0.13158295,-0.0239798,-0.04127522,0.02037977,0.09319156,0.12179838,0.06923834,-0.07410588,0.06077676,0.00273216,-0.12209944,0.04060832,-0.05601802,0.05174925,0.12711939,-0.12048902,0.04756038,0.09243932,-0.02667874,-0.07123529,0.13000114,-0.02352666,0.06151496,-0.07762243,0.00669191,0.0818673,-0.09426381,-0.13543689,-0.00704786,-0.03798863,-0.00108284,0.01541833,-0.03958894,0.01241188,0.03370725},
  {-0.06232414,-0.03971772,-0.02838345,-0.01889225,0.05169128,0.09891807,0.03909181,-0.06767157,0.04751329,-0.01777161,-0.00125262,-0.07049078,0.10982772,0.03713238,-0.03950459,0.08120681,0.0737655,0.03587603,-0.0670873,0.0201586,0.10733483,-0.09318931,-0.01198608,0.11252616,0.15830673,-0.04662581,-0.0409274,-0.03292161,-0.10049824,0.1219092,0.03886181,0.08428302,-0.02301469,-0.03644573,0.08523298,-0.01663269,-0.04452058,-0.02431906,-0.01340988,-0.04291441,-0.08125909,0.02203319,-0.0219664,-0.08999277,0.03699682,0.05287153,0.14429618,-0.0084961,0.04463069,-0.09096707,-0.00361643,-0.07384089,-0.0086748,-0.10449307,-0.02494207,0.04040577,-0.0965247,-0.03973122,-0.06933929,-0.0637866,0.11604729,-0.04681588,0.11518136,-0.08084185,0.07455519,0.04618453,0.02042267,0.02320366,-0.10234955,0.08156405,-0.04588748,0.06222837,0.03738787,0.06996031,0.00197128,-0.00858415,-0.0054386,0.01893844,-0.04349105,0.10413044,-0.00534824,-0.10450599,-0.04549696,0.03726637,0.05846997,-0.07330058,0.11950369,-0.01472786,0.0273212,-0.03142811,-0.08182409,0.09110592},
  {-0.06901786,0.06491729,0.11155138,0.03028576,-0.00315062,-0.09596603,0.00435303,0.04109497,-0.0662091,-0.10037506,0.004625,-0.05522816,-0.106924,-0.01390165,0.06713597,-0.05776097,0.1060911,0.12282088,-0.02542558,0.02825139,-0.04213309,-0.07831339,-0.09646566,-0.00113495,-0.00911728,0.02107698,0.1108149,-0.11857079,0.0407915,-0.04909379,-0.12991361,0.01382751,0.07205333,-0.09464402,0.0378564,-0.02392223,0.10829169,-0.03887452,-0.01389482,-0.00682628,0.07255203,-0.01998159,0.06111027,0.07829559,-0.09713033,0.10439967,0.09133496,-0.0984564,-0.13248098,-0.09118039,-0.05798874,0.10462723,-0.00547595,-0.02509599,0.11095197,-0.00063477,0.01664103,0.11884733,0.06092974,-0.03408273,-0.0602073,0.03638666,-0.01242263,-0.05790899,0.02626865,-0.05671459,0.04969295,-0.04299958,-0.09747697,-0.04747747,0.08574019,0.00149353,-0.16149409,0.02516403,-0.01469299,-0.04365982,0.10592128,0.05691699,-0.04712112,-0.07265316,-0.03978915,-0.04660804,-0.07901848,-0.08142212,-0.14402685,0.06657206,-0.03088494,-0.12629291,0.0989295,-0.05715761,0.09405276,-0.0120201},
  {0.16365694,0.09780292,0.13358414,0.001682,-0.04673286,0.04580731,0.04069112,0.06426711,0.01174201,0.12703116,-0.03709485,0.02153201,0.14043434,-0.01901274,0.01078305,0.05073674,0.13822861,0.10554913,0.00923608,0.14818557,-0.01821608,0.05194893,0.09265251,0.09658849,-0.04683027,0.0679199,0.08322661,0.12305403,0.02555993,-0.12975606,-0.03583086,0.00077571,0.06360592,0.09252249,0.04081971,0.02630212,0.01297677,0.0043219,-0.1288423,0.03316633,-0.0537447,-0.0832914,0.00272418,-0.06418233,0.07374266,-0.09949211,-0.02058789,0.05186259,0.04135897,-0.09564774,-0.19422668,-0.00786275,-0.16578473,-0.21906336,0.11208443,0.07445929,-0.06412127,-0.09201033,-0.0846692,-6.586e-05,-0.06483244,-0.05870027,0.1364447,0.01532474,0.0935391,0.03745894,-0.07939884,-0.12629347,-0.02730465,0.06695932,-0.03642952,0.07164453,0.08547062,-0.03073483,-0.14579232,-0.04066655,0.0706318,-0.01222478,-0.01495052,-0.07964257,-0.00949379,-0.01235812,-0.08595546,0.06349424,-0.09532696,0.03853591,-0.07484616,-0.03833409,-0.01517832,0.03280136,-0.01637679,-0.12261812},
  {-0.05459464,0.08933707,-0.05845074,-0.04690924,0.13437352,0.07345849,-0.04290358,0.12392512,-0.01172964,0.07726333,0.17800872,0.10426383,0.15366423,0.14769319,0.02730649,0.0631244,0.01309495,0.09613417,0.09340919,0.01791997,-0.02731031,0.02753039,0.00132325,-0.03550015,0.08353943,-0.05769894,0.08769469,0.10744527,-0.0519109,-0.06637783,-0.16367194,-0.04347093,0.15213534,0.04073097,-0.05107333,-0.06099192,0.05128834,-0.00591166,0.02168298,-0.17563929,-0.0022786,-0.16356723,0.04913652,-0.01603453,0.02183189,0.08193871,0.02974197,-0.17043047,0.03667693,-0.00477611,-0.06681966,0.0883281,-0.11810807,-0.14402029,0.09782105,0.07049576,0.06691645,0.08432736,0.01135608,0.16589913,0.05602209,-0.05806273,0.02129477,-0.0204893,0.03782554,0.05512638,0.15098488,0.06723271,0.0597808,-0.1741525,-0.06641454,0.12973408,-0.05255331,-0.13098618,-0.13502008,-0.03852816,0.01399259,-0.00502681,-0.04689197,0.02149316,0.00171896,0.0970711,-0.0534245,-0.01131595,-0.0314544,-0.04177732,0.00011643,0.06081946,0.04656122,0.16837953,0.10312025,-0.09231836},
  {0.01481093,0.06641642,0.06485738,0.07001379,0.05833301,0.11100233,0.01574065,0.07073557,0.04652926,0.09385824,0.1567117,-0.06536197,0.18371122,0.0174165,-0.04116063,-0.0306892,0.03970881,0.01443953,0.03882927,0.1305518,0.17774157,0.16394314,0.00493127,-0.04229077,-0.07582203,0.16743743,0.1421629,-0.08504917,-0.05066146,-0.20512216,0.05774704,0.0301558,0.02271398,-0.02324628,0.07935251,-0.15051812,-0.00466631,-0.00102853,-0.1562166,0.06271914,0.01860945,-0.02710447,0.11898699,-0.06896927,-0.06948604,0.06494208,0.09991371,0.04623481,-0.05078505,0.05867752,0.02196712,0.10082864,-0.13200308,-0.00110722,0.05193205,-0.04463069,0.07499019,0.11993774,-0.06373093,0.05405736,0.05433664,-0.01451588,0.04035388,-0.09972823,0.05004274,0.08270655,-0.03098946,-0.17507094,0.14863119,-0.00611045,-0.09095992,0.11638755,-0.04461263,-0.08264364,-0.04061239,-0.00470095,-0.11601691,-0.13183306,-0.08750268,-0.05767062,0.05837923,-0.05026281,-0.13543424,0.10197046,0.02500937,-0.02759073,-0.06617257,0.09187812,-0.05054297,0.16177654,0.18539321,-0.08087154},
  {-0.12673436,-0.13837796,-0.13181996,-0.03649584,0.07529674,0.09365554,0.03915045,0.0764133,-0.07529514,0.0921868,-0.12979738,0.08609447,0.09334362,0.06535362,0.063699,-0.14554307,-0.10942916,0.06438064,0.04307272,-0.00353159,0.04391767,-0.03583378,0.03546634,-0.0398185,0.09330606,-0.05423238,-0.10289019,-0.01876614,0.12840955,0.13562372,0.03563102,0.00928724,0.03230201,0.04642352,0.06116547,-0.03856612,0.02197775,-0.09191773,-0.03690602,-0.03100866,0.04752252,0.0057692,0.02612322,-0.06161089,0.10206284,0.06056158,-0.02787507,-0.08389538,0.01679712,-0.04341522,0.02452078,-0.0786766,0.02508626,-0.05814968,-0.11216703,0.0195509,-0.10055441,-0.08628199,0.02521433,-0.13770115,-0.03402842,0.04097531,0.04777768,-0.10204946,0.09741535,-0.09151412,0.01871648,0.06902111,0.05950214,0.08956019,0.12206729,-0.00770574,0.03852628,-0.0479416,-0.09076813,-0.01265165,0.06922572,0.09220599,-0.01338202,-0.01758756,0.06086865,-0.07086243,-0.06849072,0.04001461,0.10015252,-0.00602504,-0.12660041,0.04197292,0.0660811,0.0071943,0.07747013,0.00821494},
  {0.0498679,0.06785967,0.07892751,0.11957774,0.11317335,0.04103361,-0.13022403,-0.11775196,-0.11052343,0.00278907,-0.05588098,-0.14467041,0.06028961,-0.00438758,0.08306959,-0.04156959,0.07621729,-0.06428616,-0.11500882,-0.06423337,-0.0437065,-0.07558635,0.11375608,-0.02399263,0.00664499,0.08949676,-0.02920641,-0.11337107,0.09734454,0.1019286,0.10203651,-0.13375884,-0.01608114,0.05591773,0.00173727,0.02372958,0.0844722,-0.1230371,-0.07663796,0.08051316,-0.13089907,0.12466001,0.00016682,-0.11248667,0.0013414,0.0449501,0.06761834,-0.10164738,0.05859375,-0.10600816,0.02509826,0.13349758,-0.00308823,0.12414864,0.02027342,-0.05545522,-0.03458261,0.00220567,0.04451267,0.0433185,0.06319707,0.13767365,-0.04349128,-0.02405537,-0.05162935,-0.00553944,-0.05350871,-0.08705116,0.11011008,-0.11942463,0.11736275,0.02760717,0.059353,0.03926603,0.08109523,0.01855581,-0.07900137,-0.00918323,0.08379953,-0.12948957,0.12142856,0.06278009,-0.02957167,0.07311375,-0.10487016,-0.06792573,-0.11979639,-0.05276097,-0.10501628,0.03476981,-0.0558974,-0.06404915},
  {0.09467223,-0.06573655,0.14130011,-0.00568953,-0.00926205,-0.00205765,0.00660403,0.11131064,0.10187843,0.13692181,-0.08137013,-0.0334317,0.10961529,-0.05456384,-0.01786935,-0.02684524,0.09274621,-0.06899133,-0.02429861,-0.01596116,-0.05832447,0.10333446,-0.07614569,0.01961767,0.02551872,-0.00394673,-0.03164192,0.0716221,-0.15870504,0.09447804,-0.09022716,-0.00674419,-0.07519746,-0.11373632,0.02984864,0.15702696,0.19794805,0.03789008,-0.12896198,-0.16663182,0.00650722,-0.00859339,-0.01433837,0.03561395,-0.13198948,0.03829109,0.02636684,-0.14590465,-0.03215948,-0.07887366,-0.19204308,0.02573919,0.00646776,-0.02616108,0.05116234,-0.11968376,-0.19117935,-0.02866838,0.15404166,-0.01205173,-0.07768226,-0.0243844,0.05297852,-0.05275739,-0.02878501,0.02161228,0.13875784,-0.14783442,-0.0205232,-0.1919202,-0.01286126,0.1307663,0.00077877,0.00501954,0.06243537,0.04236259,0.05774774,0.16959561,-0.00970648,0.13861087,0.00671284,-0.07304942,-0.10122279,0.04501308,0.00995714,-0.11580892,0.05440924,-0.02780787,-0.15761136,-0.0419466,0.07489312,-0.14582548},
  {-0.1354859,-0.02946304,0.01855348,0.01273888,-0.08673933,-0.1013964,-0.090414,0.08642802,-0.03978711,-0.0901708,0.09131262,0.0332675,-0.04383304,0.05538675,-0.01697224,0.11926665,0.04266167,0.05628519,-0.09685759,-0.03722661,0.02332759,0.07984569,-0.06574953,0.0614187,-0.13686676,-0.12021731,0.00841737,0.07696878,0.10961533,-0.13074395,0.10613676,0.11570757,-0.12526907,0.01719076,0.03750804,-0.09412175,0.01943065,-0.01110226,-0.02404874,-0.09740936,-0.01424761,-0.10353035,-0.07147093,0.01275006,-0.08165068,0.05334128,0.11019395,-0.02235006,-0.06954216,-0.00493178,0.0384274,0.00965804,-0.05441752,0.10471773,-0.02692168,0.01839891,-0.09075113,0.04446184,-0.08465168,0.04218442,0.04485467,-0.01846482,-0.10490218,0.01732511,-0.0507552,-0.1626468,0.01958968,-0.09930597,-0.12119486,0.02278096,0.06898309,0.10467375,-0.00181521,-0.00523089,-0.0961177,0.10054538,0.02722678,0.09829897,0.02367298,0.0583405,0.010818,-0.05516099,0.0660703,0.09888917,-0.10313713,-0.06543759,0.01518306,-0.07578807,0.07730746,-0.01497656,-0.06774744,0.02610008},
  {0.01058291,0.15309517,0.00098222,0.19960144,-0.01775459,0.08285689,0.08418871,0.14943331,-0.03841396,0.17789891,0.10521594,0.07613138,0.01631504,0.18210326,0.11137979,0.15122977,0.13877134,0.11531401,-0.01079439,0.15238814,0.1351683,0.11816829,0.0536263,0.12912509,0.14425528,0.1437675,0.01030076,0.01475809,-0.14755282,0.07824185,-0.07579131,0.02802857,0.19451638,0.00298124,-0.12343745,-0.00944946,0.07846782,0.12440987,0.00731633,0.023145,0.06104582,-0.0657974,-0.01787956,0.14319175,0.01830117,-0.0211473,-0.01967896,-0.00160132,-0.05527464,-0.17605115,-0.03998744,0.17076112,-0.170374,-0.02276676,0.20366769,-0.0123704,0.00564348,-0.00042479,-0.03147488,0.04014783,-0.21085332,0.04687899,0.0278289,0.14650564,0.09106716,-0.02506446,0.03455467,-0.05568485,0.1850989,0.00577234,0.04709315,0.04402854,-0.11339045,-0.14135043,-0.09536949,-0.03476594,-0.09221122,0.10569593,-0.03358391,0.18777108,-0.12070674,-0.00719593,-0.21168463,0.04144358,-0.03694307,0.00656243,0.01304899,-0.00719326,-0.1173726,0.20050623,0.01197788,-0.05725404},
  {-0.05128577,-0.00569404,0.04435512,0.08192598,-0.01309084,0.00939295,-0.07831281,-0.05109436,-0.06371233,-0.00439729,0.13306154,0.07257205,-0.07709194,-0.00487139,0.07723781,0.03345333,0.05410862,0.1345885,0.06113496,-0.09150356,0.12830245,0.00751258,0.07643903,-0.02099052,0.11981358,0.11174843,0.04873783,0.03326014,-0.00617537,0.07715037,0.07628309,-0.11509028,-0.10037828,-0.08512066,-0.00422093,-0.08962633,0.04989113,-0.01677787,-0.04750714,0.03789826,0.0686954,-0.05958552,0.03669281,0.00031505,0.05234583,0.08718566,-0.06677753,0.01829237,-0.10828153,-0.02351283,-0.04073287,0.1352303,0.00440087,-0.00472034,0.12574519,0.02602178,0.08068898,0.14173092,0.06979964,-0.10711271,0.06242492,-0.00210014,0.02368328,-0.0513464,0.11804719,-0.13382754,0.12190334,-0.11182816,0.05605573,0.08767415,-0.06008177,0.02965295,-0.11865419,-0.04190022,0.02673314,-0.00540361,0.03863309,0.12418677,-0.05313967,-0.06960022,0.11514843,0.04497326,0.04256154,-0.05265196,-0.12467799,0.09079115,0.12191308,0.02558594,-0.06127249,0.10531607,0.1209098,0.00551283},
  {-0.00875891,0.05697967,0.09659735,0.07287386,0.11487883,0.0779883,0.11703834,0.11551133,0.16000465,0.10162054,-0.057507,0.16379073,0.08444139,0.11322751,0.14888671,0.06138755,0.08702823,0.12760575,-0.03629663,-0.02020001,0.10961659,0.08169456,0.15245947,0.18423674,0.18040325,-0.03791774,0.02818559,0.07578772,-0.03557725,-0.14702223,-0.05928568,0.05833735,0.02142925,0.00018631,-0.0114913,-0.02454238,0.15831226,0.05241628,-0.12763196,-0.04169569,-0.05398704,-0.07980308,-0.05954118,-0.01553293,-0.16318503,-0.12969191,-0.00468148,-0.14904785,-0.11076278,-0.06216782,-0.00720333,-0.03918096,0.0483061,0.0553029,0.15330209,-0.14611086,0.0029179,0.15210131,-0.03708935,0.02268321,0.00121344,-0.06848913,0.08272726,-0.04937641,-0.02454563,-0.04350144,0.08264809,-0.05882996,-0.00195035,0.08285096,-0.0085533,0.0992543,-0.15406986,-0.14750582,-0.05581207,-0.08597872,-0.04223826,0.14319567,-0.00300754,0.10519572,-0.0012931,-0.05391796,-0.01752205,-0.08599187,-0.14295237,0.06013443,-0.07623855,-0.02066334,-0.1098061,-0.06953319,0.02955466,-0.11876675},
  {-0.06959804,-0.09828367,0.10838451,0.11910614,-0.05512093,0.10733464,0.1373448,-0.01917924,-0.00276425,0.11672334,0.00464894,0.10977545,-0.04382961,0.00338192,0.08787801,0.11428227,0.09838984,0.01227167,0.08937199,0.01258343,-0.07998822,-0.09217862,-0.02453038,-0.0410892,-0.0820109,-0.049667,-0.08566535,-0.09869593,0.08179773,-0.09802935,0.00441778,-0.04206193,-0.06339775,0.06823307,-0.14278306,-0.12877007,0.05344679,0.04001915,-0.11643652,-0.09332623,0.13093844,0.04069813,0.08719086,0.03363711,-0.02125323,-0.00783139,0.05929529,-0.08159859,-0.13801502,-0.06709068,0.04088478,0.1360082,0.07390164,-0.09328561,-0.04696441,0.05931361,-0.15077977,0.13915657,0.15569465,0.0682848,-0.13910054,0.04335176,0.12613146,0.08738955,0.02427048,-0.08505673,0.04329706,-0.0751051,0.01509563,-0.07465974,0.02659357,-0.016027,-0.13678768,0.07925723,-0.0763973,-0.01814009,-0.13518652,0.10208781,-0.01557346,-0.09994679,0.0134282,0.13352561,0.02672348,-0.00308151,-0.14214645,0.06153325,-0.06400628,-0.03474126,0.06401032,0.11380951,0.1412742,-0.1086259},
  {0.10090687,0.07796127,0.00187613,0.10919976,0.03538191,0.09480916,0.06168675,0.12024688,-0.06121574,-0.00485613,0.03144046,-0.05166312,0.08782338,0.04299146,0.14729798,0.09657059,0.05993449,-0.00734507,0.11327168,0.06713707,-0.04456629,0.03752029,0.06915194,0.14235954,0.10938219,-0.02020718,0.02065544,-0.00141666,-0.14146201,-0.10001357,-0.07993893,0.07038809,0.01285814,0.01109667,0.08486883,-0.05560395,-0.01729483,0.09983467,-0.17478338,-0.09036359,0.07890971,0.05779332,0.07882978,0.16124773,0.05677209,0.03958973,0.08825596,0.04156197,-0.08727884,-0.14504859,-0.04409723,0.06871156,0.06751176,-0.10844403,0.03031488,-0.02103583,-0.09196589,-0.03444439,-0.02084855,-0.03912566,-0.04461901,-0.07148589,0.11296315,-0.01573744,0.08465506,-0.03116068,0.04432297,-0.0518171,-8.035e-05,-0.08863851,-0.05159277,-0.0024109,-0.00816873,-0.08645824,-0.12450558,-0.05967704,-0.08814708,0.0215695,0.11742529,0.12885457,-0.02773512,0.13120191,0.07160968,0.11923841,0.05946381,-0.14099847,0.00670681,0.00540186,-0.06206922,0.0678943,-0.06077888,-0.02194353},
  {-0.12604502,-0.07879652,0.07688285,-0.11166636,-0.05579243,-0.04415011,0.04765407,0.09199443,0.04993377,0.06599487,0.02955081,0.04256278,-0.0403793,0.05559254,-0.1223287,0.02124038,-0.10225659,0.06899038,0.07441162,0.00486976,-0.08948516,0.00587159,-0.03234657,-0.10531729,-0.05893937,-0.0005725,-0.13593057,-0.12735601,-0.01884843,-0.07521509,-0.0009368,-0.055613,0.10167766,-0.1073225,-0.13444304,-0.09580043,-0.14408502,0.01758332,0.11471126,0.04863986,0.09218736,-0.00505176,0.08111987,-0.04845531,0.09714254,-0.045324,0.12872048,-0.05297573,0.00104206,-0.03992856,0.03509576,0.13761957,0.07336363,0.06971271,0.00334183,-0.00471058,0.09075625,-0.09100892,-0.03718287,-0.03432966,0.05930437,-0.08817798,0.00181421,-0.05137352,0.00463485,0.06491095,0.0845276,-0.02348234,-0.00634838,-0.08604772,0.09768123,0.02343206,-0.04062296,0.13838787,-0.10769539,0.08522391,-0.10614596,0.10292177,-0.00057964,-0.03681023,0.07550117,0.0006878,0.00333605,0.01225459,0.03921119,0.03775425,0.07665055,0.07787852,-0.06997602,-0.07018976,0.09478693,-0.0863209},
  {0.1356565,-0.10661346,-0.04211584,-0.0631938,0.07308773,0.00305916,-0.04841938,0.05342954,-0.07050205,0.05182309,-0.01356583,-0.01331925,0.14517274,-0.07355425,0.08681768,-0.07809379,0.00538688,-0.05251215,0.13025476,-0.04398263,0.02598832,0.02319178,0.02732739,0.01043276,-0.08301973,-0.05734051,0.07988778,-0.08805209,-0.03110923,-0.002949,-0.01059588,-0.02668132,0.09737913,-0.01197746,-0.06120418,-0.11904003,0.1270458,0.10847646,-0.11945306,-0.07028307,0.14930768,-0.10758325,0.05648147,-0.02914344,0.013692,-0.03108296,-0.00688919,-0.05979779,-0.0795773,0.01499284,0.08162586,-0.07334989,0.01121006,-0.05437266,0.11407382,0.0835149,0.04752506,0.1220419,0.04772698,0.09380524,0.08858493,-0.06242502,0.00271255,-0.04753722,-0.04923144,0.02142329,0.05153995,0.07910569,-0.07981354,-0.01779715,0.04858061,0.14073667,-0.09185615,0.08071294,0.06153333,0.10736667,-0.0390149,-0.05355121,-0.07505903,0.05011004,-0.09744311,0.0538329,0.05963811,0.08104253,-0.15401828,0.11538549,0.06192825,-0.07135881,0.07095838,-0.0576386,0.07799646,0.01982264},
  {-0.09944847,0.0171819,-0.04277634,0.0297549,0.10751028,0.09058617,0.02003885,-0.05196307,0.05629257,-0.08038083,0.07737382,0.0839259,0.02557051,0.00357338,0.06313035,-0.02360949,-0.01277329,0.09483369,-0.07626017,0.06151114,-0.11020656,-0.00814043,-0.03202727,0.0286642,0.09378396,-0.03378684,0.06959054,0.07588755,0.0460119,0.08838291,-0.13771264,0.12035915,-0.04656967,-0.02342357,0.00085323,-0.02575022,0.09429857,0.02223293,0.07812643,0.09698161,-0.09991261,0.07379521,-0.05139338,-0.01991207,0.08613546,-0.06407286,0.00724827,0.07454177,-0.11083056,-0.13719006,-0.02093635,0.03759025,-0.05677652,-0.07838119,-0.03510511,-0.02757243,-0.1223284,0.05092442,0.01123538,0.10719503,0.02379651,0.0523932,0.03062656,-0.0672145,-0.01015032,-0.0529788,0.16363391,-0.08361299,-0.11781336,-0.02644325,-0.0320393,-0.05759352,0.06289815,0.08390946,-0.04912676,-0.09288599,0.00361854,0.09282628,-0.07086902,-0.07703325,0.03513633,0.12578715,0.08567578,-0.04018332,-0.08167303,0.04499543,0.03847108,-0.13204342,0.04979048,-0.0516257,-0.04005907,-0.06090982},
  {0.02329122,0.05257442,0.10046728,0.07365125,-0.08643527,0.00644479,0.11171312,0.05385904,-0.08975361,0.12742275,-0.03913381,0.05002822,0.05282588,0.08116695,-0.02247346,0.05845126,0.10814612,0.01803707,0.10134314,0.0871014,-0.0310103,-0.05179886,-0.09387712,-0.11076205,-0.07028192,0.07901331,-0.02311712,-0.09635158,0.00627577,-0.03864541,-0.08945124,0.07583252,-0.05110138,-0.03411662,-0.00373708,-0.1411351,-0.05409485,0.13705641,0.0918154,-0.09803099,-0.0559742,0.03505183,0.03093803,0.13016988,-0.01000241,-0.10144261,0.11337216,0.02848852,-0.04971885,-0.14235152,0.04255311,-0.09854371,0.05806232,-0.0420444,0.1150568,0.02157019,-0.03096093,-0.04900302,-0.02809823,0.05803822,0.05145882,-0.00653314,0.10556232,-0.00489375,-0.01579826,-0.10452124,-0.07940117,0.05960181,-0.07635251,-0.09612202,0.01789758,-0.08097407,-0.04854951,0.00217131,-0.120446,0.09657555,0.0234492,-0.01716338,0.07863583,-0.08537392,-0.04157702,0.10895537,-0.12011471,-0.06860602,-0.06844259,-0.04532271,-0.07571865,-0.06518273,-0.10984086,0.14961992,0.13199349,-0.08942412},
  {0.04710148,0.10691258,0.05776397,-0.04762215,-0.00839671,0.12272877,0.07242973,0.16017956,0.09414922,0.0887722,0.09306012,-0.01868168,0.14233135,-0.08297876,-0.02192151,0.1015844,0.15196668,0.04930999,0.12945744,0.1164184,-0.00627047,0.13040945,0.17022003,0.06710838,0.03295398,0.01353999,0.07779405,0.17412707,-0.0027289,-0.05528106,-0.08970893,0.13898201,-0.09215704,-0.11350647,-0.02193611,-0.12873912,0.02120828,0.02973511,-0.12126175,-0.02097679,0.13035741,0.01308442,-0.04357384,-0.0594728,0.01414159,-0.15857702,0.10368893,0.04773057,-0.17306791,-0.17104134,0.07373422,-0.08244755,-0.15889713,-0.13267471,0.11436407,0.02306136,-0.01646855,-0.00934109,-0.03467625,-0.0594499,-0.0158784,-0.03978785,0.04796673,0.12994681,0.09045503,0.01451142,0.00705426,0.00672063,0.1135935,-0.11746218,0.02736826,0.10241237,-0.16342087,-0.03743313,-0.13966003,0.13220586,0.0031209,0.08018011,-0.02991945,-0.00348582,-0.04081634,0.08859563,0.03250495,-0.08989096,-0.08698065,0.09817048,-0.00894827,0.04443834,-0.08743893,-0.05650619,-0.08037353,0.00860509},
  {0.05828088,0.13270454,-0.04209264,0.03252508,-0.06354755,-0.04781844,0.12970923,-0.00423655,0.06033674,0.13325542,0.09729457,-0.00157397,0.15603094,-0.02873803,-0.01873031,0.04993333,0.13665059,0.19126955,0.06792508,0.08024996,0.168357,0.16357782,-0.05212244,0.10009797,0.14939162,0.05311452,0.13752864,0.05370601,-0.00295725,-0.16959023,-0.06629432,0.07731031,0.05133151,0.02514608,-0.03600908,-0.1386926,0.12017901,0.11214443,-0.03632059,0.01383473,0.12490258,0.04567986,-0.06066223,-0.02427119,-0.07386458,-0.11650814,-0.02703721,-0.00668264,-0.00227178,-0.05649857,0.03321716,0.15503429,-0.13409166,0.04124571,-0.02697456,-0.05983381,-0.10399523,0.19584666,0.16394542,0.05334248,-0.07426842,0.11330438,0.0109806,0.14152917,0.08165559,0.01788868,0.2139396,-0.1007314,-0.01210191,-0.09911815,0.00823331,0.00068211,-0.09983747,-0.03114029,-0.15042892,0.12627898,0.05356508,0.08272679,-0.02793133,0.1283066,-0.00733369,0.12320174,-0.06117702,-0.01669771,-0.12453275,-0.08319518,0.06224484,-0.18867692,-0.16570106,-0.03755448,0.13034745,0.01556251},
  {-0.05034217,0.08999072,-0.08210284,0.10065973,0.13967934,0.07318524,-0.06786561,-0.01301692,0.03384385,0.13131568,0.09061692,-0.05502916,0.10396481,0.15367672,-0.06743376,0.09538335,0.08652806,-0.05363641,0.13236548,0.1310016,0.05019365,0.13340202,0.06567366,-0.06765891,-0.11070745,0.04189885,-0.08437081,-0.12188862,-0.01949732,-0.0276694,-0.14833444,0.08792787,0.09533175,0.10449953,-0.07978517,-0.06827288,0.06540001,0.09720672,0.03258979,-0.02076531,-0.05768287,-0.09434093,0.0502829,-0.09238134,-0.05453887,0.12760234,0.05735141,-0.02921859,0.02680319,-0.1134311,0.04068504,0.05281729,0.02261467,0.04467443,-0.00165438,0.03659617,-0.00267095,0.07732268,0.03270967,-0.0707626,0.01469516,0.08498382,0.11490789,-0.11926799,-0.0721622,0.02674249,-0.09427199,8.579e-05,0.09989315,-0.08884242,0.08531959,0.03485826,-0.1112977,0.10094756,0.09461854,-0.08584469,0.02033402,0.08375827,-0.11561994,0.04167571,-0.13612019,0.06423152,-0.06024204,0.00955451,-0.0230252,-0.01924767,0.05893039,0.10292969,0.00113658,0.12115579,-0.11809415,-0.07787569}

};

float Bias0_o[64] =
{
  0.10296994,0.27249812,-0.09488402,0.03366572,-0.08954819,-0.01138826,0.08498101,0.15291119,0.17181161,0.17639704,-0.08710704,-0.05989837,-0.04935467,0.18133924,-0.04775244,-0.02715134,-0.16505164,0.12481624,-0.18020411,0.0492854,-0.04889602,-0.07731113,0.05522114,-0.06664546,-0.04926459,-0.00512062,0.17158839,0.0770898,-0.1696978,-0.024239,0.06366036,0.04038537,0.10410031,0.00257493,0.23657418,0.18275988,0.15660461,0.08472403,0.13165966,0.13130736,0.28131294,0.13689926,0.02303038,-0.00966322,-0.08638142,-0.03535699,-0.0298253,0.2934713,-0.09787203,-0.08297601,0.08580542,0.21187728,0.13906791,-0.08337841,0.03279132,0.01064605,0.27035402,0.0310986,0.10007827,0.17068536,0.08332419,0.28185111,0.12464454,0.05923357
};




float Weight_lc[5][64] =
{
  {-0.08677998,-0.17092757,0.03775563,0.1116025,0.10973121,0.10143245,0.04320532,-0.15378638,0.04063651,0.12809587,-0.12640321,-0.04124229,-0.05708722,-0.1261744,0.02039221,0.08436032,-0.11221872,-0.09354949,-0.01983294,-0.10437464,0.01388399,0.08344223,0.15053311,0.05075203,-0.10896792,0.13692567,-0.0299324,-0.06540275,-0.02918615,0.0970034,0.13870731,0.08137307,0.06238569,-0.05059296,0.07413666,0.1009922,0.11966705,-0.1640981,0.06230964,-0.08475319,0.10842017,0.04287168,-0.04655103,-0.09365858,-0.11379188,0.01458205,-0.04937009,-0.00659638,-0.09404816,-0.03098336,-0.06767303,0.08611029,0.00670797,-0.06051937,0.03669314,0.05929492,0.06586116,-0.10381595,0.10723405,-0.05586602,-0.12353353,-0.01475006,0.12000535,-0.12880686},
  {-0.12142365,0.08264574,0.07232444,-0.12599924,-0.06437444,-0.03865057,-0.1315066,-0.1888094,-0.06462754,0.08328456,-0.11946709,-0.11204087,-0.00881022,0.1310219,0.14228281,-0.09944486,0.11118311,0.08607354,-0.03413733,-0.02823348,-0.11633939,0.10185964,-0.05012144,0.08439071,0.09902257,-0.17105977,0.03431534,0.06914537,0.0398085,-0.1146104,0.10877591,0.07706652,0.10543107,0.05310336,-0.00215916,-0.11840035,0.13835445,-0.02089438,0.12797636,0.00066243,-0.05246935,-0.06576109,0.08744994,0.11855511,-0.06728388,-0.10500147,-0.02175335,-0.08622592,0.02250773,-0.11607616,0.17122963,0.08221147,0.03938769,0.07572101,0.00492403,-0.1607088,-0.03677811,-0.08371662,0.1054595,-0.07700884,-0.06365994,0.15337723,-0.13303573,0.00209579},
  {-0.03212696,-0.03124512,-0.13910425,-0.02569078,-0.08796928,0.10030272,-0.09816965,0.13831776,0.1487374,0.11774668,-0.1041736,-0.08491449,0.1185996,-0.01638777,0.11344025,-0.05451119,-0.04513132,0.07626019,0.07209994,-0.13391423,-0.05904752,-0.09459301,-0.1853304,-0.00804324,-0.13386491,-0.01089347,-0.01265806,-0.07857196,-0.09451044,0.0682449,0.02731731,-0.05368407,-0.00501057,0.07999914,-0.07555868,0.00532238,-0.00057302,-0.00980419,0.13364345,0.17884463,0.03179923,-0.07920688,-0.12237057,0.13341102,0.05572788,-0.10669124,-0.060246,-0.05149468,-0.02598225,0.04471254,-0.14755127,-0.09870874,-0.19240724,-0.03012916,-0.14971812,-0.11378509,0.05948904,0.04028114,-0.00441364,0.07444143,0.08359277,0.01560844,0.03532471,-0.09672466},
  {-0.02964538,-0.10461834,-0.01354977,0.03074032,-0.00339144,0.15200952,-0.02145111,-0.1256449,-0.1699206,0.12509516,-0.01346397,-0.03552348,-0.00138634,-0.17057315,0.04589421,0.02143844,-0.06239113,-0.20176393,-0.04201287,0.00552676,0.00068636,0.03060026,0.12191876,0.09446386,0.05163308,0.20204772,0.08259299,-0.09213063,-0.02514211,-0.0168094,-0.03907901,-0.08047447,-0.13034864,0.11498224,0.03412703,-0.12327671,-0.02621133,-0.02464197,0.05863143,-0.1333658,0.17458703,0.01512616,-0.08472662,0.00393959,0.00488725,0.01278914,0.00023449,-0.00154116,0.03629907,-0.03862369,-0.02428655,0.13732164,-0.04602811,0.02610224,-0.044904,0.05895849,-0.03132688,-0.13194099,-0.10761323,0.00354739,-0.00283602,0.06896617,0.18995966,0.11675636},
  {-0.00694187,-0.05191061,0.08342721,-0.082205,-0.10894707,0.10657766,0.08953543,-0.07321578,-0.07286623,-0.02449823,0.02362372,0.18589258,-0.08856498,0.09148604,0.07098887,-0.1147112,0.12078227,0.05038182,-0.1359992,0.12663603,0.07625818,0.14950323,0.11394922,-0.09873293,0.08694878,0.05625395,-0.12046821,0.08649413,0.08208442,-0.14310706,0.01613279,-0.00903213,0.12911366,-0.14596598,-0.17484781,-0.10171567,-0.13901062,-0.12106812,-0.08147202,0.07021136,-0.02185176,0.1412832,-0.13406827,-0.13556711,0.10050178,0.16525005,0.15664312,-0.16749439,-0.02775439,-0.07213906,0.06641097,0.07377675,0.05667057,-0.04715373,0.08769007,-0.04334207,0.14980678,-0.00908439,-0.16840036,0.14621007,0.0406678,-0.0997162,-0.13300449,0.07197651}

};

float Bias_lc[5] =
{
  0.10525855, 0.07594562, 0.09972332, 0.05368721, 0.07296282
};
# 6 "LSTM/rnn.cpp" 2
# 19 "LSTM/rnn.cpp"
inline void gemvm(float res[64], float a[64][28 + 64], float b[28 + 64])
{_ssdm_SpecArrayDimSize(res, 64);_ssdm_SpecArrayDimSize(a, 64);_ssdm_SpecArrayDimSize(b, 92);
 loop_outer:
 for (int r = 0; r < 64; r++)
 {
#pragma HLS PIPELINE
 loop_iner:
  for (int c = 0; c < 28 + 64; c++)
  {
#pragma HLS PIPELINE
 res[r] += a[r][c] * b[c];
  }
 }
}

inline void gemvm1(float res[5], float a[5][64], float b[64])
{_ssdm_SpecArrayDimSize(res, 5);_ssdm_SpecArrayDimSize(a, 5);_ssdm_SpecArrayDimSize(b, 64);
 loop_outer:
 for (int r = 0; r < 5; r++)
 {
#pragma HLS PIPELINE
 loop_iner:
  for (int c = 0; c < 64; c++)
  {
#pragma HLS PIPELINE
 res[r] += a[r][c] * b[c];
  }
 }
}
# 70 "LSTM/rnn.cpp"
inline void sigmoid(float* res, float* a, int size)
{



 int i;
 i_loop:for (i = 0;i < size; i++)
 {
#pragma HLS PIPELINE
 res[i] = (1 / (1 + exp(-a[i])));
 }
}


inline void tanh(float* res, float* a, int size)
{



 int i;
 i_loop:for (i = 0;i < size; i++)
 {
#pragma HLS unroll factor = 2
#pragma HLS PIPELINE
 res[i] =( (exp(a[i]) - exp(-a[i])) / (exp(a[i]) + exp(-a[i])));
 }
}


inline void geva(float* res, float* a, int size)
{



 int i;
 i_loop:for (i = 0;i < size; i++)
 {
#pragma HLS unroll factor = 2
#pragma HLS PIPELINE II = 1
 res[i] += a[i];
 }
}


inline void hprod(float* res, float* a, float* b, int size)
{



 int i;
 i_loop: for (i = 0;i < size; i++)
 {
#pragma HLS unroll factor = 2
#pragma HLS PIPELINE II = 1
 res[i] =( a[i] * b[i]);
 }

}





void infer(float input[28 * 28], float res[5])

{_ssdm_SpecArrayDimSize(input, 784);_ssdm_SpecArrayDimSize(res, 5);
 float gate_f[64] = { 0.0 };
 float gate_i[64] = { 0.0 };
 float stat_C[64] = { 0.0 };
 float C_t[64] = { 0.0 };
 float gate_o[64] = { 0.0 };
 float h_t[64] = { 0.0 };

 float vec_i[28 + 64];
 float vec_tmp[64];


 for (int i = 0; i < 28; i++)
 {
# 174 "LSTM/rnn.cpp"
  for (int j = 0; j < 28; j++) vec_i[j] = input[i * 28 + j];
  for (int j = 0; j < 64; j++) vec_i[28 + j] = h_t[j];


  loop_reigion:
  {





  LF:
  gemvm(vec_tmp, Weight0_f, vec_i);

  geva(vec_tmp, Bias0_f, 64);
  sigmoid(gate_f, vec_tmp, 64);





  LI:
  gemvm(vec_tmp, Weight0_i, vec_i);

  geva(vec_tmp, Bias0_i, 64);
  sigmoid(gate_i, vec_tmp, 64);





  LC:

  gemvm(vec_tmp, Weight0_c, vec_i);
  geva(vec_tmp, Bias0_c, 64);
  tanh(stat_C, vec_tmp, 64);
  }




  LO:

  gemvm(vec_tmp, Weight0_o, vec_i);
  geva(vec_tmp, Bias0_o, 64);
  sigmoid(gate_o, vec_tmp, 64);





  LCT:
  hprod(vec_tmp, gate_f, C_t, 64);
  hprod(C_t, gate_i, stat_C, 64);
  geva(C_t, vec_tmp,64);





  LH:
  tanh(vec_tmp, C_t, 64);
  hprod(h_t, gate_o, vec_tmp, 64);



 }
# 249 "LSTM/rnn.cpp"
 gemvm1(res, Weight_lc, h_t);
 geva(res, Bias_lc, 5);
# 260 "LSTM/rnn.cpp"
}
