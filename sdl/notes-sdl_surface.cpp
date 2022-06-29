/***************** sdl_surface.h *****************/

/***************** Define Tanımları *****************/
#define SDL_BlitSurface	SDL_UpperBlit										/// Kaynak yüzeyden hedef yüzeye hızlı bir aydınlatma gerçekleştirir. Başarı durumunda 0, Başarısız durumunda -1 döner
#define SDL_LoadBMP(file) SDL_LoadBMP_RW(SDL_RWFromFile(file, "rb"), 1)		/// String olarak Bir bitmap file yükler

/***************** Method Tanımları *****************/
SDL_FillRect(SDL_Surface* dst, const SDL_Rect* rect, Uint32 color): int				/// Belirli bir renkle bir dikdörtgeni hızlı bir şekilde doldurun. color olarak SDL_MapRGB() or SDL_MapRGBA() kullanılabilinir. Başarı durumunda 0 döner.
SDL_FreeSurface(SDL_Surface* surface): void											/// Bir RGB yüzeyini serbest bırakın.

/***************** Typedef Struct Tanımları *****************/
SDL_Surface
	Uint32 flags;
    SDL_PixelFormat *format;
    int w, h;
    int pitch;
    void *pixels;
    void *userdata;
    int locked;
    void *list_blitmap;
    SDL_Rect clip_rect;
    struct SDL_BlitMap *map;
    int refcount;
