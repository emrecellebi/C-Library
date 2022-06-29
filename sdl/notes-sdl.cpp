/***************** sdl.h *****************/

/***************** Define Tanımları *****************/
/** SDL_Init Flags **/
SDL_INIT_TIMER									/// Zamanlayıcı alt sistemini başlatır.
SDL_INIT_AUDIO									/// Ses alt sistemini başlatır.
SDL_INIT_VIDEO									/// Video alt sistemini başlatır.
SDL_INIT_CDROM									/// CDrom alt sistemini başlatır.
SDL_INIT_JOYSTICK								/// Joystick alt sistemini başlatır.
SDL_INIT_EVERYTHING								/// Yukarıdakilerin tümünü başlat.
SDL_INIT_NOPARACHUTE							/// SDL'nin ölümcül sinyalleri yakalamasını önler.
SDL_INIT_EVENTTHREAD							/// 

/***************** Method Tanımları *****************/
SDL_Init(Uint32 flags): int						/// SDL'yi başlatır. Bu, diğer tüm SDL işlevlerinden önce çağrılmalıdır. Flags parametresi, SDL'nin hangi bölümlerinin başlatılacağını belirtir. Hata durumunda -1, başarı durumunda 0 döndürür.
SDL_Quit(void): void							/// SDL_Quit, tüm SDL alt sistemlerini kapatır ve bunlara tahsis edilen kaynakları serbest bırakır. Bu her zaman çıkmadan önce çağrılmalıdır.

