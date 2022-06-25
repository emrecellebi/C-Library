/***************** string.h *****************/
// https://cplusplus.com/reference/cstring/

/***************** Method Tanımları *****************/
/** Copying - Kopyalama **/
memcpy(void* dst, const void* src, size_t size): void*			/// Kaynak dan alıp hedef değişkene kopyalama yapar. Dönüş olarak dest döndürülür.
memmove(void* dst, const void* src, size_t size): void*			/// Kaynak dan alıp hedef değişkene kopyalama yapar. Dönüş olarak dest döndürülür.
strcpy(char* dest, const char* source): char*					/// Kaynak dan alıp hedef değişkene kopyalama yapar. Dönüş olarak dest döndürülür.
strncpy(char* dest, const char* source, size_t count): char* 	/// Kaynak dan alıp hedef değişkene kopyalama yapar. Count olarak stringin ne kadar bölümünü kopyalasın. Dönüş olarak dest döndürülür.

/** Concatenation - Birleştirme **/
strcat(char* dest, const char* source): char*					/// Kaynağın bir kopyasını alıp dest ile birleştirir. Dönüş olarak dest döndürülür.
strncat(char* dest, const char* source, size_t count): char*	/// Kaynağın bir kopyasını alıp dest ile birleştirir. Count olarak stringin ne kadar bölümünü birleştirsin. Dönüş olarak dest döndürülür.

/** Comparison - Karşılaştırma **/
memcmp(const void* buf1, const void* buf2, size_t size): int	/// buf1 ile buf2 değerlererini karşılaştırır. Return olarak eğer iki değer bir birine eşit ise 0 olarak döner değil ise -1 yada 1 olarak döner.
strcmp(const char* str1, const char* str2): int					/// str1 ile str2 değerlererini karşılaştırır. Return olarak eğer iki değer bir birine eşit ise 0 olarak döner değil ise -1 yada 1 olarak döner.
strcoll(const char* str1, const char* str2): int				/// str1 ile str2 değerlererini karşılaştırır. Return olarak eğer iki değer bir birine eşit ise 0 olarak döner değil ise -1 yada 1 olarak döner.
strncmp(const char str1, const char* str2, size_t maxCount): int /// str1 ile str2 değerlererini karşılaştırır. Count olarak stringin ne kadar bölümünü kopyalasın. Return olarak eğer iki değer bir birine eşit ise 0 olarak döner değil ise -1 yada 1 olarak döner.
strxfrm(char* dest, const char* src, size_t maxCount): size_t	/// Kaynakdan belirtilen değeri hedef dizinine kopyalama işlemiyapar maxCount ilede kopyalanacak karakter sayısı belirtilir. Return olarak kopyalanan karakter uzunluğu döner.

/** Searching - Arama **/
memchr(const void* buf, int val, size_t maxCount): void*		/// Belitilen buf içerisinde verilen val değerindeki karakteri bulur. Return olarak bulunan karakterden sonraki kısmını döner.
strchr(const char* str, int val): char*							/// Belitilen str içerisinde verilen val değerindeki karakteri bulur. Return olarak bulunan karakterden sonraki kısmını döner.
strcspn(const char* str, const char* control): size_t 			/// Belirtilen str içerisinde verilen control karakterlerini arar eğer ki bulamaz ise str1 in uzunluğunu döner. Return olarak bulunan karakterin bir alt poizisyonunu döner.
strpbrk(const char* str, const char* control): char*			/// Belitilen str içerisinde verilen control değerindeki karakteri bulur. Return olarak bulunan karakteri döner.
strrchr(const char str, int ch): char*							/// Belitilen str içerisinde verilen ch değerindeki karakteri sondan aram yaparak bulur. Return olarak bulunan karakteri döner.
strspn(const char* str, const char* control): size_t			/// Belirtilen str içerisinde verilen control karakterleri eğer ki eşleşiyor ise eşleşen karakterin uzunluğunu döner.
strstr(const char* str, const char* subStr): char*				/// Belirtilen str içerisinde verilen subStr karakterini çıkartır. Return olarak ise çırkartılan karakterleri dönüş yapar.
strtok(char* str, const char* delim): char*						/// Belirtilen str içerisinde verilen delim karakterleri ile bölme işlemi yapar. Return olarak parça parça dönüş sağlar.

/** Other - Diğer **/
memset(void* dst, int sal, size_t size): void*					/// Belitilen memory için verilen int karakterini verilen size kadar set eder. Return olarak dst döner.
strerror(int): char*											/// System hata mesajlarını dönderir.
strlen(const char* str): size_t									/// Belirtilen str uzunluğunu dönderir.






