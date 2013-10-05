#include <stdlib.h>
#include <cangjie.h>

extern "C" __declspec(dllexport) int export_func1(int arg1, int arg2)
{
	Cangjie *cj = NULL;
    int ret = cangjie_new(&cj, CANGJIE_VERSION_3, (CangjieFilter)(CANGJIE_FILTER_BIG5 | CANGJIE_FILTER_HKSCS));
	return 0;
}