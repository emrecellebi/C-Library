/***************** sdl_video.h *****************/

/***************** Define Tanımları *****************/
/** SDL_CreateWindow Flags **/
SDL_WINDOW_FULLSCREEN						/// Full ekran olarak göster
SDL_WINDOW_FULLSCREEN_DESKTOP				/// Full ekran normal oyun ekraranı olarak göster
SDL_WINDOW_OPENGL							/// Pencere içeriğini OpenGL olarak kullan
SDL_WINDOW_VULKAN							/// Pencere içeriğini Vulkan olarak kullan
SDL_WINDOW_METAL							/// Pencere içeriğini Metal olarak kullan
SDL_WINDOW_HIDDEN							/// Percere gösterme
SDL_WINDOW_BORDERLESS						/// Pecerenin kenarlarını gizle
SDL_WINDOW_RESIZABLE						/// Pecereyi yeniden boyutlandır
SDL_WINDOW_MINIMIZED						/// Penceryi minimize olarak göster
SDL_WINDOW_MAXIMIZED						/// Penceryi maximize olarak göster
SDL_WINDOW_INPUT_GRABBED					/// Pencere giriş odağını yakaladı
SDL_WINDOW_ALLOW_HIGHDPI					/// Pencere, yüksek DPI modunda oluşturulmalıdır.
SDL_WINDOW_SHOWN							/// Pencereyi Göster

/***************** Method Tanımları *****************/
SDL_CreateWindow(const char* title, int x, int y, int w, int h, Uint32 flags): SDL_Window*		/// Belirtilen konum, boyutlar ve bayraklarla bir pencere oluşturun. title --> UTF-8 kodlamasında pencerenin başlığını adlandırın, X Y --> pencerenin konumu, SDL_WINDOWPOS_CENTERED veya SDL_WINDOWPOS_UNDEFINED, W, H --> pencerenin genişliği ve Yüksekliği
SDL_DestroyWindow(SDL_Window* window): void														/// Bir pencereyi yok et. 
SDL_GetWindowSurface(SDL_Window* window): SDL_Surface*											/// Pencereyle ilişkili SDL yüzeyini alır. Pecere yeniden boyutlandırılırsa bu işlevi yeniden çağırmamız gerekir.
SDL_UpdateWindowSurface(SDL_Window* window): int												/// Bu, yüzeydeki herhangi bir değişikliği ekrana yansıtmak için kullandığınız işlevdir. Başarı durumunda 0 döner.




