/***************** direct.h *****************/

/***************** Struct Tanımları *****************/
_diskfree_t														/// 
	unsigned total_clusters
	unsigned avail_clusters
	unsigned sectors_per_cluster
	unsigned bytes_per_sector

/***************** Method Tanımları *****************/
_getcwd(char* dstBuf, int sizeInBytes): char*					/// Bulunduğu dizinin path döner. Herhangi bir hata durumunda perror dönderir.
_getdcwd(int drive, char* dstBuf, int sizeInBytes): char*		/// Belirtilen sürücü üzerinde bulunduğu path döner. 
_chdir(const char* path): int									/// Geçerli çalışma path değiştirir. Başarı durumunda 0 döner. Başarısız durumunda -1 döner.
_mkdir(const char* path): int									/// Yeni bir dizin oluştur. Başarı durumunda 0 döner. Başarısız durumunda -1 döner.
_rmdir(const char* path): int									/// Dizin sil. Başarı durumunda 0 döner. Başarısız durumunda -1 döner.
_getdrive(void): int											/// Geçerli sürücüyü getir. Başarı durumunda sürücü numarasını döner.
_chdrive(int drive): int										/// Sürücüyü değiştirir. Başarı durumunda 0 döner. Başarısız durumunda -1 döner.
_getdrives(void): unsigned long									/// Kullanıla bilinir disk sürücü sayısını döner.
_getdiskfree(unsigned drive, struct _diskfree_t* diskFree): unsigned /// Verilen disk numarasını verilen struct data içerisine bilgileri doldurur.
