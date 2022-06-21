#include <stdio.h>

int main(int argc, char** argv)
{
	FILE* fptr;
	
	fptr = _fsopen("01.txt", "w", 0x10);
	if(fptr != NULL)
	{
		fputs("Meleğim", fptr);
	}
	_fcloseall();

	return 0;
}
// https://docs.microsoft.com/tr-tr/cpp/c-runtime-library/reference/fsopen-wfsopen?view=msvc-170
/// share.h file içerisinde tanımlıdırlar.
/// _SH_COMPAT 0x00 -- 16 bit uygulamalar için Uyumluluk modunu ayarlar.
/// _SH_DENYRW 0x10 -- Dosyaya okuma ve yazma erişimini geri yazar.
/// _SH_DENYWR 0x20 -- Dosyaya yazma erişimini geriler.
/// _SH_DENYRD 0x30 -- Dosyaya okuma erişimini geriler.
/// _SH_DENYNO 0x40 -- Okuma ve yazma erişimine izin sağlar.
/// _SH_SECURE 0x80 -- 