#ifndef PORT_CONFIG_H
#define PORT_CONFIG_H

#ifdef _WIN32
#undef HAVE_UNISTD_H
#endif

// Define to 1 if you have a definition for fdatasync() in <unistd.h>.
//#define HAVE_FUNC_FDATASYNC 1

// Define to 1 if you have Google CRC32C.
//#define HAVE_CRC32C 1

// Define to 1 if you have Google Snappy.
#define HAVE_SNAPPY 1

// Define to 1 if you have Google Zopfli.
//#define HAVE_ZOPFLI 1

// Define to 1 if you have zlib.
//#define HAVE_ZLIB 1

// Define to 1 if you have Facebook Zstd.
//#define HAVE_ZSTD 1

// Define to 1 if your processor stores words with the most significant byte
// first (like Motorola and SPARC, unlike Intel and VAX).
//#define LEVELDB_IS_BIG_ENDIAN 1

#endif  // PORT_CONFIG_H
