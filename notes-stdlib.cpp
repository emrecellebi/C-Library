/***************** stdlib.h *****************/
/*** define ***/
EXIT_SUCCESS 											/// 0 --- Çıkış kodu
EXIT_FAILURE 											/// 1 --- Çıkış Iptal kodu
MB_CUR_MAX 												/// ___mb_cur_max_func() --- Maximum bayt sayısı
__mb_cur_m 												/// ___mb_cur_max_func() --- Maximum bayt sayısı
RAND_MAX 												/// 0x7fff --- 

/*** typedef struct ***/
div_t													/// int quot, int rem --- veriler tutulur.
ldiv_t													/// long quot, long rem --- veriler tutulur.
lldiv_t													/// long long quot, long long rem --- veriler tutulur.

/*** method ***/
atof(const char* str): double							/// String to double converter. Başarı durumunda string den double sayıya dönüşüm sağlar. Başarısız durumunda dönüşü 0.0 olarak döner.
atoi(const char* str): int								/// String to int converter. Başarı durumunda string den int sayıya dönüşüm sağlar. Başarısız durumunda dönüşü 0 olarak döner.
atol(const char* str): long								/// String to long converter. Başarı durumunda string den long sayıya dönüşüm sağlar. Başarısız durumunda dönüşü 0 olarak döner.
atoll(const char* str): long long						/// String to long long converter. Başarı durumunda string den long long sayıya dönüşüm sağlar. Başarısız durumunda dönüşü 0 olarak döner. Only C++11
strtod(const char* str, const char** endptr): double	/// String to double converter. Verilen array içindeki iki adet double sayıyının birini verilen char* değerine yazar değerini ise çıktı olarak dönüş sağlar. Başarı durumunda string den double sayıya dönüşüm sağlar. Başarısız durumunda dönüşü 0 olarak döner.
strtof(const char* str, const char** endptr): float		/// String to float converter. Verilen array içindeki iki adet float sayıyının birini verilen char* değerine yazar diğerini ise çıktı olarak dönüş sağlar. Başarı durumunda string den double sayıya dönüşüm sağlar. Başarısız durumunda dönüşü 0 olarak döner. Only C++11
strtol(const char* str, const char** endptr, int radix): long			/// String to long converter. Verilen array içindeki sayıların birini verilen char* değerine yazar diğerini ise çıktı olarak dönüş sağlar. Ayrıca burada sayıların hangi tabanda işleneceğini belirtilir. Başarı durumunda string den long sayıya dönüşüm sağlar. Başarısız durumunda dönüşü 0 olarak döner.
strtold(const char* str, const char** endptr): long double				/// String to long double converter. Verilen array içindeki iki adet double sayıyının birini verilen char* değerine yazar diğerini ise çıktı olarak dönüş sağlar. Başarı durumunda string den long double sayıya dönüşüm sağlar. Başarısız durumunda dönüşü 0 olarak döner. Only C++11
strtoll(const char* str, const char** endptr, int base): long long		/// String to long long converter. Verilen array içindeki sayıların birini verilen char* değerine yazar diğerini ise çıktı olarak dönüş sağlar. Ayrıca burada sayıların hangi tabanda işleneceğini belirtilir. Başarı durumunda string den long long sayıya dönüşüm sağlar. Başarısız durumunda dönüşü 0 olarak döner. Only C++11
strtoul(const char* str, const char** endptr, int base): unsigned long	/// String to unsigned long converter. Verilen array içindeki sayıların birini verilen char* değerine yazar diğerini ise çıktı olarak dönüş sağlar. Ayrıca burada sayıların hangi tabanda işleneceğini belirtilir. Başarı durumunda string den unsigned long sayıya dönüşüm sağlar. Başarısız durumunda dönüşü 0 olarak döner.
strtoull(const char* str, const char** endptr, int base): unsigned long long	/// String to unsigned long long converter. Verilen array içindeki sayıların birini verilen char* değerine yazar diğerini ise çıktı olarak dönüş sağlar. Ayrıca burada sayıların hangi tabanda işleneceğini belirtilir. Başarı durumunda string den unsigned long long sayıya dönüşüm sağlar. Başarısız durumunda dönüşü 0 olarak döner. Only C++11

calloc(size_t num, size_t size): void*					/// Integer array veri tipin de bir yer ayırma işlemi yapar. Ayrıca içerisine sıfır ile doldurur. Başarı durumunda atanan değişken üzerinde yer ayırtma işlemini yapar. Başarısız durumunda NULL olarak dönüş yapar.
malloc(size_t size): void*								/// char array veri tipin de bir yer ayırma işlemi yapar. Ayrıca içeriği başlatılmaz. Başarı durumunda atanan değişken üzerinde yer ayırtma işlemini yapar. Başarısız durumunda NULL olarak dönüş yapar.
realloc(void* ptr, size_t size): void*					/// verilen ptr değişkenin boyutun yeniden boyutlandırma yapar. Başarı durumunda atanan değişken üzerinde yer ayırtma işlemini yapar. Başarısız durumunda NULL olarak dönüş yapar.
free(void* ptr): void									/// Daha önce malloc, calloc veya realloc'a yapılan bir çağrıyla tahsis edilen bir bellek bloğu, yeniden tahsis edilerek daha sonraki tahsisler için kullanılabilir hale getirilir.

abort(void): void										/// Programı anormal sonlandırma işlemini yapar. Her hangi bir nesneyi yok etmeden çağrılır.
atexit(void(*func)(void)): int							/// Program normal olarak sonlandırıldığında verilen callback fonksiyonları çağırır. Başarılı ise sıfır değeri döner. Başarısız durumun da ise sıfır olmayan bir değer döner.
at_quick_exit(void(*func)(void)): int					/// Program normal olarak sonlandırıldığında quick_exit fonksiyonu çağrılır ardına at_quick_exit fonksiyonu çağrılır. Başarılı ise sıfır değeri döner. Başarısız durumun da ise sıfır olmayan bir değer döner. Only C++11
quick_exit(int code): void								/// Program normal olarak sonlandırıldığında quick_exit fonksiyonu çağrılır ardına at_quick_exit fonksiyonu çağrılır. Only C++11
exit(int code): void									/// Program normal olarak sonlandırılır ve ardın dan temizleme işlemi yapılır varsa quick_exit veya at_quick_exit gibi callbackler çağrılır.
getenv(const char* varname): char*						/// Başarı durumunda ortam değişkenlerini dönderir. Başarısız durmunda null olarak dönüş sağlar.
system(const char* command): int						/// Her hangi bir komut işlemini çağırmaya yarar. Başarı durumunda sıfırdan farklı bir değr döner. Başarısız durmunda sıfır değeri döner.
_Exit(int status): void									/// Program normal olarak sonlandırılır ve ardın dan temizleme işlemi yapılmaz varsa quick_exit veya at_quick_exit gibi callbackler çağrılmaz. Only C++11
bsearch(const void* key, const void* base, size_t number, size_t size, int (*compare)(const void*, const void*)): void* /// Array içerissinde verilen key ile birlikte ikilik tabanda arama yapar. Başarı durumunda bulunan değeri döner. Başarısız durumunda NULL olarak dönüş sağlar.
qsort(void* base, size_t num, size_t size, int (*compare)(const void*, const void*)): void	/// Arrayi hızlı sıralama yapar.

abs(int n): int											/// Verilen sayının mutlak değerini alır.
labs(long x): long										/// Verilen long sayının mutlak değerini alır.
llabs(long long x): long long							/// Verilen long long sayının mutlak değerini alır.
div(int numrator, int denominator):	div_t				/// Verilen sayıları bölümünü sağlar ve bölünen ve kalan olarak dönüş yapar.
ldiv(long numrator, long denominator): ldiv_t			/// Verilen sayıları bölümünü sağlar ve bölünen ve kalan olarak dönüş yapar. Only C++11
lldiv(long long numrator, long long denominator): lldiv_t/// Verilen sayıları bölümünü sağlar ve bölünen ve kalan olarak dönüş yapar. Only C++11

mblen(const char* str, size_t maxCount): int			/// En fazla baytı inceleyerek str ile gösterilen çok baytlı karakterin boyutunu döndürür. Başarı durumunda karacterlerin byte cinsinden boyutunu dönderir. Str null değer ise sıfır değerini dönderir.
mbtowc(wchar_t* dst, const char* src, size_t srcSize): int/// Verilen src daki karakterleri dest üzerine dönüştürür. dönüş olarak byte cinsinde uznluğunu döner. src null değer ise sıfır değerini dönderir.
wctomb(char* mbch, wchar_t wc): int						/// Verilen wc daki karakterleri mbch üzerine dönüştürür. dönüş olarak byte cinsinde uznluğunu döner.

mbstowcs(wchar_t* dst, const char* src, size_t maxCount): size_t/// Verilen src daki string olarak dest üzerine dönüştürür. dönüş olarak byte cinsinde uznluğunu döner. src null değer ise sıfır değerini dönderir.
wcstombs(char* dst, const wchar_t* src, size_t maxCount): size_t/// Verilen src daki string olarak dest üzerine dönüştürür. dönüş olarak byte cinsinde uznluğunu döner.

___mb_cur_max_func(void): int							/// Geçerli veya belirtilen yerel ayar için çok bytelı bir karakter içindeki en fazla bayt sayısını alır.
