/***************** stdlib.h *****************/
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

calloc(size_t num, size_t size): void*					/// Integer veri tipin de bir yer ayırma işlemi yapar. Ayrıca içerisine sıfır ile doldurur. Başarı durumunda atanan değişken üzerinde yer ayırtma işlemini yapar. Başarısız durumunda NULL olarak dönüş yapar.




