/***************** stdio.h *****************/
// https://cplusplus.com/reference/cstdio/
// https://docs.microsoft.com/tr-tr/cpp/c-runtime-library

/***************** Define Tanımları *****************/
L_tmpnam 												/// (sizeof(_P_tmpdir) + 12) -- Temp directory
BUFSIZ													/// 512 -- Buffer Size için
_IOFBF													/// 0x0000 -- Tam olarak ara belleğe al
_IOLBF													/// 0x0040 -- Satır olarak ara belleğe al
_IONBF													/// 0x0004 -- Ara belleğe alma
EOF														/// -1 değeri -- End Of File
SEEK_SET												/// 0 değeri -- Dosya Başlangıcı
SEEK_END												/// 2 değeri -- Dosyanın Sonu
SEEK_CUR												/// 1 değeri -- Dosyanın geçerli konumu
stdout													/// __acrt_iob_func(1): FILE* -- Standart çıkış
stderr													/// __acrt_iob_func(2): FILE* -- Standart Hata Çıkışı
stdin													/// __acrt_iob_func(0): FILE* -- Standart Input
_NFILE 													/// _NSTREAM_ -- 
_NSTREAM_ 												/// 512 -- 
_IOB_ENTRIES 											/// 20 --
STDIN_FILENO											/// 0 -- Standart Input
STDOUT_FILENO											/// 1 -- Standart çıkış
STDERR_FILENO											/// 2 -- Standart Hata Çıkışı
FILENAME_MAX											/// 260 --
FOPEN_MAX 												/// 20 --
_SYS_OPEN 												/// 20 --
TMP_MAX 												/// 32767 -- 
_TWO_DIGIT_EXPONENT 									/// 0x1 -- 

/***************** Typedef Tanımları *****************/
fpos_t: long long										/// 
fpos_t: __int64											/// 
FILE: struct											/// 

/***************** Methodlar *****************/
freopen(const char* fileName, const char* mode, FILE* file): FILE* 			/// Dosya adıyla belirtilen dosyayı açmak veya erişim modunu değiştirmek için akışı yeniden kullanır. Bu işlev özellikle stdin, stdout ve stderr gibi önceden tanımlanmış akışları belirli dosyalara yeniden yönlendirmek için kullanışlıdır
fopen(const char* fileName, const char* mode): FILE*	/// Dosya Açar
fclose(FILE* stream): int								/// Açık olan dosyayı kapatır.
fprintf(FILE* stream, const char* format, ...): int		/// Dosya içeriğine yazar. Dönüş olarak yazılan değerin uznluğunu verir. Her hangi bir hata durumda ise ferror ve feof dönderir.
fscanf(FILE* file, const char* format, ...): int		/// Dosya içeriğine okur. Dönüş olarak yazılan değerin uznluğunu verir. Her hangi bir hata durumda ise ferror ve feof dönderir.
fputs(const char* str, FILE* file);	int					/// Dosya içeriğine yazar. Başarı durumunda posiztif, başarısız durumunda negatif değer döner. Her hangi bir hata durumda ise ferror dönderir.
fputc(int character, FILE* stream): int					/// Dosya içeriğine char tipinde veri yazar. Yazılan karakteri int olarak geri döndür. Her hangi bir hata durumda ise ferror dönderir.
ferror(FILE* file): int									/// Hata durmunda sıfır olamayan bir değer dönderir. Aksi taktirde sıfır değer döner.
feof(FILE* file): int									/// Hata durmunda sıfır olamayan bir değer dönderir. Aksi taktirde sıfır değer döner.
fgetc(FILE* stream): int								/// Dosyadan karaker olarak okur. Dönüş olarak okunan karakteri döner eğer boş dosya içeriği -1 döner. Her hangi bir hata durumda ise feof dönderir.
fgets(char* str, int num, FILE* stream): char*			/// Dosyadan okunan verilen karater kadar kısmını okur ve değişkene yazar. Başarı durumunda okunan stringi döner. Eğer dosya boş ise dönüşü null olur. Her hangi bir hata durumda ise feof dönderir.
fflush(FILE* stream): int								/// Sıfır değeri başarıyı gösterir. Her hangi bir hata durumda ise ferror dönderir.
fgetpos(FILE* stream, fpos_t* pos): int					/// İmlec konumunu alır. Başarı durmunda sıfır dönüş yapar. Hata durmunda sıfırdan farklı bir değer döner.
fsetpos(FILE* stream, const fpos_t* pos): int			/// imleç konumunu tanımlar. Başarı durmunda sıfır dönüş yapar. Hata durmunda sıfırdan farklı bir değer döner.
fseek(FILE* file, int offset, int origin): int			/// İmlec konumunu ayarla. Başarı durmunda sıfır dönüş yapar. Her hangi bir hata durumda ise ferror dönderir.
ftell(FILE* file): long									/// İmlecin geçerli konumunu verir. Binary dosyalarda doyanın uzunlunu verir. Başarısız durumunda -1 döner.
rewind(FILE* file): void								/// Imlecin konumunu dosyanın başlangıcına ayarla.
fread(void* dstBuf, size_t elementSize, size_t count, FILE* file): size_t 	/// Return olarak başarıyla okunan öge sayısını döndürür. Bu sayı count değrinde farklıysa okumayı başarılı olarak yapamamışdır. Her hangi bir hata durumda ise ferror ve feof dönderir. Ayrıca binary data okuyabilir.
fwrite(const void* str, size_t size, size_t count, FILE* file): size_t		/// Return olarak başarıyla yazılan öge sayısını döndürür. Bu sayı count değrinde farklıysa yazmayı başarılı olarak yapamamışdır. Her hangi bir hata durumda ise ferror ve feof dönderir. Ayrıca binary data yazabilir.
clearerr(FILE* file): void								/// Tüm hata durumlarını sıfırla
getc(FILE* stream): int									/// Dosyadan karaker olarak okur. Dönüş olarak okunan karakteri döner eğer boş dosya içeriği -1 döner. Her hangi bir hata durumda ise feof dönderir.
putc(int ch, FILE* file): int							/// Dosya içeriğine char tipinde veri yazar. Yazılan karakteri int olarak geri döndür. Her hangi bir hata durumda ise ferror dönderir.
ungetc(int ch, FILE* file): int							/// Dosyadan okunan ilk karakteri alır verilen karakter ile değiştirilir. Aynı zamanda fgetc veya getc dönmesini engeller ilk karakteri almasını sağlar. Başarı durumunda geri konulan karakteri iade eder. Her hangi bir hata durumda ise feof dönderir.
setbuf(FILE* file, char* buffer): void					/// Dosya arasında bir ara bellek olarak davranır.
setvbuf(FILE* file, char* buffer, int mode, size_t size): int /// Dosya arasında bir ara bellek oluşturur. Başarı durumunda 0 değeri döner, başarısız durumunda sıfırdan farklı bir değer döner.
scanf(const char* format, ...): int						/// Input girdi alır. Başarı durumunda okun input sayısını dönderiyor. Her hangi bir hata durumda ise ferror ve feof dönderir.
printf(const char* format, ...): int					/// Ekrana çıktı verir. Aynı zamanda yazılan değerin uzunluğunu verir. Başarı durumunda yazılan toplam karakter sayısını döndürür. Her hangi bir hata durumda ise ferror dönderir.
perror(const char* str): void							/// Hata mesajlarını yazdırır.
getchar(void): int										/// Standart input dan girdi alır. Karakter olarak. Başarılı olduğunda, okunan karakter döndürülür Her hangi bir hata durumda ise feof veya ferror dönderir.
gets(char* str): char*									/// Standart input dan veri okur değişkene yazar. Başarı durumunda okunan stringi döner. Eğer bir değer boş ise dönüşü null olur. Her hangi bir hata durumda ise feof dönderir.
putchar(int ch): int									/// Standart output dan çıktı verir, Karakter olarak. Başarılı olduğunda, yazılan karakter döndürülür. Her hangi bir hata durumda ise feof veya ferror dönderir.
puts(const char* str): int								/// Standart output dan çıktı verir. Başarı durumunda posiztif, başarısız durumunda negatif değer döner. Her hangi bir hata durumda ise ferror dönderir.
snprintf(char* stream, size_t n, const char* format, ...): int/// Belirtilen buffer arrayinde formatlanmış bir şekilde saklar. Başarı durumda yazılan verinibn uzunluğunu verir. Başarısız -1 değeri döner. Only C++11
sprintf(char* stream, const char* format, ...): int		/// Belirtilen buffer arrayinde formatlanmış bir şekilde saklar. Başarı durumda yazılan verinin uzunluğunu verir. Başarısız -1 değeri döner
sscanf(const char* source, const char* format, ...): int/// Belirtilen c dizisinden verilen değişkelere okumayı yapar. Başarı durumunda ise okunan değer sayıdını döner. Başarısız -1 değeri döner
vfprintf(FILE* file, const char* format, va_list arg): int					/// 
vsprintf(char* stream, const char* format, va_list arg): int				///
vprintf(const char* format, va_list arg): int			///
vsnprintf(char* stream, size_t n, const char* format, va_list arg): int/// Only C++11
vfscanf(FILE* file, const char* format, va_list arg): int/// Only C++11
vscanf(const char* format, va_list arg): int			/// Only C++11
vsscanf(const char* source, const char* format, va_list arg): int/// Only C++11
remove(const char* fileName): int						/// Dosya silme işlemi. Başarı durumunda sıfır değerini döner. Başarısız durumunda sıfırdan farklı bir değer döner.
rename(const char* oldName, const char* newName): int	/// Dosya yeniden isimlendir. Başarı durumunda sıfır değerini döner. Başarısız durumunda sıfırdan farklı bir değer döner. 
tmpfile(void): FILE*									/// Geçici bir file oluşturur wb+ modunu kullanarak program bittiğide dosya silinir. Başarı durumunda FILE dolu döner. Başarısız durumunda FILE null olarak döner
tmpnam(char* buffer): char*								/// Var olan bir dosyadan farklı isime sahip bir dosya ismi döner. Başarılı olduğunda oluşturulan dosya ismini döner.

__acrt_iob_func(unsigned index): FILE*					/// Standart dosya giriş çıkış işelemi için kullanılır. 1 Standart çıkış, 2 Standart Hata Çıkışı, 3 Standart Input
_fsopen(const char* filename, const char* mode, int shFlag): FILE* /// Dosya Paylaşımı ile bir dosya akışı açar.
_fdopen(int fileHandle, const char* mode): FILE* 		///
_fcloseall(void): int									/// Açık olan tüm dosyaları kapatır. Başarı durumun da 1 değerini döndürür. Başarısız durumun da 0 değeri döner
_fgetchar(void): int									/// Standart input dan girdi alır. Karakter olarak. Başarılı olduğunda, okunan karakter döndürülür Her hangi bir hata durumda ise feof veya ferror dönderir.
_fileno(FILE* file): int								/// Dosya tanımlayıcısını döndürür. Başarısız durumunda -1 döner.
_tempnam(const char* dirName, const char* filePrefix): char* /// Belirtilen klasör ve dosya imini kullanarak geçici bir dosya oluştur. Başarılı olduğunda oluşturulan dosya ismini döner.
_flushall(void): int									/// Açık akış sayısını (giriş ve çıkış) döndürür. Hata iadesi yoktur.
_fputchar(int ch): int									/// Standart output çıktı verir, Karakter olarak. Başarılı olduğunda, yazılan karakter döndürülür. Her hangi bir hata durumda ise feof veya ferror dönderir.
_getmaxstdio(void): int									/// Akış g/ç düzeyinde izin verilen aynı anda açık dosya sayısını döndürür.
_getw(FILE* file): int									/// Bir akıştan tamsayı alır. 


/***************** 64bit Methodlar *****************/
_fseeki64(FILE* file, __int64 offset, int origin): int	/// İmlec konumunu ayarla. Başarı durmunda sıfır dönüş yapar. Her hangi bir hata durumda ise ferror dönderir.
_ftelli64(FILE* file): __int64							/// İmlecin geçerli konumunu verir. Binary dosyalarda doyanın uzunlunu verir. Başarısız durumunda -1 döner.
fopen64(const char* filename, const char* mode): FILE*	/// Dosya Açar
fgetpos64(FILE* file, fpos_t* pos): int					/// İmlec konumunu alır. Başarı durmunda sıfır dönüş yapar. Hata durmunda sıfırdan farklı bir değer döner. Only 64bit için geçerli
fsetpos64(FILE* file, const fpos_t* pos): int			/// imleç konumunu tanımlar. Başarı durmunda sıfır dönüş yapar. Hata durmunda sıfırdan farklı bir değer döner.

/***************** POSIX Methodlar *****************/
_fsopen(const char* filename, const char* mode): FILE*	/// 
fileno(FILE* file): int

/***************** MinGW Methodlar *****************/
__mingw_fscanf(FILE* file, const char* format, ...): int
__mingw_sscanf(const char* src, const char* format, ...): int
__mingw_scanf(const char* format, ...): int
__mingw_snprintf(char* stream, size_t n, const char* format, ...): int
__mingw_printf(const char* format, ...): int
__mingw_vsscanf(const char source, const char* format, va_list arg): int
__mingw_vscanf(const char* format, va_list arg): int
__mingw_vfscanf(FILE* file, const char* format, va_list arg): int
__mingw_vsnprintf(char* stream, size_t n, const char* format, va_list arg): int
__mingw_vprintf(const char* format, va_list arg): int
__mingw_fprintf(FILE* file, const char* format, ...): int
__mingw_vfprintf(FILE* file, const char* format, va_list arg): int
__mingw_sprintf(char* stream, const char* format, ...): int
__mingw_vsprintf(char* stream, const char* format, va_list arg): int








/***************** Linker Hatası *****************/
/***************** MS Methodlar *****************/
__ms_sscanf(const char* src, const char* format, ...): int
__ms_scanf(const char* format, ...): int
__ms_fscanf(FILE* file, const char* format, ...): int
__ms_printf(const char* format, ...): int
__ms_vprintf(const char* format, va_list arg): int
__ms_fprintf(FILE* file, const char* format, ...): int
__ms_vfprintf(FILE* file, const char* format, va_list arg): int
__ms_sprintf(char* stream, const char* format, ...): int
__ms_vsprintf(char* stream, const char* format, va_list arg): int
__ms_vscanf(const char* format, va_list arg): int
__ms_vfscanf(FILE* file, const char* format, va_list arg): int
__ms_vsscanf(const char* str, const char* format, va_list arg): int
__ms_vsnprintf(char* d, size_t n, const char* format, va_list arg): int
__ms_snprintf(char* s, size_t n, const char* format, ...): int

__iob_func(void): FILE*									/// standart dosya giriş çıkış işelmi için kullanılır.
_filbuf(FILE* file): int
_flsbuf(int ch, FILE* file): int








/***************** Linux Tarafında Denencek *****************/
asprintf(char** ret, const char* format, ...): int		///
vasprintf(char** ret, const char* format, va_list args): int///

__mingw_asprintf(char**, const char*, ...): int
__mingw_vasprintf(char**, const char*, va_list arg): int