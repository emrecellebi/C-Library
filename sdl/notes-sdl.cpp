/***************** sdl.h *****************/

/***************** Method Tanımları *****************/
/**
	SDL kütüphanesini başlatır.
	SDL_Init() basitçe SDL_InitSubSystem() çağrısına iletir. Bu nedenle, ikisi birbirinin yerine kullanılabilir. Kodunuzun okunabilirliği için SDL_InitSubSystem() tercih edilebilir.
	Dosya G/Ç (örneğin SDL_RWFromFile) ve iş parçacığı (SDL_CreateThread) alt sistemleri varsayılan olarak başlatılır. Mesaj kutuları (SDL_ShowSimpleMessageBox), SDL_Init başarısız olduğunda bir hata iletişim kutusu göstermede yardımcı olma umuduyla video alt sistemini başlatmadan da çalışmayı dener. Uygulamanızda kullanıyorsanız, diğer alt sistemleri özel olarak başlatmanız gerekir.
	Günlüğe kaydetme (SDL_Log gibi) başlatma olmadan da çalışır.
	
	"flags" aşağıdakilerden herhangi biri olabilir VEYA birlikte:
	- "SDL_INIT_TIMER": zamanlayıcı alt sistemi
	- "SDL_INIT_AUDIO": ses alt sistemi
	- "SDL_INIT_VIDEO": video alt sistemi; Event alt sistemini otomatik olarak başlatır.
	- "SDL_INIT_JOYSTICK": joystick alt sistemi; Event alt sistemini otomatik olarak başlatır
	- "SDL_INIT_HAPTIC": (zorla geri besleme) alt sistemi
	- "SDL_INIT_GAMECONTROLLER": denetleyici alt sistemi; Joystick alt sistemini otomatik olarak başlatır
	- "SDL_INIT_EVENTS": Event alt sistemi
	- "SDL_INIT_EVERYTHING": yukarıdaki alt sistemlerin tümü
	- "SDL_INIT_NOPARACHUTE": uyumluluk; bu bayrak yok sayılır
	
	Alt sistem başlatma yeniden sayılır, bir alt sistemi manuel olarak doğru bir şekilde kapatmak için her SDL_InitSubSystem() için SDL_QuitSubSystem() öğesini çağırmalısınız (veya kapanmaya zorlamak için SDL_Quit() öğesini çağırmalısınız). Bir alt sistem zaten yüklenmişse, bu çağrı başvuru sayısını artıracak ve geri dönecektir.
	
	\param flags 	--> 	Alt sistem başlatma flagleri
	\returns		--> 	Başarı durumunda 0 veya başarısızlık durumunda olumsuz bir hata kodu döner; daha fazla bilgi için SDL_GetError()'u arayın.
	
**/
SDL_Init(Uint32 flags): int

/**
	Başlatılan tüm alt sistemleri temizleyin.
	Başlatılan her alt sistemi SDL_QuitSubSystem() ile kapatmış olsanız bile bu işlevi çağırmalısınız. Başlatmada hata olması durumunda bile bu işlevi çağırmak güvenlidir.
	Bir alt sistemi SDL_Init() veya SDL_InitSubSystem() yerine o alt sistemin başlatma işlevine (örneğin SDL_VideoInit()) yapılan bir çağrıyı kullanarak başlatırsanız, SDL_Quit'i çağırmadan önce kapatmak için o alt sistemin çıkış işlevini (SDL_VideoQuit()) kullanmanız gerekir. (). Ancak genel olarak, bu işlevleri bir şekilde doğrudan kullanmamalısınız; bunun yerine SDL_Init() kullanın.
	Uygulamanız kapatıldığında çalıştığından emin olmak için bu işlevi atexit() ile kullanabilirsiniz, ancak bunu bir kitaplıktan veya dinamik olarak yüklenen başka bir koddan yapmak akıllıca değildir.
**/
SDL_Quit(void): void

