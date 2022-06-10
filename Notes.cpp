/***************** stdio.h *****************/
/*** define ***/
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

/*** typedef ***/
fpos_t: long long										/// 
fpos_t: __int64											/// 
FILE: struct											///

/*** method ***/
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
fread(void* dstBuf, size_t elementSize, size_t count, FILE* file): size_t 	/// Return olarak başarıyla okunan öge sayısını döndürür. Bu sayı count değrinde farklıyasa okumayı başarılı olarak yapamamışdır. Her hangi bir hata durumda ise ferror ve feof dönderir.
fwrite(const void* str, size_t size, size_t count, FILE* file): size_t		/// Return olarak başarıyla yazılan öge sayısını döndürür. Bu sayı count değrinde farklıyasa yazmayı başarılı olarak yapamamışdır. Her hangi bir hata durumda ise ferror ve feof dönderir.
clearerr(FILE* file): void								/// Tüm hata durumlarını sıfırla
getc(FILE* stream): int									/// Dosyadan karaker olarak okur. Dönüş olarak okunan karakteri döner eğer boş dosya içeriği -1 döner. Her hangi bir hata durumda ise feof dönderir.
putc(int ch, FILE* file): int							/// Dosya içeriğine char tipinde veri yazar. Yazılan karakteri int olarak geri döndür. Her hangi bir hata durumda ise ferror dönderir.
ungetc(int ch, FILE* file): int							/// Dosyadan okunan ilk karakteri alır verilen karakter ile değiştirilir. Aynı zamanda fgetc veya getc dönmesini engeller ilk karakteri almasını sağlar. Başarı durumunda geri konulan karakteri iade eder. Her hangi bir hata durumda ise feof dönderir.
setbuf(FILE* file, char* buffer): void					/// Dosya arasında bir ara bellek olarak davranır.
setvbuf(FILE* file, char* buffer, int mode, size_t size): int /// Dosya arasında bir ara bellek oluşturur. Başarı durumunda 0 değeri döner, başarısız durumunda sıfırdan farklı bir değer döner.
printf(const char* format, ...): int					/// Ekrana çıktı verir. Aynı zamanda yazılan değerin uzunluğunu verir. Başarı durumunda yazılan toplam karakter sayısını döndürür. Her hangi bir hata durumda ise ferror dönderir.
scanf(const char* format, ...): int						/// Input girdi alır. Başarı durumunda okun input sayısını dönderiyor. Her hangi bir hata durumda ise ferror ve feof dönderir.
perror(const char* str): void							/// Hata mesajlarını yazdırır.
getchar(void): int										/// Standart input dan girdi alır. Karakter olarak. Başarılı olduğunda, okunan karakter döndürülür Her hangi bir hata durumda ise feof veya ferror dönderir.
gets(char* str): char*									/// Standart input dan veri okur değişkene yazar. Başarı durumunda okunan stringi döner. Eğer bir değer boş ise dönüşü null olur. Her hangi bir hata durumda ise feof dönderir.
putchar(int ch): int									/// Standart output dan çıktı verir, Karakter olarak. Başarılı olduğunda, yazılan karakter döndürülür. Her hangi bir hata durumda ise feof veya ferror dönderir.
puts(const char* str): int								/// Standart output dan çıktı verir. Başarı durumunda posiztif, başarısız durumunda negatif değer döner. Her hangi bir hata durumda ise ferror dönderir.
snprintf(char* stream, size_t n, const char* format, ...): int /// Belirtilen buffer arrayinde formatlanmış bir şekilde saklar. Başarı durumda yazılan verinibn uzunluğunu verir. Başarısız -1 değeri döner. Only C++11
sprintf(char* stream, const char* format, ...): int		/// Belirtilen buffer arrayinde formatlanmış bir şekilde saklar. Başarı durumda yazılan verinin uzunluğunu verir. Başarısız -1 değeri döner
sscanf(const char* source, const char* format, ...): int/// Belirtilen c dizisinden verilen değişkelere okumayı yapar. Başarı durumunda ise okunan değer sayıdını döner. Başarısız -1 değeri döner


