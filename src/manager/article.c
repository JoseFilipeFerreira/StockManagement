#include "article.h"
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>

double getArticlePrice(int id) {
    Artigo a;
    int artigos = open("artigos", O_RDONLY);
    struct stat b;
    fstat(artigos, &b);
    if(SPOT(id) >= b.st_size || id < 0) return -1;
    pread(artigos, &a, sizeof(Artigo), SPOT(id));
    close(artigos);
    return a.price;
}
