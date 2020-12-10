#ifndef EXCEPTION_OBJECTCAN_NOT_CREATED_H_ 
#define EXCEPTION_OBJECTCAN_NOT_CREATED_H_

#include "common_include.h"


class ObjectIsCanNotCreated: public std::exception
{
 
public:


	const char* what() const noexcept ;
};


#endif  // EXCEPTION_OBJECTCAN_NOT_CREATED_H_ 