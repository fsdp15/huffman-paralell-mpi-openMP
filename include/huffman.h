#ifndef HUFFMAN_H
#define HUFFMAN_H

#define TAM_ASCII 128
#define CHUNKSIZE 100
#define NUMTHREADS 2

#if SIZE_MAX == UCHAR_MAX
   #define my_MPI_SIZE_T MPI_UNSIGNED_CHAR
#elif SIZE_MAX == USHRT_MAX
   #define my_MPI_SIZE_T MPI_UNSIGNED_SHORT
#elif SIZE_MAX == UINT_MAX
   #define my_MPI_SIZE_T MPI_UNSIGNED
#elif SIZE_MAX == ULONG_MAX
   #define my_MPI_SIZE_T MPI_UNSIGNED_LONG
#elif SIZE_MAX == ULLONG_MAX
   #define my_MPI_SIZE_T MPI_UNSIGNED_LONG_LONG
#endif

typedef struct node {
    int ocorrencias;
    char letra;
    struct node *esquerda, *direita;
} node_t, *node_p;

typedef struct file {
    char *source;
    int ocorrencias[TAM_ASCII];
    size_t bufsize;
} file_t, *file_p;

#endif