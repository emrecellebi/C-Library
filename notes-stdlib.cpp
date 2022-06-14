/***************** stdlib.h *****************/
/*** method ***/
atof(const char* str): double							/// String to double converter. Başarı durumunda string den double sayıya dönüşüm sağlar. Başarısız durumunda dönüşü 0.0 olarak döner.
atoi(const char* str): int								/// String to int converter. Başarı durumunda string den int sayıya dönüşüm sağlar. Başarısız durumunda dönüşü 0 olarak döner.
atol(const char* str): long								/// String to long converter. Başarı durumunda string den long sayıya dönüşüm sağlar. Başarısız durumunda dönüşü 0 olarak döner.
atoll(const char* str): long long						/// String to long long converter. Başarı durumunda string den long long sayıya dönüşüm sağlar. Başarısız durumunda dönüşü 0 olarak döner. Only C++11
strtod(const char* str, const char** endptr): double	/// String to double converter. Verilen array içindeki iki adet double sayıyının birini verilen char* değerine yazar değerini ise çıktı olarak dönüş sağlar. Başarı durumunda string den double sayıya dönüşüm sağlar. Başarısız durumunda dönüşü 0 olarak döner.
strtof(const char* str, const char** endptr): float		/// String to float converter. Verilen array içindeki iki adet float sayıyının birini verilen char* değerine yazar diğerini ise çıktı olarak dönüş sağlar. Başarı durumunda string den double sayıya dönüşüm sağlar. Başarısız durumunda dönüşü 0 olarak döner. Only C++11


