
#include <algorithm>
#include <cassert>
#include <cstdint>


struct Parameters
{	
	int32_t varDataSize;
	int32_t* pVarData;
};	


int main()
{
	Parameters paramsA;
	paramsA.varDataSize = 10;
	paramsA.pVarData = new int[10];
	std::fill(paramsA.pVarData, paramsA.pVarData + 10, 1988);
	
	auto paramsB = paramsA;
	assert(std::all_of(paramsB.pVarData, paramsB.pVarData + 10, 
										 [](int y){ return y == 1988; }));
  
	return 0;
}
