#ifndef SNAPPY_COMPRESSOR_H
#define SNAPPY_COMPRESSOR_H

#include "leveldb/compressor.h"

#ifdef HAVE_SNAPPY

namespace leveldb {
	class LEVELDB_EXPORT SnappyCompressor : public Compressor
	{
	public:

		static const char SERIALIZE_ID = 1;
        
        virtual ~SnappyCompressor() {}

		SnappyCompressor() :
			Compressor(SERIALIZE_ID) {

		}

		virtual void compressImpl(const char* input, size_t length, ::std::string& output) const override;

		virtual bool decompress(const char* input, size_t length, ::std::string& output) const override;
	};
}

#endif
#endif
