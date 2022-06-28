/***************** tchar.h *****************/

/***************** Define ve Method Tanımları *****************/
#ifndef __CYGWIN__											// __CYGWIN__ tanımlı değilse kullanıla bilinir --> 1
#define _ftcschr _tcschr									/// ---------------------------------------
#define _ftcslen _tcslen									/// ---------------------------------------
#define _ftcscpy _tcscpy									/// ---------------------------------------
#define _ftcsicmp _tcsicmp									/// ---------------------------------------
#define _ftcscat _tcscat									/// ---------------------------------------
#define _ftcspbrk _tcspbrk									/// ---------------------------------------
#else
#endif

#ifndef __CYGWIN__											// __CYGWIN__ tanımlı değilse kullanıla bilinir --> 2
#define _tcschr wcschr										/// ---------------------------------------
#define _tcslen wcslen										/// ---------------------------------------
#define _tcscpy wcscpy										/// ---------------------------------------
#define _tcsicmp _wcsicmp									/// ---------------------------------------
#define _tcscat wcscat										/// ---------------------------------------
#define _tcspbrk wcspbrk									/// ---------------------------------------
#define _tgetcwd _wgetcwd									/// ---------------------------------------
#else
#endif

#ifndef __CYGWIN__											// __CYGWIN__ tanımlı değilse kullanıla bilinir --> 4
#define _tcschr strchr										/// strchr -- string.h kütüphanesin deki ile aynı görevi görmektedir
#define _tcspbrk strpbrk									/// strpbrk -- string.h kütüphanesin deki ile aynı görevi görmektedir
#define _tcsicmp _stricmp									/// _stricmp -- string.h kütüphanesin deki ile aynı görevi görmektedir
#else
#endif

#ifndef __CYGWIN__											// __CYGWIN__ tanımlı değilse kullanıla bilinir --> 6
#define _tcslen strlen										/// strlen -- string.h kütüphanesin deki ile aynı görevi görmektedir
#define _tcscpy strcpy										/// strcpy -- string.h kütüphanesin deki ile aynı görevi görmektedir
#define _tcscat strcat										/// strcat -- string.h kütüphanesin deki ile aynı görevi görmektedir
#define _tgetcwd _getcwd									/// _getcwd -- direct.h kütüphanesin deki ile aynı görevi görmektedir
#else
#endif

#ifdef _MB_MAP_DIRECT										// _MB_MAP_DIRECT tanımlı ise kullanıla bilinir --> 3
#define _tcschr _mbschr										/// ---------------------------------------
#define _tcsicmp _mbsicmp									/// ---------------------------------------
#define _tcspbrk _mbspbrk									/// ---------------------------------------
#else
_tcschr(const char* str, unsigned int val): char*			/// Belitilen str içerisinde verilen val değerindeki karakteri bulur. Return olarak bulunan karakterden sonraki kısmını döner.
_tcsicmp(const char* str1, const char* str2): int			/// str1 ile str2 değerlererini karşılaştırır. Return olarak eğer iki değer bir birine eşit ise 0 olarak döner değil ise -1 yada 1 olarak döner.
_tcspbrk(const char* str, const char* control): char*		/// Belitilen str içerisinde verilen control değerindeki karakteri bulur. Return olarak bulunan karakteri döner.
#endif