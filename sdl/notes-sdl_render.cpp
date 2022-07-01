/***************** sdl_render.h *****************/

/***************** Method Tanımları *****************/
/**
	Bir pencere için 2B renderer oluşturun.
	
	\param window 	--> Renderer görüntülendiği pencere
	\param index 	--> başlatılacak işleme sürücüsünün dizini veya istenen bayrakları destekleyen ilkini başlatmak için -1
	\param flags 	--> 0 veya 1 veya daha fazla SDL_RendererFlags VEYA birlikte
	\returns 		--> geçerli bir oluşturma bağlamı veya bir hata varsa NULL
**/
SDL_CreateRenderer(SDL_Window* window, int index, Uint32 flags): SDL_Renderer*

/** 
	Çizim işlemleri için kullanılan rengi ayarlayın (Düz, Çizgi veya Temizle).
	Dikdörtgenler, çizgiler ve noktalar çizmek veya doldurmak için ve SDL_RenderClear() için rengi ayarlayın.
	
	\param renderer 	--> oluşturulan renderer verilir
	\param r 			--> kırmızı değer
	\param g 			--> yeşil değer.
	\param b 			--> mavi değer.
	\param a 			--> alfa değeri; genellikle "SDL_ALPHA_OPAQUE" (255). Alfa kanalının nasıl kullanıldığını belirtmek için SDL_SetRenderDrawBlendMode kullanın
	\returns 			--> Başarı durumunda 0 veya başarısızlık durumunda olumsuz bir hata kodu döner.
**/
SDL_SetRenderDrawColor(SDL_Renderer* renderer, Uint8 r, Uint8 g, Uint8 b, Uint8 a): int

/**
	Geçerli işleme hedefini çizim rengiyle temizleyin.
	Bu işlev, görünüm alanını ve klip dikdörtgenini yok sayarak tüm oluşturma hedefini temizler.
	
	\param renderer 	--> oluşturulan renderer verilir.
	\returns 			--> Başarıda 0 veya başarısızlıkta olumsuz bir hata kodu döner.
**/
SDL_RenderClear(SDL_Renderer* renderer): int

/**
	Ekranı, önceki aramadan bu yana gerçekleştirilen herhangi bir işleme ile güncelleyin.
	SDL'nin işleme işlevleri bir geri arabellek üzerinde çalışır; yani, SDL_RenderDrawLine() gibi bir oluşturma işlevini çağırmak, ekrana doğrudan bir satır koymaz, bunun yerine geri arabelleği günceller. Bu nedenle, tüm sahnenizi oluşturursunuz ve oluşturulan arka tamponu eksiksiz bir resim olarak ekrana * sunarsınız*.
	Bu nedenle, SDL'nin işleme API'sini kullanırken, kişi çerçeveye yönelik tüm çizimleri yapar ve ardından son çizimi kullanıcıya sunmak için çerçeve başına bir kez bu işlevi çağırır.
	Geri arabellek, her mevcuttan sonra geçersiz sayılmalıdır; çerçeveler arasında önceki içeriklerin var olacağını varsaymayın. Her pikselin üzerine yazmayı planlıyor olsanız bile, her yeni çerçevenin çizimine başlamadan önce geri arabelleği başlatmak için SDL_RenderClear()'ı çağırmanız şiddetle tavsiye edilir.
	
	\param renderer 	--> oluşturulan renderer verilir.
**/
SDL_RenderPresent(SDL_Renderer* renderer): void