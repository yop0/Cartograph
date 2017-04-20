//
// Created by yop on 30/03/17.
//

#ifndef EMBEDDED_UTILS_H
#define EMBEDDED_UTILS_H

#include <iostream>
// [TODO] Check that
/*#define assert(exp) if(!exp) {\
                           std::cout << "[EE] Error in file " << __FILE__ << " line " << __LINE__ << " : assertion failed !";\
                         abort(-1);}\
*/

#ifdef DEBUG
#define PrintDbg(text) std::cout<< "[Dbg] In file " << __FILE__ << " line " << __LINE__  << " : " << text << std::endl;
#else
#define PrintDbg(text)
#endif

#endif //EMBEDDED_UTILS_