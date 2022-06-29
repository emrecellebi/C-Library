#include <stdio.h>
#include <direct.h>

int main(int argc, char** argv)
{
	_diskfree_t df;
	
	unsigned x = _getdiskfree(5, &df);
	
	printf("Total Clusters: %u\n", df.total_clusters);
	printf("Avail Clusters: %u\n", df.avail_clusters);
	printf("Sector Per Clusters: %u\n", df.sectors_per_cluster);
	printf("Byte Per Sector: %u\n", df.bytes_per_sector);
	printf("Success: %u", x);
	
	return 0;
}

/** Clusters **/
// total_clusters --> Diskteki hem kullanılan hem de kullanılabilen toplam küme sayısı.
// avail_clusters --> Diskteki kullanılmayan kümelerin sayısı.
// sectors_per_cluster --> Her kümedeki sektör sayısı.
// bytes_per_sector --> Her sektörün bayt cinsinden boyutu.