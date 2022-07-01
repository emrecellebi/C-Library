/***************** sdl_timer.h *****************/

/***************** Method Tanımları *****************/
/**
	Dönmeden önce belirtilen sayıda milisaniye bekleyin.
	Bu işlev, dönmeden önce belirtilen sayıda milisaniye bekler. En azından belirtilen süreyi bekler, ancak muhtemelen işletim sistemi planlaması nedeniyle daha uzun süre bekyebilir.
	
	\param ms --> geciktirilecek milisaniye sayısı
**/
SDL_Delay(Uint32 ms): void