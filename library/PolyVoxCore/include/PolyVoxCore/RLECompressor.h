#ifndef __PolyVox_RLECompressor_H__
#define __PolyVox_RLECompressor_H__

#include "PolyVoxCore/Compressor.h"

namespace PolyVox
{
	template<typename ValueType, typename LengthType>
	class RLECompressor : public Compressor
	{
		struct Run
		{
			ValueType value;
			LengthType length;
		};
	public:
		RLECompressor();
		~RLECompressor();

		uint32_t getMaxCompressedSize(uint32_t uUncompressedInputSize);
		uint32_t compress(void* pSrcData, uint32_t uSrcLength, void* pDstData, uint32_t uDstLength);
		uint32_t decompress(void* pSrcData, uint32_t uSrcLength, void* pDstData, uint32_t uDstLength);
	};
}

#include "RLECompressor.inl"

#endif //__PolyVox_RLECompressor_H__