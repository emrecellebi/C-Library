/***************** sdl_video.h *****************/

/***************** Method Tanımları *****************/
/**
	Belirtilen konum, boyutlar ve flag ile bir pencere oluşturun.
	
	"flags" aşağıdakilerden herhangi biri olabilir VEYA birlikte:
	- "SDL_WINDOW_FULLSCREEN": tam ekran penceresi
	- "SDL_WINDOW_FULLSCREEN_DESKTOP": masaüstü çözünürlüğünde tam ekran penceresi
	- "SDL_WINDOW_OPENGL": OpenGL bağlamıyla kullanılabilen pencere
	- "SDL_WINDOW_VULKAN": Vulkan örneğiyle kullanılabilen pencere
	- "SDL_WINDOW_METAL": Metal örneğiyle kullanılabilen pencere
	- "SDL_WINDOW_HIDDEN": gizli pencere
	- "SDL_WINDOW_BORDERLESS": pencere çerçevesi yok
	- "SDL_WINDOW_RESIZABLE": pencere yeniden boyutlandırılabilir
	- "SDL_WINDOW_MINIMIZED": pencere simge durumuna küçültüldü
	- "SDL_WINDOW_MAXIMIZED": pencere büyütüldü
	- "SDL_WINDOW_INPUT_GRABBED": pencere giriş odağını yakaladı
	- "SDL_WINDOW_ALLOW_HIGHDPI": destekleniyorsa yüksek DPI modunda pencere oluşturulmalıdır (>= SDL 2.0.1)
	
	"SDL_WINDOW_SHOWN", SDL_CreateWindow() tarafından yok sayılır. SDL_Window, SDL_WINDOW_HIDDEN ayarlanmamışsa örtük olarak gösterilir. "SDL_WINDOW_SHOWN" daha sonra SDL_GetWindowFlags() kullanılarak sorgulanabilir.
	Apple'ın macOS'unda, NSHighResolutionCapable Bilgisini **must** ayarlamanız gerekir. Plist özelliği YES, aksi takdirde Yüksek DPI OpenGL tuvali almazsınız.
	Pencere "SDL_WINDOW_ALLOW_HIGHDPI" bayrağı ile oluşturulmuşsa, piksel cinsinden boyutu, yüksek DPI desteği olan platformlarda (ör. iOS ve macOS) ekran koordinatlarındaki boyutundan farklı olabilir. İstemci alanının boyutunu ekran koordinatlarında sorgulamak için SDL_GetWindowSize() öğesini ve çizilebilir boyutu piksel cinsinden sorgulamak için SDL_GL_GetDrawableSize() veya SDL_GetRendererOutputSize() öğesini kullanın.
	Pencere tam ekran olarak ayarlanmışsa, genişlik ve yükseklik parametreleri "w" ve "h" kullanılmayacaktır. Ancak, geçersiz boyut parametreleri (ör. çok büyük) yine de başarısız olabilir. Pencere boyutu aslında pencere oluşturma sırasında tüm platformlar için 16384 x 16384 ile sınırlıdır.
	Pencere, SDL_WINDOW_OPENGL veya SDL_WINDOW_VULKAN bayraklarından herhangi biriyle oluşturulursa, ilgili LoadLibrary işlevi (SDL_GL_LoadLibrary veya SDL_Vulkan_LoadLibrary) çağrılır ve karşılık gelen UnloadLibrary işlevi SDL_DestroyWindow() tarafından çağrılır.
	SDL_WINDOW_VULKAN belirtilirse ve çalışan bir Vulkan sürücüsü yoksa, SDL_Vulkan_LoadLibrary() başarısız olacağından SDL_CreateWindow() başarısız olur.
	Metal'i desteklemeyen bir işletim sisteminde SDL_WINDOW_METAL belirtilirse, SDL_CreateWindow() başarısız olur.
	Apple olmayan cihazlarda SDL, Vulkan yükleyiciye bağlanmamanızı veya dinamik bir kitaplık sürümüne bağlanmanızı gerektirir. Bu sınırlama, SDL'nin gelecekteki bir sürümünde kaldırılabilir.
	
	\param title 	--> UTF-8 kodlamasında pencerenin başlığı
	\param x 		--> pencerenin x konumu, "SDL_WINDOWPOS_CENTERED" veya "SDL_WINDOWPOS_UNDEFINED"
	\param y 		--> pencerenin y konumu, "SDL_WINDOWPOS_CENTERED" veya "SDL_WINDOWPOS_UNDEFINED"
	\param w 		--> pencerenin genişliği, ekran koordinatlarında
	\param h 		--> pencerenin yüksekliği, ekran koordinatlarında
	\param flags 	--> 0 veya 1 veya daha fazla SDL_WindowFlags VEYA birlikte
	\returns 		--> oluşturulan pencere veya başarısızlık durumunda NULL
	
**/
SDL_CreateWindow(const char* title, int x, int y, int w, int h, Uint32 flags): SDL_Window*




