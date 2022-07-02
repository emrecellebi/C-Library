/***************** sdl_events.h *****************/

/***************** Method Tanımları *****************/
/**
	Şu anda bekleyen etkinlikler için havuz.
	"Event" null değilse, bir sonraki olay kuyruktan kaldırılır ve "event" ile işaret edilen SDL_EVENT yapısında saklanır. İade edilen 1, hemen SDL olay yapısında depolanan bu olayı ifade eder - takip edilecek bir olay değil.
	"Event" NULL ise, sırada bir olay varsa 1 döndürür, ancak sıradan kaldırmazsa.
	Bu işlev dolaylı olarak sdl_pumpevents () çağırabileceğinden, bu işlevi yalnızca video modunu ayarlayan iş parçacığında çağırabilirsiniz.
	SDL_PollEvent (), ana döngüden yapılabileceği ve yayınlanmasını beklerken ana döngüyü askıya almadığı için sistem olaylarını almanın tercih edilen yoludur.
	Ortak uygulama, olay kuyruğunu her kare, genellikle oyunun durumunu güncellemeden önce ilk adımı tam olarak işlemektir:
	
	\param event 	--> Sıradan bir sonraki olayla doldurulacak SDL_EVENT yapısı veya null
	\returns 		--> 1 Bekleyen bir olay varsa veya mevcut değilse 0.
**/
SDL_PollEvent(SDL_Event* event): int